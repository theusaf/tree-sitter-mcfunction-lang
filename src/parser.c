#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  sym_command = 41,
  sym_command_name = 42,
  sym_boolean = 43,
  sym_coordinate = 44,
  sym_rotation = 45,
  sym_location = 46,
  sym_string = 47,
  sym__escape_sequence = 48,
  sym_selector = 49,
  sym_selector_option_section = 50,
  sym_selector_option = 51,
  sym_selector_key = 52,
  sym_selector_value = 53,
  sym_selector_number = 54,
  sym_nbt = 55,
  sym_nbt_object = 56,
  sym_nbt_array = 57,
  sym_nbt_object_key = 58,
  sym_nbt_object_value = 59,
  sym_nbt_number = 60,
  sym_item = 61,
  sym_path = 62,
  sym_container = 63,
  aux_sym_root_repeat1 = 64,
  aux_sym_command_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
  aux_sym_selector_option_section_repeat1 = 67,
  aux_sym_nbt_object_repeat1 = 68,
  aux_sym_nbt_array_repeat1 = 69,
  aux_sym_path_repeat1 = 70,
  aux_sym_container_repeat1 = 71,
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
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '~') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '{') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '}') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(67);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '~') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
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
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ',') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
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
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
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
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 86},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83},
  [69] = {.lex_state = 83},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 84},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 83},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 86},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 83},
  [83] = {.lex_state = 83},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 83},
  [87] = {.lex_state = 83},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 83},
  [91] = {.lex_state = 83},
  [92] = {.lex_state = 83},
  [93] = {.lex_state = 83},
  [94] = {.lex_state = 83},
  [95] = {.lex_state = 83},
  [96] = {.lex_state = 83},
  [97] = {.lex_state = 83},
  [98] = {.lex_state = 83},
  [99] = {.lex_state = 83},
  [100] = {.lex_state = 83},
  [101] = {.lex_state = 83},
  [102] = {.lex_state = 83},
  [103] = {.lex_state = 83},
  [104] = {.lex_state = 83},
  [105] = {.lex_state = 83},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 83},
  [110] = {.lex_state = 83},
  [111] = {.lex_state = 83},
  [112] = {.lex_state = 83},
  [113] = {.lex_state = 83},
  [114] = {.lex_state = 83},
  [115] = {.lex_state = 83},
  [116] = {.lex_state = 83},
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
    [sym_root] = STATE(89),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_command_name] = STATE(18),
    [aux_sym_root_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym__line_separator] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      aux_sym_item_token1,
    ACTIONS(33), 1,
      sym_nbt_path,
    STATE(107), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(37), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [53] = 9,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [86] = 9,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [119] = 9,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [152] = 9,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [185] = 8,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [215] = 8,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_nbt_object_value,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(95), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [245] = 7,
    ACTIONS(53), 1,
      aux_sym_command_name_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(61), 1,
      aux_sym_selector_number_token3,
    STATE(94), 1,
      sym_selector_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(91), 2,
      sym_boolean,
      sym_selector_number,
  [270] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_container_repeat1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [290] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym__line_separator,
    STATE(18), 1,
      sym_command_name,
    STATE(12), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [314] = 7,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_comment_token1,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      sym__line_separator,
    ACTIONS(85), 1,
      aux_sym_command_name_token1,
    STATE(18), 1,
      sym_command_name,
    STATE(12), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [338] = 5,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      aux_sym_container_repeat1,
    STATE(19), 1,
      aux_sym_path_repeat1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [358] = 3,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [373] = 3,
    ACTIONS(97), 1,
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
  [388] = 3,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_selector_option_section,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [403] = 3,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [418] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_command_repeat1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [432] = 3,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [446] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [456] = 3,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [470] = 3,
    ACTIONS(122), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [484] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [498] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [512] = 3,
    ACTIONS(131), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [526] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_command_repeat1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [540] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [549] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [558] = 2,
    ACTIONS(140), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(138), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [569] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [578] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_nbt_object_key,
    STATE(113), 1,
      sym_string,
    ACTIONS(144), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [595] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_nbt_object_key,
    STATE(113), 1,
      sym_string,
    ACTIONS(144), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [612] = 1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [621] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [630] = 1,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [639] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_nbt_object_key,
    STATE(113), 1,
      sym_string,
    ACTIONS(144), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [656] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [665] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [674] = 1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [683] = 2,
    ACTIONS(164), 1,
      anon_sym_,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [694] = 1,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [703] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_nbt_object_key,
    STATE(113), 1,
      sym_string,
    ACTIONS(144), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [720] = 2,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [731] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [740] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [749] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [758] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [767] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [776] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [785] = 4,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      aux_sym_string_token1,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(50), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [799] = 1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [807] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_nbt_object_key,
    STATE(113), 1,
      sym_string,
    ACTIONS(144), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [821] = 4,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym_string_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    STATE(50), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [835] = 4,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      aux_sym_string_token1,
    STATE(55), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [849] = 4,
    ACTIONS(196), 1,
      aux_sym_string_token1,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [863] = 1,
    ACTIONS(206), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [871] = 4,
    ACTIONS(198), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_string_token1,
    STATE(53), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [885] = 3,
    ACTIONS(212), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_selector_option_section_repeat1,
  [895] = 2,
    STATE(39), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [903] = 3,
    ACTIONS(217), 1,
      aux_sym_command_name_token1,
    STATE(105), 1,
      sym_selector_key,
    STATE(109), 1,
      sym_selector_option,
  [913] = 3,
    ACTIONS(219), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_selector_option_section_repeat1,
  [923] = 2,
    STATE(40), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [931] = 2,
    ACTIONS(225), 1,
      aux_sym_string_token1,
    ACTIONS(223), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [939] = 3,
    ACTIONS(219), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_selector_option_section_repeat1,
  [949] = 3,
    ACTIONS(229), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
  [959] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(26), 1,
      sym_command_name,
  [966] = 2,
    ACTIONS(235), 1,
      aux_sym_selector_option_section_token1,
    STATE(79), 1,
      aux_sym_nbt_array_repeat1,
  [973] = 2,
    ACTIONS(237), 1,
      aux_sym_selector_option_section_token1,
    STATE(68), 1,
      aux_sym_nbt_object_repeat1,
  [980] = 2,
    ACTIONS(240), 1,
      aux_sym_selector_option_section_token1,
    STATE(73), 1,
      aux_sym_nbt_array_repeat1,
  [987] = 2,
    ACTIONS(242), 1,
      aux_sym_command_name_token1,
    ACTIONS(244), 1,
      sym_number,
  [994] = 2,
    ACTIONS(246), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [1001] = 2,
    ACTIONS(250), 1,
      aux_sym_selector_option_section_token1,
    STATE(68), 1,
      aux_sym_nbt_object_repeat1,
  [1008] = 2,
    ACTIONS(252), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_nbt_array_repeat1,
  [1015] = 2,
    ACTIONS(254), 1,
      aux_sym_selector_option_section_token1,
    STATE(68), 1,
      aux_sym_nbt_object_repeat1,
  [1022] = 2,
    ACTIONS(256), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
  [1029] = 2,
    ACTIONS(260), 1,
      aux_sym_selector_option_section_token1,
    STATE(72), 1,
      aux_sym_nbt_object_repeat1,
  [1036] = 2,
    ACTIONS(262), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_nbt_array_repeat1,
  [1043] = 2,
    ACTIONS(265), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
  [1050] = 2,
    ACTIONS(269), 1,
      aux_sym_selector_option_section_token1,
    STATE(77), 1,
      aux_sym_nbt_array_repeat1,
  [1057] = 2,
    ACTIONS(271), 1,
      aux_sym_selector_option_section_token1,
    STATE(74), 1,
      aux_sym_nbt_object_repeat1,
  [1064] = 1,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
  [1068] = 1,
    ACTIONS(154), 1,
      aux_sym_selector_option_section_token1,
  [1072] = 1,
    ACTIONS(275), 1,
      aux_sym_selector_option_section_token1,
  [1076] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1080] = 1,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1084] = 1,
    ACTIONS(281), 1,
      aux_sym_selector_option_section_token1,
  [1088] = 1,
    ACTIONS(283), 1,
      aux_sym_selector_option_section_token1,
  [1092] = 1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [1096] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1100] = 1,
    ACTIONS(289), 1,
      aux_sym_selector_option_section_token1,
  [1104] = 1,
    ACTIONS(291), 1,
      aux_sym_selector_option_section_token1,
  [1108] = 1,
    ACTIONS(293), 1,
      aux_sym_selector_option_section_token1,
  [1112] = 1,
    ACTIONS(296), 1,
      aux_sym_selector_option_section_token1,
  [1116] = 1,
    ACTIONS(298), 1,
      aux_sym_selector_option_section_token1,
  [1120] = 1,
    ACTIONS(300), 1,
      aux_sym_selector_option_section_token1,
  [1124] = 1,
    ACTIONS(302), 1,
      aux_sym_selector_option_section_token1,
  [1128] = 1,
    ACTIONS(142), 1,
      aux_sym_selector_option_section_token1,
  [1132] = 1,
    ACTIONS(304), 1,
      aux_sym_selector_option_section_token1,
  [1136] = 1,
    ACTIONS(158), 1,
      aux_sym_selector_option_section_token1,
  [1140] = 1,
    ACTIONS(176), 1,
      aux_sym_selector_option_section_token1,
  [1144] = 1,
    ACTIONS(134), 1,
      aux_sym_selector_option_section_token1,
  [1148] = 1,
    ACTIONS(167), 1,
      aux_sym_selector_option_section_token1,
  [1152] = 1,
    ACTIONS(174), 1,
      aux_sym_selector_option_section_token1,
  [1156] = 1,
    ACTIONS(136), 1,
      aux_sym_selector_option_section_token1,
  [1160] = 1,
    ACTIONS(306), 1,
      aux_sym_selector_option_section_token1,
  [1164] = 1,
    ACTIONS(308), 1,
      aux_sym_command_name_token1,
  [1168] = 1,
    ACTIONS(310), 1,
      anon_sym_,
  [1172] = 1,
    ACTIONS(312), 1,
      aux_sym_command_name_token1,
  [1176] = 1,
    ACTIONS(314), 1,
      aux_sym_selector_option_section_token1,
  [1180] = 1,
    ACTIONS(316), 1,
      aux_sym_selector_option_section_token1,
  [1184] = 1,
    ACTIONS(318), 1,
      aux_sym_selector_option_section_token1,
  [1188] = 1,
    ACTIONS(320), 1,
      aux_sym_selector_option_section_token1,
  [1192] = 1,
    ACTIONS(322), 1,
      aux_sym_selector_option_section_token1,
  [1196] = 1,
    ACTIONS(324), 1,
      aux_sym_selector_option_section_token1,
  [1200] = 1,
    ACTIONS(326), 1,
      aux_sym_selector_option_section_token1,
  [1204] = 1,
    ACTIONS(328), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 314,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 403,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 446,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 526,
  [SMALL_STATE(27)] = 540,
  [SMALL_STATE(28)] = 549,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 569,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 595,
  [SMALL_STATE(33)] = 612,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 639,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 665,
  [SMALL_STATE(39)] = 674,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 703,
  [SMALL_STATE(43)] = 720,
  [SMALL_STATE(44)] = 731,
  [SMALL_STATE(45)] = 740,
  [SMALL_STATE(46)] = 749,
  [SMALL_STATE(47)] = 758,
  [SMALL_STATE(48)] = 767,
  [SMALL_STATE(49)] = 776,
  [SMALL_STATE(50)] = 785,
  [SMALL_STATE(51)] = 799,
  [SMALL_STATE(52)] = 807,
  [SMALL_STATE(53)] = 821,
  [SMALL_STATE(54)] = 835,
  [SMALL_STATE(55)] = 849,
  [SMALL_STATE(56)] = 863,
  [SMALL_STATE(57)] = 871,
  [SMALL_STATE(58)] = 885,
  [SMALL_STATE(59)] = 895,
  [SMALL_STATE(60)] = 903,
  [SMALL_STATE(61)] = 913,
  [SMALL_STATE(62)] = 923,
  [SMALL_STATE(63)] = 931,
  [SMALL_STATE(64)] = 939,
  [SMALL_STATE(65)] = 949,
  [SMALL_STATE(66)] = 959,
  [SMALL_STATE(67)] = 966,
  [SMALL_STATE(68)] = 973,
  [SMALL_STATE(69)] = 980,
  [SMALL_STATE(70)] = 987,
  [SMALL_STATE(71)] = 994,
  [SMALL_STATE(72)] = 1001,
  [SMALL_STATE(73)] = 1008,
  [SMALL_STATE(74)] = 1015,
  [SMALL_STATE(75)] = 1022,
  [SMALL_STATE(76)] = 1029,
  [SMALL_STATE(77)] = 1036,
  [SMALL_STATE(78)] = 1043,
  [SMALL_STATE(79)] = 1050,
  [SMALL_STATE(80)] = 1057,
  [SMALL_STATE(81)] = 1064,
  [SMALL_STATE(82)] = 1068,
  [SMALL_STATE(83)] = 1072,
  [SMALL_STATE(84)] = 1076,
  [SMALL_STATE(85)] = 1080,
  [SMALL_STATE(86)] = 1084,
  [SMALL_STATE(87)] = 1088,
  [SMALL_STATE(88)] = 1092,
  [SMALL_STATE(89)] = 1096,
  [SMALL_STATE(90)] = 1100,
  [SMALL_STATE(91)] = 1104,
  [SMALL_STATE(92)] = 1108,
  [SMALL_STATE(93)] = 1112,
  [SMALL_STATE(94)] = 1116,
  [SMALL_STATE(95)] = 1120,
  [SMALL_STATE(96)] = 1124,
  [SMALL_STATE(97)] = 1128,
  [SMALL_STATE(98)] = 1132,
  [SMALL_STATE(99)] = 1136,
  [SMALL_STATE(100)] = 1140,
  [SMALL_STATE(101)] = 1144,
  [SMALL_STATE(102)] = 1148,
  [SMALL_STATE(103)] = 1152,
  [SMALL_STATE(104)] = 1156,
  [SMALL_STATE(105)] = 1160,
  [SMALL_STATE(106)] = 1164,
  [SMALL_STATE(107)] = 1168,
  [SMALL_STATE(108)] = 1172,
  [SMALL_STATE(109)] = 1176,
  [SMALL_STATE(110)] = 1180,
  [SMALL_STATE(111)] = 1184,
  [SMALL_STATE(112)] = 1188,
  [SMALL_STATE(113)] = 1192,
  [SMALL_STATE(114)] = 1196,
  [SMALL_STATE(115)] = 1200,
  [SMALL_STATE(116)] = 1204,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(106),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(51),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(66),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(106),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(70),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(106),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(106),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(106),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(59),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(88),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(60),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(52),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
