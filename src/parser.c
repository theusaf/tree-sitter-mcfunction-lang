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
#define TOKEN_COUNT 32
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
  anon_sym_DOT = 25,
  anon_sym_LBRACK2 = 26,
  anon_sym_l = 27,
  anon_sym_s = 28,
  anon_sym_d = 29,
  anon_sym_f = 30,
  anon_sym_b = 31,
  sym_root = 32,
  sym_command = 33,
  sym_number = 34,
  sym_boolean = 35,
  sym_coordinate = 36,
  sym_rotation = 37,
  sym_location = 38,
  sym_string = 39,
  sym__escape_sequence = 40,
  sym_selector = 41,
  sym_selector_option = 42,
  sym_selector_value = 43,
  sym_selector_number = 44,
  sym_selector_object = 45,
  sym_item = 46,
  sym_path = 47,
  sym_container = 48,
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
  aux_sym_container_repeat1 = 61,
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
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
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
  [sym_container] = "container",
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
  [aux_sym_container_repeat1] = "container_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_container] = sym_container,
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
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
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
  [anon_sym_DOT] = {
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
  [sym_container] = {
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
  [aux_sym_container_repeat1] = {
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
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
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
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
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
      if (lookahead == '[') ADVANCE(93);
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
      if (lookahead == '[') ADVANCE(93);
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
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
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
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 's') ADVANCE(99);
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
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
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
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 109:
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 7},
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
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 11},
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
    [sym_selector_key] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(131),
    [sym_command] = STATE(84),
    [aux_sym_root_repeat1] = STATE(84),
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
    STATE(11), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(129), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [59] = 16,
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
    STATE(11), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(129), 1,
      sym_coordinate,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [118] = 16,
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
    STATE(11), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(129), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [177] = 11,
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
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [216] = 11,
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
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [255] = 10,
    ACTIONS(81), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOT_DOT,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK2,
    STATE(36), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(74), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(70), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [292] = 11,
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
    STATE(6), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [331] = 11,
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
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [370] = 11,
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
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [409] = 6,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_path_repeat1,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(101), 11,
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
  [438] = 11,
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
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(110), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [477] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [516] = 2,
    ACTIONS(128), 1,
      anon_sym_f,
    ACTIONS(126), 14,
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
  [536] = 11,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    ACTIONS(134), 1,
      sym_selector_key,
    ACTIONS(136), 1,
      anon_sym_DOT_DOT,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym__namespace,
    ACTIONS(142), 1,
      aux_sym_path_token1,
    STATE(96), 1,
      sym_item,
    STATE(99), 1,
      sym_number,
    STATE(116), 1,
      sym_selector_value,
    ACTIONS(132), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [574] = 4,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_container_repeat1,
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
  [597] = 4,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_path_repeat1,
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
  [620] = 9,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK2,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(44), 1,
      sym_number,
    STATE(86), 1,
      sym_nbt_object_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(70), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [653] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 13,
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
      anon_sym_DOT,
      anon_sym_LBRACK2,
  [672] = 4,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(166), 11,
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
  [695] = 4,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_container_repeat1,
    ACTIONS(172), 11,
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
  [718] = 2,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(101), 12,
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
  [736] = 1,
    ACTIONS(128), 13,
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
  [752] = 2,
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
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [770] = 3,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 11,
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
  [790] = 1,
    ACTIONS(176), 13,
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
  [806] = 3,
    ACTIONS(192), 1,
      anon_sym_f,
    ACTIONS(190), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(188), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [826] = 2,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 11,
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
  [843] = 2,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 11,
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
  [860] = 2,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 11,
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
  [877] = 2,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 11,
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
  [894] = 2,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 11,
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
  [911] = 2,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 11,
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
  [928] = 2,
    ACTIONS(126), 6,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
    ACTIONS(128), 6,
      sym_selector_key,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [945] = 2,
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
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [962] = 4,
    ACTIONS(224), 1,
      sym_selector_key,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(222), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(228), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [983] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 11,
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
  [1000] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 11,
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
  [1017] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(176), 11,
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
  [1034] = 2,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 11,
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
  [1051] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 11,
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
  [1068] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 11,
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
  [1085] = 1,
    ACTIONS(236), 10,
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
  [1098] = 2,
    ACTIONS(188), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(228), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1113] = 1,
    ACTIONS(218), 10,
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
  [1126] = 2,
    ACTIONS(126), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(128), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1141] = 8,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      sym_selector_key,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_selector_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1167] = 8,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      sym_selector_key,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1193] = 8,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym_selector_key,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1219] = 1,
    ACTIONS(198), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1230] = 7,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(273), 1,
      aux_sym_number_token1,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1253] = 1,
    ACTIONS(281), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1264] = 1,
    ACTIONS(244), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1275] = 1,
    ACTIONS(202), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1286] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1309] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1332] = 1,
    ACTIONS(194), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1343] = 1,
    ACTIONS(214), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1354] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1377] = 1,
    ACTIONS(210), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1388] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1411] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1434] = 2,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(293), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1447] = 1,
    ACTIONS(297), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1458] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_nbt_object_repeat1,
    STATE(127), 1,
      sym_nbt_object_key,
    STATE(121), 2,
      sym_number,
      sym_string,
  [1481] = 1,
    ACTIONS(116), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1491] = 4,
    ACTIONS(303), 1,
      aux_sym_number_token1,
    ACTIONS(305), 1,
      sym_selector_key,
    STATE(72), 1,
      sym_number,
    ACTIONS(301), 4,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1507] = 2,
    ACTIONS(307), 1,
      sym_selector_key,
    ACTIONS(281), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1518] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      sym_selector_key,
    ACTIONS(309), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1531] = 2,
    ACTIONS(315), 1,
      sym_selector_key,
    ACTIONS(297), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1542] = 2,
    ACTIONS(305), 1,
      sym_selector_key,
    ACTIONS(301), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1553] = 2,
    ACTIONS(319), 1,
      sym_selector_key,
    ACTIONS(317), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1564] = 2,
    ACTIONS(212), 1,
      sym_selector_key,
    ACTIONS(210), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1575] = 2,
    ACTIONS(196), 1,
      sym_selector_key,
    ACTIONS(194), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1586] = 2,
    ACTIONS(220), 1,
      sym_selector_key,
    ACTIONS(218), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1597] = 2,
    ACTIONS(204), 1,
      sym_selector_key,
    ACTIONS(202), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1608] = 2,
    ACTIONS(216), 1,
      sym_selector_key,
    ACTIONS(214), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1619] = 2,
    ACTIONS(128), 1,
      sym_selector_key,
    ACTIONS(126), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1630] = 2,
    ACTIONS(238), 1,
      sym_selector_key,
    ACTIONS(236), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1641] = 2,
    ACTIONS(246), 1,
      sym_selector_key,
    ACTIONS(244), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1652] = 2,
    ACTIONS(200), 1,
      sym_selector_key,
    ACTIONS(198), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1663] = 4,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    ACTIONS(305), 1,
      sym_selector_key,
    STATE(110), 1,
      sym_number,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1677] = 2,
    ACTIONS(323), 1,
      sym_selector_key,
    ACTIONS(321), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1687] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      sym_comment,
    STATE(89), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1701] = 4,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_string_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1715] = 2,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(335), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1725] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(90), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1739] = 3,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1751] = 4,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(89), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1765] = 4,
    ACTIONS(331), 1,
      aux_sym_string_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1779] = 3,
    ACTIONS(356), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(164), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1791] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      aux_sym_string_token1,
    STATE(94), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1805] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_string_token1,
    STATE(85), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1819] = 4,
    ACTIONS(331), 1,
      aux_sym_string_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1833] = 4,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_string_token1,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1847] = 3,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(376), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1859] = 4,
    ACTIONS(380), 1,
      aux_sym_number_token1,
    ACTIONS(382), 1,
      anon_sym_TILDE,
    STATE(24), 1,
      sym_coordinate,
    STATE(26), 1,
      sym_number,
  [1872] = 4,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 1,
      sym_selector_key,
    STATE(104), 1,
      aux_sym_selector_repeat1,
    STATE(108), 1,
      sym_selector_option,
  [1885] = 2,
    ACTIONS(388), 1,
      anon_sym_DOT_DOT,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1894] = 4,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_path_repeat1,
    STATE(21), 1,
      aux_sym_container_repeat1,
  [1907] = 1,
    ACTIONS(126), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
  [1914] = 1,
    ACTIONS(394), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1921] = 4,
    ACTIONS(396), 1,
      aux_sym_number_token1,
    ACTIONS(398), 1,
      anon_sym_TILDE,
    STATE(31), 1,
      sym_coordinate,
    STATE(39), 1,
      sym_number,
  [1934] = 4,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    ACTIONS(402), 1,
      sym_selector_key,
    STATE(104), 1,
      aux_sym_selector_repeat1,
    STATE(108), 1,
      sym_selector_option,
  [1947] = 4,
    ACTIONS(386), 1,
      sym_selector_key,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_selector_repeat1,
    STATE(108), 1,
      sym_selector_option,
  [1960] = 1,
    ACTIONS(160), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_SLASH,
  [1967] = 1,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1973] = 2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1981] = 1,
    ACTIONS(376), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1987] = 1,
    ACTIONS(317), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1993] = 1,
    ACTIONS(411), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1999] = 1,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [2005] = 1,
    ACTIONS(415), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2011] = 1,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [2017] = 1,
    ACTIONS(301), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2023] = 1,
    ACTIONS(419), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2029] = 1,
    ACTIONS(421), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2035] = 2,
    ACTIONS(303), 1,
      aux_sym_number_token1,
    STATE(71), 1,
      sym_number,
  [2042] = 1,
    ACTIONS(400), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [2047] = 2,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    STATE(115), 1,
      sym_number,
  [2054] = 1,
    ACTIONS(423), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2059] = 2,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      aux_sym_path_repeat1,
  [2066] = 1,
    ACTIONS(425), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2071] = 1,
    ACTIONS(427), 1,
      anon_sym_EQ,
  [2075] = 1,
    ACTIONS(429), 1,
      sym_selector_key,
  [2079] = 1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
  [2083] = 1,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [2087] = 1,
    ACTIONS(234), 1,
      anon_sym_,
  [2091] = 1,
    ACTIONS(435), 1,
      anon_sym_,
  [2095] = 1,
    ACTIONS(437), 1,
      sym_selector_key,
  [2099] = 1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 597,
  [SMALL_STATE(18)] = 620,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 718,
  [SMALL_STATE(23)] = 736,
  [SMALL_STATE(24)] = 752,
  [SMALL_STATE(25)] = 770,
  [SMALL_STATE(26)] = 790,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 826,
  [SMALL_STATE(29)] = 843,
  [SMALL_STATE(30)] = 860,
  [SMALL_STATE(31)] = 877,
  [SMALL_STATE(32)] = 894,
  [SMALL_STATE(33)] = 911,
  [SMALL_STATE(34)] = 928,
  [SMALL_STATE(35)] = 945,
  [SMALL_STATE(36)] = 962,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 1000,
  [SMALL_STATE(39)] = 1017,
  [SMALL_STATE(40)] = 1034,
  [SMALL_STATE(41)] = 1051,
  [SMALL_STATE(42)] = 1068,
  [SMALL_STATE(43)] = 1085,
  [SMALL_STATE(44)] = 1098,
  [SMALL_STATE(45)] = 1113,
  [SMALL_STATE(46)] = 1126,
  [SMALL_STATE(47)] = 1141,
  [SMALL_STATE(48)] = 1167,
  [SMALL_STATE(49)] = 1193,
  [SMALL_STATE(50)] = 1219,
  [SMALL_STATE(51)] = 1230,
  [SMALL_STATE(52)] = 1253,
  [SMALL_STATE(53)] = 1264,
  [SMALL_STATE(54)] = 1275,
  [SMALL_STATE(55)] = 1286,
  [SMALL_STATE(56)] = 1309,
  [SMALL_STATE(57)] = 1332,
  [SMALL_STATE(58)] = 1343,
  [SMALL_STATE(59)] = 1354,
  [SMALL_STATE(60)] = 1377,
  [SMALL_STATE(61)] = 1388,
  [SMALL_STATE(62)] = 1411,
  [SMALL_STATE(63)] = 1434,
  [SMALL_STATE(64)] = 1447,
  [SMALL_STATE(65)] = 1458,
  [SMALL_STATE(66)] = 1481,
  [SMALL_STATE(67)] = 1491,
  [SMALL_STATE(68)] = 1507,
  [SMALL_STATE(69)] = 1518,
  [SMALL_STATE(70)] = 1531,
  [SMALL_STATE(71)] = 1542,
  [SMALL_STATE(72)] = 1553,
  [SMALL_STATE(73)] = 1564,
  [SMALL_STATE(74)] = 1575,
  [SMALL_STATE(75)] = 1586,
  [SMALL_STATE(76)] = 1597,
  [SMALL_STATE(77)] = 1608,
  [SMALL_STATE(78)] = 1619,
  [SMALL_STATE(79)] = 1630,
  [SMALL_STATE(80)] = 1641,
  [SMALL_STATE(81)] = 1652,
  [SMALL_STATE(82)] = 1663,
  [SMALL_STATE(83)] = 1677,
  [SMALL_STATE(84)] = 1687,
  [SMALL_STATE(85)] = 1701,
  [SMALL_STATE(86)] = 1715,
  [SMALL_STATE(87)] = 1725,
  [SMALL_STATE(88)] = 1739,
  [SMALL_STATE(89)] = 1751,
  [SMALL_STATE(90)] = 1765,
  [SMALL_STATE(91)] = 1779,
  [SMALL_STATE(92)] = 1791,
  [SMALL_STATE(93)] = 1805,
  [SMALL_STATE(94)] = 1819,
  [SMALL_STATE(95)] = 1833,
  [SMALL_STATE(96)] = 1847,
  [SMALL_STATE(97)] = 1859,
  [SMALL_STATE(98)] = 1872,
  [SMALL_STATE(99)] = 1885,
  [SMALL_STATE(100)] = 1894,
  [SMALL_STATE(101)] = 1907,
  [SMALL_STATE(102)] = 1914,
  [SMALL_STATE(103)] = 1921,
  [SMALL_STATE(104)] = 1934,
  [SMALL_STATE(105)] = 1947,
  [SMALL_STATE(106)] = 1960,
  [SMALL_STATE(107)] = 1967,
  [SMALL_STATE(108)] = 1973,
  [SMALL_STATE(109)] = 1981,
  [SMALL_STATE(110)] = 1987,
  [SMALL_STATE(111)] = 1993,
  [SMALL_STATE(112)] = 1999,
  [SMALL_STATE(113)] = 2005,
  [SMALL_STATE(114)] = 2011,
  [SMALL_STATE(115)] = 2017,
  [SMALL_STATE(116)] = 2023,
  [SMALL_STATE(117)] = 2029,
  [SMALL_STATE(118)] = 2035,
  [SMALL_STATE(119)] = 2042,
  [SMALL_STATE(120)] = 2047,
  [SMALL_STATE(121)] = 2054,
  [SMALL_STATE(122)] = 2059,
  [SMALL_STATE(123)] = 2066,
  [SMALL_STATE(124)] = 2071,
  [SMALL_STATE(125)] = 2075,
  [SMALL_STATE(126)] = 2079,
  [SMALL_STATE(127)] = 2083,
  [SMALL_STATE(128)] = 2087,
  [SMALL_STATE(129)] = 2091,
  [SMALL_STATE(130)] = 2095,
  [SMALL_STATE(131)] = 2099,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(87),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(55),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(121),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(14),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(87),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(123),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(121),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(14),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(88),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(89),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(95),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(124),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [439] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
