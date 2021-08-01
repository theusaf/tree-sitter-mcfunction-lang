#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  aux_sym_item_token1 = 28,
  anon_sym_DOT = 29,
  sym_nbt_path = 30,
  sym_root = 31,
  sym_comment = 32,
  sym_command = 33,
  sym_command_name = 34,
  sym_boolean = 35,
  sym_coordinate = 36,
  sym_rotation = 37,
  sym_location = 38,
  sym_string = 39,
  sym__escape_sequence = 40,
  sym_selector = 41,
  sym_selector_option_section = 42,
  sym_selector_option = 43,
  sym_selector_key = 44,
  sym_selector_value = 45,
  sym_selector_number = 46,
  sym_item = 47,
  sym_path = 48,
  sym_container = 49,
  aux_sym_root_repeat1 = 50,
  aux_sym_command_repeat1 = 51,
  aux_sym_string_repeat1 = 52,
  aux_sym_selector_option_section_repeat1 = 53,
  aux_sym_path_repeat1 = 54,
  aux_sym_container_repeat1 = 55,
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
  [sym_item] = "item",
  [sym_path] = "path",
  [sym_container] = "container",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
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
  [sym_item] = sym_item,
  [sym_path] = sym_path,
  [sym_container] = sym_container,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
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
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '~') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '~') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '~') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(18);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 79},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 79},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 79},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 79},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [aux_sym_command_name_token1] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
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
    [aux_sym_item_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_nbt_path] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(59),
    [sym_comment] = STATE(5),
    [sym_command] = STATE(5),
    [sym_command_name] = STATE(20),
    [aux_sym_root_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym__line_separator] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      aux_sym_item_token1,
    ACTIONS(29), 1,
      sym_nbt_path,
    STATE(54), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_item,
      sym_path,
      sym_container,
  [42] = 7,
    ACTIONS(31), 1,
      aux_sym_command_name_token1,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(39), 1,
      aux_sym_selector_number_token3,
    STATE(63), 1,
      sym_selector_value,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(60), 2,
      sym_boolean,
      sym_selector_number,
  [67] = 5,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_container_repeat1,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [87] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym__line_separator,
    STATE(20), 1,
      sym_command_name,
    STATE(7), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [111] = 5,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_container_repeat1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [131] = 7,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      sym__line_separator,
    ACTIONS(68), 1,
      aux_sym_command_name_token1,
    STATE(20), 1,
      sym_command_name,
    STATE(7), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [155] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [170] = 3,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_selector_option_section,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [185] = 3,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [200] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [215] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [229] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [243] = 3,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [257] = 1,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [267] = 3,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [281] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [295] = 3,
    ACTIONS(107), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [309] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_command_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [323] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_command_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [337] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [346] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [355] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [364] = 1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [373] = 2,
    ACTIONS(120), 1,
      anon_sym_,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [384] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [393] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [402] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [411] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [420] = 2,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [431] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [440] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [449] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [458] = 4,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    ACTIONS(143), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [472] = 1,
    ACTIONS(146), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [480] = 4,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_string_token1,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [494] = 1,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [502] = 4,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_string_token1,
    STATE(36), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [516] = 2,
    STATE(25), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [524] = 3,
    ACTIONS(160), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_selector_option_section_repeat1,
  [534] = 2,
    ACTIONS(166), 1,
      aux_sym_string_token1,
    ACTIONS(164), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [542] = 3,
    ACTIONS(168), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
  [552] = 3,
    ACTIONS(174), 1,
      aux_sym_command_name_token1,
    STATE(51), 1,
      sym_selector_key,
    STATE(52), 1,
      sym_selector_option,
  [562] = 3,
    ACTIONS(160), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_selector_option_section_repeat1,
  [572] = 2,
    STATE(22), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [580] = 3,
    ACTIONS(178), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_selector_option_section_repeat1,
  [590] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(19), 1,
      sym_command_name,
  [597] = 2,
    ACTIONS(183), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [604] = 2,
    ACTIONS(187), 1,
      aux_sym_command_name_token1,
    ACTIONS(189), 1,
      sym_number,
  [611] = 1,
    ACTIONS(191), 1,
      aux_sym_command_name_token1,
  [615] = 1,
    ACTIONS(193), 1,
      aux_sym_selector_option_section_token1,
  [619] = 1,
    ACTIONS(195), 1,
      aux_sym_selector_option_section_token1,
  [623] = 1,
    ACTIONS(197), 1,
      aux_sym_command_name_token1,
  [627] = 1,
    ACTIONS(199), 1,
      anon_sym_,
  [631] = 1,
    ACTIONS(201), 1,
      aux_sym_selector_option_section_token1,
  [635] = 1,
    ACTIONS(203), 1,
      anon_sym_EQ,
  [639] = 1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
  [643] = 1,
    ACTIONS(207), 1,
      aux_sym_selector_option_section_token1,
  [647] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [651] = 1,
    ACTIONS(211), 1,
      aux_sym_selector_option_section_token1,
  [655] = 1,
    ACTIONS(213), 1,
      aux_sym_selector_option_section_token1,
  [659] = 1,
    ACTIONS(216), 1,
      aux_sym_selector_option_section_token1,
  [663] = 1,
    ACTIONS(218), 1,
      aux_sym_selector_option_section_token1,
  [667] = 1,
    ACTIONS(129), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 337,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 373,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 472,
  [SMALL_STATE(36)] = 480,
  [SMALL_STATE(37)] = 494,
  [SMALL_STATE(38)] = 502,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 524,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 542,
  [SMALL_STATE(43)] = 552,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 572,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 597,
  [SMALL_STATE(49)] = 604,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 615,
  [SMALL_STATE(52)] = 619,
  [SMALL_STATE(53)] = 623,
  [SMALL_STATE(54)] = 627,
  [SMALL_STATE(55)] = 631,
  [SMALL_STATE(56)] = 635,
  [SMALL_STATE(57)] = 639,
  [SMALL_STATE(58)] = 643,
  [SMALL_STATE(59)] = 647,
  [SMALL_STATE(60)] = 651,
  [SMALL_STATE(61)] = 655,
  [SMALL_STATE(62)] = 659,
  [SMALL_STATE(63)] = 663,
  [SMALL_STATE(64)] = 667,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(50),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(37),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(7),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(49),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(50),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
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
