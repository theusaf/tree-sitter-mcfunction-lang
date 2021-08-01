#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  sym_root = 28,
  sym_comment = 29,
  sym_command = 30,
  sym_command_name = 31,
  sym_boolean = 32,
  sym_coordinate = 33,
  sym_rotation = 34,
  sym_location = 35,
  sym_string = 36,
  sym__escape_sequence = 37,
  sym_selector = 38,
  sym_selector_option_section = 39,
  sym_selector_option = 40,
  sym_selector_key = 41,
  sym_selector_value = 42,
  sym_selector_number = 43,
  aux_sym_root_repeat1 = 44,
  aux_sym_command_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  aux_sym_selector_option_section_repeat1 = 47,
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
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
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
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
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
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '~') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '~') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '~') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
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
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
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
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 79},
  [31] = {.lex_state = 79},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 78},
  [34] = {.lex_state = 79},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 79},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 77},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 77},
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
  },
  [1] = {
    [sym_root] = STATE(46),
    [sym_comment] = STATE(4),
    [sym_command] = STATE(4),
    [sym_command_name] = STATE(9),
    [aux_sym_root_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym__line_separator] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_coordinate,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
  [30] = 7,
    ACTIONS(25), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(33), 1,
      aux_sym_selector_number_token3,
    STATE(50), 1,
      sym_selector_value,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(47), 2,
      sym_boolean,
      sym_selector_number,
  [55] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__line_separator,
    STATE(9), 1,
      sym_command_name,
    STATE(5), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [79] = 7,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      sym__line_separator,
    ACTIONS(50), 1,
      aux_sym_command_name_token1,
    STATE(9), 1,
      sym_command_name,
    STATE(5), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [103] = 3,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_selector_option_section,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [118] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [132] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [146] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_command_repeat1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [160] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_command_repeat1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [174] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [188] = 2,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [199] = 1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [208] = 2,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [219] = 1,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [228] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [237] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [246] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [255] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [264] = 1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [273] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [282] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [291] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [300] = 4,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_token1,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [314] = 1,
    ACTIONS(102), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [322] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [330] = 4,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_string_token1,
    STATE(28), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [344] = 4,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_string_token1,
    ACTIONS(115), 1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [358] = 2,
    STATE(14), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      sym_number,
      anon_sym_TILDE,
  [366] = 3,
    ACTIONS(118), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_selector_option_section_repeat1,
  [376] = 3,
    ACTIONS(123), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_selector_option_section_repeat1,
  [386] = 3,
    ACTIONS(127), 1,
      aux_sym_command_name_token1,
    STATE(39), 1,
      sym_selector_option,
    STATE(40), 1,
      sym_selector_key,
  [396] = 3,
    ACTIONS(129), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
  [406] = 3,
    ACTIONS(123), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_selector_option_section_repeat1,
  [416] = 2,
    STATE(20), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      sym_number,
      anon_sym_TILDE,
  [424] = 2,
    ACTIONS(139), 1,
      aux_sym_string_token1,
    ACTIONS(137), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [432] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(10), 1,
      sym_command_name,
  [439] = 2,
    ACTIONS(141), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [446] = 1,
    ACTIONS(145), 1,
      aux_sym_selector_option_section_token1,
  [450] = 1,
    ACTIONS(147), 1,
      aux_sym_selector_option_section_token1,
  [454] = 1,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
  [458] = 1,
    ACTIONS(151), 1,
      aux_sym_selector_option_section_token1,
  [462] = 1,
    ACTIONS(153), 1,
      anon_sym_,
  [466] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [470] = 1,
    ACTIONS(157), 1,
      aux_sym_selector_option_section_token1,
  [474] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [478] = 1,
    ACTIONS(161), 1,
      aux_sym_selector_option_section_token1,
  [482] = 1,
    ACTIONS(163), 1,
      aux_sym_selector_option_section_token1,
  [486] = 1,
    ACTIONS(166), 1,
      aux_sym_selector_option_section_token1,
  [490] = 1,
    ACTIONS(168), 1,
      aux_sym_selector_option_section_token1,
  [494] = 1,
    ACTIONS(78), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 219,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 255,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 273,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 291,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 314,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 344,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 376,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 396,
  [SMALL_STATE(34)] = 406,
  [SMALL_STATE(35)] = 416,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 432,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 446,
  [SMALL_STATE(40)] = 450,
  [SMALL_STATE(41)] = 454,
  [SMALL_STATE(42)] = 458,
  [SMALL_STATE(43)] = 462,
  [SMALL_STATE(44)] = 466,
  [SMALL_STATE(45)] = 470,
  [SMALL_STATE(46)] = 474,
  [SMALL_STATE(47)] = 478,
  [SMALL_STATE(48)] = 482,
  [SMALL_STATE(49)] = 486,
  [SMALL_STATE(50)] = 490,
  [SMALL_STATE(51)] = 494,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(37),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
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
