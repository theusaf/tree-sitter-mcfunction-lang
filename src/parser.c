#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_RBRACK = 14,
  anon_sym_EQ = 15,
  anon_sym_COMMA = 16,
  aux_sym_selector_key_token1 = 17,
  anon_sym_DOT_DOT = 18,
  sym__namespace = 19,
  aux_sym_path_token1 = 20,
  anon_sym_SLASH = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COLON = 23,
  anon_sym_RBRACE = 24,
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
  sym_selector_options = 41,
  sym_selector_key = 42,
  sym_selector_value = 43,
  sym_item = 44,
  sym_path = 45,
  sym_nbt = 46,
  sym_nbt_object = 47,
  sym_nbt_array = 48,
  sym_nbt_object_key = 49,
  sym_nbt_object_value = 50,
  sym_nbt_number = 51,
  aux_sym_root_repeat1 = 52,
  aux_sym_command_repeat1 = 53,
  aux_sym_string_repeat1 = 54,
  aux_sym_selector_repeat1 = 55,
  aux_sym_path_repeat1 = 56,
  aux_sym_nbt_object_repeat1 = 57,
  aux_sym_nbt_array_repeat1 = 58,
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
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_selector_key_token1] = "selector_key_token1",
  [anon_sym_DOT_DOT] = "..",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [sym_selector_options] = "selector_options",
  [sym_selector_key] = "selector_key",
  [sym_selector_value] = "selector_value",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_selector_key_token1] = aux_sym_selector_key_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_selector_options] = sym_selector_options,
  [sym_selector_key] = sym_selector_key,
  [sym_selector_value] = sym_selector_value,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selector_key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_selector_options] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_key] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_value] = {
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
  field_x = 3,
  field_y = 4,
  field_z = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command_name] = "command_name",
  [field_nbt_number_suffix] = "nbt_number_suffix",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
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
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(87);
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
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
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
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(85);
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
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ']') ADVANCE(63);
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
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(85);
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
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(79);
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
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(87);
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
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '}') ADVANCE(87);
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
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(79);
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
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
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
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
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
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6},
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
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(114),
    [sym_command] = STATE(65),
    [aux_sym_root_repeat1] = STATE(65),
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
      sym__namespace,
    ACTIONS(25), 1,
      aux_sym_path_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    STATE(17), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(117), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
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
      sym__namespace,
    ACTIONS(54), 1,
      aux_sym_path_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LBRACK2,
    STATE(17), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(117), 1,
      sym_coordinate,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
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
      sym__namespace,
    ACTIONS(25), 1,
      aux_sym_path_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(17), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(117), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
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
  [174] = 13,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      aux_sym_selector_key_token1,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      sym__namespace,
    ACTIONS(77), 1,
      aux_sym_path_token1,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_LBRACK2,
    STATE(87), 1,
      sym_item,
    STATE(95), 1,
      sym_number,
    STATE(100), 1,
      sym_selector_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(107), 3,
      sym_boolean,
      sym_path,
      sym_nbt,
  [218] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [257] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [296] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [335] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [374] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [413] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [452] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [491] = 11,
    ACTIONS(107), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_LBRACK2,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(110), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [530] = 11,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(48), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [569] = 4,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(128), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [592] = 9,
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
    STATE(78), 1,
      sym_nbt_object_value,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(81), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [625] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(145), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [648] = 2,
    ACTIONS(151), 1,
      anon_sym_f,
    ACTIONS(149), 13,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [667] = 4,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(155), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [690] = 2,
    ACTIONS(159), 1,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [708] = 2,
    ACTIONS(163), 1,
      anon_sym_,
    ACTIONS(161), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [726] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [746] = 1,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [762] = 1,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [778] = 3,
    ACTIONS(175), 1,
      anon_sym_f,
    ACTIONS(173), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(171), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [798] = 2,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 12,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_SLASH,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [816] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [833] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [850] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [867] = 2,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(195), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [901] = 2,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [918] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [935] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [952] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [969] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(159), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [986] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1003] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1020] = 2,
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
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1037] = 2,
    ACTIONS(171), 5,
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
  [1052] = 2,
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
  [1067] = 1,
    ACTIONS(213), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1079] = 1,
    ACTIONS(223), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1091] = 1,
    ACTIONS(229), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1102] = 1,
    ACTIONS(181), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1113] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1136] = 2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(235), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1149] = 1,
    ACTIONS(239), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1160] = 7,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(244), 1,
      aux_sym_number_token1,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1183] = 1,
    ACTIONS(185), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1194] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1217] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1240] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1263] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1286] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1309] = 1,
    ACTIONS(193), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1320] = 1,
    ACTIONS(205), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1331] = 1,
    ACTIONS(209), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1342] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1365] = 1,
    ACTIONS(189), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1376] = 7,
    ACTIONS(83), 1,
      aux_sym_number_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(113), 2,
      sym_number,
      sym_string,
  [1399] = 1,
    ACTIONS(116), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1409] = 1,
    ACTIONS(209), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(193), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1425] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym_comment,
    STATE(69), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1439] = 4,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    STATE(71), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1453] = 4,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    STATE(86), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1467] = 4,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      aux_sym_selector_key_token1,
    STATE(96), 1,
      sym_number,
    ACTIONS(280), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1481] = 4,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(69), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1495] = 4,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    STATE(67), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1509] = 4,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(86), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1523] = 4,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(86), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1537] = 4,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      aux_sym_selector_key_token1,
    STATE(122), 1,
      sym_selector_key,
    STATE(80), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1551] = 4,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      aux_sym_string_token1,
    STATE(72), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1565] = 1,
    ACTIONS(185), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1573] = 1,
    ACTIONS(205), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1581] = 3,
    ACTIONS(308), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(153), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1593] = 2,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(310), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1603] = 4,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(316), 1,
      aux_sym_selector_key_token1,
    STATE(122), 1,
      sym_selector_key,
    STATE(79), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1617] = 4,
    ACTIONS(302), 1,
      aux_sym_selector_key_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      sym_selector_key,
    STATE(79), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1631] = 1,
    ACTIONS(239), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1639] = 1,
    ACTIONS(223), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1647] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(126), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1659] = 1,
    ACTIONS(181), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1667] = 1,
    ACTIONS(229), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1675] = 4,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_token1,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    STATE(86), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1689] = 3,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(77), 1,
      aux_sym_path_repeat1,
    ACTIONS(332), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1701] = 1,
    ACTIONS(189), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1709] = 1,
    ACTIONS(213), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1717] = 1,
    ACTIONS(336), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1724] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
      anon_sym_SLASH,
  [1731] = 4,
    ACTIONS(338), 1,
      aux_sym_number_token1,
    ACTIONS(340), 1,
      anon_sym_TILDE,
    STATE(32), 1,
      sym_coordinate,
    STATE(36), 1,
      sym_number,
  [1744] = 1,
    ACTIONS(149), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
      anon_sym_DOT_DOT,
  [1751] = 4,
    ACTIONS(342), 1,
      aux_sym_number_token1,
    ACTIONS(344), 1,
      anon_sym_TILDE,
    STATE(21), 1,
      sym_coordinate,
    STATE(23), 1,
      sym_number,
  [1764] = 2,
    ACTIONS(346), 1,
      anon_sym_DOT_DOT,
    ACTIONS(332), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1773] = 1,
    ACTIONS(348), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1779] = 1,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1785] = 1,
    ACTIONS(352), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1791] = 1,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1797] = 2,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(356), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [1805] = 1,
    ACTIONS(189), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1811] = 1,
    ACTIONS(209), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1817] = 1,
    ACTIONS(193), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1823] = 1,
    ACTIONS(181), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1829] = 1,
    ACTIONS(205), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1835] = 1,
    ACTIONS(185), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1841] = 1,
    ACTIONS(332), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1847] = 1,
    ACTIONS(280), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym_selector_key_token1,
  [1853] = 1,
    ACTIONS(360), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [1858] = 2,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    STATE(108), 1,
      sym_number,
  [1865] = 2,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(77), 1,
      aux_sym_path_repeat1,
  [1872] = 2,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_path_repeat1,
  [1879] = 1,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [1883] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1887] = 1,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
  [1891] = 1,
    ACTIONS(370), 1,
      anon_sym_EQ,
  [1895] = 1,
    ACTIONS(372), 1,
      anon_sym_,
  [1899] = 1,
    ACTIONS(374), 1,
      aux_sym_selector_key_token1,
  [1903] = 1,
    ACTIONS(376), 1,
      aux_sym_selector_key_token1,
  [1907] = 1,
    ACTIONS(217), 1,
      anon_sym_,
  [1911] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1915] = 1,
    ACTIONS(380), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 413,
  [SMALL_STATE(12)] = 452,
  [SMALL_STATE(13)] = 491,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 592,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 667,
  [SMALL_STATE(20)] = 690,
  [SMALL_STATE(21)] = 708,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 746,
  [SMALL_STATE(24)] = 762,
  [SMALL_STATE(25)] = 778,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 816,
  [SMALL_STATE(28)] = 833,
  [SMALL_STATE(29)] = 850,
  [SMALL_STATE(30)] = 867,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 901,
  [SMALL_STATE(33)] = 918,
  [SMALL_STATE(34)] = 935,
  [SMALL_STATE(35)] = 952,
  [SMALL_STATE(36)] = 969,
  [SMALL_STATE(37)] = 986,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1020,
  [SMALL_STATE(40)] = 1037,
  [SMALL_STATE(41)] = 1052,
  [SMALL_STATE(42)] = 1067,
  [SMALL_STATE(43)] = 1079,
  [SMALL_STATE(44)] = 1091,
  [SMALL_STATE(45)] = 1102,
  [SMALL_STATE(46)] = 1113,
  [SMALL_STATE(47)] = 1136,
  [SMALL_STATE(48)] = 1149,
  [SMALL_STATE(49)] = 1160,
  [SMALL_STATE(50)] = 1183,
  [SMALL_STATE(51)] = 1194,
  [SMALL_STATE(52)] = 1217,
  [SMALL_STATE(53)] = 1240,
  [SMALL_STATE(54)] = 1263,
  [SMALL_STATE(55)] = 1286,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1320,
  [SMALL_STATE(58)] = 1331,
  [SMALL_STATE(59)] = 1342,
  [SMALL_STATE(60)] = 1365,
  [SMALL_STATE(61)] = 1376,
  [SMALL_STATE(62)] = 1399,
  [SMALL_STATE(63)] = 1409,
  [SMALL_STATE(64)] = 1417,
  [SMALL_STATE(65)] = 1425,
  [SMALL_STATE(66)] = 1439,
  [SMALL_STATE(67)] = 1453,
  [SMALL_STATE(68)] = 1467,
  [SMALL_STATE(69)] = 1481,
  [SMALL_STATE(70)] = 1495,
  [SMALL_STATE(71)] = 1509,
  [SMALL_STATE(72)] = 1523,
  [SMALL_STATE(73)] = 1537,
  [SMALL_STATE(74)] = 1551,
  [SMALL_STATE(75)] = 1565,
  [SMALL_STATE(76)] = 1573,
  [SMALL_STATE(77)] = 1581,
  [SMALL_STATE(78)] = 1593,
  [SMALL_STATE(79)] = 1603,
  [SMALL_STATE(80)] = 1617,
  [SMALL_STATE(81)] = 1631,
  [SMALL_STATE(82)] = 1639,
  [SMALL_STATE(83)] = 1647,
  [SMALL_STATE(84)] = 1659,
  [SMALL_STATE(85)] = 1667,
  [SMALL_STATE(86)] = 1675,
  [SMALL_STATE(87)] = 1689,
  [SMALL_STATE(88)] = 1701,
  [SMALL_STATE(89)] = 1709,
  [SMALL_STATE(90)] = 1717,
  [SMALL_STATE(91)] = 1724,
  [SMALL_STATE(92)] = 1731,
  [SMALL_STATE(93)] = 1744,
  [SMALL_STATE(94)] = 1751,
  [SMALL_STATE(95)] = 1764,
  [SMALL_STATE(96)] = 1773,
  [SMALL_STATE(97)] = 1779,
  [SMALL_STATE(98)] = 1785,
  [SMALL_STATE(99)] = 1791,
  [SMALL_STATE(100)] = 1797,
  [SMALL_STATE(101)] = 1805,
  [SMALL_STATE(102)] = 1811,
  [SMALL_STATE(103)] = 1817,
  [SMALL_STATE(104)] = 1823,
  [SMALL_STATE(105)] = 1829,
  [SMALL_STATE(106)] = 1835,
  [SMALL_STATE(107)] = 1841,
  [SMALL_STATE(108)] = 1847,
  [SMALL_STATE(109)] = 1853,
  [SMALL_STATE(110)] = 1858,
  [SMALL_STATE(111)] = 1865,
  [SMALL_STATE(112)] = 1872,
  [SMALL_STATE(113)] = 1879,
  [SMALL_STATE(114)] = 1883,
  [SMALL_STATE(115)] = 1887,
  [SMALL_STATE(116)] = 1891,
  [SMALL_STATE(117)] = 1895,
  [SMALL_STATE(118)] = 1899,
  [SMALL_STATE(119)] = 1903,
  [SMALL_STATE(120)] = 1907,
  [SMALL_STATE(121)] = 1911,
  [SMALL_STATE(122)] = 1915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(120),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(118),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(112),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(74),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(51),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(113),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(18),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_value, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(69),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(116),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(83),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(86),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(115),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_options, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_options, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
