#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_EQ = 14,
  anon_sym_RBRACK = 15,
  anon_sym_COMMA = 16,
  aux_sym_selector_key_token1 = 17,
  anon_sym_DOT_DOT = 18,
  sym__namespace = 19,
  aux_sym_path_token1 = 20,
  anon_sym_SLASH = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COLON = 23,
  anon_sym_RBRACE = 24,
  anon_sym_l = 25,
  anon_sym_s = 26,
  anon_sym_d = 27,
  anon_sym_f = 28,
  anon_sym_b = 29,
  sym_root = 30,
  sym_command = 31,
  sym_number = 32,
  sym_boolean = 33,
  sym_coordinate = 34,
  sym_rotation = 35,
  sym_location = 36,
  sym_string = 37,
  sym__escape_sequence = 38,
  sym_selector = 39,
  sym_selector_options = 40,
  sym_selector_key = 41,
  sym_selector_value = 42,
  sym_item = 43,
  sym_path = 44,
  sym_nbt = 45,
  sym_nbt_object = 46,
  sym_nbt_array = 47,
  sym_nbt_object_key = 48,
  sym_nbt_object_value = 49,
  sym_nbt_number = 50,
  aux_sym_root_repeat1 = 51,
  aux_sym_command_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
  aux_sym_selector_repeat1 = 54,
  aux_sym_path_repeat1 = 55,
  aux_sym_nbt_object_repeat1 = 56,
  aux_sym_nbt_array_repeat1 = 57,
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
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym_selector_key_token1] = "selector_key_token1",
  [anon_sym_DOT_DOT] = "..",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_selector_key_token1] = aux_sym_selector_key_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
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
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(103),
    [sym_command] = STATE(73),
    [aux_sym_root_repeat1] = STATE(73),
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
    ACTIONS(14), 1,
      aux_sym_number_token1,
    ACTIONS(20), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      aux_sym_selector_token1,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__namespace,
    ACTIONS(35), 1,
      aux_sym_path_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(100), 1,
      sym_coordinate,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
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
  [58] = 16,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      anon_sym_TILDE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_selector_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym__namespace,
    ACTIONS(59), 1,
      aux_sym_path_token1,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(100), 1,
      sym_coordinate,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
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
  [116] = 16,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      anon_sym_TILDE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_selector_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym__namespace,
    ACTIONS(59), 1,
      aux_sym_path_token1,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(15), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(100), 1,
      sym_coordinate,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
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
  [174] = 13,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      aux_sym_selector_key_token1,
    ACTIONS(75), 1,
      anon_sym_DOT_DOT,
    ACTIONS(77), 1,
      sym__namespace,
    ACTIONS(79), 1,
      aux_sym_path_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_item,
    STATE(94), 1,
      sym_number,
    STATE(105), 1,
      sym_selector_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(106), 3,
      sym_boolean,
      sym_path,
      sym_nbt,
  [218] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [257] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [296] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [335] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [374] = 11,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [413] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [452] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(57), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [491] = 2,
    ACTIONS(118), 1,
      anon_sym_f,
    ACTIONS(116), 14,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [511] = 4,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
    ACTIONS(122), 10,
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
  [534] = 4,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_path_repeat1,
    ACTIONS(129), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [557] = 4,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(135), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [580] = 4,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
    ACTIONS(141), 10,
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
  [603] = 9,
    ACTIONS(145), 1,
      aux_sym_number_token1,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_number,
    STATE(66), 1,
      sym_nbt_object_value,
    ACTIONS(147), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(76), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [636] = 4,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(157), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [659] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(14), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
    ACTIONS(164), 10,
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
  [682] = 3,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(168), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [702] = 2,
    ACTIONS(172), 1,
      anon_sym_,
    ACTIONS(129), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [720] = 2,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 12,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_SLASH,
      anon_sym_LBRACE,
  [738] = 2,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(178), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [756] = 1,
    ACTIONS(118), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [772] = 1,
    ACTIONS(172), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [788] = 3,
    ACTIONS(186), 1,
      anon_sym_f,
    ACTIONS(184), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(182), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [808] = 2,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [825] = 2,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [842] = 2,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [859] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [876] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [893] = 2,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [910] = 2,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [927] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [944] = 2,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(172), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [961] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [978] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [995] = 2,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACK,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACE,
  [1012] = 2,
    ACTIONS(182), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(230), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1027] = 2,
    ACTIONS(116), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(118), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1042] = 1,
    ACTIONS(226), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1054] = 1,
    ACTIONS(200), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1066] = 7,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(235), 1,
      aux_sym_number_token1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1089] = 1,
    ACTIONS(196), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1100] = 1,
    ACTIONS(192), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1111] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1134] = 1,
    ACTIONS(218), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1145] = 1,
    ACTIONS(188), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1156] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1179] = 1,
    ACTIONS(208), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1190] = 1,
    ACTIONS(249), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1201] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1224] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1247] = 1,
    ACTIONS(222), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1258] = 1,
    ACTIONS(255), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1269] = 2,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(257), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1282] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1305] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_nbt_object_repeat1,
    STATE(108), 1,
      sym_nbt_object_key,
    STATE(109), 2,
      sym_number,
      sym_string,
  [1328] = 1,
    ACTIONS(107), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1338] = 1,
    ACTIONS(188), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1346] = 1,
    ACTIONS(208), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1354] = 4,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_string_token1,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    STATE(67), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1368] = 4,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_string_token1,
    STATE(74), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1382] = 1,
    ACTIONS(200), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1390] = 2,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1400] = 4,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(74), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1414] = 4,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_string_token1,
    STATE(64), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1428] = 4,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym_string_token1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(74), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1442] = 1,
    ACTIONS(196), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1450] = 4,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_string_token1,
    STATE(69), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1464] = 1,
    ACTIONS(218), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1472] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym_comment,
    STATE(75), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1486] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_token1,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    STATE(74), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1500] = 4,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(75), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1514] = 1,
    ACTIONS(255), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1522] = 1,
    ACTIONS(226), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1530] = 1,
    ACTIONS(192), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1538] = 1,
    ACTIONS(249), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1546] = 1,
    ACTIONS(222), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1554] = 1,
    ACTIONS(311), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1561] = 4,
    ACTIONS(313), 1,
      aux_sym_number_token1,
    ACTIONS(315), 1,
      anon_sym_TILDE,
    STATE(35), 1,
      sym_coordinate,
    STATE(36), 1,
      sym_number,
  [1574] = 4,
    ACTIONS(317), 1,
      aux_sym_number_token1,
    ACTIONS(319), 1,
      anon_sym_TILDE,
    STATE(24), 1,
      sym_coordinate,
    STATE(26), 1,
      sym_number,
  [1587] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      aux_sym_path_repeat1,
  [1597] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      aux_sym_path_repeat1,
  [1607] = 3,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_number,
  [1617] = 3,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      aux_sym_path_repeat1,
  [1627] = 1,
    ACTIONS(332), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1633] = 1,
    ACTIONS(334), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1639] = 1,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1645] = 2,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      aux_sym_path_repeat1,
  [1652] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [1657] = 2,
    ACTIONS(338), 1,
      aux_sym_selector_key_token1,
    STATE(107), 1,
      sym_selector_key,
  [1664] = 2,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
  [1671] = 2,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    STATE(104), 1,
      sym_number,
  [1678] = 2,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_path_repeat1,
  [1685] = 1,
    ACTIONS(344), 1,
      anon_sym_EQ,
  [1689] = 1,
    ACTIONS(216), 1,
      anon_sym_,
  [1693] = 1,
    ACTIONS(346), 1,
      aux_sym_selector_key_token1,
  [1697] = 1,
    ACTIONS(348), 1,
      anon_sym_,
  [1701] = 1,
    ACTIONS(350), 1,
      aux_sym_selector_key_token1,
  [1705] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
  [1709] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1713] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
  [1717] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
  [1721] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
  [1725] = 1,
    ACTIONS(358), 1,
      anon_sym_EQ,
  [1729] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1733] = 1,
    ACTIONS(362), 1,
      anon_sym_COLON,
  [1737] = 1,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
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
  [SMALL_STATE(14)] = 511,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 580,
  [SMALL_STATE(18)] = 603,
  [SMALL_STATE(19)] = 636,
  [SMALL_STATE(20)] = 659,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 702,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 738,
  [SMALL_STATE(25)] = 756,
  [SMALL_STATE(26)] = 772,
  [SMALL_STATE(27)] = 788,
  [SMALL_STATE(28)] = 808,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 842,
  [SMALL_STATE(31)] = 859,
  [SMALL_STATE(32)] = 876,
  [SMALL_STATE(33)] = 893,
  [SMALL_STATE(34)] = 910,
  [SMALL_STATE(35)] = 927,
  [SMALL_STATE(36)] = 944,
  [SMALL_STATE(37)] = 961,
  [SMALL_STATE(38)] = 978,
  [SMALL_STATE(39)] = 995,
  [SMALL_STATE(40)] = 1012,
  [SMALL_STATE(41)] = 1027,
  [SMALL_STATE(42)] = 1042,
  [SMALL_STATE(43)] = 1054,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1089,
  [SMALL_STATE(46)] = 1100,
  [SMALL_STATE(47)] = 1111,
  [SMALL_STATE(48)] = 1134,
  [SMALL_STATE(49)] = 1145,
  [SMALL_STATE(50)] = 1156,
  [SMALL_STATE(51)] = 1179,
  [SMALL_STATE(52)] = 1190,
  [SMALL_STATE(53)] = 1201,
  [SMALL_STATE(54)] = 1224,
  [SMALL_STATE(55)] = 1247,
  [SMALL_STATE(56)] = 1258,
  [SMALL_STATE(57)] = 1269,
  [SMALL_STATE(58)] = 1282,
  [SMALL_STATE(59)] = 1305,
  [SMALL_STATE(60)] = 1328,
  [SMALL_STATE(61)] = 1338,
  [SMALL_STATE(62)] = 1346,
  [SMALL_STATE(63)] = 1354,
  [SMALL_STATE(64)] = 1368,
  [SMALL_STATE(65)] = 1382,
  [SMALL_STATE(66)] = 1390,
  [SMALL_STATE(67)] = 1400,
  [SMALL_STATE(68)] = 1414,
  [SMALL_STATE(69)] = 1428,
  [SMALL_STATE(70)] = 1442,
  [SMALL_STATE(71)] = 1450,
  [SMALL_STATE(72)] = 1464,
  [SMALL_STATE(73)] = 1472,
  [SMALL_STATE(74)] = 1486,
  [SMALL_STATE(75)] = 1500,
  [SMALL_STATE(76)] = 1514,
  [SMALL_STATE(77)] = 1522,
  [SMALL_STATE(78)] = 1530,
  [SMALL_STATE(79)] = 1538,
  [SMALL_STATE(80)] = 1546,
  [SMALL_STATE(81)] = 1554,
  [SMALL_STATE(82)] = 1561,
  [SMALL_STATE(83)] = 1574,
  [SMALL_STATE(84)] = 1587,
  [SMALL_STATE(85)] = 1597,
  [SMALL_STATE(86)] = 1607,
  [SMALL_STATE(87)] = 1617,
  [SMALL_STATE(88)] = 1627,
  [SMALL_STATE(89)] = 1633,
  [SMALL_STATE(90)] = 1639,
  [SMALL_STATE(91)] = 1645,
  [SMALL_STATE(92)] = 1652,
  [SMALL_STATE(93)] = 1657,
  [SMALL_STATE(94)] = 1664,
  [SMALL_STATE(95)] = 1671,
  [SMALL_STATE(96)] = 1678,
  [SMALL_STATE(97)] = 1685,
  [SMALL_STATE(98)] = 1689,
  [SMALL_STATE(99)] = 1693,
  [SMALL_STATE(100)] = 1697,
  [SMALL_STATE(101)] = 1701,
  [SMALL_STATE(102)] = 1705,
  [SMALL_STATE(103)] = 1709,
  [SMALL_STATE(104)] = 1713,
  [SMALL_STATE(105)] = 1717,
  [SMALL_STATE(106)] = 1721,
  [SMALL_STATE(107)] = 1725,
  [SMALL_STATE(108)] = 1729,
  [SMALL_STATE(109)] = 1733,
  [SMALL_STATE(110)] = 1737,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(96),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(13),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(51),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(63),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(53),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(93),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_options, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_options, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_options, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_options, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(109),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(13),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(63),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(75),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(85),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 3),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
