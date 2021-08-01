#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  sym_invalid_slash = 3,
  sym_identifier = 4,
  aux_sym_number_token1 = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  anon_sym_TILDE = 8,
  anon_sym_ = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_BSLASH = 12,
  aux_sym_selector_token1 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_EQ = 17,
  aux_sym_selector_key_token1 = 18,
  aux_sym_selector_number_token1 = 19,
  aux_sym_selector_number_token2 = 20,
  aux_sym_selector_number_token3 = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_COLON = 24,
  sym__namespace = 25,
  aux_sym_path_token1 = 26,
  aux_sym_path_token2 = 27,
  aux_sym_container_token1 = 28,
  anon_sym_LBRACK2 = 29,
  anon_sym_l = 30,
  anon_sym_s = 31,
  anon_sym_d = 32,
  anon_sym_f = 33,
  anon_sym_b = 34,
  sym_root = 35,
  sym_command = 36,
  sym_number = 37,
  sym_boolean = 38,
  sym_coordinate = 39,
  sym_rotation = 40,
  sym_location = 41,
  sym_string = 42,
  sym__escape_sequence = 43,
  sym_selector = 44,
  sym_selector_option_section = 45,
  sym_selector_option = 46,
  sym_selector_key = 47,
  sym_selector_value = 48,
  sym_selector_number = 49,
  sym_selector_object = 50,
  sym_item = 51,
  sym_path = 52,
  sym_container = 53,
  sym_nbt = 54,
  sym_nbt_object = 55,
  sym_nbt_array = 56,
  sym_nbt_object_key = 57,
  sym_nbt_object_value = 58,
  sym_nbt_number = 59,
  aux_sym_root_repeat1 = 60,
  aux_sym_command_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_selector_option_section_repeat1 = 63,
  aux_sym_selector_object_repeat1 = 64,
  aux_sym_path_repeat1 = 65,
  aux_sym_container_repeat1 = 66,
  aux_sym_nbt_object_repeat1 = 67,
  aux_sym_nbt_array_repeat1 = 68,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [sym_invalid_slash] = "invalid_slash",
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
  [aux_sym_selector_key_token1] = "selector_key_token1",
  [aux_sym_selector_number_token1] = "selector_number_token1",
  [aux_sym_selector_number_token2] = "selector_number_token2",
  [aux_sym_selector_number_token3] = "selector_number_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_container_token1] = "container_token1",
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
  [sym_selector_option_section] = "selector_option_section",
  [sym_selector_option] = "selector_option",
  [sym_selector_key] = "selector_key",
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
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
  [aux_sym_selector_object_repeat1] = "selector_object_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_container_repeat1] = "container_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LF] = anon_sym_LF,
  [sym_invalid_slash] = sym_invalid_slash,
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
  [aux_sym_selector_key_token1] = aux_sym_selector_key_token1,
  [aux_sym_selector_number_token1] = aux_sym_selector_number_token1,
  [aux_sym_selector_number_token2] = aux_sym_selector_number_token2,
  [aux_sym_selector_number_token3] = aux_sym_selector_number_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [aux_sym_container_token1] = aux_sym_container_token1,
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
  [sym_selector_option_section] = sym_selector_option_section,
  [sym_selector_option] = sym_selector_option,
  [sym_selector_key] = sym_selector_key,
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
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
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
  [sym_invalid_slash] = {
    .visible = true,
    .named = true,
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
  [aux_sym_selector_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_number_token3] = {
    .visible = false,
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
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_container_token1] = {
    .visible = false,
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
  [sym_selector_option_section] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_option] = {
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
  [aux_sym_selector_option_section_repeat1] = {
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
  field_invalid = 2,
  field_nbt_number_suffix = 3,
  field_x = 4,
  field_y = 5,
  field_z = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_command_name] = "command_name",
  [field_invalid] = "invalid",
  [field_nbt_number_suffix] = "nbt_number_suffix",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[10] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_invalid, 0},
  [1] =
    {field_command_name, 0},
  [2] =
    {field_command_name, 1},
  [3] =
    {field_command_name, 0},
    {field_invalid, 1, .inherited = true},
  [5] =
    {field_invalid, 0, .inherited = true},
    {field_invalid, 1, .inherited = true},
  [7] =
    {field_command_name, 1},
    {field_invalid, 2, .inherited = true},
  [9] =
    {field_nbt_number_suffix, 1},
  [10] =
    {field_x, 0},
    {field_y, 2},
  [12] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
};

