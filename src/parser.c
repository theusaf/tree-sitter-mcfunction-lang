#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
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
  sym_path = 63,
  sym_container = 64,
  aux_sym_root_repeat1 = 65,
  aux_sym_command_repeat1 = 66,
  aux_sym_string_repeat1 = 67,
  aux_sym_selector_option_section_repeat1 = 68,
  aux_sym_nbt_object_repeat1 = 69,
  aux_sym_nbt_array_repeat1 = 70,
  aux_sym_path_repeat1 = 71,
  aux_sym_container_repeat1 = 72,
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
  [sym_path] = "path",
  [sym_container] = "container",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
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
  [sym_path] = sym_path,
  [sym_container] = sym_container,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
  [aux_sym_nbt_object_repeat1] = aux_sym_nbt_object_repeat1,
  [aux_sym_nbt_array_repeat1] = aux_sym_nbt_array_repeat1,
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
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '~') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '~') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '{') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '}') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(24);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '~') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ']') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 83},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 83},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 83},
  [67] = {.lex_state = 81},
  [68] = {.lex_state = 80},
  [69] = {.lex_state = 80},
  [70] = {.lex_state = 80},
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 80},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 81},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 80},
  [79] = {.lex_state = 80},
  [80] = {.lex_state = 80},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 80},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 80},
  [86] = {.lex_state = 80},
  [87] = {.lex_state = 80},
  [88] = {.lex_state = 80},
  [89] = {.lex_state = 80},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 80},
  [92] = {.lex_state = 80},
  [93] = {.lex_state = 80},
  [94] = {.lex_state = 80},
  [95] = {.lex_state = 80},
  [96] = {.lex_state = 80},
  [97] = {.lex_state = 80},
  [98] = {.lex_state = 80},
  [99] = {.lex_state = 80},
  [100] = {.lex_state = 80},
  [101] = {.lex_state = 80},
  [102] = {.lex_state = 80},
  [103] = {.lex_state = 80},
  [104] = {.lex_state = 80},
  [105] = {.lex_state = 80},
  [106] = {.lex_state = 80},
  [107] = {.lex_state = 80},
  [108] = {.lex_state = 80},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 80},
  [116] = {.lex_state = 80},
  [117] = {.lex_state = 80},
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
    [sym_root] = STATE(90),
    [sym_comment] = STATE(10),
    [sym_command] = STATE(10),
    [sym_command_name] = STATE(23),
    [aux_sym_root_repeat1] = STATE(10),
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
    STATE(113), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(35), 10,
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
    STATE(109), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
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
    STATE(109), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
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
    STATE(109), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
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
    STATE(109), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
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
    STATE(91), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
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
    STATE(109), 1,
      sym_nbt_object_value,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(110), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [249] = 7,
    ACTIONS(55), 1,
      aux_sym_command_name_token1,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(63), 1,
      aux_sym_selector_number_token3,
    STATE(95), 1,
      sym_selector_value,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(92), 2,
      sym_boolean,
      sym_selector_number,
  [274] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__line_separator,
    STATE(23), 1,
      sym_command_name,
    STATE(11), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [298] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      sym__line_separator,
    ACTIONS(80), 1,
      aux_sym_command_name_token1,
    STATE(23), 1,
      sym_command_name,
    STATE(11), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [322] = 5,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [342] = 5,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_container_repeat1,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [362] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [377] = 3,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [392] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_selector_option_section,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [407] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [422] = 3,
    ACTIONS(110), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [436] = 3,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [450] = 3,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [464] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [474] = 3,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [488] = 3,
    ACTIONS(110), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_command_repeat1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [502] = 3,
    ACTIONS(110), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [516] = 3,
    ACTIONS(110), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [530] = 3,
    ACTIONS(133), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [544] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [553] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [562] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [571] = 2,
    ACTIONS(144), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(142), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [582] = 1,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [591] = 1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [600] = 1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [609] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [618] = 1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [627] = 1,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [636] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_nbt_object_key,
    STATE(108), 1,
      sym_string,
    ACTIONS(156), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [653] = 1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [662] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [671] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [680] = 2,
    ACTIONS(168), 1,
      anon_sym_,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [691] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_nbt_object_key,
    STATE(108), 1,
      sym_string,
    ACTIONS(156), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [708] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [717] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_nbt_object_key,
    STATE(108), 1,
      sym_string,
    ACTIONS(156), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [734] = 1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [743] = 2,
    ACTIONS(177), 1,
      anon_sym_,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [754] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [763] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_nbt_object_key,
    STATE(108), 1,
      sym_string,
    ACTIONS(156), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [780] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [789] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [798] = 4,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      aux_sym_string_token1,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(52), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [812] = 4,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym_string_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(52), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [826] = 4,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_token1,
    STATE(51), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [840] = 4,
    ACTIONS(190), 1,
      aux_sym_string_token1,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(52), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [854] = 4,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_nbt_object_key,
    STATE(108), 1,
      sym_string,
    ACTIONS(156), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [868] = 1,
    ACTIONS(208), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [876] = 4,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      aux_sym_string_token1,
    STATE(54), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [890] = 1,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [898] = 3,
    ACTIONS(216), 1,
      aux_sym_command_name_token1,
    STATE(82), 1,
      sym_selector_option,
    STATE(96), 1,
      sym_selector_key,
  [908] = 2,
    ACTIONS(220), 1,
      aux_sym_string_token1,
    ACTIONS(218), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [916] = 3,
    ACTIONS(222), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
  [926] = 3,
    ACTIONS(228), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_selector_option_section_repeat1,
  [936] = 2,
    STATE(41), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [944] = 3,
    ACTIONS(233), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_selector_option_section_repeat1,
  [954] = 2,
    STATE(32), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [962] = 3,
    ACTIONS(233), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_selector_option_section_repeat1,
  [972] = 2,
    ACTIONS(239), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(241), 1,
      anon_sym_COMMA,
  [979] = 2,
    ACTIONS(243), 1,
      aux_sym_selector_option_section_token1,
    STATE(70), 1,
      aux_sym_nbt_object_repeat1,
  [986] = 2,
    ACTIONS(245), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [993] = 2,
    ACTIONS(247), 1,
      aux_sym_selector_option_section_token1,
    STATE(70), 1,
      aux_sym_nbt_object_repeat1,
  [1000] = 2,
    ACTIONS(250), 1,
      aux_sym_selector_option_section_token1,
    STATE(70), 1,
      aux_sym_nbt_object_repeat1,
  [1007] = 2,
    ACTIONS(252), 1,
      aux_sym_selector_option_section_token1,
    STATE(68), 1,
      aux_sym_nbt_object_repeat1,
  [1014] = 2,
    ACTIONS(254), 1,
      aux_sym_selector_option_section_token1,
    STATE(69), 1,
      aux_sym_nbt_array_repeat1,
  [1021] = 2,
    ACTIONS(256), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [1028] = 2,
    ACTIONS(259), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(261), 1,
      anon_sym_COMMA,
  [1035] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(25), 1,
      sym_command_name,
  [1042] = 2,
    ACTIONS(263), 1,
      aux_sym_command_name_token1,
    ACTIONS(265), 1,
      sym_number,
  [1049] = 2,
    ACTIONS(267), 1,
      aux_sym_selector_option_section_token1,
    STATE(80), 1,
      aux_sym_nbt_array_repeat1,
  [1056] = 2,
    ACTIONS(269), 1,
      aux_sym_selector_option_section_token1,
    STATE(71), 1,
      aux_sym_nbt_object_repeat1,
  [1063] = 2,
    ACTIONS(271), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_array_repeat1,
  [1070] = 2,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [1077] = 1,
    ACTIONS(277), 1,
      aux_sym_selector_option_section_token1,
  [1081] = 1,
    ACTIONS(279), 1,
      anon_sym_COLON,
  [1085] = 1,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [1089] = 1,
    ACTIONS(283), 1,
      aux_sym_selector_option_section_token1,
  [1093] = 1,
    ACTIONS(285), 1,
      aux_sym_selector_option_section_token1,
  [1097] = 1,
    ACTIONS(287), 1,
      aux_sym_selector_option_section_token1,
  [1101] = 1,
    ACTIONS(289), 1,
      aux_sym_selector_option_section_token1,
  [1105] = 1,
    ACTIONS(291), 1,
      aux_sym_selector_option_section_token1,
  [1109] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1113] = 1,
    ACTIONS(295), 1,
      aux_sym_selector_option_section_token1,
  [1117] = 1,
    ACTIONS(297), 1,
      aux_sym_selector_option_section_token1,
  [1121] = 1,
    ACTIONS(299), 1,
      aux_sym_selector_option_section_token1,
  [1125] = 1,
    ACTIONS(302), 1,
      aux_sym_selector_option_section_token1,
  [1129] = 1,
    ACTIONS(304), 1,
      aux_sym_selector_option_section_token1,
  [1133] = 1,
    ACTIONS(306), 1,
      aux_sym_selector_option_section_token1,
  [1137] = 1,
    ACTIONS(308), 1,
      aux_sym_selector_option_section_token1,
  [1141] = 1,
    ACTIONS(173), 1,
      aux_sym_selector_option_section_token1,
  [1145] = 1,
    ACTIONS(154), 1,
      aux_sym_selector_option_section_token1,
  [1149] = 1,
    ACTIONS(162), 1,
      aux_sym_selector_option_section_token1,
  [1153] = 1,
    ACTIONS(180), 1,
      aux_sym_selector_option_section_token1,
  [1157] = 1,
    ACTIONS(136), 1,
      aux_sym_selector_option_section_token1,
  [1161] = 1,
    ACTIONS(184), 1,
      aux_sym_selector_option_section_token1,
  [1165] = 1,
    ACTIONS(160), 1,
      aux_sym_selector_option_section_token1,
  [1169] = 1,
    ACTIONS(152), 1,
      aux_sym_selector_option_section_token1,
  [1173] = 1,
    ACTIONS(310), 1,
      aux_sym_selector_option_section_token1,
  [1177] = 1,
    ACTIONS(312), 1,
      aux_sym_selector_option_section_token1,
  [1181] = 1,
    ACTIONS(314), 1,
      aux_sym_selector_option_section_token1,
  [1185] = 1,
    ACTIONS(316), 1,
      aux_sym_selector_option_section_token1,
  [1189] = 1,
    ACTIONS(318), 1,
      aux_sym_selector_option_section_token1,
  [1193] = 1,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
  [1197] = 1,
    ACTIONS(322), 1,
      aux_sym_command_name_token1,
  [1201] = 1,
    ACTIONS(324), 1,
      anon_sym_,
  [1205] = 1,
    ACTIONS(326), 1,
      aux_sym_command_name_token1,
  [1209] = 1,
    ACTIONS(328), 1,
      aux_sym_selector_option_section_token1,
  [1213] = 1,
    ACTIONS(330), 1,
      aux_sym_selector_option_section_token1,
  [1217] = 1,
    ACTIONS(332), 1,
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
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 298,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 422,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 450,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 502,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 544,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 562,
  [SMALL_STATE(30)] = 571,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 618,
  [SMALL_STATE(36)] = 627,
  [SMALL_STATE(37)] = 636,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 662,
  [SMALL_STATE(40)] = 671,
  [SMALL_STATE(41)] = 680,
  [SMALL_STATE(42)] = 691,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 717,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 743,
  [SMALL_STATE(47)] = 754,
  [SMALL_STATE(48)] = 763,
  [SMALL_STATE(49)] = 780,
  [SMALL_STATE(50)] = 789,
  [SMALL_STATE(51)] = 798,
  [SMALL_STATE(52)] = 812,
  [SMALL_STATE(53)] = 826,
  [SMALL_STATE(54)] = 840,
  [SMALL_STATE(55)] = 854,
  [SMALL_STATE(56)] = 868,
  [SMALL_STATE(57)] = 876,
  [SMALL_STATE(58)] = 890,
  [SMALL_STATE(59)] = 898,
  [SMALL_STATE(60)] = 908,
  [SMALL_STATE(61)] = 916,
  [SMALL_STATE(62)] = 926,
  [SMALL_STATE(63)] = 936,
  [SMALL_STATE(64)] = 944,
  [SMALL_STATE(65)] = 954,
  [SMALL_STATE(66)] = 962,
  [SMALL_STATE(67)] = 972,
  [SMALL_STATE(68)] = 979,
  [SMALL_STATE(69)] = 986,
  [SMALL_STATE(70)] = 993,
  [SMALL_STATE(71)] = 1000,
  [SMALL_STATE(72)] = 1007,
  [SMALL_STATE(73)] = 1014,
  [SMALL_STATE(74)] = 1021,
  [SMALL_STATE(75)] = 1028,
  [SMALL_STATE(76)] = 1035,
  [SMALL_STATE(77)] = 1042,
  [SMALL_STATE(78)] = 1049,
  [SMALL_STATE(79)] = 1056,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1070,
  [SMALL_STATE(82)] = 1077,
  [SMALL_STATE(83)] = 1081,
  [SMALL_STATE(84)] = 1085,
  [SMALL_STATE(85)] = 1089,
  [SMALL_STATE(86)] = 1093,
  [SMALL_STATE(87)] = 1097,
  [SMALL_STATE(88)] = 1101,
  [SMALL_STATE(89)] = 1105,
  [SMALL_STATE(90)] = 1109,
  [SMALL_STATE(91)] = 1113,
  [SMALL_STATE(92)] = 1117,
  [SMALL_STATE(93)] = 1121,
  [SMALL_STATE(94)] = 1125,
  [SMALL_STATE(95)] = 1129,
  [SMALL_STATE(96)] = 1133,
  [SMALL_STATE(97)] = 1137,
  [SMALL_STATE(98)] = 1141,
  [SMALL_STATE(99)] = 1145,
  [SMALL_STATE(100)] = 1149,
  [SMALL_STATE(101)] = 1153,
  [SMALL_STATE(102)] = 1157,
  [SMALL_STATE(103)] = 1161,
  [SMALL_STATE(104)] = 1165,
  [SMALL_STATE(105)] = 1169,
  [SMALL_STATE(106)] = 1173,
  [SMALL_STATE(107)] = 1177,
  [SMALL_STATE(108)] = 1181,
  [SMALL_STATE(109)] = 1185,
  [SMALL_STATE(110)] = 1189,
  [SMALL_STATE(111)] = 1193,
  [SMALL_STATE(112)] = 1197,
  [SMALL_STATE(113)] = 1201,
  [SMALL_STATE(114)] = 1205,
  [SMALL_STATE(115)] = 1209,
  [SMALL_STATE(116)] = 1213,
  [SMALL_STATE(117)] = 1217,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(58),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(76),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(112),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(77),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(112),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(112),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(111),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(59),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
