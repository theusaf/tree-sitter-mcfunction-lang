#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  sym_identifier = 18,
  aux_sym_number_token1 = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_TILDE = 22,
  anon_sym_ = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_BSLASH = 26,
  aux_sym_selector_token1 = 27,
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  anon_sym_EQ = 31,
  aux_sym_selector_key_token1 = 32,
  aux_sym_selector_number_token1 = 33,
  aux_sym_selector_number_token2 = 34,
  aux_sym_selector_number_token3 = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_COLON = 38,
  sym__namespace = 39,
  anon_sym_LBRACE2 = 40,
  aux_sym_path_token1 = 41,
  aux_sym_path_token2 = 42,
  aux_sym_container_token1 = 43,
  anon_sym_LBRACK2 = 44,
  anon_sym_l = 45,
  anon_sym_s = 46,
  anon_sym_d = 47,
  anon_sym_f = 48,
  anon_sym_b = 49,
  sym_root = 50,
  sym_comment = 51,
  sym_invalid_comment = 52,
  sym_command = 53,
  sym_execute_command = 54,
  sym_execute_keyword = 55,
  sym_command_name = 56,
  sym_number = 57,
  sym_boolean = 58,
  sym_coordinate = 59,
  sym_rotation = 60,
  sym_location = 61,
  sym_string = 62,
  sym__escape_sequence = 63,
  sym_selector = 64,
  sym_selector_option_section = 65,
  sym_selector_option = 66,
  sym_selector_key = 67,
  sym_selector_value = 68,
  sym_selector_number = 69,
  sym_selector_object = 70,
  sym_item = 71,
  sym__item_with_extra = 72,
  sym_item_nbt = 73,
  sym_item_state = 74,
  sym_path = 75,
  sym_container = 76,
  sym_nbt = 77,
  sym_nbt_object = 78,
  sym_nbt_array = 79,
  sym_nbt_object_key = 80,
  sym_nbt_object_value = 81,
  sym_nbt_number = 82,
  aux_sym_root_repeat1 = 83,
  aux_sym_command_repeat1 = 84,
  aux_sym_execute_command_repeat1 = 85,
  aux_sym_string_repeat1 = 86,
  aux_sym_selector_option_section_repeat1 = 87,
  aux_sym_selector_object_repeat1 = 88,
  aux_sym_item_nbt_repeat1 = 89,
  aux_sym_item_state_repeat1 = 90,
  aux_sym_path_repeat1 = 91,
  aux_sym_container_repeat1 = 92,
  aux_sym_nbt_array_repeat1 = 93,
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
  [sym_identifier] = "identifier",
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
  [anon_sym_LBRACE2] = "{",
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
  [sym__item_with_extra] = "item",
  [sym_item_nbt] = "item_nbt",
  [sym_item_state] = "item_state",
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
  [aux_sym_item_nbt_repeat1] = "item_nbt_repeat1",
  [aux_sym_item_state_repeat1] = "item_state_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_container_repeat1] = "container_repeat1",
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
  [sym_identifier] = sym_identifier,
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
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
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
  [sym__item_with_extra] = sym_item,
  [sym_item_nbt] = sym_item_nbt,
  [sym_item_state] = sym_item_state,
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
  [aux_sym_item_nbt_repeat1] = aux_sym_item_nbt_repeat1,
  [aux_sym_item_state_repeat1] = aux_sym_item_state_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
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
  [sym__item_with_extra] = {
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
  [aux_sym_item_nbt_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_command,
  },
  [2] = {
    [0] = sym_identifier,
  },
  [6] = {
    [2] = sym_selector_value,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_execute_command, 2,
    sym_execute_command,
    sym_command,
  sym_number, 2,
    sym_number,
    sym_selector_value,
  sym_boolean, 2,
    sym_boolean,
    sym_selector_value,
  sym_selector_key, 2,
    sym_selector_key,
    sym_selector_value,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(180);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '~') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_selector_key_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_container_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 85},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 85},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 85},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 85},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 85},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 85},
  [129] = {.lex_state = 85},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 85},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 85},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 85},
  [143] = {.lex_state = 85},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 17},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 17},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
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
    [anon_sym_LBRACE2] = ACTIONS(1),
    [aux_sym_container_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(187),
    [sym_comment] = STATE(82),
    [sym_command] = STATE(82),
    [sym_execute_command] = STATE(143),
    [sym_command_name] = STATE(7),
    [aux_sym_root_repeat1] = STATE(82),
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
    ACTIONS(16), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(30), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_selector_token1,
    ACTIONS(36), 1,
      sym__namespace,
    ACTIONS(39), 1,
      aux_sym_path_token1,
    STATE(10), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(23), 1,
      sym_coordinate,
    STATE(2), 9,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(18), 11,
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
  [61] = 14,
    ACTIONS(42), 1,
      aux_sym_comment_token1,
    ACTIONS(44), 1,
      anon_sym_run,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      aux_sym_number_token1,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      aux_sym_selector_token1,
    ACTIONS(58), 1,
      sym__namespace,
    ACTIONS(60), 1,
      aux_sym_path_token1,
    STATE(10), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(23), 1,
      sym_coordinate,
    STATE(4), 9,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(46), 11,
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
  [122] = 14,
    ACTIONS(42), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      aux_sym_number_token1,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      aux_sym_selector_token1,
    ACTIONS(58), 1,
      sym__namespace,
    ACTIONS(60), 1,
      aux_sym_path_token1,
    ACTIONS(62), 1,
      anon_sym_run,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(10), 1,
      sym_item,
    STATE(22), 1,
      sym_number,
    STATE(23), 1,
      sym_coordinate,
    STATE(2), 9,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      aux_sym_execute_command_repeat1,
    ACTIONS(46), 11,
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
  [183] = 18,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_selector_token1,
    ACTIONS(82), 1,
      aux_sym_selector_key_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      sym__namespace,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK2,
    STATE(33), 1,
      sym_item,
    STATE(48), 1,
      sym_coordinate,
    STATE(49), 1,
      sym_number,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym__item_with_extra,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [250] = 18,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      anon_sym_TILDE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_selector_token1,
    ACTIONS(115), 1,
      aux_sym_selector_key_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      sym__namespace,
    ACTIONS(124), 1,
      aux_sym_path_token1,
    ACTIONS(127), 1,
      anon_sym_LBRACK2,
    STATE(33), 1,
      sym_item,
    STATE(48), 1,
      sym_coordinate,
    STATE(49), 1,
      sym_number,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym__item_with_extra,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [317] = 18,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_selector_token1,
    ACTIONS(82), 1,
      aux_sym_selector_key_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      sym__namespace,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(33), 1,
      sym_item,
    STATE(48), 1,
      sym_coordinate,
    STATE(49), 1,
      sym_number,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(8), 11,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym__item_with_extra,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [384] = 18,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_selector_token1,
    ACTIONS(82), 1,
      aux_sym_selector_key_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      sym__namespace,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK2,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym_item,
    STATE(48), 1,
      sym_coordinate,
    STATE(49), 1,
      sym_number,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(6), 11,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym__item_with_extra,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [451] = 18,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_selector_token1,
    ACTIONS(82), 1,
      aux_sym_selector_key_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      sym__namespace,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(33), 1,
      sym_item,
    STATE(48), 1,
      sym_coordinate,
    STATE(49), 1,
      sym_number,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(5), 11,
      sym_invalid_comment,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym__item_with_extra,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [518] = 6,
    ACTIONS(142), 1,
      aux_sym_path_token2,
    ACTIONS(144), 1,
      aux_sym_container_token1,
    STATE(16), 1,
      aux_sym_container_repeat1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(138), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(140), 13,
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
      aux_sym_path_token1,
  [555] = 2,
    ACTIONS(146), 9,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      sym__namespace,
    ACTIONS(148), 13,
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
      aux_sym_path_token1,
  [582] = 2,
    ACTIONS(150), 9,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      sym__namespace,
    ACTIONS(152), 13,
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
      aux_sym_path_token1,
  [609] = 4,
    ACTIONS(158), 1,
      aux_sym_path_token2,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(154), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(156), 13,
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
      aux_sym_path_token1,
  [640] = 4,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_selector_option_section,
    ACTIONS(161), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(163), 13,
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
      aux_sym_path_token1,
  [671] = 4,
    ACTIONS(171), 1,
      aux_sym_container_token1,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(167), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(169), 13,
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
      aux_sym_path_token1,
  [702] = 4,
    ACTIONS(178), 1,
      aux_sym_container_token1,
    STATE(15), 1,
      aux_sym_container_repeat1,
    ACTIONS(174), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(176), 13,
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
      aux_sym_path_token1,
  [733] = 2,
    ACTIONS(180), 9,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token2,
      aux_sym_container_token1,
    ACTIONS(182), 13,
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
      aux_sym_path_token1,
  [760] = 4,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(184), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(186), 13,
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
      aux_sym_path_token1,
  [791] = 2,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(190), 20,
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
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [817] = 2,
    ACTIONS(196), 1,
      anon_sym_,
    ACTIONS(194), 20,
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
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [843] = 2,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(198), 20,
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
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [869] = 2,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(198), 20,
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
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [895] = 2,
    ACTIONS(202), 1,
      anon_sym_,
    ACTIONS(140), 20,
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
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
      aux_sym_path_token1,
  [921] = 2,
    ACTIONS(204), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(206), 13,
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
      aux_sym_path_token1,
  [946] = 2,
    ACTIONS(208), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(210), 13,
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
      aux_sym_path_token1,
  [971] = 2,
    ACTIONS(196), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(194), 13,
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
      aux_sym_path_token1,
  [996] = 2,
    ACTIONS(212), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(214), 13,
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
      aux_sym_path_token1,
  [1021] = 2,
    ACTIONS(216), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(218), 13,
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
      aux_sym_path_token1,
  [1046] = 2,
    ACTIONS(200), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(198), 13,
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
      aux_sym_path_token1,
  [1071] = 2,
    ACTIONS(220), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(222), 13,
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
      aux_sym_path_token1,
  [1096] = 5,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_LBRACE2,
    STATE(73), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(182), 15,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      aux_sym_path_token2,
      aux_sym_container_token1,
      anon_sym_LBRACK2,
  [1127] = 2,
    ACTIONS(228), 7,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      sym__namespace,
    ACTIONS(230), 13,
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
      aux_sym_path_token1,
  [1152] = 6,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      aux_sym_path_token2,
    ACTIONS(238), 1,
      aux_sym_container_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(43), 1,
      aux_sym_container_repeat1,
    ACTIONS(232), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1183] = 11,
    ACTIONS(240), 1,
      aux_sym_number_token1,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      aux_sym_selector_number_token3,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LBRACK2,
    STATE(79), 1,
      sym_number,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(119), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(120), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(118), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1224] = 12,
    ACTIONS(254), 1,
      aux_sym_number_token1,
    ACTIONS(258), 1,
      aux_sym_selector_key_token1,
    ACTIONS(262), 1,
      aux_sym_selector_number_token3,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym__namespace,
    ACTIONS(268), 1,
      aux_sym_path_token1,
    STATE(125), 1,
      sym_item,
    STATE(165), 1,
      sym_number,
    STATE(167), 1,
      sym_selector_value,
    ACTIONS(256), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(260), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(170), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [1266] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    STATE(39), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1305] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1344] = 4,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      aux_sym_path_token2,
    STATE(40), 1,
      aux_sym_path_repeat1,
    ACTIONS(186), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1369] = 11,
    ACTIONS(286), 1,
      aux_sym_number_token1,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_LBRACK2,
    STATE(39), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(289), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1408] = 4,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(303), 1,
      aux_sym_path_token2,
    STATE(40), 1,
      aux_sym_path_repeat1,
    ACTIONS(156), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1433] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1472] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1511] = 4,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      aux_sym_container_token1,
    STATE(45), 1,
      aux_sym_container_repeat1,
    ACTIONS(176), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1536] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1575] = 4,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      aux_sym_container_token1,
    STATE(45), 1,
      aux_sym_container_repeat1,
    ACTIONS(169), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1600] = 4,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_selector_option_section,
    ACTIONS(163), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1625] = 11,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LBRACK2,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_nbt_array_repeat1,
    STATE(77), 1,
      sym_number,
    STATE(96), 1,
      sym_nbt_object_value,
    ACTIONS(272), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(87), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1664] = 2,
    ACTIONS(321), 1,
      anon_sym_,
    ACTIONS(232), 14,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1684] = 2,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(198), 14,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1704] = 2,
    ACTIONS(196), 1,
      anon_sym_,
    ACTIONS(194), 14,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1724] = 2,
    ACTIONS(194), 1,
      anon_sym_f,
    ACTIONS(196), 14,
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
  [1744] = 2,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(198), 14,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1764] = 2,
    ACTIONS(323), 1,
      anon_sym_,
    ACTIONS(190), 14,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1784] = 2,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(325), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1803] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1822] = 2,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(329), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1841] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1860] = 2,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(333), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1879] = 2,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(337), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1898] = 2,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(341), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1917] = 2,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(345), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1936] = 2,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(349), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1955] = 2,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(353), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1974] = 2,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1993] = 2,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(357), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2012] = 9,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LBRACK2,
    ACTIONS(361), 1,
      aux_sym_number_token1,
    STATE(81), 1,
      sym_number,
    STATE(144), 1,
      sym_nbt_object_value,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(118), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [2045] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(148), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2064] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(363), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2083] = 2,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2102] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2121] = 2,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2140] = 2,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(367), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2159] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(371), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2178] = 2,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(194), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2197] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(198), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2216] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(375), 13,
      aux_sym_comment_token1,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      aux_sym_selector_key_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [2235] = 3,
    ACTIONS(383), 1,
      anon_sym_f,
    ACTIONS(381), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(379), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2255] = 2,
    ACTIONS(196), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(194), 6,
      aux_sym_selector_key_token1,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2271] = 3,
    ACTIONS(387), 1,
      aux_sym_selector_key_token1,
    ACTIONS(385), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(389), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2289] = 2,
    ACTIONS(194), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
    ACTIONS(196), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2304] = 2,
    ACTIONS(379), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(389), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2319] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_command_name,
    STATE(143), 1,
      sym_execute_command,
    STATE(86), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [2346] = 8,
    ACTIONS(393), 1,
      aux_sym_command_name_token1,
    ACTIONS(396), 1,
      aux_sym_number_token1,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_selector_key_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_selector_object_repeat1,
    STATE(176), 2,
      sym_number,
      sym_string,
    STATE(179), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [2373] = 8,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(409), 1,
      aux_sym_selector_key_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_selector_object_repeat1,
    STATE(176), 2,
      sym_number,
      sym_string,
    STATE(179), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [2400] = 8,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(409), 1,
      aux_sym_selector_key_token1,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_selector_object_repeat1,
    STATE(176), 2,
      sym_number,
      sym_string,
    STATE(179), 2,
      sym_selector_key,
      sym_nbt_object_key,
  [2427] = 8,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_execute,
    ACTIONS(426), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(143), 1,
      sym_execute_command,
    STATE(86), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [2454] = 1,
    ACTIONS(429), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2465] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2488] = 1,
    ACTIONS(335), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2499] = 1,
    ACTIONS(339), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2510] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2533] = 1,
    ACTIONS(150), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2544] = 1,
    ACTIONS(146), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2555] = 1,
    ACTIONS(365), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2566] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2589] = 2,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(437), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2602] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2625] = 1,
    ACTIONS(443), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2636] = 7,
    ACTIONS(445), 1,
      aux_sym_command_name_token1,
    ACTIONS(448), 1,
      aux_sym_number_token1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2659] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2682] = 1,
    ACTIONS(355), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2693] = 1,
    ACTIONS(377), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2704] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2727] = 1,
    ACTIONS(369), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2738] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2761] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_number_token1,
    ACTIONS(407), 1,
      aux_sym_command_name_token1,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_item_nbt_repeat1,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(176), 2,
      sym_number,
      sym_string,
  [2784] = 4,
    ACTIONS(409), 1,
      aux_sym_selector_key_token1,
    ACTIONS(464), 1,
      aux_sym_number_token1,
    ACTIONS(256), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 3,
      sym_number,
      sym_boolean,
      sym_selector_key,
  [2800] = 1,
    ACTIONS(295), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [2810] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(134), 2,
      sym_command,
      sym_execute_command,
  [2827] = 2,
    ACTIONS(152), 1,
      aux_sym_selector_key_token1,
    ACTIONS(150), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2838] = 2,
    ACTIONS(363), 1,
      aux_sym_selector_key_token1,
    ACTIONS(365), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2849] = 2,
    ACTIONS(387), 1,
      aux_sym_selector_key_token1,
    ACTIONS(385), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2860] = 2,
    ACTIONS(353), 1,
      aux_sym_selector_key_token1,
    ACTIONS(355), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2871] = 2,
    ACTIONS(337), 1,
      aux_sym_selector_key_token1,
    ACTIONS(339), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2882] = 2,
    ACTIONS(466), 1,
      aux_sym_selector_key_token1,
    ACTIONS(443), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2893] = 2,
    ACTIONS(375), 1,
      aux_sym_selector_key_token1,
    ACTIONS(377), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2904] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    STATE(7), 1,
      sym_command_name,
    STATE(132), 2,
      sym_command,
      sym_execute_command,
  [2921] = 2,
    ACTIONS(468), 1,
      aux_sym_selector_key_token1,
    ACTIONS(429), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2932] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      aux_sym_selector_key_token1,
    ACTIONS(470), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2945] = 2,
    ACTIONS(333), 1,
      aux_sym_selector_key_token1,
    ACTIONS(335), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2956] = 2,
    ACTIONS(367), 1,
      aux_sym_selector_key_token1,
    ACTIONS(369), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2967] = 2,
    ACTIONS(148), 1,
      aux_sym_selector_key_token1,
    ACTIONS(146), 5,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2978] = 2,
    ACTIONS(478), 1,
      aux_sym_selector_key_token1,
    ACTIONS(476), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [2988] = 5,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    STATE(146), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(168), 1,
      sym_selector_option,
    STATE(185), 1,
      sym_selector_key,
  [3004] = 3,
    ACTIONS(486), 1,
      aux_sym_path_token2,
    STATE(147), 1,
      aux_sym_path_repeat1,
    ACTIONS(484), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3016] = 2,
    ACTIONS(490), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3026] = 4,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      aux_sym_string_token1,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    STATE(136), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3040] = 2,
    ACTIONS(500), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3050] = 2,
    ACTIONS(504), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3060] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      aux_sym_string_token1,
    STATE(140), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3074] = 5,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(168), 1,
      sym_selector_option,
    STATE(185), 1,
      sym_selector_key,
  [3090] = 2,
    ACTIONS(514), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3100] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(518), 1,
      aux_sym_string_token1,
    STATE(141), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3114] = 2,
    ACTIONS(522), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3124] = 5,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(168), 1,
      sym_selector_option,
    STATE(185), 1,
      sym_selector_key,
  [3140] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      aux_sym_string_token1,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(140), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3154] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      aux_sym_string_token1,
    STATE(145), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3168] = 3,
    ACTIONS(532), 1,
      aux_sym_path_token2,
    STATE(138), 1,
      aux_sym_path_repeat1,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3180] = 1,
    ACTIONS(535), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      aux_sym_selector_key_token1,
      anon_sym_COLON,
  [3188] = 4,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    ACTIONS(542), 1,
      anon_sym_BSLASH,
    STATE(140), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3202] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      aux_sym_string_token1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    STATE(140), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3216] = 2,
    ACTIONS(549), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(547), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3226] = 2,
    ACTIONS(553), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(551), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
  [3236] = 2,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(555), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [3246] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      aux_sym_string_token1,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(140), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3260] = 5,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    ACTIONS(563), 1,
      aux_sym_selector_key_token1,
    STATE(146), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(168), 1,
      sym_selector_option,
    STATE(185), 1,
      sym_selector_key,
  [3276] = 3,
    ACTIONS(566), 1,
      aux_sym_path_token2,
    STATE(138), 1,
      aux_sym_path_repeat1,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3288] = 5,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_selector_option_section_repeat1,
    STATE(168), 1,
      sym_selector_option,
    STATE(185), 1,
      sym_selector_key,
  [3304] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(130), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3318] = 4,
    ACTIONS(50), 1,
      aux_sym_number_token1,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    STATE(19), 1,
      sym_coordinate,
    STATE(21), 1,
      sym_number,
  [3331] = 4,
    ACTIONS(574), 1,
      aux_sym_number_token1,
    ACTIONS(576), 1,
      anon_sym_TILDE,
    STATE(52), 1,
      sym_number,
    STATE(53), 1,
      sym_coordinate,
  [3344] = 4,
    ACTIONS(142), 1,
      aux_sym_path_token2,
    ACTIONS(144), 1,
      aux_sym_container_token1,
    STATE(16), 1,
      aux_sym_container_repeat1,
    STATE(18), 1,
      aux_sym_path_repeat1,
  [3357] = 4,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym_item_state_repeat1,
    STATE(183), 1,
      sym_selector_key,
  [3370] = 4,
    ACTIONS(580), 1,
      aux_sym_path_token2,
    ACTIONS(582), 1,
      aux_sym_container_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(43), 1,
      aux_sym_container_repeat1,
  [3383] = 1,
    ACTIONS(180), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
      aux_sym_path_token2,
  [3390] = 4,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    ACTIONS(586), 1,
      aux_sym_selector_key_token1,
    STATE(156), 1,
      aux_sym_item_state_repeat1,
    STATE(183), 1,
      sym_selector_key,
  [3403] = 3,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_LBRACE2,
    STATE(65), 2,
      sym_item_nbt,
      sym_item_state,
  [3414] = 4,
    ACTIONS(482), 1,
      aux_sym_selector_key_token1,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_item_state_repeat1,
    STATE(183), 1,
      sym_selector_key,
  [3427] = 4,
    ACTIONS(591), 1,
      aux_sym_number_token1,
    ACTIONS(593), 1,
      anon_sym_TILDE,
    STATE(29), 1,
      sym_number,
    STATE(32), 1,
      sym_coordinate,
  [3440] = 4,
    ACTIONS(595), 1,
      aux_sym_number_token1,
    ACTIONS(597), 1,
      anon_sym_TILDE,
    STATE(55), 1,
      sym_coordinate,
    STATE(75), 1,
      sym_number,
  [3453] = 1,
    ACTIONS(599), 4,
      aux_sym_command_name_token1,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [3460] = 1,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3466] = 1,
    ACTIONS(365), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3472] = 1,
    ACTIONS(601), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3478] = 1,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3484] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3490] = 1,
    ACTIONS(603), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3496] = 2,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(607), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3504] = 1,
    ACTIONS(609), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [3510] = 1,
    ACTIONS(484), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3516] = 2,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3524] = 1,
    ACTIONS(615), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3530] = 2,
    ACTIONS(486), 1,
      aux_sym_path_token2,
    STATE(147), 1,
      aux_sym_path_repeat1,
  [3537] = 1,
    ACTIONS(617), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3542] = 1,
    ACTIONS(561), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3547] = 1,
    ACTIONS(619), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3552] = 2,
    ACTIONS(621), 1,
      aux_sym_command_name_token1,
    STATE(9), 1,
      sym_command_name,
  [3559] = 1,
    ACTIONS(623), 2,
      anon_sym_RBRACK,
      aux_sym_selector_key_token1,
  [3564] = 1,
    ACTIONS(625), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [3569] = 1,
    ACTIONS(627), 1,
      aux_sym_selector_key_token1,
  [3573] = 1,
    ACTIONS(629), 1,
      aux_sym_selector_key_token1,
  [3577] = 1,
    ACTIONS(631), 1,
      aux_sym_selector_key_token1,
  [3581] = 1,
    ACTIONS(633), 1,
      anon_sym_EQ,
  [3585] = 1,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
  [3589] = 1,
    ACTIONS(637), 1,
      anon_sym_EQ,
  [3593] = 1,
    ACTIONS(639), 1,
      anon_sym_COLON,
  [3597] = 1,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 451,
  [SMALL_STATE(10)] = 518,
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 582,
  [SMALL_STATE(13)] = 609,
  [SMALL_STATE(14)] = 640,
  [SMALL_STATE(15)] = 671,
  [SMALL_STATE(16)] = 702,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 760,
  [SMALL_STATE(19)] = 791,
  [SMALL_STATE(20)] = 817,
  [SMALL_STATE(21)] = 843,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 895,
  [SMALL_STATE(24)] = 921,
  [SMALL_STATE(25)] = 946,
  [SMALL_STATE(26)] = 971,
  [SMALL_STATE(27)] = 996,
  [SMALL_STATE(28)] = 1021,
  [SMALL_STATE(29)] = 1046,
  [SMALL_STATE(30)] = 1071,
  [SMALL_STATE(31)] = 1096,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1152,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1224,
  [SMALL_STATE(36)] = 1266,
  [SMALL_STATE(37)] = 1305,
  [SMALL_STATE(38)] = 1344,
  [SMALL_STATE(39)] = 1369,
  [SMALL_STATE(40)] = 1408,
  [SMALL_STATE(41)] = 1433,
  [SMALL_STATE(42)] = 1472,
  [SMALL_STATE(43)] = 1511,
  [SMALL_STATE(44)] = 1536,
  [SMALL_STATE(45)] = 1575,
  [SMALL_STATE(46)] = 1600,
  [SMALL_STATE(47)] = 1625,
  [SMALL_STATE(48)] = 1664,
  [SMALL_STATE(49)] = 1684,
  [SMALL_STATE(50)] = 1704,
  [SMALL_STATE(51)] = 1724,
  [SMALL_STATE(52)] = 1744,
  [SMALL_STATE(53)] = 1764,
  [SMALL_STATE(54)] = 1784,
  [SMALL_STATE(55)] = 1803,
  [SMALL_STATE(56)] = 1822,
  [SMALL_STATE(57)] = 1841,
  [SMALL_STATE(58)] = 1860,
  [SMALL_STATE(59)] = 1879,
  [SMALL_STATE(60)] = 1898,
  [SMALL_STATE(61)] = 1917,
  [SMALL_STATE(62)] = 1936,
  [SMALL_STATE(63)] = 1955,
  [SMALL_STATE(64)] = 1974,
  [SMALL_STATE(65)] = 1993,
  [SMALL_STATE(66)] = 2012,
  [SMALL_STATE(67)] = 2045,
  [SMALL_STATE(68)] = 2064,
  [SMALL_STATE(69)] = 2083,
  [SMALL_STATE(70)] = 2102,
  [SMALL_STATE(71)] = 2121,
  [SMALL_STATE(72)] = 2140,
  [SMALL_STATE(73)] = 2159,
  [SMALL_STATE(74)] = 2178,
  [SMALL_STATE(75)] = 2197,
  [SMALL_STATE(76)] = 2216,
  [SMALL_STATE(77)] = 2235,
  [SMALL_STATE(78)] = 2255,
  [SMALL_STATE(79)] = 2271,
  [SMALL_STATE(80)] = 2289,
  [SMALL_STATE(81)] = 2304,
  [SMALL_STATE(82)] = 2319,
  [SMALL_STATE(83)] = 2346,
  [SMALL_STATE(84)] = 2373,
  [SMALL_STATE(85)] = 2400,
  [SMALL_STATE(86)] = 2427,
  [SMALL_STATE(87)] = 2454,
  [SMALL_STATE(88)] = 2465,
  [SMALL_STATE(89)] = 2488,
  [SMALL_STATE(90)] = 2499,
  [SMALL_STATE(91)] = 2510,
  [SMALL_STATE(92)] = 2533,
  [SMALL_STATE(93)] = 2544,
  [SMALL_STATE(94)] = 2555,
  [SMALL_STATE(95)] = 2566,
  [SMALL_STATE(96)] = 2589,
  [SMALL_STATE(97)] = 2602,
  [SMALL_STATE(98)] = 2625,
  [SMALL_STATE(99)] = 2636,
  [SMALL_STATE(100)] = 2659,
  [SMALL_STATE(101)] = 2682,
  [SMALL_STATE(102)] = 2693,
  [SMALL_STATE(103)] = 2704,
  [SMALL_STATE(104)] = 2727,
  [SMALL_STATE(105)] = 2738,
  [SMALL_STATE(106)] = 2761,
  [SMALL_STATE(107)] = 2784,
  [SMALL_STATE(108)] = 2800,
  [SMALL_STATE(109)] = 2810,
  [SMALL_STATE(110)] = 2827,
  [SMALL_STATE(111)] = 2838,
  [SMALL_STATE(112)] = 2849,
  [SMALL_STATE(113)] = 2860,
  [SMALL_STATE(114)] = 2871,
  [SMALL_STATE(115)] = 2882,
  [SMALL_STATE(116)] = 2893,
  [SMALL_STATE(117)] = 2904,
  [SMALL_STATE(118)] = 2921,
  [SMALL_STATE(119)] = 2932,
  [SMALL_STATE(120)] = 2945,
  [SMALL_STATE(121)] = 2956,
  [SMALL_STATE(122)] = 2967,
  [SMALL_STATE(123)] = 2978,
  [SMALL_STATE(124)] = 2988,
  [SMALL_STATE(125)] = 3004,
  [SMALL_STATE(126)] = 3016,
  [SMALL_STATE(127)] = 3026,
  [SMALL_STATE(128)] = 3040,
  [SMALL_STATE(129)] = 3050,
  [SMALL_STATE(130)] = 3060,
  [SMALL_STATE(131)] = 3074,
  [SMALL_STATE(132)] = 3090,
  [SMALL_STATE(133)] = 3100,
  [SMALL_STATE(134)] = 3114,
  [SMALL_STATE(135)] = 3124,
  [SMALL_STATE(136)] = 3140,
  [SMALL_STATE(137)] = 3154,
  [SMALL_STATE(138)] = 3168,
  [SMALL_STATE(139)] = 3180,
  [SMALL_STATE(140)] = 3188,
  [SMALL_STATE(141)] = 3202,
  [SMALL_STATE(142)] = 3216,
  [SMALL_STATE(143)] = 3226,
  [SMALL_STATE(144)] = 3236,
  [SMALL_STATE(145)] = 3246,
  [SMALL_STATE(146)] = 3260,
  [SMALL_STATE(147)] = 3276,
  [SMALL_STATE(148)] = 3288,
  [SMALL_STATE(149)] = 3304,
  [SMALL_STATE(150)] = 3318,
  [SMALL_STATE(151)] = 3331,
  [SMALL_STATE(152)] = 3344,
  [SMALL_STATE(153)] = 3357,
  [SMALL_STATE(154)] = 3370,
  [SMALL_STATE(155)] = 3383,
  [SMALL_STATE(156)] = 3390,
  [SMALL_STATE(157)] = 3403,
  [SMALL_STATE(158)] = 3414,
  [SMALL_STATE(159)] = 3427,
  [SMALL_STATE(160)] = 3440,
  [SMALL_STATE(161)] = 3453,
  [SMALL_STATE(162)] = 3460,
  [SMALL_STATE(163)] = 3466,
  [SMALL_STATE(164)] = 3472,
  [SMALL_STATE(165)] = 3478,
  [SMALL_STATE(166)] = 3484,
  [SMALL_STATE(167)] = 3490,
  [SMALL_STATE(168)] = 3496,
  [SMALL_STATE(169)] = 3504,
  [SMALL_STATE(170)] = 3510,
  [SMALL_STATE(171)] = 3516,
  [SMALL_STATE(172)] = 3524,
  [SMALL_STATE(173)] = 3530,
  [SMALL_STATE(174)] = 3537,
  [SMALL_STATE(175)] = 3542,
  [SMALL_STATE(176)] = 3547,
  [SMALL_STATE(177)] = 3552,
  [SMALL_STATE(178)] = 3559,
  [SMALL_STATE(179)] = 3564,
  [SMALL_STATE(180)] = 3569,
  [SMALL_STATE(181)] = 3573,
  [SMALL_STATE(182)] = 3577,
  [SMALL_STATE(183)] = 3581,
  [SMALL_STATE(184)] = 3585,
  [SMALL_STATE(185)] = 3589,
  [SMALL_STATE(186)] = 3593,
  [SMALL_STATE(187)] = 3597,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(27),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(30),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(133),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(181),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(152),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(52),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(127),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(157),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(91),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(182),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(154),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_execute_command_repeat1, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_keyword, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(51),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(94),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(137),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(88),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(37),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(40),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item_with_extra, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item_with_extra, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item_with_extra, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item_with_extra, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(174),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(51),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(133),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(139),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(128),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(177),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(56),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 4),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 2), SHIFT_REPEAT(174),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 2), SHIFT_REPEAT(51),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 2), SHIFT_REPEAT(133),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(138),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(140),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(184),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(139),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(139),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_nbt_repeat1, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 3, .production_id = 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1, .production_id = 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 4, .production_id = 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [641] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
