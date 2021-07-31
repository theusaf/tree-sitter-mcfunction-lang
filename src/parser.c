#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
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
  sym_selector_score = 45,
  sym_item = 46,
  sym_path = 47,
  sym_nbt = 48,
  sym_nbt_object = 49,
  sym_nbt_array = 50,
  sym_nbt_object_key = 51,
  sym_nbt_object_value = 52,
  sym_nbt_number = 53,
  aux_sym_root_repeat1 = 54,
  aux_sym_command_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
  aux_sym_selector_repeat1 = 57,
  aux_sym_selector_object_repeat1 = 58,
  aux_sym_path_repeat1 = 59,
  aux_sym_nbt_object_repeat1 = 60,
  aux_sym_nbt_array_repeat1 = 61,
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
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
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
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
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
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
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
    [sym_root] = STATE(123),
    [sym_command] = STATE(83),
    [aux_sym_root_repeat1] = STATE(83),
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
    STATE(21), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
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
    STATE(21), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
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
    STATE(21), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
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
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(7), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [369] = 11,
    ACTIONS(87), 1,
      aux_sym_number_token1,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK2,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(22), 1,
      sym_number,
    STATE(46), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(45), 4,
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
    STATE(66), 1,
      sym_item,
    STATE(84), 1,
      sym_number,
    STATE(107), 1,
      sym_selector_value,
    ACTIONS(108), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 4,
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
  [508] = 9,
    ACTIONS(127), 1,
      aux_sym_number_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    STATE(38), 1,
      sym_number,
    STATE(74), 1,
      sym_nbt_object_value,
    ACTIONS(129), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(78), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [541] = 4,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(139), 11,
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
  [564] = 2,
    ACTIONS(145), 1,
      anon_sym_f,
    ACTIONS(143), 13,
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
  [583] = 4,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(149), 11,
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
  [606] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 11,
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
  [626] = 2,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 12,
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
  [644] = 2,
    ACTIONS(165), 1,
      anon_sym_,
    ACTIONS(163), 12,
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
  [662] = 2,
    ACTIONS(167), 1,
      anon_sym_,
    ACTIONS(149), 12,
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
  [680] = 3,
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
  [700] = 1,
    ACTIONS(167), 13,
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
  [716] = 1,
    ACTIONS(145), 13,
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
  [732] = 2,
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
  [749] = 2,
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
  [766] = 2,
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
  [783] = 2,
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
  [800] = 2,
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
  [817] = 2,
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
  [834] = 2,
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
  [851] = 2,
    ACTIONS(143), 1,
      anon_sym_LF,
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
  [868] = 2,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(167), 11,
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
  [885] = 2,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 11,
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
  [902] = 2,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 11,
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
  [919] = 2,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(215), 11,
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
  [936] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 11,
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
    ACTIONS(169), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(221), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [968] = 2,
    ACTIONS(143), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(145), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [983] = 1,
    ACTIONS(213), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [995] = 1,
    ACTIONS(199), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1007] = 1,
    ACTIONS(205), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1018] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1041] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1064] = 1,
    ACTIONS(229), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1075] = 2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(231), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1088] = 1,
    ACTIONS(217), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1099] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1122] = 1,
    ACTIONS(179), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1133] = 1,
    ACTIONS(195), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1144] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1167] = 1,
    ACTIONS(187), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1178] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1201] = 7,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(244), 1,
      aux_sym_number_token1,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1224] = 1,
    ACTIONS(252), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1235] = 1,
    ACTIONS(191), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1246] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1269] = 1,
    ACTIONS(96), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1279] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(258), 1,
      sym_selector_key,
    STATE(92), 1,
      sym_number,
    ACTIONS(256), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1294] = 1,
    ACTIONS(199), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1302] = 1,
    ACTIONS(179), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1310] = 4,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    STATE(71), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1324] = 1,
    ACTIONS(143), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
  [1332] = 1,
    ACTIONS(187), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1340] = 1,
    ACTIONS(205), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1348] = 3,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(266), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1360] = 1,
    ACTIONS(213), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1368] = 1,
    ACTIONS(195), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1376] = 1,
    ACTIONS(191), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1384] = 4,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1398] = 4,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1412] = 4,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(72), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1426] = 4,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_string_token1,
    STATE(70), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1440] = 2,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(288), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1450] = 1,
    ACTIONS(252), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1458] = 3,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    STATE(76), 1,
      aux_sym_path_repeat1,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1470] = 1,
    ACTIONS(217), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1478] = 1,
    ACTIONS(229), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1486] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_token1,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1500] = 3,
    ACTIONS(303), 1,
      anon_sym_SLASH,
    STATE(76), 1,
      aux_sym_path_repeat1,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1512] = 4,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      aux_sym_string_token1,
    STATE(82), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1526] = 4,
    ACTIONS(264), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1540] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      sym_comment,
    STATE(72), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1554] = 2,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(315), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1563] = 4,
    ACTIONS(319), 1,
      sym_selector_key,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_selector_object_repeat1,
    STATE(101), 1,
      sym_selector_score,
  [1576] = 4,
    ACTIONS(323), 1,
      aux_sym_number_token1,
    ACTIONS(325), 1,
      anon_sym_TILDE,
    STATE(20), 1,
      sym_coordinate,
    STATE(23), 1,
      sym_number,
  [1589] = 4,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    ACTIONS(329), 1,
      sym_selector_key,
    STATE(89), 1,
      aux_sym_selector_repeat1,
    STATE(106), 1,
      sym_selector_option,
  [1602] = 1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_SLASH,
  [1609] = 4,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      sym_selector_key,
    STATE(89), 1,
      aux_sym_selector_repeat1,
    STATE(106), 1,
      sym_selector_option,
  [1622] = 2,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT,
    ACTIONS(315), 3,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1631] = 4,
    ACTIONS(336), 1,
      aux_sym_number_token1,
    ACTIONS(338), 1,
      anon_sym_TILDE,
    STATE(25), 1,
      sym_coordinate,
    STATE(33), 1,
      sym_number,
  [1644] = 1,
    ACTIONS(340), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_RBRACE,
  [1651] = 4,
    ACTIONS(342), 1,
      sym_selector_key,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_selector_object_repeat1,
    STATE(101), 1,
      sym_selector_score,
  [1664] = 4,
    ACTIONS(319), 1,
      sym_selector_key,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_selector_object_repeat1,
    STATE(101), 1,
      sym_selector_score,
  [1677] = 4,
    ACTIONS(329), 1,
      sym_selector_key,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_selector_repeat1,
    STATE(106), 1,
      sym_selector_option,
  [1690] = 1,
    ACTIONS(351), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1697] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT,
    STATE(90), 1,
      sym_number,
    STATE(108), 1,
      sym_selector_number,
  [1710] = 1,
    ACTIONS(256), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_RBRACE,
  [1717] = 1,
    ACTIONS(353), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1723] = 1,
    ACTIONS(266), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1729] = 2,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1737] = 1,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1743] = 1,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1749] = 1,
    ACTIONS(363), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1755] = 1,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1761] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1769] = 1,
    ACTIONS(371), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1775] = 1,
    ACTIONS(373), 3,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1781] = 1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1787] = 2,
    ACTIONS(375), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
  [1794] = 1,
    ACTIONS(345), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1799] = 2,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    STATE(98), 1,
      sym_number,
  [1806] = 2,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      aux_sym_path_repeat1,
  [1813] = 1,
    ACTIONS(331), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1818] = 1,
    ACTIONS(377), 1,
      sym_selector_key,
  [1822] = 1,
    ACTIONS(379), 1,
      anon_sym_,
  [1826] = 1,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
  [1830] = 1,
    ACTIONS(203), 1,
      anon_sym_,
  [1834] = 1,
    ACTIONS(383), 1,
      anon_sym_EQ,
  [1838] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [1842] = 1,
    ACTIONS(387), 1,
      sym_selector_key,
  [1846] = 1,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [1850] = 1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
  [1854] = 1,
    ACTIONS(393), 1,
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
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 564,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 606,
  [SMALL_STATE(19)] = 626,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 680,
  [SMALL_STATE(23)] = 700,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 732,
  [SMALL_STATE(26)] = 749,
  [SMALL_STATE(27)] = 766,
  [SMALL_STATE(28)] = 783,
  [SMALL_STATE(29)] = 800,
  [SMALL_STATE(30)] = 817,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 851,
  [SMALL_STATE(33)] = 868,
  [SMALL_STATE(34)] = 885,
  [SMALL_STATE(35)] = 902,
  [SMALL_STATE(36)] = 919,
  [SMALL_STATE(37)] = 936,
  [SMALL_STATE(38)] = 953,
  [SMALL_STATE(39)] = 968,
  [SMALL_STATE(40)] = 983,
  [SMALL_STATE(41)] = 995,
  [SMALL_STATE(42)] = 1007,
  [SMALL_STATE(43)] = 1018,
  [SMALL_STATE(44)] = 1041,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1075,
  [SMALL_STATE(47)] = 1088,
  [SMALL_STATE(48)] = 1099,
  [SMALL_STATE(49)] = 1122,
  [SMALL_STATE(50)] = 1133,
  [SMALL_STATE(51)] = 1144,
  [SMALL_STATE(52)] = 1167,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1201,
  [SMALL_STATE(55)] = 1224,
  [SMALL_STATE(56)] = 1235,
  [SMALL_STATE(57)] = 1246,
  [SMALL_STATE(58)] = 1269,
  [SMALL_STATE(59)] = 1279,
  [SMALL_STATE(60)] = 1294,
  [SMALL_STATE(61)] = 1302,
  [SMALL_STATE(62)] = 1310,
  [SMALL_STATE(63)] = 1324,
  [SMALL_STATE(64)] = 1332,
  [SMALL_STATE(65)] = 1340,
  [SMALL_STATE(66)] = 1348,
  [SMALL_STATE(67)] = 1360,
  [SMALL_STATE(68)] = 1368,
  [SMALL_STATE(69)] = 1376,
  [SMALL_STATE(70)] = 1384,
  [SMALL_STATE(71)] = 1398,
  [SMALL_STATE(72)] = 1412,
  [SMALL_STATE(73)] = 1426,
  [SMALL_STATE(74)] = 1440,
  [SMALL_STATE(75)] = 1450,
  [SMALL_STATE(76)] = 1458,
  [SMALL_STATE(77)] = 1470,
  [SMALL_STATE(78)] = 1478,
  [SMALL_STATE(79)] = 1486,
  [SMALL_STATE(80)] = 1500,
  [SMALL_STATE(81)] = 1512,
  [SMALL_STATE(82)] = 1526,
  [SMALL_STATE(83)] = 1540,
  [SMALL_STATE(84)] = 1554,
  [SMALL_STATE(85)] = 1563,
  [SMALL_STATE(86)] = 1576,
  [SMALL_STATE(87)] = 1589,
  [SMALL_STATE(88)] = 1602,
  [SMALL_STATE(89)] = 1609,
  [SMALL_STATE(90)] = 1622,
  [SMALL_STATE(91)] = 1631,
  [SMALL_STATE(92)] = 1644,
  [SMALL_STATE(93)] = 1651,
  [SMALL_STATE(94)] = 1664,
  [SMALL_STATE(95)] = 1677,
  [SMALL_STATE(96)] = 1690,
  [SMALL_STATE(97)] = 1697,
  [SMALL_STATE(98)] = 1710,
  [SMALL_STATE(99)] = 1717,
  [SMALL_STATE(100)] = 1723,
  [SMALL_STATE(101)] = 1729,
  [SMALL_STATE(102)] = 1737,
  [SMALL_STATE(103)] = 1743,
  [SMALL_STATE(104)] = 1749,
  [SMALL_STATE(105)] = 1755,
  [SMALL_STATE(106)] = 1761,
  [SMALL_STATE(107)] = 1769,
  [SMALL_STATE(108)] = 1775,
  [SMALL_STATE(109)] = 1781,
  [SMALL_STATE(110)] = 1787,
  [SMALL_STATE(111)] = 1794,
  [SMALL_STATE(112)] = 1799,
  [SMALL_STATE(113)] = 1806,
  [SMALL_STATE(114)] = 1813,
  [SMALL_STATE(115)] = 1818,
  [SMALL_STATE(116)] = 1822,
  [SMALL_STATE(117)] = 1826,
  [SMALL_STATE(118)] = 1830,
  [SMALL_STATE(119)] = 1834,
  [SMALL_STATE(120)] = 1838,
  [SMALL_STATE(121)] = 1842,
  [SMALL_STATE(122)] = 1846,
  [SMALL_STATE(123)] = 1850,
  [SMALL_STATE(124)] = 1854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(118),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(81),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(121),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(110),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(47),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(57),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(124),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(16),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(72),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(76),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(79),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(117),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(122),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(119),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 3, .production_id = 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [391] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
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
