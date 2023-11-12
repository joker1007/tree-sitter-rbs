const IDENTIFIER_CHARS = /[^\x00-\x1F\s:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]*/;
const LOWER_ALPHA_CHAR = /[^\x00-\x1F\sA-Z0-9:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]/;
const ALPHA_CHAR = /[^\x00-\x1F\s0-9:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]/;


module.exports = grammar({
  name: 'rbs',

  extras: $ => [
    // $.comment,
    /\s/,
    /\\\r?\n/
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => $.decl,

    _constant: $ => /[A-Z]\w*/,
    _interface: $ => /_[A-Z]\w*/,
    _variable: $ => /[a-z]\w*/,

    type: $ => choice(
      $.class_type,
      $.interface_type,
      $.alias_type,
      $.singleton_type,
      $.literal,
      $.union_type,
      $.intersection_type,
      $.optional_type,
      $.record_type,
      $.tuple_type,
      "self",
      "instance",
      "class",
      "bool",
      "untyped",
      "nil",
      "top",
      "bot",
      "void",
      // $._proc_,
    ),

    class_type: $ => seq($.class_name, optional($.type_arguments)),

    interface_type: $ => seq($.interface_name, optional($.type_arguments)),

    alias_type: $ => seq($.alias_name, optional($.type_arguments)),

    singleton_type: $ => seq("singleton(", $.class_name, ")"),

    union_type: $ => prec.right(1, seq($.type, "|", $.type)),

    intersection_type: $ => prec.right(2, seq($.type, "&", $.type)),

    optional_type: $ => prec.right(seq($.type, "?")),

    tuple_type: $ => seq("[", optional(seq(commaSep1($.type), optional(","))), "]"),

    _record_type_single: $ => seq(field("key", alias($.identifier, $.record_key)), ":", field("value", $.type)),
    record_type: $ => seq("{", optional(seq(commaSep1($._record_type_single), optional(","))), "}"),

    class_name: $ => seq(optional($.namespace), $._constant),
    interface_name: $ => seq(optional($.namespace), $._interface),
    alias_name: $ => seq(optional($.namespace), $._variable),

    type_variable: $ => $._constant,

    namespace: $ => prec.right(choice(
      "::",
      seq(optional($.namespace), $._constant, "::")
    )),

    type_arguments: $ => seq("[", commaSep1($.type), "]"),

    literal: $ => choice(
      $.string_literal,
      $.symbol_literal,
      $.integer_literal,
      "true",
      "false"
    ),

    string_literal: $ => choice(
      /".*"/,
      /'.*'/,
    ),

    symbol_literal: $ => seq(":", $.identifier),

    integer_literal: $ => /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,

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

    decl: $ => choice(
      $.class_decl,
    ),

    class_decl: $ => choice(
      seq(
        "class",
        $.class_name,
        optional($.module_type_parameters),
        alias(repeat($.member), $.members),
        "end"
      ),
      seq(
        "class",
        $.class_name,
        optional($.module_type_parameters),
        "<",
        $.class_name,
        $.type_arguments,
        alias(repeat($.member), $.members),
        "end"
      ),
    ),

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

    member: $ => choice(
      $.ivar_member,
      // $.method_member,
      // $.attribute_member,
      // $.include_member,
      // $.extend_member,
      // $.prepend_member,
      // $.alias_member,
      // $.visibility_member,
    ),

    ivar_member: $ => choice(
      seq($.ivar_name, ":", $.type),
      seq("self", ".", $.ivar_name, ":", $.type),
      seq($.cvar_name, ":", $.type),
    ),

    ivar_name: $ => seq("@", /\w+/),
    cvar_name: $ => seq("@@", /\w+/),

    // method_member: $ => choice(
    //   seq($.visibility, "def", $.method_name, ":", $.method_types),
    //   seq($.visibility, "def", "self", ".", $.method_name, ":", $.method_types),
    //   seq("def", "self", "?.", $.method_name, ":", $.method_types),
    // ),

    // method_types: $ => choice(
    //   seq(optional($.method_type_parameters), $.method_type),
    //   seq(optional($.method_type_parameters), $.method_type, "|", $.method_types),
    //   "..."
    // ),

    // method_type_parameters: $ => seq("[", commaSep1($.type_variable), "]"),

    identifier: $ => token(seq(LOWER_ALPHA_CHAR, IDENTIFIER_CHARS)),
  }
});

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ',');
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
