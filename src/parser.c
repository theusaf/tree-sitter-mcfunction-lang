#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
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
  sym_item_state = 63,
  sym_state_key = 64,
  sym_state_value = 65,
  sym_path = 66,
  sym_container = 67,
  aux_sym_root_repeat1 = 68,
  aux_sym_command_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
  aux_sym_selector_option_section_repeat1 = 71,
  aux_sym_nbt_object_repeat1 = 72,
  aux_sym_nbt_array_repeat1 = 73,
  aux_sym_item_state_repeat1 = 74,
  aux_sym_path_repeat1 = 75,
  aux_sym_container_repeat1 = 76,
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
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
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 81},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 81},
  [77] = {.lex_state = 81},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 81},
  [80] = {.lex_state = 81},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 82},
  [87] = {.lex_state = 82},
  [88] = {.lex_state = 81},
  [89] = {.lex_state = 81},
  [90] = {.lex_state = 84},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 81},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 81},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 81},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 81},
  [102] = {.lex_state = 81},
  [103] = {.lex_state = 81},
  [104] = {.lex_state = 81},
  [105] = {.lex_state = 81},
  [106] = {.lex_state = 81},
  [107] = {.lex_state = 81},
  [108] = {.lex_state = 81},
  [109] = {.lex_state = 81},
  [110] = {.lex_state = 81},
  [111] = {.lex_state = 81},
  [112] = {.lex_state = 81},
  [113] = {.lex_state = 81},
  [114] = {.lex_state = 81},
  [115] = {.lex_state = 81},
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
  [126] = {.lex_state = 28},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 28},
  [129] = {.lex_state = 81},
  [130] = {.lex_state = 81},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 81},
  [133] = {.lex_state = 81},
  [134] = {.lex_state = 81},
  [135] = {.lex_state = 81},
  [136] = {.lex_state = 81},
  [137] = {.lex_state = 81},
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
    [sym_root] = STATE(131),
    [sym_comment] = STATE(12),
    [sym_command] = STATE(12),
    [sym_command_name] = STATE(21),
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
    STATE(127), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(50), 10,
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
    STATE(105), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
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
    STATE(105), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [123] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [156] = 9,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [189] = 8,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [219] = 8,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(117), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [249] = 7,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(55), 1,
      sym_item_state,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [275] = 7,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_container_repeat1,
    STATE(23), 1,
      aux_sym_path_repeat1,
    STATE(32), 1,
      sym_item_state,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [301] = 7,
    ACTIONS(69), 1,
      aux_sym_command_name_token1,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(77), 1,
      aux_sym_selector_number_token3,
    STATE(113), 1,
      sym_selector_value,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(110), 2,
      sym_boolean,
      sym_selector_number,
  [326] = 7,
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
    STATE(21), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [350] = 7,
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
    STATE(21), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [374] = 3,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_container_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [389] = 3,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_container_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [404] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_selector_option_section,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [419] = 3,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_container_repeat1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [434] = 3,
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
  [448] = 1,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [458] = 3,
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
  [472] = 3,
    ACTIONS(112), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_command_repeat1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [486] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [500] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [514] = 3,
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
  [528] = 3,
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
  [542] = 3,
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
  [556] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [565] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [574] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [583] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [592] = 5,
    ACTIONS(146), 1,
      aux_sym_command_name_token1,
    ACTIONS(148), 1,
      sym_number,
    STATE(83), 1,
      sym_state_value,
    STATE(86), 1,
      sym_boolean,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
  [609] = 1,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [618] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [627] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_string,
    STATE(135), 1,
      sym_nbt_object_key,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [644] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [653] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_string,
    STATE(135), 1,
      sym_nbt_object_key,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [670] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [679] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [688] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_string,
    STATE(135), 1,
      sym_nbt_object_key,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [705] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [714] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [723] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [732] = 2,
    ACTIONS(174), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(172), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [743] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [752] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [761] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [770] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [779] = 2,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [790] = 1,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [799] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [808] = 1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [817] = 1,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [826] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_string,
    STATE(135), 1,
      sym_nbt_object_key,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [843] = 2,
    ACTIONS(197), 1,
      anon_sym_,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [854] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [863] = 4,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_token1,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    STATE(57), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [877] = 4,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_string_token1,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    STATE(57), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [891] = 4,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [905] = 1,
    ACTIONS(220), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [913] = 4,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
    STATE(135), 1,
      sym_nbt_object_key,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [927] = 1,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [935] = 4,
    ACTIONS(204), 1,
      aux_sym_string_token1,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(57), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [949] = 4,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym_string_token1,
    STATE(56), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [963] = 3,
    ACTIONS(230), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_selector_option_section_repeat1,
  [973] = 3,
    ACTIONS(234), 1,
      aux_sym_command_name_token1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_state_key,
  [983] = 2,
    ACTIONS(240), 1,
      aux_sym_string_token1,
    ACTIONS(238), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [991] = 3,
    ACTIONS(242), 1,
      aux_sym_command_name_token1,
    STATE(114), 1,
      sym_selector_key,
    STATE(125), 1,
      sym_selector_option,
  [1001] = 3,
    ACTIONS(230), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_selector_option_section_repeat1,
  [1011] = 3,
    ACTIONS(246), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_selector_option_section_repeat1,
  [1021] = 2,
    STATE(48), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1029] = 3,
    ACTIONS(251), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
  [1039] = 2,
    STATE(38), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1047] = 3,
    ACTIONS(234), 1,
      aux_sym_command_name_token1,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_state_key,
  [1057] = 2,
    ACTIONS(259), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [1064] = 2,
    ACTIONS(234), 1,
      aux_sym_command_name_token1,
    STATE(134), 1,
      sym_state_key,
  [1071] = 2,
    ACTIONS(262), 1,
      aux_sym_selector_option_section_token1,
    STATE(84), 1,
      aux_sym_nbt_object_repeat1,
  [1078] = 2,
    ACTIONS(264), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [1085] = 2,
    ACTIONS(266), 1,
      aux_sym_selector_option_section_token1,
    STATE(76), 1,
      aux_sym_nbt_object_repeat1,
  [1092] = 2,
    ACTIONS(268), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_nbt_array_repeat1,
  [1099] = 2,
    ACTIONS(270), 1,
      aux_sym_selector_option_section_token1,
    STATE(80), 1,
      aux_sym_item_state_repeat1,
  [1106] = 2,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
  [1113] = 2,
    ACTIONS(275), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [1120] = 2,
    ACTIONS(279), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(281), 1,
      anon_sym_COMMA,
  [1127] = 2,
    ACTIONS(283), 1,
      aux_sym_selector_option_section_token1,
    STATE(84), 1,
      aux_sym_nbt_object_repeat1,
  [1134] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(25), 1,
      sym_command_name,
  [1141] = 2,
    ACTIONS(286), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(288), 1,
      anon_sym_COMMA,
  [1148] = 2,
    ACTIONS(290), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [1155] = 2,
    ACTIONS(294), 1,
      aux_sym_selector_option_section_token1,
    STATE(92), 1,
      aux_sym_nbt_array_repeat1,
  [1162] = 2,
    ACTIONS(296), 1,
      aux_sym_selector_option_section_token1,
    STATE(80), 1,
      aux_sym_item_state_repeat1,
  [1169] = 2,
    ACTIONS(298), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
  [1176] = 2,
    ACTIONS(302), 1,
      aux_sym_selector_option_section_token1,
    STATE(84), 1,
      aux_sym_nbt_object_repeat1,
  [1183] = 2,
    ACTIONS(304), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [1190] = 2,
    ACTIONS(306), 1,
      aux_sym_selector_option_section_token1,
    STATE(89), 1,
      aux_sym_item_state_repeat1,
  [1197] = 2,
    ACTIONS(308), 1,
      aux_sym_command_name_token1,
    ACTIONS(310), 1,
      sym_number,
  [1204] = 2,
    ACTIONS(312), 1,
      aux_sym_selector_option_section_token1,
    STATE(91), 1,
      aux_sym_nbt_object_repeat1,
  [1211] = 1,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
  [1215] = 1,
    ACTIONS(191), 1,
      aux_sym_selector_option_section_token1,
  [1219] = 1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1223] = 1,
    ACTIONS(318), 1,
      anon_sym_EQ,
  [1227] = 1,
    ACTIONS(320), 1,
      anon_sym_EQ,
  [1231] = 1,
    ACTIONS(322), 1,
      aux_sym_selector_option_section_token1,
  [1235] = 1,
    ACTIONS(324), 1,
      aux_sym_selector_option_section_token1,
  [1239] = 1,
    ACTIONS(326), 1,
      aux_sym_selector_option_section_token1,
  [1243] = 1,
    ACTIONS(328), 1,
      aux_sym_selector_option_section_token1,
  [1247] = 1,
    ACTIONS(330), 1,
      aux_sym_selector_option_section_token1,
  [1251] = 1,
    ACTIONS(332), 1,
      aux_sym_selector_option_section_token1,
  [1255] = 1,
    ACTIONS(334), 1,
      aux_sym_selector_option_section_token1,
  [1259] = 1,
    ACTIONS(336), 1,
      aux_sym_selector_option_section_token1,
  [1263] = 1,
    ACTIONS(338), 1,
      aux_sym_selector_option_section_token1,
  [1267] = 1,
    ACTIONS(340), 1,
      aux_sym_selector_option_section_token1,
  [1271] = 1,
    ACTIONS(342), 1,
      aux_sym_selector_option_section_token1,
  [1275] = 1,
    ACTIONS(345), 1,
      aux_sym_selector_option_section_token1,
  [1279] = 1,
    ACTIONS(347), 1,
      aux_sym_selector_option_section_token1,
  [1283] = 1,
    ACTIONS(349), 1,
      aux_sym_selector_option_section_token1,
  [1287] = 1,
    ACTIONS(351), 1,
      aux_sym_selector_option_section_token1,
  [1291] = 1,
    ACTIONS(353), 1,
      aux_sym_selector_option_section_token1,
  [1295] = 1,
    ACTIONS(355), 1,
      aux_sym_selector_option_section_token1,
  [1299] = 1,
    ACTIONS(144), 1,
      aux_sym_selector_option_section_token1,
  [1303] = 1,
    ACTIONS(152), 1,
      aux_sym_selector_option_section_token1,
  [1307] = 1,
    ACTIONS(182), 1,
      aux_sym_selector_option_section_token1,
  [1311] = 1,
    ACTIONS(170), 1,
      aux_sym_selector_option_section_token1,
  [1315] = 1,
    ACTIONS(158), 1,
      aux_sym_selector_option_section_token1,
  [1319] = 1,
    ACTIONS(180), 1,
      aux_sym_selector_option_section_token1,
  [1323] = 1,
    ACTIONS(193), 1,
      aux_sym_selector_option_section_token1,
  [1327] = 1,
    ACTIONS(357), 1,
      aux_sym_selector_option_section_token1,
  [1331] = 1,
    ACTIONS(359), 1,
      aux_sym_command_name_token1,
  [1335] = 1,
    ACTIONS(361), 1,
      anon_sym_,
  [1339] = 1,
    ACTIONS(363), 1,
      aux_sym_command_name_token1,
  [1343] = 1,
    ACTIONS(365), 1,
      aux_sym_selector_option_section_token1,
  [1347] = 1,
    ACTIONS(367), 1,
      aux_sym_selector_option_section_token1,
  [1351] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [1355] = 1,
    ACTIONS(371), 1,
      aux_sym_selector_option_section_token1,
  [1359] = 1,
    ACTIONS(373), 1,
      aux_sym_selector_option_section_token1,
  [1363] = 1,
    ACTIONS(375), 1,
      aux_sym_selector_option_section_token1,
  [1367] = 1,
    ACTIONS(377), 1,
      aux_sym_selector_option_section_token1,
  [1371] = 1,
    ACTIONS(379), 1,
      aux_sym_selector_option_section_token1,
  [1375] = 1,
    ACTIONS(381), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 374,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 404,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 472,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 500,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 528,
  [SMALL_STATE(26)] = 542,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 574,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 592,
  [SMALL_STATE(32)] = 609,
  [SMALL_STATE(33)] = 618,
  [SMALL_STATE(34)] = 627,
  [SMALL_STATE(35)] = 644,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 670,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 688,
  [SMALL_STATE(40)] = 705,
  [SMALL_STATE(41)] = 714,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 752,
  [SMALL_STATE(46)] = 761,
  [SMALL_STATE(47)] = 770,
  [SMALL_STATE(48)] = 779,
  [SMALL_STATE(49)] = 790,
  [SMALL_STATE(50)] = 799,
  [SMALL_STATE(51)] = 808,
  [SMALL_STATE(52)] = 817,
  [SMALL_STATE(53)] = 826,
  [SMALL_STATE(54)] = 843,
  [SMALL_STATE(55)] = 854,
  [SMALL_STATE(56)] = 863,
  [SMALL_STATE(57)] = 877,
  [SMALL_STATE(58)] = 891,
  [SMALL_STATE(59)] = 905,
  [SMALL_STATE(60)] = 913,
  [SMALL_STATE(61)] = 927,
  [SMALL_STATE(62)] = 935,
  [SMALL_STATE(63)] = 949,
  [SMALL_STATE(64)] = 963,
  [SMALL_STATE(65)] = 973,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 991,
  [SMALL_STATE(68)] = 1001,
  [SMALL_STATE(69)] = 1011,
  [SMALL_STATE(70)] = 1021,
  [SMALL_STATE(71)] = 1029,
  [SMALL_STATE(72)] = 1039,
  [SMALL_STATE(73)] = 1047,
  [SMALL_STATE(74)] = 1057,
  [SMALL_STATE(75)] = 1064,
  [SMALL_STATE(76)] = 1071,
  [SMALL_STATE(77)] = 1078,
  [SMALL_STATE(78)] = 1085,
  [SMALL_STATE(79)] = 1092,
  [SMALL_STATE(80)] = 1099,
  [SMALL_STATE(81)] = 1106,
  [SMALL_STATE(82)] = 1113,
  [SMALL_STATE(83)] = 1120,
  [SMALL_STATE(84)] = 1127,
  [SMALL_STATE(85)] = 1134,
  [SMALL_STATE(86)] = 1141,
  [SMALL_STATE(87)] = 1148,
  [SMALL_STATE(88)] = 1155,
  [SMALL_STATE(89)] = 1162,
  [SMALL_STATE(90)] = 1169,
  [SMALL_STATE(91)] = 1176,
  [SMALL_STATE(92)] = 1183,
  [SMALL_STATE(93)] = 1190,
  [SMALL_STATE(94)] = 1197,
  [SMALL_STATE(95)] = 1204,
  [SMALL_STATE(96)] = 1211,
  [SMALL_STATE(97)] = 1215,
  [SMALL_STATE(98)] = 1219,
  [SMALL_STATE(99)] = 1223,
  [SMALL_STATE(100)] = 1227,
  [SMALL_STATE(101)] = 1231,
  [SMALL_STATE(102)] = 1235,
  [SMALL_STATE(103)] = 1239,
  [SMALL_STATE(104)] = 1243,
  [SMALL_STATE(105)] = 1247,
  [SMALL_STATE(106)] = 1251,
  [SMALL_STATE(107)] = 1255,
  [SMALL_STATE(108)] = 1259,
  [SMALL_STATE(109)] = 1263,
  [SMALL_STATE(110)] = 1267,
  [SMALL_STATE(111)] = 1271,
  [SMALL_STATE(112)] = 1275,
  [SMALL_STATE(113)] = 1279,
  [SMALL_STATE(114)] = 1283,
  [SMALL_STATE(115)] = 1287,
  [SMALL_STATE(116)] = 1291,
  [SMALL_STATE(117)] = 1295,
  [SMALL_STATE(118)] = 1299,
  [SMALL_STATE(119)] = 1303,
  [SMALL_STATE(120)] = 1307,
  [SMALL_STATE(121)] = 1311,
  [SMALL_STATE(122)] = 1315,
  [SMALL_STATE(123)] = 1319,
  [SMALL_STATE(124)] = 1323,
  [SMALL_STATE(125)] = 1327,
  [SMALL_STATE(126)] = 1331,
  [SMALL_STATE(127)] = 1335,
  [SMALL_STATE(128)] = 1339,
  [SMALL_STATE(129)] = 1343,
  [SMALL_STATE(130)] = 1347,
  [SMALL_STATE(131)] = 1351,
  [SMALL_STATE(132)] = 1355,
  [SMALL_STATE(133)] = 1359,
  [SMALL_STATE(134)] = 1363,
  [SMALL_STATE(135)] = 1367,
  [SMALL_STATE(136)] = 1371,
  [SMALL_STATE(137)] = 1375,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(126),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(61),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(85),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(94),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(126),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(126),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(126),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(72),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(96),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(67),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(75),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(60),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
