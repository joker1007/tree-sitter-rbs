#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 2
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  sym__constant = 2,
  sym__interface = 3,
  sym__variable = 4,
  anon_sym_self = 5,
  anon_sym_instance = 6,
  anon_sym_class = 7,
  anon_sym_bool = 8,
  anon_sym_untyped = 9,
  anon_sym_nil = 10,
  anon_sym_top = 11,
  anon_sym_bot = 12,
  anon_sym_void = 13,
  anon_sym_singleton_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_PIPE = 16,
  anon_sym_AMP = 17,
  anon_sym_QMARK = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  anon_sym_COLON = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  aux_sym_string_literal_token1 = 28,
  aux_sym_string_literal_token2 = 29,
  sym_integer_literal = 30,
  anon_sym_end = 31,
  anon_sym_LT = 32,
  sym_generics_unchecked = 33,
  anon_sym_out = 34,
  anon_sym_in = 35,
  anon_sym_DOT = 36,
  anon_sym_AT = 37,
  aux_sym_ivar_name_token1 = 38,
  anon_sym_AT_AT = 39,
  sym_program = 40,
  sym_type = 41,
  sym_class_type = 42,
  sym_interface_type = 43,
  sym_alias_type = 44,
  sym_singleton_type = 45,
  sym_union_type = 46,
  sym_intersection_type = 47,
  sym_optional_type = 48,
  sym_tuple_type = 49,
  sym__record_type_single = 50,
  sym_record_type = 51,
  sym_class_name = 52,
  sym_interface_name = 53,
  sym_alias_name = 54,
  sym_type_variable = 55,
  sym_namespace = 56,
  sym_type_arguments = 57,
  sym_literal = 58,
  sym_string_literal = 59,
  sym_symbol_literal = 60,
  sym_decl = 61,
  sym_class_decl = 62,
  sym_module_type_parameters = 63,
  sym_module_type_parameter = 64,
  sym_generics_bound = 65,
  sym_bound_type = 66,
  sym_generics_variance = 67,
  sym_member = 68,
  sym_ivar_member = 69,
  sym_ivar_name = 70,
  sym_cvar_name = 71,
  aux_sym_tuple_type_repeat1 = 72,
  aux_sym_record_type_repeat1 = 73,
  aux_sym_class_decl_repeat1 = 74,
  aux_sym_module_type_parameters_repeat1 = 75,
  alias_sym_members = 76,
  alias_sym_record_key = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__constant] = "_constant",
  [sym__interface] = "_interface",
  [sym__variable] = "_variable",
  [anon_sym_self] = "self",
  [anon_sym_instance] = "instance",
  [anon_sym_class] = "class",
  [anon_sym_bool] = "bool",
  [anon_sym_untyped] = "untyped",
  [anon_sym_nil] = "nil",
  [anon_sym_top] = "top",
  [anon_sym_bot] = "bot",
  [anon_sym_void] = "void",
  [anon_sym_singleton_LPAREN] = "singleton(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_end] = "end",
  [anon_sym_LT] = "<",
  [sym_generics_unchecked] = "generics_unchecked",
  [anon_sym_out] = "out",
  [anon_sym_in] = "in",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [aux_sym_ivar_name_token1] = "ivar_name_token1",
  [anon_sym_AT_AT] = "@@",
  [sym_program] = "program",
  [sym_type] = "type",
  [sym_class_type] = "class_type",
  [sym_interface_type] = "interface_type",
  [sym_alias_type] = "alias_type",
  [sym_singleton_type] = "singleton_type",
  [sym_union_type] = "union_type",
  [sym_intersection_type] = "intersection_type",
  [sym_optional_type] = "optional_type",
  [sym_tuple_type] = "tuple_type",
  [sym__record_type_single] = "_record_type_single",
  [sym_record_type] = "record_type",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_alias_name] = "alias_name",
  [sym_type_variable] = "type_variable",
  [sym_namespace] = "namespace",
  [sym_type_arguments] = "type_arguments",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_symbol_literal] = "symbol_literal",
  [sym_decl] = "decl",
  [sym_class_decl] = "class_decl",
  [sym_module_type_parameters] = "module_type_parameters",
  [sym_module_type_parameter] = "module_type_parameter",
  [sym_generics_bound] = "generics_bound",
  [sym_bound_type] = "bound_type",
  [sym_generics_variance] = "generics_variance",
  [sym_member] = "member",
  [sym_ivar_member] = "ivar_member",
  [sym_ivar_name] = "ivar_name",
  [sym_cvar_name] = "cvar_name",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_record_type_repeat1] = "record_type_repeat1",
  [aux_sym_class_decl_repeat1] = "class_decl_repeat1",
  [aux_sym_module_type_parameters_repeat1] = "module_type_parameters_repeat1",
  [alias_sym_members] = "members",
  [alias_sym_record_key] = "record_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__constant] = sym__constant,
  [sym__interface] = sym__interface,
  [sym__variable] = sym__variable,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_untyped] = anon_sym_untyped,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_bot] = anon_sym_bot,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_singleton_LPAREN] = anon_sym_singleton_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [sym_generics_unchecked] = sym_generics_unchecked,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_ivar_name_token1] = aux_sym_ivar_name_token1,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [sym_program] = sym_program,
  [sym_type] = sym_type,
  [sym_class_type] = sym_class_type,
  [sym_interface_type] = sym_interface_type,
  [sym_alias_type] = sym_alias_type,
  [sym_singleton_type] = sym_singleton_type,
  [sym_union_type] = sym_union_type,
  [sym_intersection_type] = sym_intersection_type,
  [sym_optional_type] = sym_optional_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym__record_type_single] = sym__record_type_single,
  [sym_record_type] = sym_record_type,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_alias_name] = sym_alias_name,
  [sym_type_variable] = sym_type_variable,
  [sym_namespace] = sym_namespace,
  [sym_type_arguments] = sym_type_arguments,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_symbol_literal] = sym_symbol_literal,
  [sym_decl] = sym_decl,
  [sym_class_decl] = sym_class_decl,
  [sym_module_type_parameters] = sym_module_type_parameters,
  [sym_module_type_parameter] = sym_module_type_parameter,
  [sym_generics_bound] = sym_generics_bound,
  [sym_bound_type] = sym_bound_type,
  [sym_generics_variance] = sym_generics_variance,
  [sym_member] = sym_member,
  [sym_ivar_member] = sym_ivar_member,
  [sym_ivar_name] = sym_ivar_name,
  [sym_cvar_name] = sym_cvar_name,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_record_type_repeat1] = aux_sym_record_type_repeat1,
  [aux_sym_class_decl_repeat1] = aux_sym_class_decl_repeat1,
  [aux_sym_module_type_parameters_repeat1] = aux_sym_module_type_parameters_repeat1,
  [alias_sym_members] = alias_sym_members,
  [alias_sym_record_key] = alias_sym_record_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__interface] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_untyped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_singleton_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_generics_unchecked] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ivar_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_class_type] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_type] = {
    .visible = true,
    .named = true,
  },
  [sym_singleton_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_intersection_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym__record_type_single] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_name] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_module_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_module_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_generics_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_bound_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generics_variance] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_member] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cvar_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_members] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_record_key] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 4},
  [8] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [8] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_members,
  },
  [2] = {
    [3] = alias_sym_members,
  },
  [3] = {
    [5] = alias_sym_members,
  },
  [5] = {
    [6] = alias_sym_members,
  },
  [6] = {
    [0] = alias_sym_record_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_class_decl_repeat1, 2,
    aux_sym_class_decl_repeat1,
    alias_sym_members,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > '^' &&
          (lookahead < '`' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '^' &&
          (lookahead < '`' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == '(') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'g') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 'o') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__variable);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead > '~') ADVANCE(70);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_singleton_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_ivar_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == '_') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 2:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_generics_unchecked);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__constant] = ACTIONS(1),
    [sym__interface] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_bot] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_singleton_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_generics_unchecked] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(117),
    [sym_decl] = STATE(106),
    [sym_class_decl] = STATE(105),
    [anon_sym_class] = ACTIONS(3),
  },
  [2] = {
    [sym_type] = STATE(63),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [3] = {
    [sym_type] = STATE(63),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [4] = {
    [sym_type] = STATE(58),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [5] = {
    [sym_type] = STATE(60),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [6] = {
    [sym_type] = STATE(63),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [7] = {
    [sym_type] = STATE(34),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [8] = {
    [sym_type] = STATE(35),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [9] = {
    [sym_type] = STATE(55),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [10] = {
    [sym_type] = STATE(57),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
  [11] = {
    [sym_type] = STATE(53),
    [sym_class_type] = STATE(38),
    [sym_interface_type] = STATE(38),
    [sym_alias_type] = STATE(38),
    [sym_singleton_type] = STATE(38),
    [sym_union_type] = STATE(38),
    [sym_intersection_type] = STATE(38),
    [sym_optional_type] = STATE(38),
    [sym_tuple_type] = STATE(38),
    [sym_record_type] = STATE(38),
    [sym_class_name] = STATE(17),
    [sym_interface_name] = STATE(16),
    [sym_alias_name] = STATE(15),
    [sym_namespace] = STATE(83),
    [sym_literal] = STATE(38),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym__constant] = ACTIONS(5),
    [sym__interface] = ACTIONS(7),
    [sym__variable] = ACTIONS(9),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_untyped] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(11),
    [anon_sym_top] = ACTIONS(11),
    [anon_sym_bot] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_singleton_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [aux_sym_string_literal_token2] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(35), 12,
      anon_sym_self,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_LT,
      anon_sym_AT_AT,
  [21] = 3,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(41), 12,
      anon_sym_self,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_LT,
      anon_sym_AT_AT,
  [42] = 11,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_end,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    STATE(40), 1,
      sym_module_type_parameters,
    STATE(50), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [77] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_type_arguments,
    ACTIONS(59), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [98] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_AT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(65), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [119] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_type_arguments,
    ACTIONS(69), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [140] = 2,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(73), 10,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [156] = 9,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(7), 1,
      sym__interface,
    ACTIONS(13), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      sym_interface_name,
    STATE(17), 1,
      sym_class_name,
    STATE(98), 1,
      sym_namespace,
    STATE(100), 1,
      sym_bound_type,
    STATE(96), 3,
      sym_class_type,
      sym_interface_type,
      sym_singleton_type,
  [186] = 2,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(77), 10,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [202] = 2,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(81), 10,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [218] = 2,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(85), 10,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [234] = 2,
    ACTIONS(91), 1,
      anon_sym_AT,
    ACTIONS(89), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [249] = 2,
    ACTIONS(95), 1,
      anon_sym_AT,
    ACTIONS(93), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [264] = 2,
    ACTIONS(99), 1,
      anon_sym_AT,
    ACTIONS(97), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [279] = 2,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(101), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [294] = 2,
    ACTIONS(107), 1,
      anon_sym_AT,
    ACTIONS(105), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [309] = 2,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(109), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [324] = 2,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(113), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [339] = 2,
    ACTIONS(119), 1,
      anon_sym_AT,
    ACTIONS(117), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [354] = 2,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(121), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [369] = 2,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(125), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [384] = 2,
    ACTIONS(131), 1,
      anon_sym_AT,
    ACTIONS(129), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [399] = 3,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(133), 8,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [416] = 4,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_AT,
    ACTIONS(139), 7,
      anon_sym_self,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [435] = 2,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(145), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [450] = 2,
    ACTIONS(151), 1,
      anon_sym_AT,
    ACTIONS(149), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [465] = 2,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(153), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [480] = 2,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(157), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [495] = 9,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(161), 1,
      anon_sym_end,
    ACTIONS(163), 1,
      anon_sym_LT,
    STATE(52), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [524] = 2,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(165), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [539] = 2,
    ACTIONS(171), 1,
      anon_sym_AT,
    ACTIONS(169), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [554] = 2,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(173), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [569] = 2,
    ACTIONS(179), 1,
      anon_sym_AT,
    ACTIONS(177), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [584] = 2,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(181), 9,
      anon_sym_self,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_end,
      anon_sym_AT_AT,
  [599] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(51), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [625] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(46), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [651] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(49), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [677] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(51), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [703] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(51), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [729] = 8,
    ACTIONS(195), 1,
      anon_sym_self,
    ACTIONS(198), 1,
      anon_sym_end,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_AT_AT,
    STATE(51), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [755] = 8,
    ACTIONS(47), 1,
      anon_sym_self,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_AT_AT,
    ACTIONS(206), 1,
      anon_sym_end,
    STATE(51), 1,
      aux_sym_class_decl_repeat1,
    STATE(67), 1,
      sym_ivar_member,
    STATE(70), 1,
      sym_member,
    STATE(125), 2,
      sym_ivar_name,
      sym_cvar_name,
  [781] = 5,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(212), 1,
      anon_sym_AT,
    ACTIONS(208), 3,
      anon_sym_self,
      anon_sym_end,
      anon_sym_AT_AT,
  [799] = 6,
    ACTIONS(214), 1,
      sym__constant,
    ACTIONS(216), 1,
      sym_generics_unchecked,
    STATE(72), 1,
      sym_type_variable,
    STATE(91), 1,
      sym_generics_variance,
    STATE(102), 1,
      sym_module_type_parameter,
    ACTIONS(218), 2,
      anon_sym_out,
      anon_sym_in,
  [819] = 5,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(220), 3,
      anon_sym_self,
      anon_sym_end,
      anon_sym_AT_AT,
  [837] = 6,
    ACTIONS(214), 1,
      sym__constant,
    ACTIONS(216), 1,
      sym_generics_unchecked,
    STATE(72), 1,
      sym_type_variable,
    STATE(74), 1,
      sym_module_type_parameter,
    STATE(91), 1,
      sym_generics_variance,
    ACTIONS(218), 2,
      anon_sym_out,
      anon_sym_in,
  [857] = 6,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_tuple_type_repeat1,
  [876] = 6,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_tuple_type_repeat1,
  [895] = 4,
    ACTIONS(214), 1,
      sym__constant,
    STATE(71), 1,
      sym_type_variable,
    STATE(101), 1,
      sym_generics_variance,
    ACTIONS(218), 2,
      anon_sym_out,
      anon_sym_in,
  [909] = 4,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [923] = 2,
    ACTIONS(236), 1,
      anon_sym_AT,
    ACTIONS(234), 4,
      anon_sym_self,
      anon_sym_end,
      anon_sym_LT,
      anon_sym_AT_AT,
  [933] = 2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(238), 4,
      anon_sym_self,
      anon_sym_end,
      anon_sym_LT,
      anon_sym_AT_AT,
  [943] = 4,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_QMARK,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [957] = 4,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      sym_class_name,
    STATE(116), 1,
      sym_namespace,
  [970] = 4,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    STATE(99), 1,
      sym_class_name,
    STATE(116), 1,
      sym_namespace,
  [983] = 4,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    STATE(92), 1,
      sym_class_name,
    STATE(116), 1,
      sym_namespace,
  [996] = 2,
    ACTIONS(246), 1,
      anon_sym_AT,
    ACTIONS(244), 3,
      anon_sym_self,
      anon_sym_end,
      anon_sym_AT_AT,
  [1005] = 3,
    ACTIONS(250), 1,
      anon_sym_LT,
    STATE(95), 1,
      sym_generics_bound,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1016] = 4,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    STATE(116), 1,
      sym_namespace,
    STATE(124), 1,
      sym_class_name,
  [1029] = 2,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(252), 3,
      anon_sym_self,
      anon_sym_end,
      anon_sym_AT_AT,
  [1038] = 3,
    ACTIONS(250), 1,
      anon_sym_LT,
    STATE(94), 1,
      sym_generics_bound,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1049] = 3,
    ACTIONS(250), 1,
      anon_sym_LT,
    STATE(97), 1,
      sym_generics_bound,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1060] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_module_type_parameters_repeat1,
  [1070] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_module_type_parameters_repeat1,
  [1080] = 3,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_tuple_type_repeat1,
  [1090] = 1,
    ACTIONS(271), 3,
      sym__constant,
      sym__interface,
      sym__variable,
  [1096] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_record_type_repeat1,
  [1106] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_tuple_type_repeat1,
  [1116] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_record_type_repeat1,
  [1126] = 1,
    ACTIONS(284), 3,
      sym__constant,
      sym__interface,
      sym__variable,
  [1132] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_module_type_parameters_repeat1,
  [1142] = 3,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_tuple_type_repeat1,
  [1152] = 3,
    ACTIONS(291), 1,
      sym__constant,
    ACTIONS(293), 1,
      sym__interface,
    ACTIONS(295), 1,
      sym__variable,
  [1162] = 1,
    ACTIONS(297), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
  [1168] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_record_type_repeat1,
  [1178] = 3,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__record_type_single,
  [1188] = 1,
    ACTIONS(307), 3,
      sym__constant,
      sym__interface,
      sym__variable,
  [1194] = 3,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__record_type_single,
  [1204] = 3,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym__record_type_single,
  [1214] = 1,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1219] = 2,
    ACTIONS(214), 1,
      sym__constant,
    STATE(71), 1,
      sym_type_variable,
  [1226] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_type_arguments,
  [1233] = 2,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(90), 1,
      sym__record_type_single,
  [1240] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1245] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1250] = 1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1255] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1260] = 2,
    ACTIONS(291), 1,
      sym__constant,
    ACTIONS(293), 1,
      sym__interface,
  [1267] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_type_arguments,
  [1274] = 1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1279] = 2,
    ACTIONS(214), 1,
      sym__constant,
    STATE(68), 1,
      sym_type_variable,
  [1286] = 1,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1291] = 2,
    ACTIONS(321), 1,
      anon_sym_AT,
    STATE(107), 1,
      sym_ivar_name,
  [1298] = 1,
    ACTIONS(323), 1,
      anon_sym_DOT,
  [1302] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [1306] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [1310] = 1,
    ACTIONS(329), 1,
      anon_sym_COLON,
  [1314] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [1318] = 1,
    ACTIONS(333), 1,
      aux_sym_ivar_name_token1,
  [1322] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [1326] = 1,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [1330] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1334] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1338] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1342] = 1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [1346] = 1,
    ACTIONS(291), 1,
      sym__constant,
  [1350] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [1354] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [1358] = 1,
    ACTIONS(351), 1,
      sym__constant,
  [1362] = 1,
    ACTIONS(353), 1,
      sym_identifier,
  [1366] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1370] = 1,
    ACTIONS(357), 1,
      aux_sym_ivar_name_token1,
  [1374] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1378] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [1382] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [1386] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 21,
  [SMALL_STATE(14)] = 42,
  [SMALL_STATE(15)] = 77,
  [SMALL_STATE(16)] = 98,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 140,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 186,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 218,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 279,
  [SMALL_STATE(27)] = 294,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 339,
  [SMALL_STATE(31)] = 354,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 384,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 416,
  [SMALL_STATE(36)] = 435,
  [SMALL_STATE(37)] = 450,
  [SMALL_STATE(38)] = 465,
  [SMALL_STATE(39)] = 480,
  [SMALL_STATE(40)] = 495,
  [SMALL_STATE(41)] = 524,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 554,
  [SMALL_STATE(44)] = 569,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 599,
  [SMALL_STATE(47)] = 625,
  [SMALL_STATE(48)] = 651,
  [SMALL_STATE(49)] = 677,
  [SMALL_STATE(50)] = 703,
  [SMALL_STATE(51)] = 729,
  [SMALL_STATE(52)] = 755,
  [SMALL_STATE(53)] = 781,
  [SMALL_STATE(54)] = 799,
  [SMALL_STATE(55)] = 819,
  [SMALL_STATE(56)] = 837,
  [SMALL_STATE(57)] = 857,
  [SMALL_STATE(58)] = 876,
  [SMALL_STATE(59)] = 895,
  [SMALL_STATE(60)] = 909,
  [SMALL_STATE(61)] = 923,
  [SMALL_STATE(62)] = 933,
  [SMALL_STATE(63)] = 943,
  [SMALL_STATE(64)] = 957,
  [SMALL_STATE(65)] = 970,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 996,
  [SMALL_STATE(68)] = 1005,
  [SMALL_STATE(69)] = 1016,
  [SMALL_STATE(70)] = 1029,
  [SMALL_STATE(71)] = 1038,
  [SMALL_STATE(72)] = 1049,
  [SMALL_STATE(73)] = 1060,
  [SMALL_STATE(74)] = 1070,
  [SMALL_STATE(75)] = 1080,
  [SMALL_STATE(76)] = 1090,
  [SMALL_STATE(77)] = 1096,
  [SMALL_STATE(78)] = 1106,
  [SMALL_STATE(79)] = 1116,
  [SMALL_STATE(80)] = 1126,
  [SMALL_STATE(81)] = 1132,
  [SMALL_STATE(82)] = 1142,
  [SMALL_STATE(83)] = 1152,
  [SMALL_STATE(84)] = 1162,
  [SMALL_STATE(85)] = 1168,
  [SMALL_STATE(86)] = 1178,
  [SMALL_STATE(87)] = 1188,
  [SMALL_STATE(88)] = 1194,
  [SMALL_STATE(89)] = 1204,
  [SMALL_STATE(90)] = 1214,
  [SMALL_STATE(91)] = 1219,
  [SMALL_STATE(92)] = 1226,
  [SMALL_STATE(93)] = 1233,
  [SMALL_STATE(94)] = 1240,
  [SMALL_STATE(95)] = 1245,
  [SMALL_STATE(96)] = 1250,
  [SMALL_STATE(97)] = 1255,
  [SMALL_STATE(98)] = 1260,
  [SMALL_STATE(99)] = 1267,
  [SMALL_STATE(100)] = 1274,
  [SMALL_STATE(101)] = 1279,
  [SMALL_STATE(102)] = 1286,
  [SMALL_STATE(103)] = 1291,
  [SMALL_STATE(104)] = 1298,
  [SMALL_STATE(105)] = 1302,
  [SMALL_STATE(106)] = 1306,
  [SMALL_STATE(107)] = 1310,
  [SMALL_STATE(108)] = 1314,
  [SMALL_STATE(109)] = 1318,
  [SMALL_STATE(110)] = 1322,
  [SMALL_STATE(111)] = 1326,
  [SMALL_STATE(112)] = 1330,
  [SMALL_STATE(113)] = 1334,
  [SMALL_STATE(114)] = 1338,
  [SMALL_STATE(115)] = 1342,
  [SMALL_STATE(116)] = 1346,
  [SMALL_STATE(117)] = 1350,
  [SMALL_STATE(118)] = 1354,
  [SMALL_STATE(119)] = 1358,
  [SMALL_STATE(120)] = 1362,
  [SMALL_STATE(121)] = 1366,
  [SMALL_STATE(122)] = 1370,
  [SMALL_STATE(123)] = 1374,
  [SMALL_STATE(124)] = 1378,
  [SMALL_STATE(125)] = 1382,
  [SMALL_STATE(126)] = 1386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_type, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_name, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_name, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_literal, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 4, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 4, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersection_type, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 3, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_type, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_type, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singleton_type, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 5, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 5, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_decl_repeat1, 2), SHIFT_REPEAT(104),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_decl_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_decl_repeat1, 2), SHIFT_REPEAT(122),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_decl_repeat1, 2), SHIFT_REPEAT(109),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ivar_member, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ivar_member, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type_single, 3, .production_id = 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameters, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_type_parameters, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameters, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_type_parameters, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameter, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_decl_repeat1, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_decl_repeat1, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameter, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameter, 1),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_type_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_type_parameters_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2, .production_id = 8), SHIFT_REPEAT(93),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2, .production_id = 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_parameter, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bound_type, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics_bound, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 4, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cvar_name, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_name, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 7, .production_id = 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 8, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 5, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generics_variance, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rbs(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
