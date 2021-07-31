#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
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
  aux_sym_selector_object_repeat2 = 60,
  aux_sym_path_repeat1 = 61,
  aux_sym_nbt_object_repeat1 = 62,
  aux_sym_nbt_array_repeat1 = 63,
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
  [aux_sym_selector_object_repeat2] = "selector_object_repeat2",
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
  [aux_sym_selector_object_repeat2] = aux_sym_selector_object_repeat2,
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
  [aux_sym_selector_object_repeat2] = {
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
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(15);
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
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(85);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
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
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
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
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 102:
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
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
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
    [sym_root] = STATE(124),
    [sym_command] = STATE(66),
    [aux_sym_root_repeat1] = STATE(66),
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
    STATE(17), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(121), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
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
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(17), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(121), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(2), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [116] = 16,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      aux_sym_number_token1,
    ACTIONS(46), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      aux_sym_selector_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym__namespace,
    ACTIONS(61), 1,
      aux_sym_path_token1,
    ACTIONS(64), 1,
      anon_sym_LBRACK2,
    STATE(17), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(121), 1,
      sym_coordinate,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
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
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
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
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
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
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [291] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LBRACK2,
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
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
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
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
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [408] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(24), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
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
    STATE(68), 1,
      sym_item,
    STATE(93), 1,
      sym_number,
    STATE(105), 1,
      sym_selector_value,
    ACTIONS(108), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(115), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [485] = 4,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(122), 11,
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
  [508] = 4,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(129), 11,
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
  [531] = 9,
    ACTIONS(133), 1,
      aux_sym_number_token1,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      sym_number,
    STATE(88), 1,
      sym_nbt_object_value,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(84), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [564] = 9,
    ACTIONS(133), 1,
      aux_sym_number_token1,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      sym_number,
    STATE(86), 1,
      sym_nbt_object_value,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(84), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [597] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(145), 11,
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
  [620] = 2,
    ACTIONS(151), 1,
      anon_sym_f,
    ACTIONS(149), 13,
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
  [639] = 1,
    ACTIONS(153), 13,
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
  [655] = 2,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 12,
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
  [673] = 2,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(159), 12,
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
  [691] = 3,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 11,
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
  [711] = 2,
    ACTIONS(153), 1,
      anon_sym_,
    ACTIONS(145), 12,
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
  [729] = 3,
    ACTIONS(173), 1,
      anon_sym_f,
    ACTIONS(171), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(169), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [749] = 1,
    ACTIONS(151), 13,
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
  [765] = 2,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 11,
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
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 11,
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
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 11,
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
  [833] = 2,
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
  [850] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
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
  [867] = 2,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(153), 11,
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
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(199), 11,
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
  [901] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_selector_key,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_selector_object_repeat2,
    STATE(74), 1,
      sym_selector_nbt,
    STATE(96), 1,
      aux_sym_selector_object_repeat1,
    STATE(113), 1,
      sym_selector_score,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [936] = 2,
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
  [953] = 2,
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
  [970] = 2,
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
  [987] = 2,
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
  [1004] = 2,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 11,
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
  [1021] = 2,
    ACTIONS(169), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(227), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1036] = 2,
    ACTIONS(149), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(151), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1051] = 8,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(232), 1,
      aux_sym_number_token1,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_selector_object_repeat2,
    STATE(74), 1,
      sym_selector_nbt,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1077] = 8,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_selector_object_repeat2,
    STATE(74), 1,
      sym_selector_nbt,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1103] = 1,
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
  [1115] = 1,
    ACTIONS(179), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1127] = 1,
    ACTIONS(242), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1138] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1161] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1184] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1207] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1230] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1253] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1276] = 2,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(256), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1289] = 1,
    ACTIONS(219), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1300] = 7,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(263), 1,
      aux_sym_number_token1,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(130), 1,
      sym_nbt_object_key,
    STATE(131), 2,
      sym_number,
      sym_string,
  [1323] = 1,
    ACTIONS(271), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1334] = 1,
    ACTIONS(191), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1345] = 1,
    ACTIONS(187), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1356] = 1,
    ACTIONS(175), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1367] = 1,
    ACTIONS(197), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1378] = 1,
    ACTIONS(223), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1389] = 1,
    ACTIONS(92), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1399] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(275), 1,
      sym_selector_key,
    STATE(98), 1,
      sym_number,
    ACTIONS(273), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1414] = 1,
    ACTIONS(175), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(191), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1430] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      sym_comment,
    STATE(85), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1444] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_string_token1,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    STATE(70), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1458] = 3,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_path_repeat1,
    ACTIONS(287), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1470] = 4,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_string_token1,
    STATE(67), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1484] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_token1,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    STATE(70), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1498] = 4,
    ACTIONS(283), 1,
      aux_sym_string_token1,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1512] = 4,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      aux_sym_string_token1,
    STATE(89), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1526] = 4,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    STATE(71), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1540] = 2,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(313), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1550] = 1,
    ACTIONS(149), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
  [1558] = 1,
    ACTIONS(219), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(207), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1574] = 1,
    ACTIONS(187), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1582] = 1,
    ACTIONS(179), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(197), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1598] = 1,
    ACTIONS(223), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1606] = 1,
    ACTIONS(271), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1614] = 3,
    ACTIONS(317), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1626] = 1,
    ACTIONS(242), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1634] = 4,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(85), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1648] = 2,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(328), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1658] = 3,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(127), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1670] = 1,
    ACTIONS(334), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1678] = 4,
    ACTIONS(283), 1,
      aux_sym_string_token1,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1692] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT,
    STATE(97), 1,
      sym_number,
    STATE(110), 1,
      sym_selector_number,
  [1705] = 4,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      sym_selector_key,
    STATE(91), 1,
      aux_sym_selector_repeat1,
    STATE(111), 1,
      sym_selector_option,
  [1718] = 1,
    ACTIONS(273), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_RBRACE,
  [1725] = 2,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
    ACTIONS(343), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1734] = 4,
    ACTIONS(347), 1,
      aux_sym_number_token1,
    ACTIONS(349), 1,
      anon_sym_TILDE,
    STATE(28), 1,
      sym_coordinate,
    STATE(32), 1,
      sym_number,
  [1747] = 1,
    ACTIONS(155), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_SLASH,
  [1754] = 4,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym_selector_key,
    STATE(102), 1,
      aux_sym_selector_object_repeat1,
    STATE(113), 1,
      sym_selector_score,
  [1767] = 2,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
    ACTIONS(343), 3,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1776] = 1,
    ACTIONS(353), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_RBRACE,
  [1783] = 4,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      sym_selector_key,
    STATE(91), 1,
      aux_sym_selector_repeat1,
    STATE(111), 1,
      sym_selector_option,
  [1796] = 4,
    ACTIONS(359), 1,
      aux_sym_number_token1,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(19), 1,
      sym_number,
    STATE(21), 1,
      sym_coordinate,
  [1809] = 1,
    ACTIONS(238), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1816] = 4,
    ACTIONS(363), 1,
      sym_selector_key,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_selector_object_repeat1,
    STATE(113), 1,
      sym_selector_score,
  [1829] = 4,
    ACTIONS(357), 1,
      sym_selector_key,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_repeat1,
    STATE(111), 1,
      sym_selector_option,
  [1842] = 1,
    ACTIONS(370), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1849] = 1,
    ACTIONS(372), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1855] = 1,
    ACTIONS(374), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1861] = 1,
    ACTIONS(376), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1867] = 1,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1873] = 1,
    ACTIONS(380), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1879] = 1,
    ACTIONS(382), 3,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1885] = 2,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1893] = 1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1899] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1907] = 1,
    ACTIONS(392), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1913] = 1,
    ACTIONS(287), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1919] = 1,
    ACTIONS(366), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1924] = 2,
    ACTIONS(394), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
  [1931] = 2,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym_number,
  [1938] = 2,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_path_repeat1,
  [1945] = 1,
    ACTIONS(338), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1950] = 1,
    ACTIONS(396), 1,
      anon_sym_,
  [1954] = 1,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [1958] = 1,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [1962] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1966] = 1,
    ACTIONS(195), 1,
      anon_sym_,
  [1970] = 1,
    ACTIONS(404), 1,
      sym_selector_key,
  [1974] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [1978] = 1,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
  [1982] = 1,
    ACTIONS(410), 1,
      sym_selector_key,
  [1986] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [1990] = 1,
    ACTIONS(414), 1,
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
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 531,
  [SMALL_STATE(16)] = 564,
  [SMALL_STATE(17)] = 597,
  [SMALL_STATE(18)] = 620,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 655,
  [SMALL_STATE(21)] = 673,
  [SMALL_STATE(22)] = 691,
  [SMALL_STATE(23)] = 711,
  [SMALL_STATE(24)] = 729,
  [SMALL_STATE(25)] = 749,
  [SMALL_STATE(26)] = 765,
  [SMALL_STATE(27)] = 782,
  [SMALL_STATE(28)] = 799,
  [SMALL_STATE(29)] = 816,
  [SMALL_STATE(30)] = 833,
  [SMALL_STATE(31)] = 850,
  [SMALL_STATE(32)] = 867,
  [SMALL_STATE(33)] = 884,
  [SMALL_STATE(34)] = 901,
  [SMALL_STATE(35)] = 936,
  [SMALL_STATE(36)] = 953,
  [SMALL_STATE(37)] = 970,
  [SMALL_STATE(38)] = 987,
  [SMALL_STATE(39)] = 1004,
  [SMALL_STATE(40)] = 1021,
  [SMALL_STATE(41)] = 1036,
  [SMALL_STATE(42)] = 1051,
  [SMALL_STATE(43)] = 1077,
  [SMALL_STATE(44)] = 1103,
  [SMALL_STATE(45)] = 1115,
  [SMALL_STATE(46)] = 1127,
  [SMALL_STATE(47)] = 1138,
  [SMALL_STATE(48)] = 1161,
  [SMALL_STATE(49)] = 1184,
  [SMALL_STATE(50)] = 1207,
  [SMALL_STATE(51)] = 1230,
  [SMALL_STATE(52)] = 1253,
  [SMALL_STATE(53)] = 1276,
  [SMALL_STATE(54)] = 1289,
  [SMALL_STATE(55)] = 1300,
  [SMALL_STATE(56)] = 1323,
  [SMALL_STATE(57)] = 1334,
  [SMALL_STATE(58)] = 1345,
  [SMALL_STATE(59)] = 1356,
  [SMALL_STATE(60)] = 1367,
  [SMALL_STATE(61)] = 1378,
  [SMALL_STATE(62)] = 1389,
  [SMALL_STATE(63)] = 1399,
  [SMALL_STATE(64)] = 1414,
  [SMALL_STATE(65)] = 1422,
  [SMALL_STATE(66)] = 1430,
  [SMALL_STATE(67)] = 1444,
  [SMALL_STATE(68)] = 1458,
  [SMALL_STATE(69)] = 1470,
  [SMALL_STATE(70)] = 1484,
  [SMALL_STATE(71)] = 1498,
  [SMALL_STATE(72)] = 1512,
  [SMALL_STATE(73)] = 1526,
  [SMALL_STATE(74)] = 1540,
  [SMALL_STATE(75)] = 1550,
  [SMALL_STATE(76)] = 1558,
  [SMALL_STATE(77)] = 1566,
  [SMALL_STATE(78)] = 1574,
  [SMALL_STATE(79)] = 1582,
  [SMALL_STATE(80)] = 1590,
  [SMALL_STATE(81)] = 1598,
  [SMALL_STATE(82)] = 1606,
  [SMALL_STATE(83)] = 1614,
  [SMALL_STATE(84)] = 1626,
  [SMALL_STATE(85)] = 1634,
  [SMALL_STATE(86)] = 1648,
  [SMALL_STATE(87)] = 1658,
  [SMALL_STATE(88)] = 1670,
  [SMALL_STATE(89)] = 1678,
  [SMALL_STATE(90)] = 1692,
  [SMALL_STATE(91)] = 1705,
  [SMALL_STATE(92)] = 1718,
  [SMALL_STATE(93)] = 1725,
  [SMALL_STATE(94)] = 1734,
  [SMALL_STATE(95)] = 1747,
  [SMALL_STATE(96)] = 1754,
  [SMALL_STATE(97)] = 1767,
  [SMALL_STATE(98)] = 1776,
  [SMALL_STATE(99)] = 1783,
  [SMALL_STATE(100)] = 1796,
  [SMALL_STATE(101)] = 1809,
  [SMALL_STATE(102)] = 1816,
  [SMALL_STATE(103)] = 1829,
  [SMALL_STATE(104)] = 1842,
  [SMALL_STATE(105)] = 1849,
  [SMALL_STATE(106)] = 1855,
  [SMALL_STATE(107)] = 1861,
  [SMALL_STATE(108)] = 1867,
  [SMALL_STATE(109)] = 1873,
  [SMALL_STATE(110)] = 1879,
  [SMALL_STATE(111)] = 1885,
  [SMALL_STATE(112)] = 1893,
  [SMALL_STATE(113)] = 1899,
  [SMALL_STATE(114)] = 1907,
  [SMALL_STATE(115)] = 1913,
  [SMALL_STATE(116)] = 1919,
  [SMALL_STATE(117)] = 1924,
  [SMALL_STATE(118)] = 1931,
  [SMALL_STATE(119)] = 1938,
  [SMALL_STATE(120)] = 1945,
  [SMALL_STATE(121)] = 1950,
  [SMALL_STATE(122)] = 1954,
  [SMALL_STATE(123)] = 1958,
  [SMALL_STATE(124)] = 1962,
  [SMALL_STATE(125)] = 1966,
  [SMALL_STATE(126)] = 1970,
  [SMALL_STATE(127)] = 1974,
  [SMALL_STATE(128)] = 1978,
  [SMALL_STATE(129)] = 1982,
  [SMALL_STATE(130)] = 1986,
  [SMALL_STATE(131)] = 1990,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(52),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(129),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(61),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(73),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(51),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat2, 2), SHIFT_REPEAT(131),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat2, 2), SHIFT_REPEAT(18),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat2, 2), SHIFT_REPEAT(73),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat2, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(131),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(18),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(73),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(70),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(128),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat2, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(83),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(85),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(122),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 3, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [402] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
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
