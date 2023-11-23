const IDENTIFIER_CHARS = /[^\x00-\x1F\s:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]*/;
const LOWER_ALPHA_CHAR = /[^\x00-\x1F\sA-Z0-9:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]/;


module.exports = grammar({
  name: 'rbs',

  extras: $ => [
    $.comment,
    /\s/,
    /\\\r?\n/
  ],

  conflicts: $ => [
    [$.alias_name, $.var_name],
    [$.required_positionals],
    [$.optional_positionals],
    [$.trailing_positionals],
  ], 

  word: $ => $.identifier,

  rules: {
    program: $ => seq(repeat($.use_directive), repeat($._decl)),

    constant: $ => /[A-Z]\w*/,
    interface: $ => /_[A-Z]\w*/,

    self: $ => "self",

    type: $ => choice(
      $.class_type,
      $.interface_type,
      $.alias_type,
      $.singleton_type,
      $._literal,
      $.union_type,
      $.intersection_type,
      $.optional_type,
      $.record_type,
      $.tuple_type,
      $.builtin_type,
      $.proc,
    ),

    builtin_type: $ => choice(
      $.self,
      "instance",
      "class",
      "bool",
      "class",
      "untyped",
      "nil",
      "top",
      "bot",
      "void",
    ),

    comment: $ => token(prec(-2, 
      seq('#', /.*/),
    )),

    class_type: $ => prec.right(seq($.class_name, optional($.type_arguments))),

    interface_type: $ => prec.right(seq($.interface_name, optional($.type_arguments))),

    alias_type: $ => prec.right(seq($.alias_name, optional($.type_arguments))),

    singleton_type: $ => seq("singleton", "(", $.class_name, ")"),

    union_type: $ => prec.left(1, seq(field("left", $.type), "|", field("right", $.type))),

    intersection_type: $ => prec.left(2, seq(field("left", $.type), "&", field("right", $.type))),

    optional_type: $ => prec(3, seq($.type, token.immediate("?"))),

    tuple_type: $ => seq("[", optional(seq(commaSep1($.type), optional(","))), "]"),

    _record_type_single: $ => seq(field("key", alias($.identifier, $.record_key)), ":", field("value", $.type)),
    record_type: $ => seq("{", optional(seq(commaSep1($._record_type_single), optional(","))), "}"),

    class_name: $ => seq(optional($.namespace), $.constant),
    interface_name: $ => seq(optional($.namespace), $.interface),
    alias_name: $ => seq(optional($.namespace), $.identifier),

    type_variable: $ => $.constant,

    _scope: $ => token("::"),
    namespace: $ => prec.right(2, choice(
      $._scope,
      seq(optional($.namespace), $.constant, $._scope),
    )),

    type_arguments: $ => seq("[", commaSep1($.type), "]"),

    _literal: $ => choice(
      $.string_literal,
      $.symbol_literal,
      $.integer_literal,
      "true",
      "false"
    ),

    string_literal: $ => choice(
      seq('"', repeat(choice($.double_quote_string_body, $.escape_sequence)), '"'),
      seq('\'', repeat(choice($.single_quote_string_body, $.escape_sequence)), '\''),
    ),

    double_quote_string_body: $ => token(/[^"\\]+/),
    single_quote_string_body: $ => token(/[^'\\]+/),

    symbol_literal: $ => prec.right(choice(
      seq(":\"", repeat(choice($.double_quote_string_body, $.escape_sequence)), "\""),
      seq(":'", repeat(choice($.single_quote_string_body, $.escape_sequence)), "'"),
      seq(/:[a-zA-Z]\w*/),
      seq(/:[a-zA-Z]\w*/, token.immediate("?")),
      seq(/:[a-zA-Z]\w*/, token.immediate("=")),
      seq(/:((\.\.)|(\|)|(\^)|(&)|(<=>)|(==)|(===)|(=~)|(>)|(>=)|(<)|(<=)|(\+)|(-)|(\*)|(\/)|(%)|(!)|(!~)|(\*\*)|(<<)|(>>)|(~)|(\+@)|(-@)|(~@)|(\[\])|(\[\]=)|(`))/),
    )),

    integer_literal: $ => /\d(_?\d)*/,

    // https://ruby-doc.org/core-2.5.0/doc/syntax/literals_rdoc.html#label-Strings
    escape_sequence: $ => token(seq(
      '\\',
      choice(
        /[^ux0-7]/,          // single character
        /x[0-9a-fA-F]{1,2}/, // hex code
        /[0-7]{1,3}/,        // octal
        /u[0-9a-fA-F]{4}/,   // single unicode
        /u{[0-9a-fA-F ]+}/,  // multiple unicode
      )
    )),

    proc: $ => seq("^", optional($.parameters), optional($.self_type_binding), optional($.block), "->", $.type),

    use_directive: $ => seq("use", commaSep1($.use_clause)),

    use_clause: $ => choice(
      seq(alias($.class_name, $.type_name)),
      seq(alias($.class_name, $.type_name), "as", alias($.constant, $.simple_type_name)),
      seq($.namespace, "*"),
    ),

    _decl: $ => choice(
      $.class_decl,
      $.module_decl,
      $.class_alias_decl,
      $.module_alias_decl,
      $.interface_decl,
      $.type_alias_decl,
      $.const_decl,
      $.global_decl,
    ),

    _nestable_decls: $ => choice(
      $.class_decl,
      $.module_decl,
      $.class_alias_decl,
      $.module_alias_decl,
      $.interface_decl,
      $.type_alias_decl,
      $.const_decl,
    ),

    class_decl: $ => choice(
      seq(
        "class",
        $.class_name,
        optional($.module_type_parameters),
        optional($.superclass),
        alias(repeat(choice($._member, $._nestable_decls)), $.members),
        "end"
      )
    ),

    superclass: $ => seq("<", $.class_name, optional($.type_arguments)),

    module_decl: $ => choice(
      seq(
        "module",
        alias($.class_name, $.module_name),
        optional($.module_type_parameters),
        optional($.module_self_type_binds),
        alias(repeat(choice($._member, $._nestable_decls)), $.members),
        "end"
      )
    ),

    module_self_type_binds: $ => seq(":", $.module_self_types),

    class_alias_decl: $ => seq("class", field("new_name", $.class_name), "=", field("origin_name", $.class_name)),
    module_alias_decl: $ => seq("module", field("new_name", alias($.class_name, $.module_name)), "=", field("origin_name", alias($.class_name, $.module_name))),

    module_self_types: $ => choice(
      seq($.class_name, optional($.type_arguments), optional(seq(",", $.module_self_types))),
      seq($.interface_name, optional($.type_arguments), optional(seq(",", $.module_self_types))),
    ),

    interface_decl: $ => seq("interface", $.interface_name, optional($.module_type_parameters), alias(repeat($.interface_member), $.interface_members), "end"),

    interface_member: $ => choice(
      $.method_member,
      $.include_member,
      $.alias_member,
    ),

    type_alias_decl: $ => seq("type", $.alias_name, optional($.module_type_parameters), "=", $.type),

    const_decl: $ => seq($.const_name, ":", $.type),

    const_name: $ => seq(optional($.namespace), $.constant),

    global_decl: $ => seq($.global_name, ":", $.type),

    global_name: $ => /\$[a-zA-Z]\w+/,

    module_type_parameters: $ => seq(
      "[",
        commaSep1($.module_type_parameter),
      "]"
    ),

    module_type_parameter: $ => seq(
      optional($.generics_unchecked),
      optional($.generics_variance),
      $.type_variable,
      optional($.generics_bound),
    ),

    generics_bound: $ => seq("<", $.bound_type),

    bound_type: $ => choice(
      $.class_type,
      $.interface_type,
      $.singleton_type,
    ),

    generics_unchecked: $ => "unchecked",

    generics_variance: $ => choice("out", "in"),

    method_type: $ => seq(optional($.parameters), optional($.block), "->", $.type),

    proc: $ => seq("^", optional($.parameters), optional($.self_type_binding), optional($.block), "->", $.type),

    parameters: $ => seq(
      "(",
      optional(choice(
        seq($.required_positionals),
        seq($.required_positionals, ",", choice($.optional_positionals, $.rest_positional, $.keywords)),
        seq($.required_positionals, ",", $.optional_positionals, ",", choice($.rest_positional, $.trailing_positionals, $.keywords)),
        seq($.required_positionals, ",", $.optional_positionals, ",", $.rest_positional, ",", choice($.trailing_positionals, $.keywords)),
        seq($.required_positionals, ",", $.optional_positionals, ",", $.rest_positional, ",", $.trailing_positionals, ",", $.keywords),
        seq($.required_positionals, ",", $.optional_positionals, ",", $.trailing_positionals, ",", optional($.keywords)),
        seq($.required_positionals, ",", $.rest_positional, ",", choice($.trailing_positionals, $.keywords)),
        seq($.required_positionals, ",", $.rest_positional, ",", $.trailing_positionals, ",", $.keywords),
        seq($.optional_positionals),
        seq($.optional_positionals, ",", choice($.rest_positional, $.trailing_positionals, $.keywords)),
        seq($.optional_positionals, ",", $.rest_positional, ",", choice($.trailing_positionals, $.keywords)),
        seq($.optional_positionals, ",", $.rest_positional, ",", $.trailing_positionals, ",", $.keywords),
        seq($.optional_positionals, ",", $.trailing_positionals, ",", $.keywords),
        seq($.rest_positional),
        seq($.rest_positional, ",", choice($.trailing_positionals, $.keywords)),
        seq($.rest_positional, ",", $.trailing_positionals, ",", $.keywords),
        seq($.keywords),
      )),
      ")"
    ),

    parameter: $ => prec.right(seq($.type, optional($.var_name))),

    required_positionals: $ => seq(commaSep1($.parameter)),

    optional_positionals: $ => seq(commaSep1(seq("?", $.parameter))),

    rest_positional: $ => seq("*", $.parameter),

    trailing_positionals: $ => seq(commaSep1($.parameter)),

    keywords: $ => choice(
      $.splat_keyword,
      prec.right($.required_keywords),
      prec.right($.optional_keywords),
    ),

    splat_keyword: $ => seq("**", $.parameter),
    required_keywords: $ => seq(prec.right(1, seq(alias($.var_name, $.keyword), ":")), $.type, optional(seq(",", $.keywords))),
    optional_keywords: $ => seq(prec.right(1, seq("?", alias($.var_name, $.keyword), ":")), $.type, optional(seq(",", $.keywords))),

    var_name: $ => $.identifier,

    self_type_binding: $ => seq("[", $.self, ":", $.type, "]"),

    block: $ => choice(
      seq("{", $.parameters, optional($.self_type_binding), "->", $.type, "}"),
      seq("?", "{", $.parameters, optional($.self_type_binding), "->", $.type, "}"),
    ),

    _member: $ => choice(
      $.ivar_member,
      $.method_member,
      prec.right($.attribute_member),
      $.include_member,
      $.extend_member,
      $.prepend_member,
      $.alias_member,
      prec.left($.visibility_member),
    ),

    ivar_member: $ => choice(
      seq($.ivar_name, ":", $.type),
      seq($.self, ".", $.ivar_name, ":", $.type),
      seq($.cvar_name, ":", $.type),
    ),

    method_member: $ => choice(
      seq(optional($.visibility), "def", $.method_name, ":", $.method_types),
      seq(optional($.visibility), "def", $.self, ".", $.method_name, ":", $.method_types),
      seq("def", $.self, "?.", $.method_name, ":", $.method_types),
    ),

    method_types: $ => choice(
      seq(optional($.method_type_parameters), $.method_type),
      seq(optional($.method_type_parameters), $.method_type, "|", $.method_types),
      "..."
    ),

    method_type_parameters: $ => seq("[", commaSep1($.type_variable), "]"),

    attribute_member: $ => choice(
      seq(optional($.visibility), $.attribyte_type, optional(seq($.self, ".")), $.method_name, ":", $.type),
      seq(optional($.visibility), $.attribyte_type, optional(seq($.self, ".")), $.method_name, "(", $.ivar_name, ")", ":", $.type),
      seq(optional($.visibility), $.attribyte_type, optional(seq($.self, ".")), $.method_name, "()", ":", $.type),
    ),

    visibility_member : $ => seq($.visibility, token.immediate(/\n/)),
    visibility: $ => choice("public", "private"),

    attribyte_type: $ => choice("attr_reader", "attr_writer", "attr_accessor"),

    include_member: $ => choice(
      seq("include", $.class_name, optional($.type_arguments)),
      seq("include", $.interface_name, optional($.type_arguments)),
    ),

    extend_member: $ => choice(
      seq("extend", $.class_name, optional($.type_arguments)),
      seq("extend", $.interface_name, optional($.type_arguments)),
    ),

    prepend_member: $ => choice(
      seq("prepend", $.class_name, optional($.type_arguments)),
      seq("prepend", $.interface_name, optional($.type_arguments)),
    ),

    singleton_method_name: $ => seq($.self, ".", $.method_name),

    alias_member: $ => choice(
      seq("alias", field("new_name", $.method_name), field("origin_name", $.method_name)),
      seq("alias", field("new_name", $.singleton_method_name), field("origin_name", $.singleton_method_name)),
    ),

    ivar_name: $ => /@[a-zA-Z]\w*/,
    cvar_name: $ => /@@[a-zA-Z]\w+/,

    operator: $ => choice(
      '..', '|', '^', '&', '<=>', '==', '===', '=~', '>', '>=', '<', '<=', '+',
      '-', '*', '/', '%', '!', '!~', '**', '<<', '>>', '~', '+@', '-@', '~@', '[]', '[]=', '`'
    ),

    setter: $ => seq($.identifier, token.immediate('=')),
    constant_setter: $ => seq($.constant, token.immediate('=')),
    identifier_suffix: $ => seq($.identifier, token.immediate('?')),
    constant_suffix: $ => seq($.constant, token.immediate('?')),

    method_name: $ => choice(
      $.identifier,
      $.identifier_suffix,
      $.constant,
      $.constant_suffix,
      $.setter,
      $.constant_setter,
      $.operator,
      /`[^`]+`/,
    ), 

    identifier: $ => token(seq(LOWER_ALPHA_CHAR, IDENTIFIER_CHARS)),
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ',');
}
