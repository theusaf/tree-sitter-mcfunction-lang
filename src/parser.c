#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_comment = 1,
  anon_sym_SLASH = 2,
  anon_sym_LF = 3,
  aux_sym_command_name_token1 = 4,
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
  sym_invalid_comment = 37,
  sym_command_name = 38,
  sym_identifier = 39,
  sym_number = 40,
  sym_boolean = 41,
  sym_coordinate = 42,
  sym_rotation = 43,
  sym_location = 44,
  sym_string = 45,
  sym__escape_sequence = 46,
  sym_selector = 47,
  sym_selector_option_section = 48,
  sym_selector_option = 49,
  sym_selector_key = 50,
  sym_selector_value = 51,
  sym_selector_number = 52,
  sym_selector_object = 53,
  sym_item = 54,
  sym_path = 55,
  sym_container = 56,
  sym_nbt = 57,
  sym_nbt_object = 58,
  sym_nbt_array = 59,
  sym_nbt_object_key = 60,
  sym_nbt_object_value = 61,
  sym_nbt_number = 62,
  aux_sym_root_repeat1 = 63,
  aux_sym_command_repeat1 = 64,
  aux_sym_string_repeat1 = 65,
  aux_sym_selector_option_section_repeat1 = 66,
  aux_sym_selector_object_repeat1 = 67,
  aux_sym_path_repeat1 = 68,
  aux_sym_container_repeat1 = 69,
  aux_sym_nbt_object_repeat1 = 70,
  aux_sym_nbt_array_repeat1 = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [anon_sym_LF] = "\n",
  [aux_sym_command_name_token1] = "command_name_token1",
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
  [sym_invalid_comment] = "invalid_comment",
  [sym_command_name] = "command_name",
  [sym_identifier] = "identifier",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_command_name_token1] = aux_sym_command_name_token1,
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
  [sym_invalid_comment] = sym_invalid_comment,
  [sym_command_name] = sym_command_name,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_invalid_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  field_nbt_number_suffix = 1,
  field_x = 2,
  field_y = 3,
  field_z = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_nbt_number_suffix] = "nbt_number_suffix",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_nbt_number_suffix, 1},
  [1] =
    {field_x, 0},
    {field_y, 2},
  [3] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '/') ADVANCE(39);
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
      if (lookahead == '\n') ADVANCE(40);
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
      if (lookahead == '\n') ADVANCE(40);
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
      if (lookahead == '\n') ADVANCE(40);
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
      if (lookahead == '\n') ADVANCE(40);
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
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
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
      if (lookahead == '/') ADVANCE(39);
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
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
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
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
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
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_command_name_token1] = ACTIONS(1),
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
    [sym_command] = STATE(75),
    [sym_command_name] = STATE(5),
    [aux_sym_root_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [aux_sym_command_name_token1] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      aux_sym_command_name_token1,
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
    STATE(37), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 11,
      sym_invalid_comment,
      sym_identifier,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [64] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_command_name_token1,
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
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_identifier,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [128] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      aux_sym_command_name_token1,
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
    STATE(37), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_identifier,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [192] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_command_name_token1,
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
    ACTIONS(37), 1,
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
    STATE(37), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 11,
      sym_invalid_comment,
      sym_identifier,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [256] = 17,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      aux_sym_command_name_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      anon_sym_TILDE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym_selector_token1,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__namespace,
    ACTIONS(68), 1,
      aux_sym_path_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK2,
    STATE(8), 1,
      sym_item,
    STATE(27), 1,
      sym_number,
    STATE(28), 1,
      sym_coordinate,
    ACTIONS(50), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_identifier,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [320] = 11,
    ACTIONS(74), 1,
      aux_sym_number_token1,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_selector_number_token3,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    STATE(50), 1,
      sym_number,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(77), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(79), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(84), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [361] = 6,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      aux_sym_path_token2,
    ACTIONS(94), 1,
      aux_sym_container_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    STATE(22), 1,
      aux_sym_container_repeat1,
    ACTIONS(88), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [391] = 12,
    ACTIONS(96), 1,
      aux_sym_number_token1,
    ACTIONS(100), 1,
      aux_sym_selector_key_token1,
    ACTIONS(104), 1,
      aux_sym_selector_number_token3,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      sym__namespace,
    ACTIONS(110), 1,
      aux_sym_path_token1,
    STATE(91), 1,
      sym_item,
    STATE(112), 1,
      sym_number,
    STATE(113), 1,
      sym_selector_value,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(111), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [433] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    STATE(16), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [472] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [511] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [550] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [589] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [628] = 11,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [667] = 11,
    ACTIONS(134), 1,
      aux_sym_number_token1,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_LBRACK2,
    STATE(16), 1,
      aux_sym_nbt_array_repeat1,
    STATE(47), 1,
      sym_number,
    STATE(71), 1,
      sym_nbt_object_value,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(72), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [706] = 4,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_option_section,
    ACTIONS(151), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [730] = 2,
    ACTIONS(159), 1,
      anon_sym_f,
    ACTIONS(157), 14,
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
  [750] = 4,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      aux_sym_path_token2,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(161), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [774] = 2,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(168), 14,
      sym_comment,
      aux_sym_command_name_token1,
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
  [794] = 4,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      aux_sym_path_token2,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(172), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [818] = 4,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      aux_sym_container_token1,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(178), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [842] = 4,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      aux_sym_container_token1,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(184), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [866] = 2,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(159), 13,
      sym_comment,
      anon_sym_LF,
      aux_sym_command_name_token1,
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
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(191), 13,
      sym_comment,
      anon_sym_LF,
      aux_sym_command_name_token1,
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
  [904] = 2,
    ACTIONS(197), 1,
      anon_sym_,
    ACTIONS(195), 13,
      sym_comment,
      anon_sym_LF,
      aux_sym_command_name_token1,
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
  [923] = 2,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(191), 13,
      sym_comment,
      anon_sym_LF,
      aux_sym_command_name_token1,
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
  [942] = 2,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(88), 13,
      sym_comment,
      anon_sym_LF,
      aux_sym_command_name_token1,
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
  [961] = 9,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(55), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(84), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [994] = 2,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(203), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(207), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1030] = 2,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(211), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1048] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(215), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1066] = 2,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(219), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1084] = 2,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(223), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1102] = 2,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(227), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1120] = 2,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(231), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1138] = 2,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(191), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1156] = 2,
    ACTIONS(237), 1,
      anon_sym_LF,
    ACTIONS(235), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1174] = 2,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(239), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1192] = 2,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(243), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1210] = 2,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(247), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1228] = 2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(251), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1246] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(255), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1264] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(259), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1282] = 2,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 12,
      sym_comment,
      aux_sym_command_name_token1,
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
  [1300] = 3,
    ACTIONS(267), 1,
      anon_sym_f,
    ACTIONS(265), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(263), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1320] = 8,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(271), 1,
      aux_sym_selector_key_token1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_selector_object_repeat1,
    STATE(127), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1348] = 8,
    ACTIONS(275), 1,
      aux_sym_command_name_token1,
    ACTIONS(278), 1,
      aux_sym_number_token1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      aux_sym_selector_key_token1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(127), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1376] = 3,
    ACTIONS(291), 1,
      aux_sym_selector_key_token1,
    ACTIONS(289), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(293), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1394] = 2,
    ACTIONS(157), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(159), 6,
      aux_sym_selector_key_token1,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1410] = 8,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(271), 1,
      aux_sym_selector_key_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(127), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1438] = 2,
    ACTIONS(157), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(159), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1453] = 1,
    ACTIONS(245), 10,
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
  [1466] = 2,
    ACTIONS(263), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(293), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1481] = 1,
    ACTIONS(241), 10,
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
  [1494] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1518] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1542] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1566] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1590] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1614] = 7,
    ACTIONS(307), 1,
      aux_sym_command_name_token1,
    ACTIONS(310), 1,
      aux_sym_number_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1638] = 7,
    ACTIONS(112), 1,
      aux_sym_number_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_command_name_token1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(121), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [1662] = 1,
    ACTIONS(221), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1673] = 1,
    ACTIONS(209), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1684] = 1,
    ACTIONS(205), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1695] = 1,
    ACTIONS(320), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1706] = 1,
    ACTIONS(233), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1717] = 1,
    ACTIONS(213), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1728] = 1,
    ACTIONS(225), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1739] = 2,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(322), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1752] = 1,
    ACTIONS(326), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1763] = 1,
    ACTIONS(143), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1773] = 6,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      aux_sym_command_name_token1,
    STATE(5), 1,
      sym_command_name,
    STATE(74), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1793] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      aux_sym_command_name_token1,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      sym_comment,
    STATE(5), 1,
      sym_command_name,
    STATE(74), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1813] = 2,
    ACTIONS(343), 1,
      aux_sym_selector_key_token1,
    ACTIONS(320), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1824] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      aux_sym_selector_key_token1,
    ACTIONS(345), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1837] = 2,
    ACTIONS(239), 1,
      aux_sym_selector_key_token1,
    ACTIONS(241), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1848] = 2,
    ACTIONS(231), 1,
      aux_sym_selector_key_token1,
    ACTIONS(233), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1859] = 2,
    ACTIONS(211), 1,
      aux_sym_selector_key_token1,
    ACTIONS(213), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1870] = 2,
    ACTIONS(291), 1,
      aux_sym_selector_key_token1,
    ACTIONS(289), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1881] = 2,
    ACTIONS(207), 1,
      aux_sym_selector_key_token1,
    ACTIONS(209), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1892] = 2,
    ACTIONS(243), 1,
      aux_sym_selector_key_token1,
    ACTIONS(245), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1903] = 2,
    ACTIONS(351), 1,
      aux_sym_selector_key_token1,
    ACTIONS(326), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1914] = 2,
    ACTIONS(203), 1,
      aux_sym_selector_key_token1,
    ACTIONS(205), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1925] = 2,
    ACTIONS(223), 1,
      aux_sym_selector_key_token1,
    ACTIONS(225), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1936] = 2,
    ACTIONS(219), 1,
      aux_sym_selector_key_token1,
    ACTIONS(221), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1947] = 4,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    STATE(93), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1961] = 5,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      aux_sym_selector_key_token1,
    STATE(95), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(115), 1,
      sym_selector_option,
    STATE(132), 1,
      sym_selector_key,
  [1977] = 4,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    STATE(101), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1991] = 3,
    ACTIONS(369), 1,
      aux_sym_path_token2,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2003] = 4,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(93), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2017] = 4,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_token1,
    ACTIONS(378), 1,
      anon_sym_BSLASH,
    STATE(93), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2031] = 2,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(381), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2041] = 5,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      aux_sym_selector_key_token1,
    STATE(95), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(115), 1,
      sym_selector_option,
    STATE(132), 1,
      sym_selector_key,
  [2057] = 3,
    ACTIONS(390), 1,
      aux_sym_path_token2,
    STATE(96), 1,
      aux_sym_path_repeat1,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2069] = 4,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym_string_token1,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2083] = 3,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    STATE(96), 1,
      aux_sym_path_repeat1,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2095] = 2,
    ACTIONS(401), 1,
      aux_sym_selector_key_token1,
    ACTIONS(399), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2105] = 5,
    ACTIONS(361), 1,
      aux_sym_selector_key_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(115), 1,
      sym_selector_option,
    STATE(132), 1,
      sym_selector_key,
  [2121] = 4,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(93), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2135] = 4,
    ACTIONS(357), 1,
      anon_sym_BSLASH,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_token1,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2149] = 1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
      aux_sym_path_token2,
  [2156] = 4,
    ACTIONS(411), 1,
      aux_sym_path_token2,
    ACTIONS(413), 1,
      aux_sym_container_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    STATE(22), 1,
      aux_sym_container_repeat1,
  [2169] = 4,
    ACTIONS(415), 1,
      aux_sym_number_token1,
    ACTIONS(417), 1,
      anon_sym_TILDE,
    STATE(38), 1,
      sym_number,
    STATE(45), 1,
      sym_coordinate,
  [2182] = 1,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      aux_sym_command_name_token1,
  [2189] = 1,
    ACTIONS(421), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      aux_sym_command_name_token1,
  [2196] = 4,
    ACTIONS(423), 1,
      aux_sym_number_token1,
    ACTIONS(425), 1,
      anon_sym_TILDE,
    STATE(25), 1,
      sym_number,
    STATE(26), 1,
      sym_coordinate,
  [2209] = 1,
    ACTIONS(427), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2216] = 1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      aux_sym_command_name_token1,
  [2223] = 1,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2229] = 1,
    ACTIONS(289), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2235] = 1,
    ACTIONS(431), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2241] = 1,
    ACTIONS(433), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2247] = 2,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(437), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2255] = 1,
    ACTIONS(439), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2261] = 1,
    ACTIONS(289), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2267] = 1,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2273] = 1,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2279] = 1,
    ACTIONS(441), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [2285] = 1,
    ACTIONS(443), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2290] = 1,
    ACTIONS(253), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2295] = 1,
    ACTIONS(445), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2300] = 2,
    ACTIONS(369), 1,
      aux_sym_path_token2,
    STATE(98), 1,
      aux_sym_path_repeat1,
  [2307] = 1,
    ACTIONS(385), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [2312] = 2,
    ACTIONS(9), 1,
      aux_sym_command_name_token1,
    STATE(2), 1,
      sym_command_name,
  [2319] = 1,
    ACTIONS(447), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2324] = 1,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [2328] = 1,
    ACTIONS(451), 1,
      aux_sym_selector_key_token1,
  [2332] = 1,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
  [2336] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [2340] = 1,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [2344] = 1,
    ACTIONS(459), 1,
      aux_sym_selector_key_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 320,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 391,
  [SMALL_STATE(10)] = 433,
  [SMALL_STATE(11)] = 472,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 550,
  [SMALL_STATE(14)] = 589,
  [SMALL_STATE(15)] = 628,
  [SMALL_STATE(16)] = 667,
  [SMALL_STATE(17)] = 706,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 750,
  [SMALL_STATE(20)] = 774,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 842,
  [SMALL_STATE(24)] = 866,
  [SMALL_STATE(25)] = 885,
  [SMALL_STATE(26)] = 904,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 942,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 994,
  [SMALL_STATE(31)] = 1012,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1048,
  [SMALL_STATE(34)] = 1066,
  [SMALL_STATE(35)] = 1084,
  [SMALL_STATE(36)] = 1102,
  [SMALL_STATE(37)] = 1120,
  [SMALL_STATE(38)] = 1138,
  [SMALL_STATE(39)] = 1156,
  [SMALL_STATE(40)] = 1174,
  [SMALL_STATE(41)] = 1192,
  [SMALL_STATE(42)] = 1210,
  [SMALL_STATE(43)] = 1228,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1264,
  [SMALL_STATE(46)] = 1282,
  [SMALL_STATE(47)] = 1300,
  [SMALL_STATE(48)] = 1320,
  [SMALL_STATE(49)] = 1348,
  [SMALL_STATE(50)] = 1376,
  [SMALL_STATE(51)] = 1394,
  [SMALL_STATE(52)] = 1410,
  [SMALL_STATE(53)] = 1438,
  [SMALL_STATE(54)] = 1453,
  [SMALL_STATE(55)] = 1466,
  [SMALL_STATE(56)] = 1481,
  [SMALL_STATE(57)] = 1494,
  [SMALL_STATE(58)] = 1518,
  [SMALL_STATE(59)] = 1542,
  [SMALL_STATE(60)] = 1566,
  [SMALL_STATE(61)] = 1590,
  [SMALL_STATE(62)] = 1614,
  [SMALL_STATE(63)] = 1638,
  [SMALL_STATE(64)] = 1662,
  [SMALL_STATE(65)] = 1673,
  [SMALL_STATE(66)] = 1684,
  [SMALL_STATE(67)] = 1695,
  [SMALL_STATE(68)] = 1706,
  [SMALL_STATE(69)] = 1717,
  [SMALL_STATE(70)] = 1728,
  [SMALL_STATE(71)] = 1739,
  [SMALL_STATE(72)] = 1752,
  [SMALL_STATE(73)] = 1763,
  [SMALL_STATE(74)] = 1773,
  [SMALL_STATE(75)] = 1793,
  [SMALL_STATE(76)] = 1813,
  [SMALL_STATE(77)] = 1824,
  [SMALL_STATE(78)] = 1837,
  [SMALL_STATE(79)] = 1848,
  [SMALL_STATE(80)] = 1859,
  [SMALL_STATE(81)] = 1870,
  [SMALL_STATE(82)] = 1881,
  [SMALL_STATE(83)] = 1892,
  [SMALL_STATE(84)] = 1903,
  [SMALL_STATE(85)] = 1914,
  [SMALL_STATE(86)] = 1925,
  [SMALL_STATE(87)] = 1936,
  [SMALL_STATE(88)] = 1947,
  [SMALL_STATE(89)] = 1961,
  [SMALL_STATE(90)] = 1977,
  [SMALL_STATE(91)] = 1991,
  [SMALL_STATE(92)] = 2003,
  [SMALL_STATE(93)] = 2017,
  [SMALL_STATE(94)] = 2031,
  [SMALL_STATE(95)] = 2041,
  [SMALL_STATE(96)] = 2057,
  [SMALL_STATE(97)] = 2069,
  [SMALL_STATE(98)] = 2083,
  [SMALL_STATE(99)] = 2095,
  [SMALL_STATE(100)] = 2105,
  [SMALL_STATE(101)] = 2121,
  [SMALL_STATE(102)] = 2135,
  [SMALL_STATE(103)] = 2149,
  [SMALL_STATE(104)] = 2156,
  [SMALL_STATE(105)] = 2169,
  [SMALL_STATE(106)] = 2182,
  [SMALL_STATE(107)] = 2189,
  [SMALL_STATE(108)] = 2196,
  [SMALL_STATE(109)] = 2209,
  [SMALL_STATE(110)] = 2216,
  [SMALL_STATE(111)] = 2223,
  [SMALL_STATE(112)] = 2229,
  [SMALL_STATE(113)] = 2235,
  [SMALL_STATE(114)] = 2241,
  [SMALL_STATE(115)] = 2247,
  [SMALL_STATE(116)] = 2255,
  [SMALL_STATE(117)] = 2261,
  [SMALL_STATE(118)] = 2267,
  [SMALL_STATE(119)] = 2273,
  [SMALL_STATE(120)] = 2279,
  [SMALL_STATE(121)] = 2285,
  [SMALL_STATE(122)] = 2290,
  [SMALL_STATE(123)] = 2295,
  [SMALL_STATE(124)] = 2300,
  [SMALL_STATE(125)] = 2307,
  [SMALL_STATE(126)] = 2312,
  [SMALL_STATE(127)] = 2319,
  [SMALL_STATE(128)] = 2324,
  [SMALL_STATE(129)] = 2328,
  [SMALL_STATE(130)] = 2332,
  [SMALL_STATE(131)] = 2336,
  [SMALL_STATE(132)] = 2340,
  [SMALL_STATE(133)] = 2344,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(133),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(104),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(69),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(90),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(59),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(19),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(122),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(18),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(90),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(123),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(122),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(18),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(90),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(74),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(126),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(33),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(130),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(123),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(96),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [455] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
