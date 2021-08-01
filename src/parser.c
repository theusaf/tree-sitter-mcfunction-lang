#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_SLASH = 2,
  anon_sym_ = 3,
  sym__line_separator = 4,
  aux_sym_command_name_token1 = 5,
  sym__identifier = 6,
  sym_number = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_TILDE = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_BSLASH = 13,
  anon_sym_AT = 14,
  anon_sym_p = 15,
  anon_sym_a = 16,
  anon_sym_r = 17,
  anon_sym_s = 18,
  anon_sym_e = 19,
  anon_sym_LBRACK = 20,
  aux_sym_selector_option_section_token1 = 21,
  anon_sym_COMMA = 22,
  anon_sym_RBRACK = 23,
  anon_sym_EQ = 24,
  aux_sym_selector_number_token1 = 25,
  aux_sym_selector_number_token2 = 26,
  aux_sym_selector_number_token3 = 27,
  anon_sym_LBRACE = 28,
  anon_sym_COLON = 29,
  anon_sym_RBRACE = 30,
  aux_sym_nbt_object_key_token1 = 31,
  anon_sym_l = 32,
  anon_sym_d = 33,
  anon_sym_f = 34,
  anon_sym_b = 35,
  aux_sym_item_token1 = 36,
  anon_sym_DOT = 37,
  sym_nbt_path = 38,
  sym_root = 39,
  sym_comment = 40,
  sym_invalid_comment = 41,
  sym_command = 42,
  sym_command_name = 43,
  sym_boolean = 44,
  sym_coordinate = 45,
  sym_rotation = 46,
  sym_location = 47,
  sym_string = 48,
  sym__escape_sequence = 49,
  sym_selector = 50,
  sym_selector_option_section = 51,
  sym_selector_option = 52,
  sym_selector_key = 53,
  sym_selector_value = 54,
  sym_selector_number = 55,
  sym_nbt = 56,
  sym_nbt_object = 57,
  sym_nbt_array = 58,
  sym_nbt_object_key = 59,
  sym_nbt_object_value = 60,
  sym_nbt_number = 61,
  sym_item = 62,
  sym_item_nbt = 63,
  sym_item_state = 64,
  sym_state_key = 65,
  sym_state_value = 66,
  sym_path = 67,
  sym_container = 68,
  aux_sym_root_repeat1 = 69,
  aux_sym_command_repeat1 = 70,
  aux_sym_string_repeat1 = 71,
  aux_sym_selector_option_section_repeat1 = 72,
  aux_sym_nbt_object_repeat1 = 73,
  aux_sym_nbt_array_repeat1 = 74,
  aux_sym_item_state_repeat1 = 75,
  aux_sym_path_repeat1 = 76,
  aux_sym_container_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
  [sym__line_separator] = "_line_separator",
  [aux_sym_command_name_token1] = "command_name_token1",
  [sym__identifier] = "_identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TILDE] = "~",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AT] = "@",
  [anon_sym_p] = "p",
  [anon_sym_a] = "a",
  [anon_sym_r] = "r",
  [anon_sym_s] = "s",
  [anon_sym_e] = "e",
  [anon_sym_LBRACK] = "[",
  [aux_sym_selector_option_section_token1] = "selector_option_section_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [aux_sym_selector_number_token1] = "selector_number_token1",
  [aux_sym_selector_number_token2] = "selector_number_token2",
  [aux_sym_selector_number_token3] = "selector_number_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_nbt_object_key_token1] = "nbt_object_key_token1",
  [anon_sym_l] = "l",
  [anon_sym_d] = "d",
  [anon_sym_f] = "f",
  [anon_sym_b] = "b",
  [aux_sym_item_token1] = "item_token1",
  [anon_sym_DOT] = ".",
  [sym_nbt_path] = "nbt_path",
  [sym_root] = "root",
  [sym_comment] = "comment",
  [sym_invalid_comment] = "invalid_comment",
  [sym_command] = "command",
  [sym_command_name] = "command_name",
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
  [sym_nbt] = "nbt",
  [sym_nbt_object] = "nbt_object",
  [sym_nbt_array] = "nbt_array",
  [sym_nbt_object_key] = "nbt_object_key",
  [sym_nbt_object_value] = "nbt_object_value",
  [sym_nbt_number] = "nbt_number",
  [sym_item] = "item",
  [sym_item_nbt] = "item_nbt",
  [sym_item_state] = "item_state",
  [sym_state_key] = "state_key",
  [sym_state_value] = "state_value",
  [sym_path] = "path",
  [sym_container] = "container",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
  [aux_sym_item_state_repeat1] = "item_state_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_container_repeat1] = "container_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [sym__line_separator] = sym__line_separator,
  [aux_sym_command_name_token1] = aux_sym_command_name_token1,
  [sym__identifier] = sym__identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_selector_option_section_token1] = aux_sym_selector_option_section_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_selector_number_token1] = aux_sym_selector_number_token1,
  [aux_sym_selector_number_token2] = aux_sym_selector_number_token2,
  [aux_sym_selector_number_token3] = aux_sym_selector_number_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_nbt_object_key_token1] = aux_sym_nbt_object_key_token1,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_b] = anon_sym_b,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_nbt_path] = sym_nbt_path,
  [sym_root] = sym_root,
  [sym_comment] = sym_comment,
  [sym_invalid_comment] = sym_invalid_comment,
  [sym_command] = sym_command,
  [sym_command_name] = sym_command_name,
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
  [sym_nbt] = sym_nbt,
  [sym_nbt_object] = sym_nbt_object,
  [sym_nbt_array] = sym_nbt_array,
  [sym_nbt_object_key] = sym_nbt_object_key,
  [sym_nbt_object_value] = sym_nbt_object_value,
  [sym_nbt_number] = sym_nbt_number,
  [sym_item] = sym_item,
  [sym_item_nbt] = sym_item_nbt,
  [sym_item_state] = sym_item_state,
  [sym_state_key] = sym_state_key,
  [sym_state_value] = sym_state_value,
  [sym_path] = sym_path,
  [sym_container] = sym_container,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
  [aux_sym_nbt_object_repeat1] = aux_sym_nbt_object_repeat1,
  [aux_sym_nbt_array_repeat1] = aux_sym_nbt_array_repeat1,
  [aux_sym_item_state_repeat1] = aux_sym_item_state_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__line_separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selector_option_section_token1] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nbt_object_key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_l] = {
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
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_nbt_path] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
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
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym_item_state] = {
    .visible = true,
    .named = true,
  },
  [sym_state_key] = {
    .visible = true,
    .named = true,
  },
  [sym_state_value] = {
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
  [aux_sym_nbt_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_state_repeat1] = {
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
};

enum {
  field_x = 1,
  field_y = 2,
  field_z = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_x, 0},
    {field_y, 2},
  [2] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '~') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '}') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == '[') ADVANCE(25);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '~') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == '[') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ']') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == '[') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 85},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 84},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 84},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 81},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 81},
  [80] = {.lex_state = 81},
  [81] = {.lex_state = 81},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 81},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 81},
  [86] = {.lex_state = 81},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 81},
  [89] = {.lex_state = 84},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 82},
  [94] = {.lex_state = 82},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 81},
  [98] = {.lex_state = 81},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 81},
  [101] = {.lex_state = 81},
  [102] = {.lex_state = 81},
  [103] = {.lex_state = 81},
  [104] = {.lex_state = 81},
  [105] = {.lex_state = 81},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 81},
  [108] = {.lex_state = 81},
  [109] = {.lex_state = 81},
  [110] = {.lex_state = 81},
  [111] = {.lex_state = 81},
  [112] = {.lex_state = 81},
  [113] = {.lex_state = 81},
  [114] = {.lex_state = 81},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 81},
  [117] = {.lex_state = 81},
  [118] = {.lex_state = 81},
  [119] = {.lex_state = 81},
  [120] = {.lex_state = 81},
  [121] = {.lex_state = 81},
  [122] = {.lex_state = 81},
  [123] = {.lex_state = 81},
  [124] = {.lex_state = 81},
  [125] = {.lex_state = 81},
  [126] = {.lex_state = 81},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 81},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 81},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 81},
  [136] = {.lex_state = 81},
  [137] = {.lex_state = 81},
  [138] = {.lex_state = 81},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_selector_option_section_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_selector_number_token1] = ACTIONS(1),
    [aux_sym_selector_number_token2] = ACTIONS(1),
    [aux_sym_selector_number_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(128),
    [sym_comment] = STATE(12),
    [sym_command] = STATE(12),
    [sym_command_name] = STATE(23),
    [aux_sym_root_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym__line_separator] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_command_name_token1,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      aux_sym_item_token1,
    ACTIONS(35), 1,
      sym_nbt_path,
    STATE(133), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 10,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [57] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [90] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [123] = 9,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_container_repeat1,
    STATE(19), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_nbt_object,
    STATE(56), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [156] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [189] = 9,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_container_repeat1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_nbt_object,
    STATE(39), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [222] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [255] = 8,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [285] = 8,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(97), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [315] = 7,
    ACTIONS(69), 1,
      aux_sym_command_name_token1,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(77), 1,
      aux_sym_selector_number_token3,
    STATE(114), 1,
      sym_selector_value,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(111), 2,
      sym_boolean,
      sym_selector_number,
  [340] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym__line_separator,
    STATE(23), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [364] = 7,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(91), 1,
      sym__line_separator,
    ACTIONS(94), 1,
      aux_sym_command_name_token1,
    STATE(23), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [388] = 3,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [403] = 3,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [418] = 3,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [433] = 3,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_selector_option_section,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [448] = 3,
    ACTIONS(112), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [462] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [476] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [490] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [500] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [514] = 3,
    ACTIONS(112), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_command_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [528] = 3,
    ACTIONS(112), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [542] = 3,
    ACTIONS(112), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [556] = 3,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [570] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_string,
    STATE(110), 1,
      sym_nbt_object_key,
    ACTIONS(138), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [587] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [596] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [605] = 2,
    ACTIONS(148), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(146), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [616] = 5,
    ACTIONS(150), 1,
      aux_sym_command_name_token1,
    ACTIONS(152), 1,
      sym_number,
    STATE(93), 1,
      sym_boolean,
    STATE(94), 1,
      sym_state_value,
    ACTIONS(154), 2,
      anon_sym_true,
      anon_sym_false,
  [633] = 1,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [642] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [651] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_string,
    STATE(110), 1,
      sym_nbt_object_key,
    ACTIONS(138), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [668] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [677] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_string,
    STATE(110), 1,
      sym_nbt_object_key,
    ACTIONS(138), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [694] = 1,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [703] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [712] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [721] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [730] = 1,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [739] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [748] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [757] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [766] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [775] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [784] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [793] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [802] = 2,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [813] = 2,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [824] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [833] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [842] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [851] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_string,
    STATE(110), 1,
      sym_nbt_object_key,
    ACTIONS(138), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [868] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [877] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [886] = 1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [894] = 4,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym_string_token1,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    STATE(60), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [908] = 4,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym_string_token1,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    STATE(59), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [922] = 4,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_string_token1,
    STATE(59), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [936] = 4,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
    STATE(110), 1,
      sym_nbt_object_key,
    ACTIONS(138), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [950] = 4,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      aux_sym_string_token1,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(59), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [964] = 1,
    ACTIONS(226), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [972] = 4,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [986] = 3,
    ACTIONS(232), 1,
      aux_sym_command_name_token1,
    STATE(107), 1,
      sym_selector_option,
    STATE(109), 1,
      sym_selector_key,
  [996] = 3,
    ACTIONS(234), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_selector_option_section_repeat1,
  [1006] = 3,
    ACTIONS(238), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
  [1016] = 2,
    STATE(49), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1024] = 3,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_state_key,
  [1034] = 3,
    ACTIONS(234), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_selector_option_section_repeat1,
  [1044] = 3,
    ACTIONS(250), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_selector_option_section_repeat1,
  [1054] = 2,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(255), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1062] = 3,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_state_key,
  [1072] = 2,
    STATE(37), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1080] = 2,
    ACTIONS(261), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
  [1087] = 2,
    ACTIONS(265), 1,
      aux_sym_command_name_token1,
    ACTIONS(267), 1,
      sym_number,
  [1094] = 2,
    ACTIONS(269), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_item_state_repeat1,
  [1101] = 2,
    ACTIONS(272), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_item_state_repeat1,
  [1108] = 2,
    ACTIONS(274), 1,
      aux_sym_selector_option_section_token1,
    STATE(83), 1,
      aux_sym_nbt_array_repeat1,
  [1115] = 2,
    ACTIONS(276), 1,
      aux_sym_selector_option_section_token1,
    STATE(86), 1,
      aux_sym_nbt_object_repeat1,
  [1122] = 2,
    ACTIONS(278), 1,
      aux_sym_selector_option_section_token1,
    STATE(78), 1,
      aux_sym_item_state_repeat1,
  [1129] = 2,
    ACTIONS(280), 1,
      aux_sym_selector_option_section_token1,
    STATE(86), 1,
      aux_sym_nbt_object_repeat1,
  [1136] = 2,
    ACTIONS(282), 1,
      aux_sym_selector_option_section_token1,
    STATE(83), 1,
      aux_sym_nbt_array_repeat1,
  [1143] = 2,
    ACTIONS(285), 1,
      aux_sym_selector_option_section_token1,
    STATE(80), 1,
      aux_sym_nbt_object_repeat1,
  [1150] = 2,
    ACTIONS(287), 1,
      aux_sym_selector_option_section_token1,
    STATE(79), 1,
      aux_sym_nbt_array_repeat1,
  [1157] = 2,
    ACTIONS(289), 1,
      aux_sym_selector_option_section_token1,
    STATE(86), 1,
      aux_sym_nbt_object_repeat1,
  [1164] = 2,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    STATE(126), 1,
      sym_state_key,
  [1171] = 2,
    ACTIONS(292), 1,
      aux_sym_selector_option_section_token1,
    STATE(83), 1,
      aux_sym_nbt_array_repeat1,
  [1178] = 2,
    ACTIONS(294), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
  [1185] = 2,
    ACTIONS(298), 1,
      aux_sym_selector_option_section_token1,
    STATE(88), 1,
      aux_sym_nbt_array_repeat1,
  [1192] = 2,
    ACTIONS(300), 1,
      aux_sym_selector_option_section_token1,
    STATE(82), 1,
      aux_sym_nbt_object_repeat1,
  [1199] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(25), 1,
      sym_command_name,
  [1206] = 2,
    ACTIONS(302), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(304), 1,
      anon_sym_COMMA,
  [1213] = 2,
    ACTIONS(306), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(308), 1,
      anon_sym_COMMA,
  [1220] = 2,
    ACTIONS(310), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(312), 1,
      anon_sym_COMMA,
  [1227] = 2,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      aux_sym_selector_option_section_token1,
  [1234] = 1,
    ACTIONS(316), 1,
      aux_sym_selector_option_section_token1,
  [1238] = 1,
    ACTIONS(318), 1,
      aux_sym_selector_option_section_token1,
  [1242] = 1,
    ACTIONS(320), 1,
      anon_sym_EQ,
  [1246] = 1,
    ACTIONS(322), 1,
      aux_sym_selector_option_section_token1,
  [1250] = 1,
    ACTIONS(324), 1,
      aux_sym_selector_option_section_token1,
  [1254] = 1,
    ACTIONS(326), 1,
      aux_sym_selector_option_section_token1,
  [1258] = 1,
    ACTIONS(328), 1,
      aux_sym_selector_option_section_token1,
  [1262] = 1,
    ACTIONS(330), 1,
      aux_sym_selector_option_section_token1,
  [1266] = 1,
    ACTIONS(332), 1,
      aux_sym_selector_option_section_token1,
  [1270] = 1,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [1274] = 1,
    ACTIONS(336), 1,
      aux_sym_selector_option_section_token1,
  [1278] = 1,
    ACTIONS(338), 1,
      aux_sym_selector_option_section_token1,
  [1282] = 1,
    ACTIONS(340), 1,
      aux_sym_selector_option_section_token1,
  [1286] = 1,
    ACTIONS(342), 1,
      aux_sym_selector_option_section_token1,
  [1290] = 1,
    ACTIONS(344), 1,
      aux_sym_selector_option_section_token1,
  [1294] = 1,
    ACTIONS(346), 1,
      aux_sym_selector_option_section_token1,
  [1298] = 1,
    ACTIONS(349), 1,
      aux_sym_selector_option_section_token1,
  [1302] = 1,
    ACTIONS(351), 1,
      aux_sym_selector_option_section_token1,
  [1306] = 1,
    ACTIONS(353), 1,
      anon_sym_EQ,
  [1310] = 1,
    ACTIONS(355), 1,
      aux_sym_selector_option_section_token1,
  [1314] = 1,
    ACTIONS(357), 1,
      aux_sym_selector_option_section_token1,
  [1318] = 1,
    ACTIONS(194), 1,
      aux_sym_selector_option_section_token1,
  [1322] = 1,
    ACTIONS(162), 1,
      aux_sym_selector_option_section_token1,
  [1326] = 1,
    ACTIONS(170), 1,
      aux_sym_selector_option_section_token1,
  [1330] = 1,
    ACTIONS(182), 1,
      aux_sym_selector_option_section_token1,
  [1334] = 1,
    ACTIONS(144), 1,
      aux_sym_selector_option_section_token1,
  [1338] = 1,
    ACTIONS(196), 1,
      aux_sym_selector_option_section_token1,
  [1342] = 1,
    ACTIONS(178), 1,
      aux_sym_selector_option_section_token1,
  [1346] = 1,
    ACTIONS(176), 1,
      aux_sym_selector_option_section_token1,
  [1350] = 1,
    ACTIONS(359), 1,
      aux_sym_selector_option_section_token1,
  [1354] = 1,
    ACTIONS(361), 1,
      aux_sym_selector_option_section_token1,
  [1358] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1362] = 1,
    ACTIONS(365), 1,
      aux_sym_selector_option_section_token1,
  [1366] = 1,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
  [1370] = 1,
    ACTIONS(369), 1,
      aux_sym_selector_option_section_token1,
  [1374] = 1,
    ACTIONS(371), 1,
      aux_sym_command_name_token1,
  [1378] = 1,
    ACTIONS(373), 1,
      anon_sym_,
  [1382] = 1,
    ACTIONS(375), 1,
      aux_sym_command_name_token1,
  [1386] = 1,
    ACTIONS(377), 1,
      aux_sym_selector_option_section_token1,
  [1390] = 1,
    ACTIONS(379), 1,
      aux_sym_selector_option_section_token1,
  [1394] = 1,
    ACTIONS(381), 1,
      aux_sym_selector_option_section_token1,
  [1398] = 1,
    ACTIONS(383), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 364,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 514,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 596,
  [SMALL_STATE(30)] = 605,
  [SMALL_STATE(31)] = 616,
  [SMALL_STATE(32)] = 633,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 694,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 730,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 748,
  [SMALL_STATE(44)] = 757,
  [SMALL_STATE(45)] = 766,
  [SMALL_STATE(46)] = 775,
  [SMALL_STATE(47)] = 784,
  [SMALL_STATE(48)] = 793,
  [SMALL_STATE(49)] = 802,
  [SMALL_STATE(50)] = 813,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 842,
  [SMALL_STATE(54)] = 851,
  [SMALL_STATE(55)] = 868,
  [SMALL_STATE(56)] = 877,
  [SMALL_STATE(57)] = 886,
  [SMALL_STATE(58)] = 894,
  [SMALL_STATE(59)] = 908,
  [SMALL_STATE(60)] = 922,
  [SMALL_STATE(61)] = 936,
  [SMALL_STATE(62)] = 950,
  [SMALL_STATE(63)] = 964,
  [SMALL_STATE(64)] = 972,
  [SMALL_STATE(65)] = 986,
  [SMALL_STATE(66)] = 996,
  [SMALL_STATE(67)] = 1006,
  [SMALL_STATE(68)] = 1016,
  [SMALL_STATE(69)] = 1024,
  [SMALL_STATE(70)] = 1034,
  [SMALL_STATE(71)] = 1044,
  [SMALL_STATE(72)] = 1054,
  [SMALL_STATE(73)] = 1062,
  [SMALL_STATE(74)] = 1072,
  [SMALL_STATE(75)] = 1080,
  [SMALL_STATE(76)] = 1087,
  [SMALL_STATE(77)] = 1094,
  [SMALL_STATE(78)] = 1101,
  [SMALL_STATE(79)] = 1108,
  [SMALL_STATE(80)] = 1115,
  [SMALL_STATE(81)] = 1122,
  [SMALL_STATE(82)] = 1129,
  [SMALL_STATE(83)] = 1136,
  [SMALL_STATE(84)] = 1143,
  [SMALL_STATE(85)] = 1150,
  [SMALL_STATE(86)] = 1157,
  [SMALL_STATE(87)] = 1164,
  [SMALL_STATE(88)] = 1171,
  [SMALL_STATE(89)] = 1178,
  [SMALL_STATE(90)] = 1185,
  [SMALL_STATE(91)] = 1192,
  [SMALL_STATE(92)] = 1199,
  [SMALL_STATE(93)] = 1206,
  [SMALL_STATE(94)] = 1213,
  [SMALL_STATE(95)] = 1220,
  [SMALL_STATE(96)] = 1227,
  [SMALL_STATE(97)] = 1234,
  [SMALL_STATE(98)] = 1238,
  [SMALL_STATE(99)] = 1242,
  [SMALL_STATE(100)] = 1246,
  [SMALL_STATE(101)] = 1250,
  [SMALL_STATE(102)] = 1254,
  [SMALL_STATE(103)] = 1258,
  [SMALL_STATE(104)] = 1262,
  [SMALL_STATE(105)] = 1266,
  [SMALL_STATE(106)] = 1270,
  [SMALL_STATE(107)] = 1274,
  [SMALL_STATE(108)] = 1278,
  [SMALL_STATE(109)] = 1282,
  [SMALL_STATE(110)] = 1286,
  [SMALL_STATE(111)] = 1290,
  [SMALL_STATE(112)] = 1294,
  [SMALL_STATE(113)] = 1298,
  [SMALL_STATE(114)] = 1302,
  [SMALL_STATE(115)] = 1306,
  [SMALL_STATE(116)] = 1310,
  [SMALL_STATE(117)] = 1314,
  [SMALL_STATE(118)] = 1318,
  [SMALL_STATE(119)] = 1322,
  [SMALL_STATE(120)] = 1326,
  [SMALL_STATE(121)] = 1330,
  [SMALL_STATE(122)] = 1334,
  [SMALL_STATE(123)] = 1338,
  [SMALL_STATE(124)] = 1342,
  [SMALL_STATE(125)] = 1346,
  [SMALL_STATE(126)] = 1350,
  [SMALL_STATE(127)] = 1354,
  [SMALL_STATE(128)] = 1358,
  [SMALL_STATE(129)] = 1362,
  [SMALL_STATE(130)] = 1366,
  [SMALL_STATE(131)] = 1370,
  [SMALL_STATE(132)] = 1374,
  [SMALL_STATE(133)] = 1378,
  [SMALL_STATE(134)] = 1382,
  [SMALL_STATE(135)] = 1386,
  [SMALL_STATE(136)] = 1390,
  [SMALL_STATE(137)] = 1394,
  [SMALL_STATE(138)] = 1398,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(132),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(132),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(57),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(92),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(76),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(132),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(132),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(132),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(74),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(130),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(65),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(87),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(10),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(61),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
