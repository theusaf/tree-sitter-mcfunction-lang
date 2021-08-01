#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
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
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_EQ = 16,
  sym_selector_key = 17,
  anon_sym_DOT_DOT = 18,
  anon_sym_LBRACE = 19,
  anon_sym_COLON = 20,
  anon_sym_RBRACE = 21,
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
  sym_item = 45,
  sym_path = 46,
  sym_nbt = 47,
  sym_nbt_object = 48,
  sym_nbt_array = 49,
  sym_nbt_object_key = 50,
  sym_nbt_object_value = 51,
  sym_nbt_number = 52,
  aux_sym_root_repeat1 = 53,
  aux_sym_command_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_selector_repeat1 = 56,
  aux_sym_selector_object_repeat1 = 57,
  aux_sym_path_repeat1 = 58,
  aux_sym_nbt_object_repeat1 = 59,
  aux_sym_nbt_array_repeat1 = 60,
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
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(84);
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
      if (lookahead == '}') ADVANCE(85);
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
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
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
      if (lookahead == '}') ADVANCE(85);
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
      if (lookahead == ':') ADVANCE(84);
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
      if (lookahead == '}') ADVANCE(85);
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
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(127),
    [sym_command] = STATE(93),
    [aux_sym_root_repeat1] = STATE(93),
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
    STATE(20), 1,
      sym_number,
    STATE(123), 1,
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
    STATE(17), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(123), 1,
      sym_coordinate,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
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
    STATE(17), 1,
      sym_item,
    STATE(20), 1,
      sym_number,
    STATE(123), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
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
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [213] = 10,
    ACTIONS(79), 1,
      aux_sym_number_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LBRACK2,
    STATE(30), 1,
      sym_number,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(79), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(69), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [250] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [289] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [328] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [367] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [406] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [445] = 11,
    ACTIONS(101), 1,
      aux_sym_number_token1,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(25), 1,
      sym_number,
    STATE(53), 1,
      sym_nbt_object_value,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(56), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [484] = 2,
    ACTIONS(120), 1,
      anon_sym_f,
    ACTIONS(118), 14,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [504] = 11,
    ACTIONS(122), 1,
      aux_sym_number_token1,
    ACTIONS(126), 1,
      sym_selector_key,
    ACTIONS(128), 1,
      anon_sym_DOT_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      sym__namespace,
    ACTIONS(134), 1,
      aux_sym_path_token1,
    STATE(81), 1,
      sym_item,
    STATE(98), 1,
      sym_number,
    STATE(112), 1,
      sym_selector_value,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [542] = 9,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LBRACK2,
    ACTIONS(136), 1,
      aux_sym_number_token1,
    STATE(43), 1,
      sym_number,
    STATE(83), 1,
      sym_nbt_object_value,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(69), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [575] = 4,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(140), 11,
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
  [598] = 4,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_path_repeat1,
    ACTIONS(146), 11,
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
  [621] = 4,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(152), 11,
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
  [644] = 1,
    ACTIONS(120), 13,
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
  [660] = 2,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(146), 12,
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
  [678] = 2,
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
  [696] = 2,
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
  [714] = 3,
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
  [734] = 1,
    ACTIONS(157), 13,
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
  [750] = 3,
    ACTIONS(177), 1,
      anon_sym_f,
    ACTIONS(175), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(173), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [770] = 2,
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
  [787] = 2,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 11,
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
  [804] = 2,
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
  [821] = 2,
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
  [838] = 4,
    ACTIONS(193), 1,
      sym_selector_key,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT,
    ACTIONS(191), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(197), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [859] = 2,
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
  [876] = 2,
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
  [893] = 2,
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
  [910] = 2,
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
  [927] = 2,
    ACTIONS(118), 6,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
    ACTIONS(120), 6,
      sym_selector_key,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [944] = 2,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(157), 11,
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
  [961] = 2,
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
  [978] = 2,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 11,
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
  [995] = 2,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(227), 11,
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
  [1012] = 2,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 11,
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
  [1029] = 1,
    ACTIONS(221), 10,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1042] = 1,
    ACTIONS(229), 10,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1055] = 2,
    ACTIONS(173), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(197), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1070] = 2,
    ACTIONS(118), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(120), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1085] = 8,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_selector_key,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_selector_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1111] = 8,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_selector_key,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_selector_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1137] = 8,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(244), 1,
      aux_sym_number_token1,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym_selector_key,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_selector_object_repeat1,
    STATE(121), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1163] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1186] = 7,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(260), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1209] = 1,
    ACTIONS(217), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1220] = 1,
    ACTIONS(268), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1231] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1254] = 2,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(272), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1267] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1290] = 1,
    ACTIONS(207), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1301] = 1,
    ACTIONS(278), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1312] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1335] = 1,
    ACTIONS(183), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1346] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1369] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1392] = 1,
    ACTIONS(179), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1403] = 1,
    ACTIONS(211), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1414] = 1,
    ACTIONS(187), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1425] = 1,
    ACTIONS(110), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1435] = 4,
    ACTIONS(288), 1,
      aux_sym_number_token1,
    ACTIONS(290), 1,
      sym_selector_key,
    STATE(68), 1,
      sym_number,
    ACTIONS(286), 4,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1451] = 2,
    ACTIONS(292), 1,
      sym_selector_key,
    ACTIONS(268), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1462] = 2,
    ACTIONS(213), 1,
      sym_selector_key,
    ACTIONS(211), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1473] = 2,
    ACTIONS(296), 1,
      sym_selector_key,
    ACTIONS(294), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1484] = 2,
    ACTIONS(298), 1,
      sym_selector_key,
    ACTIONS(278), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1495] = 2,
    ACTIONS(185), 1,
      sym_selector_key,
    ACTIONS(183), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1506] = 2,
    ACTIONS(209), 1,
      sym_selector_key,
    ACTIONS(207), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1517] = 2,
    ACTIONS(223), 1,
      sym_selector_key,
    ACTIONS(221), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1528] = 2,
    ACTIONS(189), 1,
      sym_selector_key,
    ACTIONS(187), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1539] = 2,
    ACTIONS(290), 1,
      sym_selector_key,
    ACTIONS(286), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1550] = 2,
    ACTIONS(181), 1,
      sym_selector_key,
    ACTIONS(179), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1561] = 2,
    ACTIONS(231), 1,
      sym_selector_key,
    ACTIONS(229), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1572] = 2,
    ACTIONS(120), 1,
      sym_selector_key,
    ACTIONS(118), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1583] = 2,
    ACTIONS(219), 1,
      sym_selector_key,
    ACTIONS(217), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1594] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      sym_selector_key,
    ACTIONS(300), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1607] = 4,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_string_token1,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1621] = 3,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1633] = 2,
    ACTIONS(318), 1,
      sym_selector_key,
    ACTIONS(316), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1643] = 2,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(320), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1653] = 4,
    ACTIONS(308), 1,
      aux_sym_string_token1,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1667] = 4,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_string_token1,
    STATE(80), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1681] = 4,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
    STATE(86), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1695] = 4,
    ACTIONS(122), 1,
      aux_sym_number_token1,
    ACTIONS(290), 1,
      sym_selector_key,
    STATE(105), 1,
      sym_number,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1709] = 3,
    ACTIONS(338), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      aux_sym_path_repeat1,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1721] = 4,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      aux_sym_string_token1,
    STATE(91), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1735] = 4,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym_string_token1,
    STATE(84), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1749] = 4,
    ACTIONS(308), 1,
      aux_sym_string_token1,
    ACTIONS(310), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1763] = 4,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1777] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      sym_comment,
    STATE(86), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1791] = 3,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      aux_sym_path_repeat1,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1803] = 4,
    ACTIONS(365), 1,
      aux_sym_number_token1,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    STATE(22), 1,
      sym_coordinate,
    STATE(24), 1,
      sym_number,
  [1816] = 4,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 1,
      sym_selector_key,
    STATE(101), 1,
      aux_sym_selector_repeat1,
    STATE(104), 1,
      sym_selector_option,
  [1829] = 1,
    ACTIONS(373), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1836] = 2,
    ACTIONS(375), 1,
      anon_sym_DOT_DOT,
    ACTIONS(191), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1845] = 1,
    ACTIONS(118), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
  [1852] = 4,
    ACTIONS(377), 1,
      aux_sym_number_token1,
    ACTIONS(379), 1,
      anon_sym_TILDE,
    STATE(32), 1,
      sym_coordinate,
    STATE(36), 1,
      sym_number,
  [1865] = 4,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(383), 1,
      sym_selector_key,
    STATE(101), 1,
      aux_sym_selector_repeat1,
    STATE(104), 1,
      sym_selector_option,
  [1878] = 4,
    ACTIONS(371), 1,
      sym_selector_key,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_selector_repeat1,
    STATE(104), 1,
      sym_selector_option,
  [1891] = 1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_SLASH,
  [1898] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1906] = 1,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1912] = 1,
    ACTIONS(392), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1918] = 1,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1924] = 1,
    ACTIONS(396), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1930] = 1,
    ACTIONS(398), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1936] = 1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1942] = 1,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1948] = 1,
    ACTIONS(400), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1954] = 1,
    ACTIONS(402), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1960] = 1,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1966] = 2,
    ACTIONS(288), 1,
      aux_sym_number_token1,
    STATE(74), 1,
      sym_number,
  [1973] = 2,
    ACTIONS(122), 1,
      aux_sym_number_token1,
    STATE(114), 1,
      sym_number,
  [1980] = 2,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
  [1987] = 1,
    ACTIONS(381), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1992] = 2,
    ACTIONS(404), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_path_repeat1,
  [1999] = 1,
    ACTIONS(406), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2004] = 1,
    ACTIONS(408), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2009] = 1,
    ACTIONS(410), 1,
      sym_selector_key,
  [2013] = 1,
    ACTIONS(412), 1,
      anon_sym_,
  [2017] = 1,
    ACTIONS(414), 1,
      sym_selector_key,
  [2021] = 1,
    ACTIONS(416), 1,
      anon_sym_EQ,
  [2025] = 1,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
  [2029] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2033] = 1,
    ACTIONS(215), 1,
      anon_sym_,
  [2037] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 289,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 367,
  [SMALL_STATE(11)] = 406,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 542,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 598,
  [SMALL_STATE(18)] = 621,
  [SMALL_STATE(19)] = 644,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 696,
  [SMALL_STATE(23)] = 714,
  [SMALL_STATE(24)] = 734,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 770,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 804,
  [SMALL_STATE(29)] = 821,
  [SMALL_STATE(30)] = 838,
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
  [SMALL_STATE(41)] = 1029,
  [SMALL_STATE(42)] = 1042,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1070,
  [SMALL_STATE(45)] = 1085,
  [SMALL_STATE(46)] = 1111,
  [SMALL_STATE(47)] = 1137,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1186,
  [SMALL_STATE(50)] = 1209,
  [SMALL_STATE(51)] = 1220,
  [SMALL_STATE(52)] = 1231,
  [SMALL_STATE(53)] = 1254,
  [SMALL_STATE(54)] = 1267,
  [SMALL_STATE(55)] = 1290,
  [SMALL_STATE(56)] = 1301,
  [SMALL_STATE(57)] = 1312,
  [SMALL_STATE(58)] = 1335,
  [SMALL_STATE(59)] = 1346,
  [SMALL_STATE(60)] = 1369,
  [SMALL_STATE(61)] = 1392,
  [SMALL_STATE(62)] = 1403,
  [SMALL_STATE(63)] = 1414,
  [SMALL_STATE(64)] = 1425,
  [SMALL_STATE(65)] = 1435,
  [SMALL_STATE(66)] = 1451,
  [SMALL_STATE(67)] = 1462,
  [SMALL_STATE(68)] = 1473,
  [SMALL_STATE(69)] = 1484,
  [SMALL_STATE(70)] = 1495,
  [SMALL_STATE(71)] = 1506,
  [SMALL_STATE(72)] = 1517,
  [SMALL_STATE(73)] = 1528,
  [SMALL_STATE(74)] = 1539,
  [SMALL_STATE(75)] = 1550,
  [SMALL_STATE(76)] = 1561,
  [SMALL_STATE(77)] = 1572,
  [SMALL_STATE(78)] = 1583,
  [SMALL_STATE(79)] = 1594,
  [SMALL_STATE(80)] = 1607,
  [SMALL_STATE(81)] = 1621,
  [SMALL_STATE(82)] = 1633,
  [SMALL_STATE(83)] = 1643,
  [SMALL_STATE(84)] = 1653,
  [SMALL_STATE(85)] = 1667,
  [SMALL_STATE(86)] = 1681,
  [SMALL_STATE(87)] = 1695,
  [SMALL_STATE(88)] = 1709,
  [SMALL_STATE(89)] = 1721,
  [SMALL_STATE(90)] = 1735,
  [SMALL_STATE(91)] = 1749,
  [SMALL_STATE(92)] = 1763,
  [SMALL_STATE(93)] = 1777,
  [SMALL_STATE(94)] = 1791,
  [SMALL_STATE(95)] = 1803,
  [SMALL_STATE(96)] = 1816,
  [SMALL_STATE(97)] = 1829,
  [SMALL_STATE(98)] = 1836,
  [SMALL_STATE(99)] = 1845,
  [SMALL_STATE(100)] = 1852,
  [SMALL_STATE(101)] = 1865,
  [SMALL_STATE(102)] = 1878,
  [SMALL_STATE(103)] = 1891,
  [SMALL_STATE(104)] = 1898,
  [SMALL_STATE(105)] = 1906,
  [SMALL_STATE(106)] = 1912,
  [SMALL_STATE(107)] = 1918,
  [SMALL_STATE(108)] = 1924,
  [SMALL_STATE(109)] = 1930,
  [SMALL_STATE(110)] = 1936,
  [SMALL_STATE(111)] = 1942,
  [SMALL_STATE(112)] = 1948,
  [SMALL_STATE(113)] = 1954,
  [SMALL_STATE(114)] = 1960,
  [SMALL_STATE(115)] = 1966,
  [SMALL_STATE(116)] = 1973,
  [SMALL_STATE(117)] = 1980,
  [SMALL_STATE(118)] = 1987,
  [SMALL_STATE(119)] = 1992,
  [SMALL_STATE(120)] = 1999,
  [SMALL_STATE(121)] = 2004,
  [SMALL_STATE(122)] = 2009,
  [SMALL_STATE(123)] = 2013,
  [SMALL_STATE(124)] = 2017,
  [SMALL_STATE(125)] = 2021,
  [SMALL_STATE(126)] = 2025,
  [SMALL_STATE(127)] = 2029,
  [SMALL_STATE(128)] = 2033,
  [SMALL_STATE(129)] = 2037,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(90),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(124),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(13),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(58),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(48),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(18),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(120),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(13),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(85),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(121),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(120),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(13),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(85),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(86),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(92),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(94),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(125),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
