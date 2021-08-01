#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_EQ = 23,
  aux_sym_selector_number_token1 = 24,
  aux_sym_selector_number_token2 = 25,
  aux_sym_selector_number_token3 = 26,
  sym_root = 27,
  sym_comment = 28,
  sym_command = 29,
  sym_command_name = 30,
  sym_boolean = 31,
  sym_coordinate = 32,
  sym_rotation = 33,
  sym_location = 34,
  sym_string = 35,
  sym__escape_sequence = 36,
  sym_selector = 37,
  sym_selector_option_section = 38,
  sym_selector_option = 39,
  sym_selector_key = 40,
  sym_selector_value = 41,
  sym_selector_number = 42,
  aux_sym_root_repeat1 = 43,
  aux_sym_command_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
  aux_sym_selector_option_section_repeat1 = 46,
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
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '~') ADVANCE(48);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '~') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '~') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 4},
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
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(42),
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
    STATE(44), 1,
      sym_coordinate,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 5,
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
    ACTIONS(31), 1,
      aux_sym_selector_number_token3,
    STATE(35), 1,
      sym_selector_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(37), 2,
      sym_boolean,
      sym_selector_number,
  [55] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__line_separator,
    STATE(9), 1,
      sym_command_name,
    STATE(5), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [79] = 7,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_comment_token1,
    ACTIONS(42), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      sym__line_separator,
    ACTIONS(48), 1,
      aux_sym_command_name_token1,
    STATE(9), 1,
      sym_command_name,
    STATE(5), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [103] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [114] = 3,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_selector_option_section,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [129] = 3,
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
  [143] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_command_repeat1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [157] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_command_repeat1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [171] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [185] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [199] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [208] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [217] = 1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [226] = 2,
    ACTIONS(74), 1,
      anon_sym_,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [237] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [246] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [255] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [264] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [273] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [282] = 1,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [291] = 2,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [302] = 4,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_string_token1,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [316] = 1,
    ACTIONS(100), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [324] = 5,
    ACTIONS(102), 1,
      aux_sym_command_name_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(34), 1,
      sym_selector_option,
    STATE(43), 1,
      sym_selector_key,
  [340] = 4,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_string_token1,
    STATE(30), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [354] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [362] = 5,
    ACTIONS(113), 1,
      aux_sym_command_name_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(34), 1,
      sym_selector_option,
    STATE(43), 1,
      sym_selector_key,
  [378] = 4,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_string_token1,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    STATE(30), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [392] = 5,
    ACTIONS(113), 1,
      aux_sym_command_name_token1,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(34), 1,
      sym_selector_option,
    STATE(43), 1,
      sym_selector_key,
  [408] = 2,
    ACTIONS(129), 1,
      aux_sym_string_token1,
    ACTIONS(127), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [416] = 1,
    ACTIONS(131), 3,
      aux_sym_command_name_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [422] = 2,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(134), 2,
      aux_sym_command_name_token1,
      anon_sym_RBRACK,
  [430] = 1,
    ACTIONS(138), 3,
      aux_sym_command_name_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [436] = 2,
    STATE(18), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      sym_number,
      anon_sym_TILDE,
  [444] = 1,
    ACTIONS(140), 3,
      aux_sym_command_name_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [450] = 2,
    STATE(23), 1,
      sym_coordinate,
    ACTIONS(19), 2,
      sym_number,
      anon_sym_TILDE,
  [458] = 1,
    ACTIONS(142), 3,
      aux_sym_command_name_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [464] = 1,
    ACTIONS(105), 2,
      aux_sym_command_name_token1,
      anon_sym_RBRACK,
  [469] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(10), 1,
      sym_command_name,
  [476] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [480] = 1,
    ACTIONS(146), 1,
      anon_sym_EQ,
  [484] = 1,
    ACTIONS(148), 1,
      anon_sym_,
  [488] = 1,
    ACTIONS(150), 1,
      anon_sym_EQ,
  [492] = 1,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 226,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 255,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 273,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 291,
  [SMALL_STATE(24)] = 302,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 340,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 378,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 408,
  [SMALL_STATE(33)] = 416,
  [SMALL_STATE(34)] = 422,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 436,
  [SMALL_STATE(37)] = 444,
  [SMALL_STATE(38)] = 450,
  [SMALL_STATE(39)] = 458,
  [SMALL_STATE(40)] = 464,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 480,
  [SMALL_STATE(44)] = 484,
  [SMALL_STATE(45)] = 488,
  [SMALL_STATE(46)] = 492,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(41),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(45),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
