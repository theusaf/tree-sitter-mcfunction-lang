#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_SLASH = 2,
  anon_sym_LF = 3,
  anon_sym_execute = 4,
  anon_sym_run = 5,
  anon_sym_in = 6,
  anon_sym_if = 7,
  anon_sym_unless = 8,
  anon_sym_facing = 9,
  anon_sym_anchored = 10,
  anon_sym_align = 11,
  anon_sym_at = 12,
  anon_sym_as = 13,
  anon_sym_positioned = 14,
  anon_sym_rotated = 15,
  anon_sym_store = 16,
  aux_sym_command_name_token1 = 17,
  aux_sym_number_token1 = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_TILDE = 21,
  anon_sym_ = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_token1 = 24,
  anon_sym_BSLASH = 25,
  aux_sym_selector_token1 = 26,
  anon_sym_LBRACK = 27,
  anon_sym_COMMA = 28,
  anon_sym_RBRACK = 29,
  anon_sym_EQ = 30,
  aux_sym_selector_key_token1 = 31,
  aux_sym_selector_number_token1 = 32,
  aux_sym_selector_number_token2 = 33,
  aux_sym_selector_number_token3 = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_COLON = 37,
  sym__namespace = 38,
  aux_sym_path_token1 = 39,
  aux_sym_path_token2 = 40,
  aux_sym_container_token1 = 41,
  anon_sym_LBRACK2 = 42,
  anon_sym_l = 43,
  anon_sym_s = 44,
  anon_sym_d = 45,
  anon_sym_f = 46,
  anon_sym_b = 47,
  sym_root = 48,
  sym_comment = 49,
  sym_invalid_comment = 50,
  sym_command = 51,
  sym_execute_command = 52,
  sym_execute_keyword = 53,
  sym_command_name = 54,
  sym_identifier = 55,
  sym_number = 56,
  sym_boolean = 57,
  sym_coordinate = 58,
  sym_rotation = 59,
  sym_location = 60,
  sym_string = 61,
  sym__escape_sequence = 62,
  sym_selector = 63,
  sym_selector_option_section = 64,
  sym_selector_option = 65,
  sym_selector_key = 66,
  sym_selector_value = 67,
  sym_selector_number = 68,
  sym_selector_object = 69,
  sym_item = 70,
  sym_path = 71,
  sym_container = 72,
  sym_nbt = 73,
  sym_nbt_object = 74,
  sym_nbt_array = 75,
  sym_nbt_object_key = 76,
  sym_nbt_object_value = 77,
  sym_nbt_number = 78,
  aux_sym_root_repeat1 = 79,
  aux_sym_command_repeat1 = 80,
  aux_sym_execute_command_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
  aux_sym_selector_option_section_repeat1 = 83,
  aux_sym_selector_object_repeat1 = 84,
  aux_sym_path_repeat1 = 85,
  aux_sym_container_repeat1 = 86,
  aux_sym_nbt_object_repeat1 = 87,
  aux_sym_nbt_array_repeat1 = 88,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_LF] = "\n",
  [anon_sym_execute] = "command_name",
  [anon_sym_run] = "execute_keyword",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_facing] = "facing",
  [anon_sym_anchored] = "anchored",
  [anon_sym_align] = "align",
  [anon_sym_at] = "at",
  [anon_sym_as] = "as",
  [anon_sym_positioned] = "positioned",
  [anon_sym_rotated] = "rotated",
  [anon_sym_store] = "store",
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
  [sym_comment] = "comment",
  [sym_invalid_comment] = "invalid_comment",
  [sym_command] = "command",
  [sym_execute_command] = "execute_command",
  [sym_execute_keyword] = "execute_keyword",
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
  [aux_sym_execute_command_repeat1] = "execute_command_repeat1",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_execute] = sym_command_name,
  [anon_sym_run] = sym_execute_keyword,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_facing] = anon_sym_facing,
  [anon_sym_anchored] = anon_sym_anchored,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_positioned] = anon_sym_positioned,
  [anon_sym_rotated] = anon_sym_rotated,
  [anon_sym_store] = anon_sym_store,
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
  [sym_comment] = sym_comment,
  [sym_invalid_comment] = sym_invalid_comment,
  [sym_command] = sym_command,
  [sym_execute_command] = sym_execute_command,
  [sym_execute_keyword] = sym_execute_keyword,
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
  [aux_sym_execute_command_repeat1] = aux_sym_execute_command_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_facing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anchored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positioned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
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
  [sym_execute_command] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_keyword] = {
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
  [aux_sym_execute_command_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_x, 0},
    {field_y, 2},
  [2] =
    {field_nbt_number_suffix, 1},
  [3] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_command,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_execute_command, 2,
    sym_execute_command,
    sym_command,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(175);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 45:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_container_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 48},
  [106] = {.lex_state = 48},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 48},
  [121] = {.lex_state = 48},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 48},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 48},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 48},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 48},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_anchored] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_positioned] = ACTIONS(1),
    [anon_sym_rotated] = ACTIONS(1),
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
    [sym_root] = STATE(166),
    [sym_comment] = STATE(80),
    [sym_command] = STATE(80),
    [sym_execute_command] = STATE(133),
    [sym_command_name] = STATE(7),
    [aux_sym_root_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_selector_token1,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    STATE(10), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(24), 1,
      sym_coordinate,
    STATE(4), 10,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_identifier,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(17), 11,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
  [62] = 14,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_selector_token1,
    ACTIONS(29), 1,
      sym__namespace,
    ACTIONS(31), 1,
      aux_sym_path_token1,
    ACTIONS(33), 1,
      anon_sym_run,
    STATE(10), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(24), 1,
      sym_coordinate,
    STATE(2), 10,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_identifier,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(17), 11,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
  [124] = 14,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(38), 1,
      anon_sym_run,
    ACTIONS(43), 1,
      aux_sym_command_name_token1,
    ACTIONS(46), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      anon_sym_TILDE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      aux_sym_selector_token1,
    ACTIONS(58), 1,
      sym__namespace,
    ACTIONS(61), 1,
      aux_sym_path_token1,
    STATE(10), 1,
      sym_item,
    STATE(23), 1,
      sym_number,
    STATE(24), 1,
      sym_coordinate,
    STATE(4), 10,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_identifier,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(40), 11,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
  [186] = 17,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      aux_sym_command_name_token1,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_selector_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__namespace,
    ACTIONS(84), 1,
      aux_sym_path_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    STATE(35), 1,
      sym_item,
    STATE(51), 1,
      sym_coordinate,
    STATE(52), 1,
      sym_number,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(8), 11,
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
  [250] = 17,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      aux_sym_command_name_token1,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_selector_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__namespace,
    ACTIONS(84), 1,
      aux_sym_path_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_item,
    STATE(51), 1,
      sym_coordinate,
    STATE(52), 1,
      sym_number,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(8), 11,
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
  [314] = 17,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      aux_sym_command_name_token1,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_selector_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__namespace,
    ACTIONS(84), 1,
      aux_sym_path_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    ACTIONS(90), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_item,
    STATE(51), 1,
      sym_coordinate,
    STATE(52), 1,
      sym_number,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(5), 11,
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
  [378] = 17,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      aux_sym_command_name_token1,
    ACTIONS(100), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      anon_sym_TILDE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_selector_token1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym__namespace,
    ACTIONS(121), 1,
      aux_sym_path_token1,
    ACTIONS(124), 1,
      anon_sym_LBRACK2,
    STATE(35), 1,
      sym_item,
    STATE(51), 1,
      sym_coordinate,
    STATE(52), 1,
      sym_number,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(8), 11,
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
  [442] = 17,
    ACTIONS(64), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      aux_sym_command_name_token1,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_selector_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__namespace,
    ACTIONS(84), 1,
      aux_sym_path_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    STATE(35), 1,
      sym_item,
    STATE(51), 1,
      sym_coordinate,
    STATE(52), 1,
      sym_number,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
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
  [506] = 6,
    ACTIONS(131), 1,
      aux_sym_path_token2,
    ACTIONS(133), 1,
      aux_sym_container_token1,
    STATE(11), 1,
      aux_sym_path_repeat1,
    STATE(12), 1,
      aux_sym_container_repeat1,
    ACTIONS(127), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(129), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [543] = 4,
    ACTIONS(139), 1,
      aux_sym_path_token2,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(135), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(137), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [574] = 4,
    ACTIONS(145), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(141), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(143), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [605] = 2,
    ACTIONS(147), 8,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token2,
      aux_sym_container_token1,
    ACTIONS(149), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [632] = 2,
    ACTIONS(151), 8,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      sym__namespace,
    ACTIONS(153), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [659] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_selector_option_section,
    ACTIONS(155), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(157), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [690] = 2,
    ACTIONS(161), 8,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      sym__namespace,
    ACTIONS(163), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [717] = 4,
    ACTIONS(169), 1,
      aux_sym_path_token2,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(165), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(167), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [748] = 4,
    ACTIONS(176), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(172), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(174), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [779] = 2,
    ACTIONS(179), 8,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      sym__namespace,
    ACTIONS(181), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [806] = 2,
    ACTIONS(185), 1,
      anon_sym_,
    ACTIONS(183), 20,
      aux_sym_comment_token1,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [832] = 2,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(187), 20,
      aux_sym_comment_token1,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [858] = 2,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(191), 20,
      aux_sym_comment_token1,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [884] = 2,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(187), 20,
      aux_sym_comment_token1,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [910] = 2,
    ACTIONS(195), 1,
      anon_sym_,
    ACTIONS(129), 20,
      aux_sym_comment_token1,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [936] = 2,
    ACTIONS(197), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(199), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [961] = 2,
    ACTIONS(189), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(187), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [986] = 2,
    ACTIONS(201), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(203), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1011] = 2,
    ACTIONS(205), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(207), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1036] = 2,
    ACTIONS(185), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(183), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1061] = 2,
    ACTIONS(209), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(211), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1086] = 2,
    ACTIONS(213), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(215), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1111] = 2,
    ACTIONS(217), 6,
      aux_sym_comment_token1,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(219), 14,
      anon_sym_run,
      anon_sym_in,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_facing,
      anon_sym_anchored,
      anon_sym_align,
      anon_sym_at,
      anon_sym_as,
      anon_sym_positioned,
      anon_sym_rotated,
      anon_sym_store,
      aux_sym_command_name_token1,
      aux_sym_path_token1,
  [1136] = 11,
    ACTIONS(221), 1,
      aux_sym_number_token1,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_selector_number_token3,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACK2,
    STATE(76), 1,
      sym_number,
    ACTIONS(223), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(102), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(107), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(109), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1177] = 12,
    ACTIONS(235), 1,
      aux_sym_number_token1,
    ACTIONS(239), 1,
      aux_sym_selector_key_token1,
    ACTIONS(243), 1,
      aux_sym_selector_number_token3,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      sym__namespace,
    ACTIONS(249), 1,
      aux_sym_path_token1,
    STATE(140), 1,
      sym_item,
    STATE(157), 1,
      sym_number,
    STATE(158), 1,
      sym_selector_value,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(241), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(153), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [1219] = 6,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      aux_sym_path_token2,
    ACTIONS(257), 1,
      aux_sym_container_token1,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      aux_sym_container_repeat1,
    ACTIONS(251), 12,
      aux_sym_comment_token1,
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
  [1249] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    STATE(38), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1288] = 11,
    ACTIONS(271), 1,
      aux_sym_number_token1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_LBRACK2,
    STATE(37), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1327] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1366] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1405] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1444] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1483] = 11,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_LBRACK2,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_nbt_array_repeat1,
    STATE(65), 1,
      sym_number,
    STATE(94), 1,
      sym_nbt_object_value,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1522] = 4,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_selector_option_section,
    ACTIONS(157), 12,
      aux_sym_comment_token1,
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
  [1546] = 4,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(45), 1,
      aux_sym_path_repeat1,
    ACTIONS(137), 12,
      aux_sym_comment_token1,
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
  [1570] = 4,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(302), 1,
      aux_sym_path_token2,
    STATE(45), 1,
      aux_sym_path_repeat1,
    ACTIONS(167), 12,
      aux_sym_comment_token1,
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
  [1594] = 4,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_container_token1,
    STATE(46), 1,
      aux_sym_container_repeat1,
    ACTIONS(174), 12,
      aux_sym_comment_token1,
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
  [1618] = 2,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 14,
      aux_sym_comment_token1,
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
  [1638] = 2,
    ACTIONS(183), 1,
      anon_sym_f,
    ACTIONS(185), 14,
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
  [1658] = 4,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      aux_sym_container_token1,
    STATE(46), 1,
      aux_sym_container_repeat1,
    ACTIONS(143), 12,
      aux_sym_comment_token1,
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
  [1682] = 2,
    ACTIONS(310), 1,
      anon_sym_,
    ACTIONS(191), 13,
      aux_sym_comment_token1,
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
  [1701] = 2,
    ACTIONS(312), 1,
      anon_sym_,
    ACTIONS(251), 13,
      aux_sym_comment_token1,
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
  [1720] = 2,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(187), 13,
      aux_sym_comment_token1,
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
  [1739] = 2,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(187), 13,
      aux_sym_comment_token1,
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
  [1758] = 9,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(81), 1,
      sym_number,
    STATE(136), 1,
      sym_nbt_object_value,
    ACTIONS(223), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(109), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1791] = 2,
    ACTIONS(185), 1,
      anon_sym_,
    ACTIONS(183), 13,
      aux_sym_comment_token1,
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
  [1810] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 12,
      aux_sym_comment_token1,
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
  [1828] = 2,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(316), 12,
      aux_sym_comment_token1,
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
  [1846] = 2,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 12,
      aux_sym_comment_token1,
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
  [1864] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(320), 12,
      aux_sym_comment_token1,
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
  [1882] = 2,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(324), 12,
      aux_sym_comment_token1,
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
  [1900] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(328), 12,
      aux_sym_comment_token1,
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
  [1918] = 2,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 12,
      aux_sym_comment_token1,
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
  [1936] = 2,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 12,
      aux_sym_comment_token1,
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
  [1954] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(332), 12,
      aux_sym_comment_token1,
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
  [1972] = 3,
    ACTIONS(340), 1,
      anon_sym_f,
    ACTIONS(338), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(336), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1992] = 2,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(199), 12,
      aux_sym_comment_token1,
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
  [2010] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(342), 12,
      aux_sym_comment_token1,
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
  [2028] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(346), 12,
      aux_sym_comment_token1,
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
  [2046] = 2,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 12,
      aux_sym_comment_token1,
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
  [2064] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 12,
      aux_sym_comment_token1,
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
  [2082] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(183), 12,
      aux_sym_comment_token1,
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
  [2100] = 2,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 12,
      aux_sym_comment_token1,
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
  [2118] = 2,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 12,
      aux_sym_comment_token1,
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
  [2136] = 8,
    ACTIONS(350), 1,
      aux_sym_command_name_token1,
    ACTIONS(353), 1,
      aux_sym_number_token1,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_selector_key_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_selector_object_repeat1,
    STATE(160), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2164] = 2,
    ACTIONS(185), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(183), 6,
      aux_sym_selector_key_token1,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2180] = 3,
    ACTIONS(366), 1,
      aux_sym_selector_key_token1,
    ACTIONS(364), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(368), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2198] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(372), 1,
      aux_sym_selector_key_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_selector_object_repeat1,
    STATE(160), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2226] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(372), 1,
      aux_sym_selector_key_token1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_selector_object_repeat1,
    STATE(160), 2,
      sym_selector_key,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2254] = 2,
    ACTIONS(183), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
    ACTIONS(185), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2269] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_command_name,
    STATE(133), 1,
      sym_execute_command,
    STATE(82), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [2296] = 2,
    ACTIONS(336), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(368), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2311] = 8,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH,
    ACTIONS(388), 1,
      anon_sym_execute,
    ACTIONS(391), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(133), 1,
      sym_execute_command,
    STATE(82), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [2338] = 7,
    ACTIONS(394), 1,
      aux_sym_command_name_token1,
    ACTIONS(397), 1,
      aux_sym_number_token1,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2362] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2386] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2410] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2434] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2458] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2482] = 7,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_number_token1,
    ACTIONS(370), 1,
      aux_sym_command_name_token1,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_nbt_object_repeat1,
    STATE(168), 1,
      sym_nbt_object_key,
    STATE(165), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [2506] = 1,
    ACTIONS(326), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2517] = 1,
    ACTIONS(161), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2528] = 1,
    ACTIONS(344), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2539] = 1,
    ACTIONS(417), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2550] = 2,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(419), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2563] = 1,
    ACTIONS(330), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2574] = 1,
    ACTIONS(318), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2585] = 1,
    ACTIONS(348), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2596] = 1,
    ACTIONS(423), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2607] = 1,
    ACTIONS(179), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2618] = 1,
    ACTIONS(334), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2629] = 1,
    ACTIONS(280), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2639] = 2,
    ACTIONS(328), 1,
      aux_sym_selector_key_token1,
    ACTIONS(330), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2650] = 2,
    ACTIONS(366), 1,
      aux_sym_selector_key_token1,
    ACTIONS(364), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2661] = 2,
    ACTIONS(316), 1,
      aux_sym_selector_key_token1,
    ACTIONS(318), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2672] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(120), 2,
      sym_command,
      sym_execute_command,
  [2689] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(125), 2,
      sym_command,
      sym_execute_command,
  [2706] = 3,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      aux_sym_selector_key_token1,
    ACTIONS(425), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2719] = 2,
    ACTIONS(324), 1,
      aux_sym_selector_key_token1,
    ACTIONS(326), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2730] = 2,
    ACTIONS(431), 1,
      aux_sym_selector_key_token1,
    ACTIONS(417), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2741] = 2,
    ACTIONS(332), 1,
      aux_sym_selector_key_token1,
    ACTIONS(334), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2752] = 2,
    ACTIONS(346), 1,
      aux_sym_selector_key_token1,
    ACTIONS(348), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2763] = 2,
    ACTIONS(342), 1,
      aux_sym_selector_key_token1,
    ACTIONS(344), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2774] = 2,
    ACTIONS(163), 1,
      aux_sym_selector_key_token1,
    ACTIONS(161), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2785] = 2,
    ACTIONS(433), 1,
      aux_sym_selector_key_token1,
    ACTIONS(423), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2796] = 2,
    ACTIONS(181), 1,
      aux_sym_selector_key_token1,
    ACTIONS(179), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2807] = 4,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      aux_sym_string_token1,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    STATE(117), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2821] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      aux_sym_string_token1,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2835] = 2,
    ACTIONS(447), 1,
      aux_sym_selector_key_token1,
    ACTIONS(445), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2845] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(443), 1,
      aux_sym_string_token1,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2859] = 2,
    ACTIONS(453), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(451), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [2869] = 2,
    ACTIONS(457), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(455), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [2879] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_string_token1,
    STATE(130), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2893] = 2,
    ACTIONS(465), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(463), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [2903] = 5,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    ACTIONS(469), 1,
      aux_sym_selector_key_token1,
    STATE(126), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(155), 1,
      sym_selector_option,
    STATE(172), 1,
      sym_selector_key,
  [2919] = 2,
    ACTIONS(473), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [2929] = 5,
    ACTIONS(469), 1,
      aux_sym_selector_key_token1,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(155), 1,
      sym_selector_option,
    STATE(172), 1,
      sym_selector_key,
  [2945] = 2,
    ACTIONS(479), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(477), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [2955] = 4,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      aux_sym_string_token1,
    ACTIONS(486), 1,
      anon_sym_BSLASH,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2969] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    STATE(119), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2983] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(443), 1,
      aux_sym_string_token1,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2997] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(443), 1,
      aux_sym_string_token1,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3011] = 5,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    ACTIONS(499), 1,
      aux_sym_selector_key_token1,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(155), 1,
      sym_selector_option,
    STATE(172), 1,
      sym_selector_key,
  [3027] = 2,
    ACTIONS(504), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3037] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      aux_sym_string_token1,
    STATE(131), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3051] = 5,
    ACTIONS(469), 1,
      aux_sym_selector_key_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(155), 1,
      sym_selector_option,
    STATE(172), 1,
      sym_selector_key,
  [3067] = 2,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(512), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [3077] = 3,
    ACTIONS(516), 1,
      aux_sym_path_token2,
    STATE(141), 1,
      aux_sym_path_repeat1,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3089] = 5,
    ACTIONS(469), 1,
      aux_sym_selector_key_token1,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(155), 1,
      sym_selector_option,
    STATE(172), 1,
      sym_selector_key,
  [3105] = 2,
    ACTIONS(522), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3115] = 3,
    ACTIONS(526), 1,
      aux_sym_path_token2,
    STATE(137), 1,
      aux_sym_path_repeat1,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3127] = 3,
    ACTIONS(528), 1,
      aux_sym_path_token2,
    STATE(141), 1,
      aux_sym_path_repeat1,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3139] = 1,
    ACTIONS(531), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [3146] = 1,
    ACTIONS(147), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
      aux_sym_path_token2,
  [3153] = 4,
    ACTIONS(533), 1,
      aux_sym_number_token1,
    ACTIONS(535), 1,
      anon_sym_TILDE,
    STATE(56), 1,
      sym_coordinate,
    STATE(70), 1,
      sym_number,
  [3166] = 4,
    ACTIONS(537), 1,
      aux_sym_number_token1,
    ACTIONS(539), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_number,
    STATE(32), 1,
      sym_coordinate,
  [3179] = 4,
    ACTIONS(131), 1,
      aux_sym_path_token2,
    ACTIONS(133), 1,
      aux_sym_container_token1,
    STATE(11), 1,
      aux_sym_path_repeat1,
    STATE(12), 1,
      aux_sym_container_repeat1,
  [3192] = 4,
    ACTIONS(541), 1,
      aux_sym_number_token1,
    ACTIONS(543), 1,
      anon_sym_TILDE,
    STATE(50), 1,
      sym_coordinate,
    STATE(53), 1,
      sym_number,
  [3205] = 4,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    STATE(21), 1,
      sym_number,
    STATE(22), 1,
      sym_coordinate,
  [3218] = 4,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(547), 1,
      aux_sym_container_token1,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      aux_sym_container_repeat1,
  [3231] = 1,
    ACTIONS(318), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3237] = 1,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3243] = 1,
    ACTIONS(549), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3249] = 1,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3255] = 1,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3261] = 2,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3269] = 1,
    ACTIONS(555), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [3275] = 1,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3281] = 1,
    ACTIONS(557), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3287] = 1,
    ACTIONS(559), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3293] = 1,
    ACTIONS(561), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3298] = 2,
    ACTIONS(526), 1,
      aux_sym_path_token2,
    STATE(137), 1,
      aux_sym_path_repeat1,
  [3305] = 2,
    ACTIONS(563), 1,
      aux_sym_command_name_token1,
    STATE(9), 1,
      sym_command_name,
  [3312] = 1,
    ACTIONS(497), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3317] = 1,
    ACTIONS(565), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3322] = 1,
    ACTIONS(567), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3327] = 1,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
  [3331] = 1,
    ACTIONS(571), 1,
      aux_sym_selector_key_token1,
  [3335] = 1,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [3339] = 1,
    ACTIONS(575), 1,
      aux_sym_selector_key_token1,
  [3343] = 1,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
  [3347] = 1,
    ACTIONS(579), 1,
      aux_sym_selector_key_token1,
  [3351] = 1,
    ACTIONS(581), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 314,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 442,
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 543,
  [SMALL_STATE(12)] = 574,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 659,
  [SMALL_STATE(16)] = 690,
  [SMALL_STATE(17)] = 717,
  [SMALL_STATE(18)] = 748,
  [SMALL_STATE(19)] = 779,
  [SMALL_STATE(20)] = 806,
  [SMALL_STATE(21)] = 832,
  [SMALL_STATE(22)] = 858,
  [SMALL_STATE(23)] = 884,
  [SMALL_STATE(24)] = 910,
  [SMALL_STATE(25)] = 936,
  [SMALL_STATE(26)] = 961,
  [SMALL_STATE(27)] = 986,
  [SMALL_STATE(28)] = 1011,
  [SMALL_STATE(29)] = 1036,
  [SMALL_STATE(30)] = 1061,
  [SMALL_STATE(31)] = 1086,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1136,
  [SMALL_STATE(34)] = 1177,
  [SMALL_STATE(35)] = 1219,
  [SMALL_STATE(36)] = 1249,
  [SMALL_STATE(37)] = 1288,
  [SMALL_STATE(38)] = 1327,
  [SMALL_STATE(39)] = 1366,
  [SMALL_STATE(40)] = 1405,
  [SMALL_STATE(41)] = 1444,
  [SMALL_STATE(42)] = 1483,
  [SMALL_STATE(43)] = 1522,
  [SMALL_STATE(44)] = 1546,
  [SMALL_STATE(45)] = 1570,
  [SMALL_STATE(46)] = 1594,
  [SMALL_STATE(47)] = 1618,
  [SMALL_STATE(48)] = 1638,
  [SMALL_STATE(49)] = 1658,
  [SMALL_STATE(50)] = 1682,
  [SMALL_STATE(51)] = 1701,
  [SMALL_STATE(52)] = 1720,
  [SMALL_STATE(53)] = 1739,
  [SMALL_STATE(54)] = 1758,
  [SMALL_STATE(55)] = 1791,
  [SMALL_STATE(56)] = 1810,
  [SMALL_STATE(57)] = 1828,
  [SMALL_STATE(58)] = 1846,
  [SMALL_STATE(59)] = 1864,
  [SMALL_STATE(60)] = 1882,
  [SMALL_STATE(61)] = 1900,
  [SMALL_STATE(62)] = 1918,
  [SMALL_STATE(63)] = 1936,
  [SMALL_STATE(64)] = 1954,
  [SMALL_STATE(65)] = 1972,
  [SMALL_STATE(66)] = 1992,
  [SMALL_STATE(67)] = 2010,
  [SMALL_STATE(68)] = 2028,
  [SMALL_STATE(69)] = 2046,
  [SMALL_STATE(70)] = 2064,
  [SMALL_STATE(71)] = 2082,
  [SMALL_STATE(72)] = 2100,
  [SMALL_STATE(73)] = 2118,
  [SMALL_STATE(74)] = 2136,
  [SMALL_STATE(75)] = 2164,
  [SMALL_STATE(76)] = 2180,
  [SMALL_STATE(77)] = 2198,
  [SMALL_STATE(78)] = 2226,
  [SMALL_STATE(79)] = 2254,
  [SMALL_STATE(80)] = 2269,
  [SMALL_STATE(81)] = 2296,
  [SMALL_STATE(82)] = 2311,
  [SMALL_STATE(83)] = 2338,
  [SMALL_STATE(84)] = 2362,
  [SMALL_STATE(85)] = 2386,
  [SMALL_STATE(86)] = 2410,
  [SMALL_STATE(87)] = 2434,
  [SMALL_STATE(88)] = 2458,
  [SMALL_STATE(89)] = 2482,
  [SMALL_STATE(90)] = 2506,
  [SMALL_STATE(91)] = 2517,
  [SMALL_STATE(92)] = 2528,
  [SMALL_STATE(93)] = 2539,
  [SMALL_STATE(94)] = 2550,
  [SMALL_STATE(95)] = 2563,
  [SMALL_STATE(96)] = 2574,
  [SMALL_STATE(97)] = 2585,
  [SMALL_STATE(98)] = 2596,
  [SMALL_STATE(99)] = 2607,
  [SMALL_STATE(100)] = 2618,
  [SMALL_STATE(101)] = 2629,
  [SMALL_STATE(102)] = 2639,
  [SMALL_STATE(103)] = 2650,
  [SMALL_STATE(104)] = 2661,
  [SMALL_STATE(105)] = 2672,
  [SMALL_STATE(106)] = 2689,
  [SMALL_STATE(107)] = 2706,
  [SMALL_STATE(108)] = 2719,
  [SMALL_STATE(109)] = 2730,
  [SMALL_STATE(110)] = 2741,
  [SMALL_STATE(111)] = 2752,
  [SMALL_STATE(112)] = 2763,
  [SMALL_STATE(113)] = 2774,
  [SMALL_STATE(114)] = 2785,
  [SMALL_STATE(115)] = 2796,
  [SMALL_STATE(116)] = 2807,
  [SMALL_STATE(117)] = 2821,
  [SMALL_STATE(118)] = 2835,
  [SMALL_STATE(119)] = 2845,
  [SMALL_STATE(120)] = 2859,
  [SMALL_STATE(121)] = 2869,
  [SMALL_STATE(122)] = 2879,
  [SMALL_STATE(123)] = 2893,
  [SMALL_STATE(124)] = 2903,
  [SMALL_STATE(125)] = 2919,
  [SMALL_STATE(126)] = 2929,
  [SMALL_STATE(127)] = 2945,
  [SMALL_STATE(128)] = 2955,
  [SMALL_STATE(129)] = 2969,
  [SMALL_STATE(130)] = 2983,
  [SMALL_STATE(131)] = 2997,
  [SMALL_STATE(132)] = 3011,
  [SMALL_STATE(133)] = 3027,
  [SMALL_STATE(134)] = 3037,
  [SMALL_STATE(135)] = 3051,
  [SMALL_STATE(136)] = 3067,
  [SMALL_STATE(137)] = 3077,
  [SMALL_STATE(138)] = 3089,
  [SMALL_STATE(139)] = 3105,
  [SMALL_STATE(140)] = 3115,
  [SMALL_STATE(141)] = 3127,
  [SMALL_STATE(142)] = 3139,
  [SMALL_STATE(143)] = 3146,
  [SMALL_STATE(144)] = 3153,
  [SMALL_STATE(145)] = 3166,
  [SMALL_STATE(146)] = 3179,
  [SMALL_STATE(147)] = 3192,
  [SMALL_STATE(148)] = 3205,
  [SMALL_STATE(149)] = 3218,
  [SMALL_STATE(150)] = 3231,
  [SMALL_STATE(151)] = 3237,
  [SMALL_STATE(152)] = 3243,
  [SMALL_STATE(153)] = 3249,
  [SMALL_STATE(154)] = 3255,
  [SMALL_STATE(155)] = 3261,
  [SMALL_STATE(156)] = 3269,
  [SMALL_STATE(157)] = 3275,
  [SMALL_STATE(158)] = 3281,
  [SMALL_STATE(159)] = 3287,
  [SMALL_STATE(160)] = 3293,
  [SMALL_STATE(161)] = 3298,
  [SMALL_STATE(162)] = 3305,
  [SMALL_STATE(163)] = 3312,
  [SMALL_STATE(164)] = 3317,
  [SMALL_STATE(165)] = 3322,
  [SMALL_STATE(166)] = 3327,
  [SMALL_STATE(167)] = 3331,
  [SMALL_STATE(168)] = 3335,
  [SMALL_STATE(169)] = 3339,
  [SMALL_STATE(170)] = 3343,
  [SMALL_STATE(171)] = 3347,
  [SMALL_STATE(172)] = 3351,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(30),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(116),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(171),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(146),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(169),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(149),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_keyword, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(48),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(96),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(134),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(85),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(40),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(45),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(46),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(14),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(48),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(116),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(164),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(139),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(162),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(59),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(14),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(48),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(116),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(128),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(170),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(164),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(141),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [569] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
