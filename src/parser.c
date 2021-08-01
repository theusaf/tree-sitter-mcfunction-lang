#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_root = 30,
  sym_comment = 31,
  sym_command = 32,
  sym_command_name = 33,
  sym_boolean = 34,
  sym_coordinate = 35,
  sym_rotation = 36,
  sym_location = 37,
  sym_string = 38,
  sym__escape_sequence = 39,
  sym_selector = 40,
  sym_selector_option_section = 41,
  sym_selector_option = 42,
  sym_selector_key = 43,
  sym_selector_value = 44,
  sym_selector_number = 45,
  sym_item = 46,
  sym_path = 47,
  sym_container = 48,
  aux_sym_root_repeat1 = 49,
  aux_sym_command_repeat1 = 50,
  aux_sym_string_repeat1 = 51,
  aux_sym_selector_option_section_repeat1 = 52,
  aux_sym_path_repeat1 = 53,
  aux_sym_container_repeat1 = 54,
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
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '~') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '~') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '~') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ']') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 71},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 71},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 71},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 69},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 69},
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
  [0] = 10,
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
  [39] = 7,
    ACTIONS(29), 1,
      aux_sym_command_name_token1,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(37), 1,
      aux_sym_selector_number_token3,
    STATE(63), 1,
      sym_selector_value,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(60), 2,
      sym_boolean,
      sym_selector_number,
  [64] = 5,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_container_repeat1,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [84] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__line_separator,
    STATE(20), 1,
      sym_command_name,
    STATE(7), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [108] = 5,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_container_repeat1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [128] = 7,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      sym__line_separator,
    ACTIONS(66), 1,
      aux_sym_command_name_token1,
    STATE(20), 1,
      sym_command_name,
    STATE(7), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [152] = 3,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [167] = 3,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_selector_option_section,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [182] = 3,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [197] = 3,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_container_repeat1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [212] = 3,
    ACTIONS(84), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [226] = 3,
    ACTIONS(84), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [240] = 3,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [254] = 1,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [264] = 3,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [278] = 3,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [292] = 3,
    ACTIONS(105), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [306] = 3,
    ACTIONS(84), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_command_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [320] = 3,
    ACTIONS(84), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_command_repeat1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [334] = 1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [343] = 1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [352] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [361] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [370] = 2,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [381] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [390] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [399] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [408] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [417] = 2,
    ACTIONS(129), 1,
      anon_sym_,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [428] = 1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [437] = 1,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [446] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [455] = 4,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [469] = 1,
    ACTIONS(144), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [477] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_token1,
    ACTIONS(150), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [491] = 1,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [499] = 4,
    ACTIONS(150), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    STATE(36), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [513] = 2,
    STATE(25), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [521] = 3,
    ACTIONS(158), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_selector_option_section_repeat1,
  [531] = 2,
    ACTIONS(164), 1,
      aux_sym_string_token1,
    ACTIONS(162), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [539] = 3,
    ACTIONS(166), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
  [549] = 3,
    ACTIONS(172), 1,
      aux_sym_command_name_token1,
    STATE(51), 1,
      sym_selector_key,
    STATE(52), 1,
      sym_selector_option,
  [559] = 3,
    ACTIONS(158), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_selector_option_section_repeat1,
  [569] = 2,
    STATE(22), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      sym_number,
      anon_sym_TILDE,
  [577] = 3,
    ACTIONS(176), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_selector_option_section_repeat1,
  [587] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(19), 1,
      sym_command_name,
  [594] = 2,
    ACTIONS(181), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
  [601] = 2,
    ACTIONS(185), 1,
      aux_sym_command_name_token1,
    ACTIONS(187), 1,
      sym_number,
  [608] = 1,
    ACTIONS(189), 1,
      aux_sym_command_name_token1,
  [612] = 1,
    ACTIONS(191), 1,
      aux_sym_selector_option_section_token1,
  [616] = 1,
    ACTIONS(193), 1,
      aux_sym_selector_option_section_token1,
  [620] = 1,
    ACTIONS(195), 1,
      aux_sym_command_name_token1,
  [624] = 1,
    ACTIONS(197), 1,
      anon_sym_,
  [628] = 1,
    ACTIONS(199), 1,
      aux_sym_selector_option_section_token1,
  [632] = 1,
    ACTIONS(201), 1,
      anon_sym_EQ,
  [636] = 1,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
  [640] = 1,
    ACTIONS(205), 1,
      aux_sym_selector_option_section_token1,
  [644] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [648] = 1,
    ACTIONS(209), 1,
      aux_sym_selector_option_section_token1,
  [652] = 1,
    ACTIONS(211), 1,
      aux_sym_selector_option_section_token1,
  [656] = 1,
    ACTIONS(214), 1,
      aux_sym_selector_option_section_token1,
  [660] = 1,
    ACTIONS(216), 1,
      aux_sym_selector_option_section_token1,
  [664] = 1,
    ACTIONS(127), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 320,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 428,
  [SMALL_STATE(32)] = 437,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 455,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 477,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 559,
  [SMALL_STATE(45)] = 569,
  [SMALL_STATE(46)] = 577,
  [SMALL_STATE(47)] = 587,
  [SMALL_STATE(48)] = 594,
  [SMALL_STATE(49)] = 601,
  [SMALL_STATE(50)] = 608,
  [SMALL_STATE(51)] = 612,
  [SMALL_STATE(52)] = 616,
  [SMALL_STATE(53)] = 620,
  [SMALL_STATE(54)] = 624,
  [SMALL_STATE(55)] = 628,
  [SMALL_STATE(56)] = 632,
  [SMALL_STATE(57)] = 636,
  [SMALL_STATE(58)] = 640,
  [SMALL_STATE(59)] = 644,
  [SMALL_STATE(60)] = 648,
  [SMALL_STATE(61)] = 652,
  [SMALL_STATE(62)] = 656,
  [SMALL_STATE(63)] = 660,
  [SMALL_STATE(64)] = 664,
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
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(50),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(37),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(45),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
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
