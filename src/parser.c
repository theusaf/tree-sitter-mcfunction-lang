#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  sym_identifier = 3,
  aux_sym_number_token1 = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_TILDE = 7,
  anon_sym_ = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_BSLASH = 11,
  aux_sym_selector_token1 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_EQ = 16,
  sym_selector_key = 17,
  anon_sym_DOT_DOT = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym__namespace = 22,
  aux_sym_path_token1 = 23,
  anon_sym_SLASH = 24,
  anon_sym_LBRACK2 = 25,
  anon_sym_l = 26,
  anon_sym_s = 27,
  anon_sym_d = 28,
  anon_sym_f = 29,
  anon_sym_b = 30,
  sym_root = 31,
  sym_command = 32,
  sym_number = 33,
  sym_boolean = 34,
  sym_coordinate = 35,
  sym_rotation = 36,
  sym_location = 37,
  sym_string = 38,
  sym__escape_sequence = 39,
  sym_selector = 40,
  sym_selector_option = 41,
  sym_selector_value = 42,
  sym_selector_number = 43,
  sym_selector_object = 44,
  sym_selector_nbt = 45,
  sym_selector_score = 46,
  sym_item = 47,
  sym_path = 48,
  sym_nbt = 49,
  sym_nbt_object = 50,
  sym_nbt_array = 51,
  sym_nbt_object_key = 52,
  sym_nbt_object_value = 53,
  sym_nbt_number = 54,
  aux_sym_root_repeat1 = 55,
  aux_sym_command_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_selector_repeat1 = 58,
  aux_sym_selector_object_repeat1 = 59,
  aux_sym_path_repeat1 = 60,
  aux_sym_nbt_object_repeat1 = 61,
  aux_sym_nbt_array_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TILDE] = "~",
  [anon_sym_] = " ",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_selector_token1] = "selector_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_selector_key] = "selector_key",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_l] = "l",
  [anon_sym_s] = "s",
  [anon_sym_d] = "d",
  [anon_sym_f] = "f",
  [anon_sym_b] = "b",
  [sym_root] = "root",
  [sym_command] = "command",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_coordinate] = "coordinate",
  [sym_rotation] = "rotation",
  [sym_location] = "location",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_selector] = "selector",
  [sym_selector_option] = "selector_option",
  [sym_selector_value] = "selector_value",
  [sym_selector_number] = "selector_number",
  [sym_selector_object] = "selector_object",
  [sym_selector_nbt] = "selector_nbt",
  [sym_selector_score] = "selector_score",
  [sym_item] = "item",
  [sym_path] = "path",
  [sym_nbt] = "nbt",
  [sym_nbt_object] = "nbt_object",
  [sym_nbt_array] = "nbt_array",
  [sym_nbt_object_key] = "nbt_object_key",
  [sym_nbt_object_value] = "nbt_object_value",
  [sym_nbt_number] = "nbt_number",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
  [aux_sym_selector_object_repeat1] = "selector_object_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_] = anon_sym_,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_selector_token1] = aux_sym_selector_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_selector_key] = sym_selector_key,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_b] = anon_sym_b,
  [sym_root] = sym_root,
  [sym_command] = sym_command,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_coordinate] = sym_coordinate,
  [sym_rotation] = sym_rotation,
  [sym_location] = sym_location,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_selector] = sym_selector,
  [sym_selector_option] = sym_selector_option,
  [sym_selector_value] = sym_selector_value,
  [sym_selector_number] = sym_selector_number,
  [sym_selector_object] = sym_selector_object,
  [sym_selector_nbt] = sym_selector_nbt,
  [sym_selector_score] = sym_selector_score,
  [sym_item] = sym_item,
  [sym_path] = sym_path,
  [sym_nbt] = sym_nbt,
  [sym_nbt_object] = sym_nbt_object,
  [sym_nbt_array] = sym_nbt_array,
  [sym_nbt_object_key] = sym_nbt_object_key,
  [sym_nbt_object_value] = sym_nbt_object_value,
  [sym_nbt_number] = sym_nbt_number,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_repeat1] = aux_sym_selector_repeat1,
  [aux_sym_selector_object_repeat1] = aux_sym_selector_object_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_nbt_object_repeat1] = aux_sym_nbt_object_repeat1,
  [aux_sym_nbt_array_repeat1] = aux_sym_nbt_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selector_token1] = {
    .visible = false,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_selector_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__namespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_coordinate] = {
    .visible = true,
    .named = true,
  },
  [sym_rotation] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_option] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_value] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_number] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_object] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_score] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_object] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_array] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_object_key] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_object_value] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_command_name = 1,
  field_nbt_number_suffix = 2,
  field_selector_score_key = 3,
  field_selector_score_value = 4,
  field_x = 5,
  field_y = 6,
  field_z = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command_name] = "command_name",
  [field_nbt_number_suffix] = "nbt_number_suffix",
  [field_selector_score_key] = "selector_score_key",
  [field_selector_score_value] = "selector_score_value",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command_name, 0},
  [1] =
    {field_nbt_number_suffix, 1},
  [2] =
    {field_x, 0},
    {field_y, 2},
  [4] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
  [7] =
    {field_selector_score_key, 0},
    {field_selector_score_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_selector_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_selector_key] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(130),
    [sym_command] = STATE(97),
    [aux_sym_root_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_selector_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym__namespace,
    ACTIONS(27), 1,
      aux_sym_path_token1,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    STATE(15), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(126), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [58] = 16,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      aux_sym_selector_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym__namespace,
    ACTIONS(57), 1,
      aux_sym_path_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK2,
    STATE(15), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(126), 1,
      sym_coordinate,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [116] = 16,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_selector_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym__namespace,
    ACTIONS(27), 1,
      aux_sym_path_token1,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(15), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(126), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [174] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [213] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [252] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [291] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [330] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [369] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [408] = 11,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_LBRACK2,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(56), 1,
      sym_nbt_object_value,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [447] = 11,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(110), 1,
      sym_selector_key,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym__namespace,
    ACTIONS(118), 1,
      aux_sym_path_token1,
    STATE(84), 1,
      sym_item,
    STATE(107), 1,
      sym_number,
    STATE(115), 1,
      sym_selector_value,
    ACTIONS(108), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [485] = 9,
    ACTIONS(120), 1,
      aux_sym_number_token1,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    STATE(44), 1,
      sym_number,
    STATE(89), 1,
      sym_nbt_object_value,
    ACTIONS(122), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(71), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [518] = 2,
    ACTIONS(132), 1,
      anon_sym_f,
    ACTIONS(130), 13,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [537] = 4,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(136), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [560] = 9,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(140), 1,
      aux_sym_number_token1,
    STATE(41), 1,
      sym_number,
    STATE(80), 1,
      sym_nbt_object_value,
    ACTIONS(122), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(71), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [593] = 4,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(144), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [616] = 4,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(151), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [639] = 2,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(155), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [657] = 2,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(136), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [675] = 3,
    ACTIONS(165), 1,
      anon_sym_f,
    ACTIONS(163), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(161), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [695] = 3,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [715] = 1,
    ACTIONS(132), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [731] = 1,
    ACTIONS(159), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [747] = 2,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 12,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_SLASH,
      anon_sym_LBRACK2,
  [765] = 2,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [782] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [799] = 2,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [816] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(159), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [833] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [850] = 2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [867] = 2,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [884] = 2,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [901] = 2,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [918] = 2,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [935] = 2,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [952] = 2,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [969] = 2,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [986] = 9,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      sym_selector_key,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_selector_object_repeat1,
    STATE(132), 1,
      sym_nbt_object_key,
    STATE(72), 2,
      sym_selector_nbt,
      sym_selector_score,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1016] = 9,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      sym_selector_key,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_selector_object_repeat1,
    STATE(132), 1,
      sym_nbt_object_key,
    STATE(72), 2,
      sym_selector_nbt,
      sym_selector_score,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1046] = 3,
    ACTIONS(231), 1,
      sym_selector_key,
    ACTIONS(161), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(233), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1064] = 2,
    ACTIONS(130), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(132), 6,
      sym_selector_key,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1080] = 9,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(238), 1,
      aux_sym_number_token1,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_selector_key,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_selector_object_repeat1,
    STATE(132), 1,
      sym_nbt_object_key,
    STATE(72), 2,
      sym_selector_nbt,
      sym_selector_score,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1110] = 2,
    ACTIONS(161), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(233), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1125] = 2,
    ACTIONS(130), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(132), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1140] = 1,
    ACTIONS(215), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1152] = 1,
    ACTIONS(207), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1164] = 1,
    ACTIONS(249), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1175] = 1,
    ACTIONS(181), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1186] = 1,
    ACTIONS(251), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1197] = 1,
    ACTIONS(187), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1208] = 1,
    ACTIONS(211), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1219] = 7,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(256), 1,
      aux_sym_number_token1,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1242] = 1,
    ACTIONS(191), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1253] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1276] = 2,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(266), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1289] = 1,
    ACTIONS(177), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1300] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1323] = 1,
    ACTIONS(203), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1334] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1357] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1380] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1403] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(134), 2,
      sym_number,
      sym_string,
  [1426] = 1,
    ACTIONS(98), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1436] = 4,
    ACTIONS(282), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_selector_key,
    STATE(73), 1,
      sym_number,
    ACTIONS(280), 4,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1452] = 2,
    ACTIONS(132), 1,
      sym_selector_key,
    ACTIONS(130), 6,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
  [1464] = 3,
    ACTIONS(288), 1,
      sym_selector_key,
    ACTIONS(290), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1478] = 2,
    ACTIONS(292), 1,
      sym_selector_key,
    ACTIONS(251), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1489] = 2,
    ACTIONS(209), 1,
      sym_selector_key,
    ACTIONS(207), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1500] = 2,
    ACTIONS(284), 1,
      sym_selector_key,
    ACTIONS(280), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1511] = 2,
    ACTIONS(294), 1,
      sym_selector_key,
    ACTIONS(249), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1522] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      sym_selector_key,
    ACTIONS(296), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1535] = 2,
    ACTIONS(304), 1,
      sym_selector_key,
    ACTIONS(302), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1546] = 2,
    ACTIONS(205), 1,
      sym_selector_key,
    ACTIONS(203), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1557] = 2,
    ACTIONS(179), 1,
      sym_selector_key,
    ACTIONS(177), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1568] = 2,
    ACTIONS(193), 1,
      sym_selector_key,
    ACTIONS(191), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1579] = 2,
    ACTIONS(189), 1,
      sym_selector_key,
    ACTIONS(187), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1590] = 2,
    ACTIONS(217), 1,
      sym_selector_key,
    ACTIONS(215), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1601] = 2,
    ACTIONS(183), 1,
      sym_selector_key,
    ACTIONS(181), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1612] = 2,
    ACTIONS(308), 1,
      sym_selector_key,
    ACTIONS(306), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1623] = 2,
    ACTIONS(312), 1,
      sym_selector_key,
    ACTIONS(310), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1634] = 2,
    ACTIONS(213), 1,
      sym_selector_key,
    ACTIONS(211), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1645] = 4,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      aux_sym_string_token1,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    STATE(96), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1659] = 3,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_path_repeat1,
    ACTIONS(320), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1671] = 4,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_token1,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1685] = 4,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(86), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1699] = 2,
    ACTIONS(336), 1,
      sym_selector_key,
    ACTIONS(247), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1709] = 4,
    ACTIONS(316), 1,
      aux_sym_string_token1,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(96), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1723] = 2,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(340), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1733] = 3,
    ACTIONS(344), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      aux_sym_path_repeat1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1745] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_selector_key,
    STATE(116), 1,
      sym_number,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1759] = 3,
    ACTIONS(347), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      aux_sym_path_repeat1,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1771] = 4,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_string_token1,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1785] = 4,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    STATE(83), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1799] = 4,
    ACTIONS(316), 1,
      aux_sym_string_token1,
    ACTIONS(318), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    STATE(96), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1813] = 4,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_string_token1,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    STATE(96), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1827] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      sym_comment,
    STATE(86), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1841] = 1,
    ACTIONS(130), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
  [1848] = 1,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_SLASH,
  [1855] = 4,
    ACTIONS(282), 1,
      aux_sym_number_token1,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    STATE(67), 1,
      sym_number,
    STATE(81), 1,
      sym_selector_number,
  [1868] = 1,
    ACTIONS(373), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1875] = 4,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    ACTIONS(377), 1,
      sym_selector_key,
    STATE(105), 1,
      aux_sym_selector_repeat1,
    STATE(114), 1,
      sym_selector_option,
  [1888] = 4,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    ACTIONS(381), 1,
      sym_selector_key,
    STATE(103), 1,
      aux_sym_selector_repeat1,
    STATE(114), 1,
      sym_selector_option,
  [1901] = 4,
    ACTIONS(384), 1,
      aux_sym_number_token1,
    ACTIONS(386), 1,
      anon_sym_TILDE,
    STATE(19), 1,
      sym_coordinate,
    STATE(24), 1,
      sym_number,
  [1914] = 4,
    ACTIONS(377), 1,
      sym_selector_key,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      aux_sym_selector_repeat1,
    STATE(114), 1,
      sym_selector_option,
  [1927] = 4,
    ACTIONS(390), 1,
      aux_sym_number_token1,
    ACTIONS(392), 1,
      anon_sym_TILDE,
    STATE(29), 1,
      sym_number,
    STATE(32), 1,
      sym_coordinate,
  [1940] = 2,
    ACTIONS(394), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1949] = 1,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1955] = 1,
    ACTIONS(396), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1961] = 1,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1967] = 1,
    ACTIONS(320), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1973] = 1,
    ACTIONS(400), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1979] = 1,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1985] = 2,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1993] = 1,
    ACTIONS(406), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1999] = 1,
    ACTIONS(302), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2005] = 1,
    ACTIONS(408), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2011] = 1,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [2017] = 2,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_path_repeat1,
  [2024] = 1,
    ACTIONS(379), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [2029] = 2,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    STATE(108), 1,
      sym_number,
  [2036] = 2,
    ACTIONS(282), 1,
      aux_sym_number_token1,
    STATE(70), 1,
      sym_number,
  [2043] = 2,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_path_repeat1,
  [2050] = 1,
    ACTIONS(414), 1,
      anon_sym_EQ,
  [2054] = 1,
    ACTIONS(416), 1,
      sym_selector_key,
  [2058] = 1,
    ACTIONS(418), 1,
      anon_sym_,
  [2062] = 1,
    ACTIONS(420), 1,
      sym_selector_key,
  [2066] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [2070] = 1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
  [2074] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [2078] = 1,
    ACTIONS(185), 1,
      anon_sym_,
  [2082] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [2086] = 1,
    ACTIONS(430), 1,
      anon_sym_EQ,
  [2090] = 1,
    ACTIONS(432), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 518,
  [SMALL_STATE(15)] = 537,
  [SMALL_STATE(16)] = 560,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 616,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 675,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 715,
  [SMALL_STATE(24)] = 731,
  [SMALL_STATE(25)] = 747,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 782,
  [SMALL_STATE(28)] = 799,
  [SMALL_STATE(29)] = 816,
  [SMALL_STATE(30)] = 833,
  [SMALL_STATE(31)] = 850,
  [SMALL_STATE(32)] = 867,
  [SMALL_STATE(33)] = 884,
  [SMALL_STATE(34)] = 901,
  [SMALL_STATE(35)] = 918,
  [SMALL_STATE(36)] = 935,
  [SMALL_STATE(37)] = 952,
  [SMALL_STATE(38)] = 969,
  [SMALL_STATE(39)] = 986,
  [SMALL_STATE(40)] = 1016,
  [SMALL_STATE(41)] = 1046,
  [SMALL_STATE(42)] = 1064,
  [SMALL_STATE(43)] = 1080,
  [SMALL_STATE(44)] = 1110,
  [SMALL_STATE(45)] = 1125,
  [SMALL_STATE(46)] = 1140,
  [SMALL_STATE(47)] = 1152,
  [SMALL_STATE(48)] = 1164,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1186,
  [SMALL_STATE(51)] = 1197,
  [SMALL_STATE(52)] = 1208,
  [SMALL_STATE(53)] = 1219,
  [SMALL_STATE(54)] = 1242,
  [SMALL_STATE(55)] = 1253,
  [SMALL_STATE(56)] = 1276,
  [SMALL_STATE(57)] = 1289,
  [SMALL_STATE(58)] = 1300,
  [SMALL_STATE(59)] = 1323,
  [SMALL_STATE(60)] = 1334,
  [SMALL_STATE(61)] = 1357,
  [SMALL_STATE(62)] = 1380,
  [SMALL_STATE(63)] = 1403,
  [SMALL_STATE(64)] = 1426,
  [SMALL_STATE(65)] = 1436,
  [SMALL_STATE(66)] = 1452,
  [SMALL_STATE(67)] = 1464,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1489,
  [SMALL_STATE(70)] = 1500,
  [SMALL_STATE(71)] = 1511,
  [SMALL_STATE(72)] = 1522,
  [SMALL_STATE(73)] = 1535,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1557,
  [SMALL_STATE(76)] = 1568,
  [SMALL_STATE(77)] = 1579,
  [SMALL_STATE(78)] = 1590,
  [SMALL_STATE(79)] = 1601,
  [SMALL_STATE(80)] = 1612,
  [SMALL_STATE(81)] = 1623,
  [SMALL_STATE(82)] = 1634,
  [SMALL_STATE(83)] = 1645,
  [SMALL_STATE(84)] = 1659,
  [SMALL_STATE(85)] = 1671,
  [SMALL_STATE(86)] = 1685,
  [SMALL_STATE(87)] = 1699,
  [SMALL_STATE(88)] = 1709,
  [SMALL_STATE(89)] = 1723,
  [SMALL_STATE(90)] = 1733,
  [SMALL_STATE(91)] = 1745,
  [SMALL_STATE(92)] = 1759,
  [SMALL_STATE(93)] = 1771,
  [SMALL_STATE(94)] = 1785,
  [SMALL_STATE(95)] = 1799,
  [SMALL_STATE(96)] = 1813,
  [SMALL_STATE(97)] = 1827,
  [SMALL_STATE(98)] = 1841,
  [SMALL_STATE(99)] = 1848,
  [SMALL_STATE(100)] = 1855,
  [SMALL_STATE(101)] = 1868,
  [SMALL_STATE(102)] = 1875,
  [SMALL_STATE(103)] = 1888,
  [SMALL_STATE(104)] = 1901,
  [SMALL_STATE(105)] = 1914,
  [SMALL_STATE(106)] = 1927,
  [SMALL_STATE(107)] = 1940,
  [SMALL_STATE(108)] = 1949,
  [SMALL_STATE(109)] = 1955,
  [SMALL_STATE(110)] = 1961,
  [SMALL_STATE(111)] = 1967,
  [SMALL_STATE(112)] = 1973,
  [SMALL_STATE(113)] = 1979,
  [SMALL_STATE(114)] = 1985,
  [SMALL_STATE(115)] = 1993,
  [SMALL_STATE(116)] = 1999,
  [SMALL_STATE(117)] = 2005,
  [SMALL_STATE(118)] = 2011,
  [SMALL_STATE(119)] = 2017,
  [SMALL_STATE(120)] = 2024,
  [SMALL_STATE(121)] = 2029,
  [SMALL_STATE(122)] = 2036,
  [SMALL_STATE(123)] = 2043,
  [SMALL_STATE(124)] = 2050,
  [SMALL_STATE(125)] = 2054,
  [SMALL_STATE(126)] = 2058,
  [SMALL_STATE(127)] = 2062,
  [SMALL_STATE(128)] = 2066,
  [SMALL_STATE(129)] = 2070,
  [SMALL_STATE(130)] = 2074,
  [SMALL_STATE(131)] = 2078,
  [SMALL_STATE(132)] = 2082,
  [SMALL_STATE(133)] = 2086,
  [SMALL_STATE(134)] = 2090,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(131),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(94),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(127),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(59),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(85),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(17),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(134),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(14),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(85),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(133),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(134),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(14),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(85),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_nbt, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 3, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_score, 3, .production_id = 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(86),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(90),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(96),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(129),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(124),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [426] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mcfunction(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