static TSSymbol ts_alias_sequences[10][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_invalid_slash);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_container_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_invalid_slash] = ACTIONS(1),
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
    [aux_sym_selector_key_token1] = ACTIONS(1),
    [aux_sym_selector_number_token1] = ACTIONS(1),
    [aux_sym_selector_number_token2] = ACTIONS(1),
    [aux_sym_selector_number_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_container_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(131),
    [sym_command] = STATE(77),
    [aux_sym_root_repeat1] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_invalid_slash] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym_number_token1,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_selector_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [62] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_number_token1,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_selector_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(2), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [124] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym_number_token1,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_selector_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [186] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_number_token1,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_selector_token1,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACK2,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
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
  [248] = 17,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(59), 1,
      anon_sym_TILDE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      aux_sym_selector_token1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      sym__namespace,
    ACTIONS(74), 1,
      aux_sym_path_token1,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [310] = 11,
    ACTIONS(80), 1,
      aux_sym_number_token1,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_selector_number_token3,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_LBRACK2,
    STATE(47), 1,
      sym_number,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(78), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(80), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(76), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [351] = 6,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      aux_sym_path_token2,
    ACTIONS(100), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    STATE(20), 1,
      aux_sym_container_repeat1,
    ACTIONS(94), 12,
      sym_comment,
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
  [381] = 12,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      aux_sym_selector_key_token1,
    ACTIONS(110), 1,
      aux_sym_selector_number_token3,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym__namespace,
    ACTIONS(116), 1,
      aux_sym_path_token1,
    STATE(99), 1,
      sym_item,
    STATE(111), 1,
      sym_number,
    STATE(114), 1,
      sym_selector_value,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(113), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [423] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    STATE(14), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [462] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [501] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [540] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [579] = 11,
    ACTIONS(136), 1,
      aux_sym_number_token1,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LBRACK2,
    STATE(14), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [618] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [657] = 11,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(39), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [696] = 4,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_selector_option_section,
    ACTIONS(157), 12,
      sym_comment,
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
  [720] = 4,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      aux_sym_path_token2,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(163), 12,
      sym_comment,
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
  [744] = 2,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(169), 14,
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
  [764] = 4,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      aux_sym_container_token1,
    STATE(22), 1,
      aux_sym_container_repeat1,
    ACTIONS(173), 12,
      sym_comment,
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
  [788] = 4,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      aux_sym_path_token2,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(179), 12,
      sym_comment,
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
  [812] = 4,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      aux_sym_container_token1,
    STATE(22), 1,
      aux_sym_container_repeat1,
    ACTIONS(186), 12,
      sym_comment,
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
  [836] = 2,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(193), 14,
      sym_comment,
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
      aux_sym_path_token2,
      aux_sym_container_token1,
      anon_sym_LBRACK2,
  [856] = 9,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_LBRACK2,
    ACTIONS(197), 1,
      aux_sym_number_token1,
    STATE(51), 1,
      sym_number,
    STATE(86), 1,
      sym_nbt_object_value,
    ACTIONS(82), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(76), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [889] = 2,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(199), 13,
      sym_comment,
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
  [908] = 2,
    ACTIONS(169), 1,
      anon_sym_,
    ACTIONS(171), 13,
      sym_comment,
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
  [927] = 2,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(199), 13,
      sym_comment,
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
  [946] = 2,
    ACTIONS(203), 1,
      anon_sym_,
    ACTIONS(94), 13,
      sym_comment,
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
  [965] = 2,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(205), 13,
      sym_comment,
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
  [984] = 2,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(209), 12,
      sym_comment,
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
  [1002] = 2,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(213), 12,
      sym_comment,
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
  [1020] = 2,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(217), 12,
      sym_comment,
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
  [1038] = 2,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(221), 12,
      sym_comment,
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
  [1056] = 2,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(225), 12,
      sym_comment,
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
  [1074] = 2,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(229), 12,
      sym_comment,
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
  [1092] = 2,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(233), 12,
      sym_comment,
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
  [1110] = 2,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(237), 12,
      sym_comment,
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
  [1128] = 2,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(241), 12,
      sym_comment,
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
  [1146] = 3,
    ACTIONS(249), 1,
      anon_sym_f,
    ACTIONS(247), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(245), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1166] = 2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(251), 12,
      sym_comment,
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
  [1184] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(255), 12,
      sym_comment,
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
  [1202] = 2,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(199), 12,
      sym_comment,
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
  [1220] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(259), 12,
      sym_comment,
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
  [1238] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 12,
      sym_comment,
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
  [1256] = 2,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(263), 12,
      sym_comment,
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
  [1274] = 2,
    ACTIONS(169), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(171), 6,
      aux_sym_selector_key_token1,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1290] = 3,
    ACTIONS(269), 1,
      aux_sym_selector_key_token1,
    ACTIONS(267), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(271), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1308] = 1,
    ACTIONS(211), 10,
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
  [1321] = 2,
    ACTIONS(169), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(171), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1336] = 8,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 1,
      aux_sym_selector_key_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_selector_object_repeat1,
    STATE(120), 2,
      sym_number,
      sym_string,
    STATE(121), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [1363] = 2,
    ACTIONS(245), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(271), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1378] = 1,
    ACTIONS(215), 10,
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
  [1391] = 8,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 1,
      aux_sym_selector_key_token1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_object_repeat1,
    STATE(120), 2,
      sym_number,
      sym_string,
    STATE(121), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [1418] = 8,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(284), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_selector_key_token1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_object_repeat1,
    STATE(120), 2,
      sym_number,
      sym_string,
    STATE(121), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [1445] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1468] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1491] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1514] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1537] = 1,
    ACTIONS(257), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1548] = 1,
    ACTIONS(265), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1559] = 2,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(303), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1572] = 1,
    ACTIONS(253), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1583] = 7,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(310), 1,
      aux_sym_number_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1606] = 1,
    ACTIONS(318), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1617] = 1,
    ACTIONS(320), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1628] = 1,
    ACTIONS(219), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1639] = 1,
    ACTIONS(243), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1650] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1673] = 1,
    ACTIONS(261), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1684] = 7,
    ACTIONS(118), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_nbt_object_repeat1,
    STATE(129), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1707] = 1,
    ACTIONS(145), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1717] = 2,
    ACTIONS(217), 1,
      aux_sym_selector_key_token1,
    ACTIONS(219), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1728] = 2,
    ACTIONS(269), 1,
      aux_sym_selector_key_token1,
    ACTIONS(267), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1739] = 2,
    ACTIONS(326), 1,
      aux_sym_selector_key_token1,
    ACTIONS(318), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1750] = 2,
    ACTIONS(263), 1,
      aux_sym_selector_key_token1,
    ACTIONS(265), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1761] = 2,
    ACTIONS(328), 1,
      aux_sym_selector_key_token1,
    ACTIONS(320), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1772] = 5,
    ACTIONS(7), 1,
      sym_invalid_slash,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      sym_comment,
    STATE(83), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1789] = 2,
    ACTIONS(251), 1,
      aux_sym_selector_key_token1,
    ACTIONS(253), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1800] = 2,
    ACTIONS(213), 1,
      aux_sym_selector_key_token1,
    ACTIONS(215), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1811] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      aux_sym_selector_key_token1,
    ACTIONS(334), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1824] = 2,
    ACTIONS(241), 1,
      aux_sym_selector_key_token1,
    ACTIONS(243), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1835] = 2,
    ACTIONS(209), 1,
      aux_sym_selector_key_token1,
    ACTIONS(211), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1846] = 5,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_invalid_slash,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(83), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1863] = 2,
    ACTIONS(255), 1,
      aux_sym_selector_key_token1,
    ACTIONS(257), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1874] = 2,
    ACTIONS(259), 1,
      aux_sym_selector_key_token1,
    ACTIONS(261), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1885] = 2,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(351), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1895] = 3,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    STATE(87), 1,
      aux_sym_path_repeat1,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [1907] = 2,
    ACTIONS(360), 1,
      aux_sym_selector_key_token1,
    ACTIONS(358), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1917] = 4,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_string_token1,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    STATE(94), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1931] = 4,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_string_token1,
    STATE(89), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1945] = 4,
    ACTIONS(364), 1,
      aux_sym_string_token1,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(94), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1959] = 4,
    ACTIONS(364), 1,
      aux_sym_string_token1,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    STATE(94), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1973] = 4,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      aux_sym_string_token1,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1987] = 4,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      aux_sym_string_token1,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(94), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2001] = 4,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      aux_sym_string_token1,
    STATE(91), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2015] = 3,
    ACTIONS(392), 1,
      aux_sym_path_token2,
    STATE(87), 1,
      aux_sym_path_repeat1,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2027] = 5,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    ACTIONS(396), 1,
      aux_sym_selector_key_token1,
    STATE(98), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(116), 1,
      sym_selector_option,
    STATE(127), 1,
      sym_selector_key,
  [2043] = 5,
    ACTIONS(396), 1,
      aux_sym_selector_key_token1,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(116), 1,
      sym_selector_option,
    STATE(127), 1,
      sym_selector_key,
  [2059] = 3,
    ACTIONS(402), 1,
      aux_sym_path_token2,
    STATE(96), 1,
      aux_sym_path_repeat1,
    ACTIONS(400), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2071] = 5,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    ACTIONS(406), 1,
      aux_sym_selector_key_token1,
    STATE(100), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(116), 1,
      sym_selector_option,
    STATE(127), 1,
      sym_selector_key,
  [2087] = 1,
    ACTIONS(409), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2094] = 4,
    ACTIONS(411), 1,
      aux_sym_number_token1,
    ACTIONS(413), 1,
      anon_sym_TILDE,
    STATE(25), 1,
      sym_number,
    STATE(29), 1,
      sym_coordinate,
  [2107] = 1,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_invalid_slash,
      sym_identifier,
  [2114] = 4,
    ACTIONS(417), 1,
      aux_sym_number_token1,
    ACTIONS(419), 1,
      anon_sym_TILDE,
    STATE(34), 1,
      sym_coordinate,
    STATE(42), 1,
      sym_number,
  [2127] = 1,
    ACTIONS(421), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_invalid_slash,
      sym_identifier,
  [2134] = 1,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_invalid_slash,
      sym_identifier,
  [2141] = 4,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    STATE(20), 1,
      aux_sym_container_repeat1,
  [2154] = 1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_invalid_slash,
      sym_identifier,
  [2161] = 1,
    ACTIONS(195), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
      aux_sym_path_token2,
  [2168] = 1,
    ACTIONS(431), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [2174] = 1,
    ACTIONS(267), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2180] = 1,
    ACTIONS(267), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2186] = 1,
    ACTIONS(400), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2192] = 1,
    ACTIONS(433), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2198] = 1,
    ACTIONS(435), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2204] = 2,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2212] = 1,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2218] = 1,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2224] = 1,
    ACTIONS(441), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2230] = 1,
    ACTIONS(443), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2235] = 1,
    ACTIONS(445), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2240] = 1,
    ACTIONS(447), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2245] = 2,
    ACTIONS(402), 1,
      aux_sym_path_token2,
    STATE(96), 1,
      aux_sym_path_repeat1,
  [2252] = 1,
    ACTIONS(404), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2257] = 1,
    ACTIONS(449), 1,
      aux_sym_selector_key_token1,
  [2261] = 1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
  [2265] = 1,
    ACTIONS(453), 1,
      anon_sym_EQ,
  [2269] = 1,
    ACTIONS(455), 1,
      sym_identifier,
  [2273] = 1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [2277] = 1,
    ACTIONS(459), 1,
      aux_sym_selector_key_token1,
  [2281] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 381,
  [SMALL_STATE(10)] = 423,
  [SMALL_STATE(11)] = 462,
  [SMALL_STATE(12)] = 501,
  [SMALL_STATE(13)] = 540,
  [SMALL_STATE(14)] = 579,
  [SMALL_STATE(15)] = 618,
  [SMALL_STATE(16)] = 657,
  [SMALL_STATE(17)] = 696,
  [SMALL_STATE(18)] = 720,
  [SMALL_STATE(19)] = 744,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 836,
  [SMALL_STATE(24)] = 856,
  [SMALL_STATE(25)] = 889,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 927,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 965,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1002,
  [SMALL_STATE(32)] = 1020,
  [SMALL_STATE(33)] = 1038,
  [SMALL_STATE(34)] = 1056,
  [SMALL_STATE(35)] = 1074,
  [SMALL_STATE(36)] = 1092,
  [SMALL_STATE(37)] = 1110,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1146,
  [SMALL_STATE(40)] = 1166,
  [SMALL_STATE(41)] = 1184,
  [SMALL_STATE(42)] = 1202,
  [SMALL_STATE(43)] = 1220,
  [SMALL_STATE(44)] = 1238,
  [SMALL_STATE(45)] = 1256,
  [SMALL_STATE(46)] = 1274,
  [SMALL_STATE(47)] = 1290,
  [SMALL_STATE(48)] = 1308,
  [SMALL_STATE(49)] = 1321,
  [SMALL_STATE(50)] = 1336,
  [SMALL_STATE(51)] = 1363,
  [SMALL_STATE(52)] = 1378,
  [SMALL_STATE(53)] = 1391,
  [SMALL_STATE(54)] = 1418,
  [SMALL_STATE(55)] = 1445,
  [SMALL_STATE(56)] = 1468,
  [SMALL_STATE(57)] = 1491,
  [SMALL_STATE(58)] = 1514,
  [SMALL_STATE(59)] = 1537,
  [SMALL_STATE(60)] = 1548,
  [SMALL_STATE(61)] = 1559,
  [SMALL_STATE(62)] = 1572,
  [SMALL_STATE(63)] = 1583,
  [SMALL_STATE(64)] = 1606,
  [SMALL_STATE(65)] = 1617,
  [SMALL_STATE(66)] = 1628,
  [SMALL_STATE(67)] = 1639,
  [SMALL_STATE(68)] = 1650,
  [SMALL_STATE(69)] = 1673,
  [SMALL_STATE(70)] = 1684,
  [SMALL_STATE(71)] = 1707,
  [SMALL_STATE(72)] = 1717,
  [SMALL_STATE(73)] = 1728,
  [SMALL_STATE(74)] = 1739,
  [SMALL_STATE(75)] = 1750,
  [SMALL_STATE(76)] = 1761,
  [SMALL_STATE(77)] = 1772,
  [SMALL_STATE(78)] = 1789,
  [SMALL_STATE(79)] = 1800,
  [SMALL_STATE(80)] = 1811,
  [SMALL_STATE(81)] = 1824,
  [SMALL_STATE(82)] = 1835,
  [SMALL_STATE(83)] = 1846,
  [SMALL_STATE(84)] = 1863,
  [SMALL_STATE(85)] = 1874,
  [SMALL_STATE(86)] = 1885,
  [SMALL_STATE(87)] = 1895,
  [SMALL_STATE(88)] = 1907,
  [SMALL_STATE(89)] = 1917,
  [SMALL_STATE(90)] = 1931,
  [SMALL_STATE(91)] = 1945,
  [SMALL_STATE(92)] = 1959,
  [SMALL_STATE(93)] = 1973,
  [SMALL_STATE(94)] = 1987,
  [SMALL_STATE(95)] = 2001,
  [SMALL_STATE(96)] = 2015,
  [SMALL_STATE(97)] = 2027,
  [SMALL_STATE(98)] = 2043,
  [SMALL_STATE(99)] = 2059,
  [SMALL_STATE(100)] = 2071,
  [SMALL_STATE(101)] = 2087,
  [SMALL_STATE(102)] = 2094,
  [SMALL_STATE(103)] = 2107,
  [SMALL_STATE(104)] = 2114,
  [SMALL_STATE(105)] = 2127,
  [SMALL_STATE(106)] = 2134,
  [SMALL_STATE(107)] = 2141,
  [SMALL_STATE(108)] = 2154,
  [SMALL_STATE(109)] = 2161,
  [SMALL_STATE(110)] = 2168,
  [SMALL_STATE(111)] = 2174,
  [SMALL_STATE(112)] = 2180,
  [SMALL_STATE(113)] = 2186,
  [SMALL_STATE(114)] = 2192,
  [SMALL_STATE(115)] = 2198,
  [SMALL_STATE(116)] = 2204,
  [SMALL_STATE(117)] = 2212,
  [SMALL_STATE(118)] = 2218,
  [SMALL_STATE(119)] = 2224,
  [SMALL_STATE(120)] = 2230,
  [SMALL_STATE(121)] = 2235,
  [SMALL_STATE(122)] = 2240,
  [SMALL_STATE(123)] = 2245,
  [SMALL_STATE(124)] = 2252,
  [SMALL_STATE(125)] = 2257,
  [SMALL_STATE(126)] = 2261,
  [SMALL_STATE(127)] = 2265,
  [SMALL_STATE(128)] = 2269,
  [SMALL_STATE(129)] = 2273,
  [SMALL_STATE(130)] = 2277,
  [SMALL_STATE(131)] = 2281,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(26),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(45),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(25),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(93),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(17),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(58),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(130),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(107),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(19),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(95),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(57),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(22),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(120),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(19),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(95),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(122),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(120),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(19),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(95),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(83),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(128),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(87),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(94),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(122),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mcfunction(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
