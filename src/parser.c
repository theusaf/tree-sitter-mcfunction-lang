#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_nbt = 25,
  anon_sym_LBRACE = 26,
  anon_sym_COLON = 27,
  anon_sym_RBRACE = 28,
  anon_sym_scores = 29,
  aux_sym_selector_number_token1 = 30,
  aux_sym_selector_number_token2 = 31,
  aux_sym_selector_number_token3 = 32,
  aux_sym_nbt_object_key_token1 = 33,
  anon_sym_l = 34,
  anon_sym_d = 35,
  anon_sym_f = 36,
  anon_sym_b = 37,
  aux_sym_item_token1 = 38,
  anon_sym_DOT = 39,
  sym_nbt_path = 40,
  sym_root = 41,
  sym_comment = 42,
  sym_invalid_comment = 43,
  sym_command = 44,
  sym_command_name = 45,
  sym_boolean = 46,
  sym_coordinate = 47,
  sym_rotation = 48,
  sym_location = 49,
  sym_string = 50,
  sym__escape_sequence = 51,
  sym_selector = 52,
  sym_selector_option_section = 53,
  sym_selector_option = 54,
  sym_selector_key = 55,
  sym_selector_value = 56,
  sym_selector_nbt = 57,
  sym__selector_nbt = 58,
  sym_selector_score = 59,
  sym__selector_score_object = 60,
  sym_selector_score_key = 61,
  sym_selector_score_value = 62,
  sym_selector_number = 63,
  sym_nbt = 64,
  sym_nbt_object = 65,
  sym_nbt_array = 66,
  sym_nbt_object_key = 67,
  sym_nbt_object_value = 68,
  sym_nbt_number = 69,
  sym_item = 70,
  sym_item_nbt = 71,
  sym_item_state = 72,
  sym_state_key = 73,
  sym_state_value = 74,
  sym_path = 75,
  sym_container = 76,
  aux_sym_root_repeat1 = 77,
  aux_sym_command_repeat1 = 78,
  aux_sym_string_repeat1 = 79,
  aux_sym_selector_option_section_repeat1 = 80,
  aux_sym__selector_nbt_repeat1 = 81,
  aux_sym__selector_score_object_repeat1 = 82,
  aux_sym_nbt_array_repeat1 = 83,
  aux_sym_item_state_repeat1 = 84,
  aux_sym_path_repeat1 = 85,
  aux_sym_container_repeat1 = 86,
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
  [anon_sym_nbt] = "selector_key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_scores] = "selector_key",
  [aux_sym_selector_number_token1] = "selector_number_token1",
  [aux_sym_selector_number_token2] = "selector_number_token2",
  [aux_sym_selector_number_token3] = "selector_number_token3",
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
  [sym_selector_nbt] = "selector_nbt",
  [sym__selector_nbt] = "selector_value",
  [sym_selector_score] = "selector_score",
  [sym__selector_score_object] = "selector_value",
  [sym_selector_score_key] = "selector_score_key",
  [sym_selector_score_value] = "selector_score_value",
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
  [aux_sym__selector_nbt_repeat1] = "_selector_nbt_repeat1",
  [aux_sym__selector_score_object_repeat1] = "_selector_score_object_repeat1",
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
  [anon_sym_nbt] = sym_selector_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_scores] = sym_selector_key,
  [aux_sym_selector_number_token1] = aux_sym_selector_number_token1,
  [aux_sym_selector_number_token2] = aux_sym_selector_number_token2,
  [aux_sym_selector_number_token3] = aux_sym_selector_number_token3,
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
  [sym_selector_nbt] = sym_selector_nbt,
  [sym__selector_nbt] = sym_selector_value,
  [sym_selector_score] = sym_selector_score,
  [sym__selector_score_object] = sym_selector_value,
  [sym_selector_score_key] = sym_selector_score_key,
  [sym_selector_score_value] = sym_selector_score_value,
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
  [aux_sym__selector_nbt_repeat1] = aux_sym__selector_nbt_repeat1,
  [aux_sym__selector_score_object_repeat1] = aux_sym__selector_score_object_repeat1,
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
  [anon_sym_nbt] = {
    .visible = true,
    .named = true,
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
  [anon_sym_scores] = {
    .visible = true,
    .named = true,
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
  [sym_selector_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym__selector_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_score] = {
    .visible = true,
    .named = true,
  },
  [sym__selector_score_object] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_score_key] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_score_value] = {
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
  [aux_sym__selector_nbt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__selector_score_object_repeat1] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '~') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '~') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '}') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(28);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '~') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ',') ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '}') ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '}') ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_nbt);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_nbt);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_scores);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 97},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 97},
  [78] = {.lex_state = 94},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 97},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 91},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 92},
  [93] = {.lex_state = 91},
  [94] = {.lex_state = 97},
  [95] = {.lex_state = 91},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 91},
  [98] = {.lex_state = 91},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 91},
  [102] = {.lex_state = 91},
  [103] = {.lex_state = 91},
  [104] = {.lex_state = 91},
  [105] = {.lex_state = 91},
  [106] = {.lex_state = 91},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 91},
  [109] = {.lex_state = 92},
  [110] = {.lex_state = 95},
  [111] = {.lex_state = 92},
  [112] = {.lex_state = 91},
  [113] = {.lex_state = 92},
  [114] = {.lex_state = 91},
  [115] = {.lex_state = 91},
  [116] = {.lex_state = 91},
  [117] = {.lex_state = 91},
  [118] = {.lex_state = 91},
  [119] = {.lex_state = 91},
  [120] = {.lex_state = 91},
  [121] = {.lex_state = 91},
  [122] = {.lex_state = 91},
  [123] = {.lex_state = 91},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 91},
  [126] = {.lex_state = 91},
  [127] = {.lex_state = 91},
  [128] = {.lex_state = 91},
  [129] = {.lex_state = 91},
  [130] = {.lex_state = 91},
  [131] = {.lex_state = 91},
  [132] = {.lex_state = 91},
  [133] = {.lex_state = 91},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 91},
  [136] = {.lex_state = 91},
  [137] = {.lex_state = 91},
  [138] = {.lex_state = 91},
  [139] = {.lex_state = 31},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 91},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 91},
  [144] = {.lex_state = 91},
  [145] = {.lex_state = 91},
  [146] = {.lex_state = 91},
  [147] = {.lex_state = 91},
  [148] = {.lex_state = 31},
  [149] = {.lex_state = 91},
  [150] = {.lex_state = 91},
  [151] = {.lex_state = 91},
  [152] = {.lex_state = 91},
  [153] = {.lex_state = 91},
  [154] = {.lex_state = 91},
  [155] = {.lex_state = 91},
  [156] = {.lex_state = 91},
  [157] = {.lex_state = 91},
  [158] = {.lex_state = 91},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 91},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 91},
  [163] = {.lex_state = 91},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 31},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 91},
  [168] = {.lex_state = 91},
  [169] = {.lex_state = 91},
  [170] = {.lex_state = 91},
  [171] = {.lex_state = 91},
  [172] = {.lex_state = 91},
  [173] = {.lex_state = 91},
  [174] = {.lex_state = 91},
  [175] = {.lex_state = 91},
  [176] = {.lex_state = 91},
  [177] = {.lex_state = 31},
  [178] = {.lex_state = 91},
  [179] = {.lex_state = 0},
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
    [anon_sym_nbt] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_selector_number_token1] = ACTIONS(1),
    [aux_sym_selector_number_token2] = ACTIONS(1),
    [aux_sym_selector_number_token3] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(179),
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
    STATE(165), 1,
      sym_coordinate,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(29), 10,
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
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_container_repeat1,
    STATE(26), 1,
      aux_sym_path_repeat1,
    STATE(34), 1,
      sym_nbt_object,
    STATE(35), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [90] = 9,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [123] = 9,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(60), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_container_repeat1,
    STATE(20), 1,
      aux_sym_path_repeat1,
    STATE(34), 1,
      sym_nbt_object,
    STATE(56), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [156] = 9,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [189] = 9,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [222] = 9,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [255] = 8,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [285] = 8,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [315] = 8,
    ACTIONS(46), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_nbt_object_value,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(120), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [345] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__line_separator,
    STATE(21), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [369] = 7,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_comment_token1,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    ACTIONS(81), 1,
      sym__line_separator,
    ACTIONS(84), 1,
      aux_sym_command_name_token1,
    STATE(21), 1,
      sym_command_name,
    STATE(13), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [393] = 3,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [408] = 3,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [423] = 3,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [438] = 3,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_selector_option_section,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [453] = 3,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_command_repeat1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [467] = 6,
    ACTIONS(104), 1,
      aux_sym_command_name_token1,
    ACTIONS(106), 1,
      anon_sym_nbt,
    ACTIONS(108), 1,
      anon_sym_scores,
    STATE(171), 1,
      sym_selector_key,
    STATE(172), 1,
      sym_selector_option,
    STATE(170), 2,
      sym_selector_nbt,
      sym_selector_score,
  [487] = 3,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [501] = 3,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_command_repeat1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [515] = 3,
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
  [529] = 1,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
      anon_sym_DOT,
  [539] = 3,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_command_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [553] = 3,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [567] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [581] = 3,
    ACTIONS(131), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_command_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [595] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [604] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [613] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [622] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [631] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [640] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [649] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [658] = 1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [667] = 1,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [676] = 1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [685] = 5,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_string,
    STATE(144), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [702] = 4,
    STATE(115), 1,
      sym_selector_number,
    STATE(146), 1,
      sym_selector_score_value,
    ACTIONS(154), 2,
      sym_number,
      aux_sym_selector_number_token3,
    ACTIONS(156), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
  [717] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [726] = 1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [735] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [744] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [753] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [762] = 5,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_string,
    STATE(144), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [779] = 5,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_string,
    STATE(144), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [796] = 5,
    ACTIONS(170), 1,
      aux_sym_command_name_token1,
    ACTIONS(172), 1,
      sym_number,
    STATE(111), 1,
      sym_boolean,
    STATE(113), 1,
      sym_state_value,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
  [813] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [822] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [831] = 2,
    ACTIONS(182), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(180), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [842] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [851] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [860] = 2,
    ACTIONS(188), 1,
      anon_sym_,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [871] = 5,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_string,
    STATE(144), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [888] = 5,
    ACTIONS(193), 1,
      aux_sym_command_name_token1,
    ACTIONS(195), 1,
      sym_number,
    STATE(125), 1,
      sym_boolean,
    STATE(126), 1,
      sym_selector_value,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
  [905] = 1,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [914] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [923] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      aux_sym_command_name_token1,
  [932] = 2,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [943] = 1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
      aux_sym_command_name_token1,
  [951] = 4,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_string,
    STATE(178), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [965] = 4,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym_string_token1,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    STATE(66), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [979] = 4,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_string_token1,
    STATE(67), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [993] = 4,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1007] = 4,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_string,
    STATE(144), 1,
      sym_nbt_object_key,
    ACTIONS(150), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1021] = 4,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym_string_token1,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(66), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1035] = 4,
    ACTIONS(214), 1,
      aux_sym_string_token1,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1049] = 1,
    ACTIONS(236), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1057] = 2,
    STATE(59), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1065] = 3,
    ACTIONS(238), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
  [1075] = 3,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_selector_score_key,
  [1085] = 3,
    ACTIONS(248), 1,
      aux_sym_command_name_token1,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_state_key,
  [1095] = 3,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_selector_score_key,
  [1105] = 3,
    ACTIONS(254), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym__selector_nbt_repeat1,
  [1115] = 2,
    ACTIONS(260), 1,
      aux_sym_string_token1,
    ACTIONS(258), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1123] = 2,
    STATE(40), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym_number,
      anon_sym_TILDE,
  [1131] = 3,
    ACTIONS(262), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym__selector_nbt_repeat1,
  [1141] = 3,
    ACTIONS(267), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
  [1151] = 3,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_selector_option_section_repeat1,
  [1161] = 3,
    ACTIONS(248), 1,
      aux_sym_command_name_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_state_key,
  [1171] = 3,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_selector_option_section_repeat1,
  [1181] = 3,
    ACTIONS(254), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym__selector_nbt_repeat1,
  [1191] = 3,
    ACTIONS(283), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_selector_option_section_repeat1,
  [1201] = 2,
    ACTIONS(288), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(290), 1,
      anon_sym_COMMA,
  [1208] = 2,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym__selector_nbt,
  [1215] = 2,
    ACTIONS(294), 1,
      aux_sym_selector_option_section_token1,
    STATE(97), 1,
      aux_sym__selector_nbt_repeat1,
  [1222] = 2,
    ACTIONS(296), 1,
      aux_sym_selector_option_section_token1,
    STATE(112), 1,
      aux_sym_nbt_array_repeat1,
  [1229] = 2,
    ACTIONS(298), 1,
      aux_sym_selector_option_section_token1,
    STATE(86), 1,
      aux_sym__selector_nbt_repeat1,
  [1236] = 2,
    ACTIONS(300), 1,
      aux_sym_selector_option_section_token1,
    STATE(87), 1,
      aux_sym_nbt_array_repeat1,
  [1243] = 2,
    ACTIONS(302), 1,
      aux_sym_command_name_token1,
    ACTIONS(304), 1,
      sym_number,
  [1250] = 2,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(25), 1,
      sym_command_name,
  [1257] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      aux_sym_selector_option_section_token1,
  [1264] = 2,
    ACTIONS(308), 1,
      aux_sym_selector_option_section_token1,
    STATE(93), 1,
      aux_sym_item_state_repeat1,
  [1271] = 2,
    ACTIONS(311), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [1278] = 2,
    ACTIONS(315), 1,
      aux_sym_selector_option_section_token1,
    STATE(104), 1,
      aux_sym_nbt_array_repeat1,
  [1285] = 2,
    ACTIONS(317), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(319), 1,
      anon_sym_COMMA,
  [1292] = 2,
    ACTIONS(321), 1,
      aux_sym_selector_option_section_token1,
    STATE(97), 1,
      aux_sym__selector_nbt_repeat1,
  [1299] = 2,
    ACTIONS(324), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym__selector_nbt_repeat1,
  [1306] = 2,
    ACTIONS(244), 1,
      aux_sym_command_name_token1,
    STATE(137), 1,
      sym_selector_score_key,
  [1313] = 2,
    ACTIONS(248), 1,
      aux_sym_command_name_token1,
    STATE(160), 1,
      sym_state_key,
  [1320] = 2,
    ACTIONS(326), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym__selector_score_object_repeat1,
  [1327] = 2,
    ACTIONS(329), 1,
      aux_sym_selector_option_section_token1,
    STATE(108), 1,
      aux_sym_item_state_repeat1,
  [1334] = 2,
    ACTIONS(331), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym__selector_score_object_repeat1,
  [1341] = 2,
    ACTIONS(333), 1,
      aux_sym_selector_option_section_token1,
    STATE(112), 1,
      aux_sym_nbt_array_repeat1,
  [1348] = 2,
    ACTIONS(335), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym__selector_score_object_repeat1,
  [1355] = 2,
    ACTIONS(337), 1,
      aux_sym_selector_option_section_token1,
    STATE(97), 1,
      aux_sym__selector_nbt_repeat1,
  [1362] = 2,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym__selector_score_object,
  [1369] = 2,
    ACTIONS(341), 1,
      aux_sym_selector_option_section_token1,
    STATE(93), 1,
      aux_sym_item_state_repeat1,
  [1376] = 2,
    ACTIONS(267), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(343), 1,
      anon_sym_COMMA,
  [1383] = 2,
    ACTIONS(345), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [1390] = 2,
    ACTIONS(349), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(351), 1,
      anon_sym_COMMA,
  [1397] = 2,
    ACTIONS(353), 1,
      aux_sym_selector_option_section_token1,
    STATE(112), 1,
      aux_sym_nbt_array_repeat1,
  [1404] = 2,
    ACTIONS(356), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(358), 1,
      anon_sym_COMMA,
  [1411] = 1,
    ACTIONS(313), 1,
      aux_sym_selector_option_section_token1,
  [1415] = 1,
    ACTIONS(360), 1,
      aux_sym_selector_option_section_token1,
  [1419] = 1,
    ACTIONS(362), 1,
      aux_sym_selector_option_section_token1,
  [1423] = 1,
    ACTIONS(364), 1,
      aux_sym_selector_option_section_token1,
  [1427] = 1,
    ACTIONS(366), 1,
      aux_sym_selector_option_section_token1,
  [1431] = 1,
    ACTIONS(368), 1,
      aux_sym_selector_option_section_token1,
  [1435] = 1,
    ACTIONS(370), 1,
      aux_sym_selector_option_section_token1,
  [1439] = 1,
    ACTIONS(372), 1,
      aux_sym_selector_option_section_token1,
  [1443] = 1,
    ACTIONS(374), 1,
      aux_sym_selector_option_section_token1,
  [1447] = 1,
    ACTIONS(376), 1,
      aux_sym_selector_option_section_token1,
  [1451] = 1,
    ACTIONS(378), 1,
      aux_sym_selector_option_section_token1,
  [1455] = 1,
    ACTIONS(380), 1,
      aux_sym_selector_option_section_token1,
  [1459] = 1,
    ACTIONS(382), 1,
      aux_sym_selector_option_section_token1,
  [1463] = 1,
    ACTIONS(384), 1,
      aux_sym_selector_option_section_token1,
  [1467] = 1,
    ACTIONS(386), 1,
      aux_sym_selector_option_section_token1,
  [1471] = 1,
    ACTIONS(388), 1,
      aux_sym_selector_option_section_token1,
  [1475] = 1,
    ACTIONS(390), 1,
      aux_sym_selector_option_section_token1,
  [1479] = 1,
    ACTIONS(392), 1,
      aux_sym_selector_option_section_token1,
  [1483] = 1,
    ACTIONS(394), 1,
      aux_sym_selector_option_section_token1,
  [1487] = 1,
    ACTIONS(396), 1,
      aux_sym_selector_option_section_token1,
  [1491] = 1,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [1495] = 1,
    ACTIONS(400), 1,
      aux_sym_selector_option_section_token1,
  [1499] = 1,
    ACTIONS(402), 1,
      aux_sym_selector_option_section_token1,
  [1503] = 1,
    ACTIONS(404), 1,
      aux_sym_selector_option_section_token1,
  [1507] = 1,
    ACTIONS(406), 1,
      aux_sym_selector_option_section_token1,
  [1511] = 1,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [1515] = 1,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [1519] = 1,
    ACTIONS(412), 1,
      aux_sym_selector_option_section_token1,
  [1523] = 1,
    ACTIONS(414), 1,
      anon_sym_EQ,
  [1527] = 1,
    ACTIONS(416), 1,
      aux_sym_selector_option_section_token1,
  [1531] = 1,
    ACTIONS(418), 1,
      aux_sym_selector_option_section_token1,
  [1535] = 1,
    ACTIONS(420), 1,
      aux_sym_selector_option_section_token1,
  [1539] = 1,
    ACTIONS(422), 1,
      aux_sym_selector_option_section_token1,
  [1543] = 1,
    ACTIONS(424), 1,
      aux_sym_selector_option_section_token1,
  [1547] = 1,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [1551] = 1,
    ACTIONS(428), 1,
      aux_sym_selector_option_section_token1,
  [1555] = 1,
    ACTIONS(203), 1,
      aux_sym_selector_option_section_token1,
  [1559] = 1,
    ACTIONS(136), 1,
      aux_sym_selector_option_section_token1,
  [1563] = 1,
    ACTIONS(146), 1,
      aux_sym_selector_option_section_token1,
  [1567] = 1,
    ACTIONS(176), 1,
      aux_sym_selector_option_section_token1,
  [1571] = 1,
    ACTIONS(178), 1,
      aux_sym_selector_option_section_token1,
  [1575] = 1,
    ACTIONS(160), 1,
      aux_sym_selector_option_section_token1,
  [1579] = 1,
    ACTIONS(430), 1,
      aux_sym_selector_option_section_token1,
  [1583] = 1,
    ACTIONS(138), 1,
      aux_sym_selector_option_section_token1,
  [1587] = 1,
    ACTIONS(148), 1,
      aux_sym_selector_option_section_token1,
  [1591] = 1,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
  [1595] = 1,
    ACTIONS(434), 1,
      aux_sym_selector_option_section_token1,
  [1599] = 1,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [1603] = 1,
    ACTIONS(438), 1,
      aux_sym_selector_option_section_token1,
  [1607] = 1,
    ACTIONS(440), 1,
      aux_sym_selector_option_section_token1,
  [1611] = 1,
    ACTIONS(442), 1,
      aux_sym_command_name_token1,
  [1615] = 1,
    ACTIONS(444), 1,
      anon_sym_,
  [1619] = 1,
    ACTIONS(446), 1,
      aux_sym_command_name_token1,
  [1623] = 1,
    ACTIONS(448), 1,
      aux_sym_selector_option_section_token1,
  [1627] = 1,
    ACTIONS(450), 1,
      aux_sym_selector_option_section_token1,
  [1631] = 1,
    ACTIONS(452), 1,
      aux_sym_selector_option_section_token1,
  [1635] = 1,
    ACTIONS(454), 1,
      aux_sym_selector_option_section_token1,
  [1639] = 1,
    ACTIONS(456), 1,
      aux_sym_selector_option_section_token1,
  [1643] = 1,
    ACTIONS(458), 1,
      aux_sym_selector_option_section_token1,
  [1647] = 1,
    ACTIONS(460), 1,
      aux_sym_selector_option_section_token1,
  [1651] = 1,
    ACTIONS(462), 1,
      aux_sym_selector_option_section_token1,
  [1655] = 1,
    ACTIONS(464), 1,
      aux_sym_selector_option_section_token1,
  [1659] = 1,
    ACTIONS(466), 1,
      aux_sym_selector_option_section_token1,
  [1663] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [1667] = 1,
    ACTIONS(470), 1,
      aux_sym_selector_option_section_token1,
  [1671] = 1,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 423,
  [SMALL_STATE(17)] = 438,
  [SMALL_STATE(18)] = 453,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 487,
  [SMALL_STATE(21)] = 501,
  [SMALL_STATE(22)] = 515,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 581,
  [SMALL_STATE(28)] = 595,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 631,
  [SMALL_STATE(33)] = 640,
  [SMALL_STATE(34)] = 649,
  [SMALL_STATE(35)] = 658,
  [SMALL_STATE(36)] = 667,
  [SMALL_STATE(37)] = 676,
  [SMALL_STATE(38)] = 685,
  [SMALL_STATE(39)] = 702,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 726,
  [SMALL_STATE(42)] = 735,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 753,
  [SMALL_STATE(45)] = 762,
  [SMALL_STATE(46)] = 779,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 813,
  [SMALL_STATE(49)] = 822,
  [SMALL_STATE(50)] = 831,
  [SMALL_STATE(51)] = 842,
  [SMALL_STATE(52)] = 851,
  [SMALL_STATE(53)] = 860,
  [SMALL_STATE(54)] = 871,
  [SMALL_STATE(55)] = 888,
  [SMALL_STATE(56)] = 905,
  [SMALL_STATE(57)] = 914,
  [SMALL_STATE(58)] = 923,
  [SMALL_STATE(59)] = 932,
  [SMALL_STATE(60)] = 943,
  [SMALL_STATE(61)] = 951,
  [SMALL_STATE(62)] = 965,
  [SMALL_STATE(63)] = 979,
  [SMALL_STATE(64)] = 993,
  [SMALL_STATE(65)] = 1007,
  [SMALL_STATE(66)] = 1021,
  [SMALL_STATE(67)] = 1035,
  [SMALL_STATE(68)] = 1049,
  [SMALL_STATE(69)] = 1057,
  [SMALL_STATE(70)] = 1065,
  [SMALL_STATE(71)] = 1075,
  [SMALL_STATE(72)] = 1085,
  [SMALL_STATE(73)] = 1095,
  [SMALL_STATE(74)] = 1105,
  [SMALL_STATE(75)] = 1115,
  [SMALL_STATE(76)] = 1123,
  [SMALL_STATE(77)] = 1131,
  [SMALL_STATE(78)] = 1141,
  [SMALL_STATE(79)] = 1151,
  [SMALL_STATE(80)] = 1161,
  [SMALL_STATE(81)] = 1171,
  [SMALL_STATE(82)] = 1181,
  [SMALL_STATE(83)] = 1191,
  [SMALL_STATE(84)] = 1201,
  [SMALL_STATE(85)] = 1208,
  [SMALL_STATE(86)] = 1215,
  [SMALL_STATE(87)] = 1222,
  [SMALL_STATE(88)] = 1229,
  [SMALL_STATE(89)] = 1236,
  [SMALL_STATE(90)] = 1243,
  [SMALL_STATE(91)] = 1250,
  [SMALL_STATE(92)] = 1257,
  [SMALL_STATE(93)] = 1264,
  [SMALL_STATE(94)] = 1271,
  [SMALL_STATE(95)] = 1278,
  [SMALL_STATE(96)] = 1285,
  [SMALL_STATE(97)] = 1292,
  [SMALL_STATE(98)] = 1299,
  [SMALL_STATE(99)] = 1306,
  [SMALL_STATE(100)] = 1313,
  [SMALL_STATE(101)] = 1320,
  [SMALL_STATE(102)] = 1327,
  [SMALL_STATE(103)] = 1334,
  [SMALL_STATE(104)] = 1341,
  [SMALL_STATE(105)] = 1348,
  [SMALL_STATE(106)] = 1355,
  [SMALL_STATE(107)] = 1362,
  [SMALL_STATE(108)] = 1369,
  [SMALL_STATE(109)] = 1376,
  [SMALL_STATE(110)] = 1383,
  [SMALL_STATE(111)] = 1390,
  [SMALL_STATE(112)] = 1397,
  [SMALL_STATE(113)] = 1404,
  [SMALL_STATE(114)] = 1411,
  [SMALL_STATE(115)] = 1415,
  [SMALL_STATE(116)] = 1419,
  [SMALL_STATE(117)] = 1423,
  [SMALL_STATE(118)] = 1427,
  [SMALL_STATE(119)] = 1431,
  [SMALL_STATE(120)] = 1435,
  [SMALL_STATE(121)] = 1439,
  [SMALL_STATE(122)] = 1443,
  [SMALL_STATE(123)] = 1447,
  [SMALL_STATE(124)] = 1451,
  [SMALL_STATE(125)] = 1455,
  [SMALL_STATE(126)] = 1459,
  [SMALL_STATE(127)] = 1463,
  [SMALL_STATE(128)] = 1467,
  [SMALL_STATE(129)] = 1471,
  [SMALL_STATE(130)] = 1475,
  [SMALL_STATE(131)] = 1479,
  [SMALL_STATE(132)] = 1483,
  [SMALL_STATE(133)] = 1487,
  [SMALL_STATE(134)] = 1491,
  [SMALL_STATE(135)] = 1495,
  [SMALL_STATE(136)] = 1499,
  [SMALL_STATE(137)] = 1503,
  [SMALL_STATE(138)] = 1507,
  [SMALL_STATE(139)] = 1511,
  [SMALL_STATE(140)] = 1515,
  [SMALL_STATE(141)] = 1519,
  [SMALL_STATE(142)] = 1523,
  [SMALL_STATE(143)] = 1527,
  [SMALL_STATE(144)] = 1531,
  [SMALL_STATE(145)] = 1535,
  [SMALL_STATE(146)] = 1539,
  [SMALL_STATE(147)] = 1543,
  [SMALL_STATE(148)] = 1547,
  [SMALL_STATE(149)] = 1551,
  [SMALL_STATE(150)] = 1555,
  [SMALL_STATE(151)] = 1559,
  [SMALL_STATE(152)] = 1563,
  [SMALL_STATE(153)] = 1567,
  [SMALL_STATE(154)] = 1571,
  [SMALL_STATE(155)] = 1575,
  [SMALL_STATE(156)] = 1579,
  [SMALL_STATE(157)] = 1583,
  [SMALL_STATE(158)] = 1587,
  [SMALL_STATE(159)] = 1591,
  [SMALL_STATE(160)] = 1595,
  [SMALL_STATE(161)] = 1599,
  [SMALL_STATE(162)] = 1603,
  [SMALL_STATE(163)] = 1607,
  [SMALL_STATE(164)] = 1611,
  [SMALL_STATE(165)] = 1615,
  [SMALL_STATE(166)] = 1619,
  [SMALL_STATE(167)] = 1623,
  [SMALL_STATE(168)] = 1627,
  [SMALL_STATE(169)] = 1631,
  [SMALL_STATE(170)] = 1635,
  [SMALL_STATE(171)] = 1639,
  [SMALL_STATE(172)] = 1643,
  [SMALL_STATE(173)] = 1647,
  [SMALL_STATE(174)] = 1651,
  [SMALL_STATE(175)] = 1655,
  [SMALL_STATE(176)] = 1659,
  [SMALL_STATE(177)] = 1663,
  [SMALL_STATE(178)] = 1667,
  [SMALL_STATE(179)] = 1671,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(164),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(164),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(91),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(90),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(164),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(164),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(164),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 1), SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(159),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(19),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(100),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_score_object_repeat1, 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(65),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 2), SHIFT_REPEAT(99),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(9),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 8),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [472] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
