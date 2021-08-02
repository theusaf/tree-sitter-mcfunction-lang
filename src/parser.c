#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_SLASH = 2,
  anon_sym_ = 3,
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
  sym__line_separator = 17,
  aux_sym_command_name_token1 = 18,
  sym__identifier = 19,
  sym_number = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_TILDE = 23,
  anon_sym_CARET = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  anon_sym_BSLASH = 27,
  anon_sym_AT = 28,
  anon_sym_p = 29,
  anon_sym_a = 30,
  anon_sym_r = 31,
  anon_sym_s = 32,
  anon_sym_e = 33,
  anon_sym_LBRACK = 34,
  aux_sym_selector_option_section_token1 = 35,
  anon_sym_COMMA = 36,
  anon_sym_RBRACK = 37,
  anon_sym_EQ = 38,
  anon_sym_LBRACE = 39,
  anon_sym_COLON = 40,
  anon_sym_RBRACE = 41,
  aux_sym_selector_number_token1 = 42,
  aux_sym_selector_number_token2 = 43,
  aux_sym_selector_number_token3 = 44,
  aux_sym_nbt_object_key_token1 = 45,
  anon_sym_l = 46,
  anon_sym_d = 47,
  anon_sym_f = 48,
  anon_sym_b = 49,
  aux_sym_item_token1 = 50,
  anon_sym_DOT = 51,
  sym_nbt_path = 52,
  sym_root = 53,
  sym_comment = 54,
  sym_invalid_comment = 55,
  sym_command = 56,
  sym_execute_command = 57,
  sym_execute_keyword = 58,
  sym_command_name = 59,
  sym_boolean = 60,
  sym_coordinate = 61,
  sym_rotation = 62,
  sym_location = 63,
  sym_string = 64,
  sym__escape_sequence = 65,
  sym_selector = 66,
  sym_selector_option_section = 67,
  sym_selector_option = 68,
  sym_selector_key = 69,
  sym_selector_value = 70,
  sym_selector_nbt = 71,
  sym_selector_score = 72,
  sym_selector_score_key = 73,
  sym_selector_score_value = 74,
  sym_selector_number = 75,
  sym_nbt = 76,
  sym_nbt_object = 77,
  sym_nbt_array = 78,
  sym_nbt_object_key = 79,
  sym_nbt_object_value = 80,
  sym_nbt_number = 81,
  sym_item = 82,
  sym_item_nbt = 83,
  sym_item_state = 84,
  sym_state_key = 85,
  sym_state_value = 86,
  sym_path = 87,
  sym_container = 88,
  aux_sym_root_repeat1 = 89,
  aux_sym_command_repeat1 = 90,
  aux_sym_execute_command_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_selector_option_section_repeat1 = 93,
  aux_sym_selector_nbt_repeat1 = 94,
  aux_sym_selector_score_repeat1 = 95,
  aux_sym_nbt_object_repeat1 = 96,
  aux_sym_nbt_array_repeat1 = 97,
  aux_sym_item_state_repeat1 = 98,
  aux_sym_path_repeat1 = 99,
  aux_sym_container_repeat1 = 100,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
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
  [sym__line_separator] = "_line_separator",
  [aux_sym_command_name_token1] = "command_name_token1",
  [sym__identifier] = "_identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TILDE] = "~",
  [anon_sym_CARET] = "^",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [sym_execute_command] = "execute_command",
  [sym_execute_keyword] = "execute_keyword",
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
  [sym_selector_score] = "selector_score",
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
  [aux_sym_execute_command_repeat1] = "execute_command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
  [aux_sym_selector_nbt_repeat1] = "selector_nbt_repeat1",
  [aux_sym_selector_score_repeat1] = "selector_score_repeat1",
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
  [sym__line_separator] = sym__line_separator,
  [aux_sym_command_name_token1] = aux_sym_command_name_token1,
  [sym__identifier] = sym__identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_CARET] = anon_sym_CARET,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_execute_command] = sym_execute_command,
  [sym_execute_keyword] = sym_execute_keyword,
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
  [sym_selector_score] = sym_selector_score,
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
  [aux_sym_execute_command_repeat1] = aux_sym_execute_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
  [aux_sym_selector_nbt_repeat1] = aux_sym_selector_nbt_repeat1,
  [aux_sym_selector_score_repeat1] = aux_sym_selector_score_repeat1,
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
  [anon_sym_CARET] = {
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
  [sym_selector_score] = {
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
  [aux_sym_selector_nbt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_score_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
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

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_command,
  },
  [4] = {
    [1] = sym_nbt_object_key,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_execute_command, 2,
    sym_execute_command,
    sym_command,
  sym_selector_score_key, 2,
    sym_selector_score_key,
    sym_nbt_object_key,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '~') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '~') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '~') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '~') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == '}') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '}') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '{') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(216);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == '[') ADVANCE(64);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '~') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == '[') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == ',') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == ']') ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == ']') ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == '[') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 67},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 67},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 67},
  [72] = {.lex_state = 67},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 205},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 67},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 67},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 67},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 67},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 201},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 204},
  [96] = {.lex_state = 203},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 204},
  [100] = {.lex_state = 204},
  [101] = {.lex_state = 201},
  [102] = {.lex_state = 202},
  [103] = {.lex_state = 201},
  [104] = {.lex_state = 201},
  [105] = {.lex_state = 201},
  [106] = {.lex_state = 201},
  [107] = {.lex_state = 201},
  [108] = {.lex_state = 201},
  [109] = {.lex_state = 201},
  [110] = {.lex_state = 201},
  [111] = {.lex_state = 201},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 67},
  [114] = {.lex_state = 202},
  [115] = {.lex_state = 201},
  [116] = {.lex_state = 201},
  [117] = {.lex_state = 67},
  [118] = {.lex_state = 201},
  [119] = {.lex_state = 201},
  [120] = {.lex_state = 202},
  [121] = {.lex_state = 202},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 201},
  [124] = {.lex_state = 202},
  [125] = {.lex_state = 202},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 67},
  [128] = {.lex_state = 204},
  [129] = {.lex_state = 201},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 201},
  [132] = {.lex_state = 67},
  [133] = {.lex_state = 67},
  [134] = {.lex_state = 202},
  [135] = {.lex_state = 202},
  [136] = {.lex_state = 201},
  [137] = {.lex_state = 201},
  [138] = {.lex_state = 201},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 201},
  [141] = {.lex_state = 201},
  [142] = {.lex_state = 201},
  [143] = {.lex_state = 201},
  [144] = {.lex_state = 201},
  [145] = {.lex_state = 201},
  [146] = {.lex_state = 201},
  [147] = {.lex_state = 201},
  [148] = {.lex_state = 201},
  [149] = {.lex_state = 67},
  [150] = {.lex_state = 201},
  [151] = {.lex_state = 201},
  [152] = {.lex_state = 201},
  [153] = {.lex_state = 201},
  [154] = {.lex_state = 201},
  [155] = {.lex_state = 201},
  [156] = {.lex_state = 201},
  [157] = {.lex_state = 67},
  [158] = {.lex_state = 201},
  [159] = {.lex_state = 201},
  [160] = {.lex_state = 67},
  [161] = {.lex_state = 201},
  [162] = {.lex_state = 201},
  [163] = {.lex_state = 201},
  [164] = {.lex_state = 201},
  [165] = {.lex_state = 201},
  [166] = {.lex_state = 201},
  [167] = {.lex_state = 67},
  [168] = {.lex_state = 67},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 201},
  [171] = {.lex_state = 201},
  [172] = {.lex_state = 201},
  [173] = {.lex_state = 201},
  [174] = {.lex_state = 201},
  [175] = {.lex_state = 201},
  [176] = {.lex_state = 201},
  [177] = {.lex_state = 201},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 201},
  [180] = {.lex_state = 201},
  [181] = {.lex_state = 201},
  [182] = {.lex_state = 67},
  [183] = {.lex_state = 201},
  [184] = {.lex_state = 201},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 201},
  [187] = {.lex_state = 67},
  [188] = {.lex_state = 201},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 201},
  [191] = {.lex_state = 201},
  [192] = {.lex_state = 201},
  [193] = {.lex_state = 201},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 67},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 67},
  [198] = {.lex_state = 67},
  [199] = {.lex_state = 67},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 201},
  [202] = {.lex_state = 201},
  [203] = {.lex_state = 201},
  [204] = {.lex_state = 201},
  [205] = {.lex_state = 201},
  [206] = {.lex_state = 201},
  [207] = {.lex_state = 201},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_facing] = ACTIONS(1),
    [anon_sym_anchored] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_positioned] = ACTIONS(1),
    [anon_sym_rotated] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
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
    [sym_root] = STATE(200),
    [sym_comment] = STATE(18),
    [sym_command] = STATE(18),
    [sym_execute_command] = STATE(68),
    [sym_command_name] = STATE(37),
    [aux_sym_root_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(11),
    [aux_sym_command_name_token1] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      aux_sym_item_token1,
    ACTIONS(43), 1,
      sym_nbt_path,
    STATE(160), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(19), 11,
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
    STATE(187), 11,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [77] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      aux_sym_item_token1,
    ACTIONS(43), 1,
      sym_nbt_path,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(160), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(19), 11,
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
    STATE(187), 11,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [154] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      aux_sym_item_token1,
    ACTIONS(43), 1,
      sym_nbt_path,
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(160), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(19), 11,
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
    STATE(187), 11,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [231] = 17,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      aux_sym_item_token1,
    ACTIONS(43), 1,
      sym_nbt_path,
    STATE(160), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(19), 11,
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
    STATE(187), 11,
      sym_invalid_comment,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [305] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_command_name_token1,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(55), 1,
      aux_sym_item_token1,
    ACTIONS(57), 1,
      sym_nbt_path,
    STATE(160), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(41), 10,
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
  [365] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(46), 1,
      sym_nbt_object,
    ACTIONS(64), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(47), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [401] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_container_repeat1,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(46), 1,
      sym_nbt_object,
    ACTIONS(75), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(52), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [437] = 9,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [470] = 9,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [503] = 9,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [536] = 9,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [569] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [599] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [629] = 8,
    ACTIONS(95), 1,
      aux_sym_command_name_token1,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      aux_sym_selector_number_token3,
    STATE(145), 1,
      sym_selector_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(141), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [659] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [689] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(184), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(147), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [719] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__line_separator,
    STATE(37), 1,
      sym_command_name,
    STATE(68), 1,
      sym_execute_command,
    STATE(19), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [749] = 9,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_execute,
    ACTIONS(122), 1,
      sym__line_separator,
    ACTIONS(125), 1,
      aux_sym_command_name_token1,
    STATE(37), 1,
      sym_command_name,
    STATE(68), 1,
      sym_execute_command,
    STATE(19), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [779] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_container_repeat1,
    STATE(46), 1,
      sym_nbt_object,
    STATE(91), 1,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_item_nbt,
      sym_item_state,
  [808] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(46), 1,
      sym_nbt_object,
    STATE(89), 1,
      aux_sym_path_repeat1,
    STATE(47), 2,
      sym_item_nbt,
      sym_item_state,
  [837] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(132), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [855] = 4,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(136), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [873] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_selector_option_section,
    ACTIONS(143), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [891] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [909] = 2,
    ACTIONS(136), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [922] = 8,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_command_name_token1,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      aux_sym_nbt_object_key_token1,
    STATE(152), 1,
      sym_selector_score_key,
    STATE(153), 1,
      sym_nbt_object_key,
    STATE(156), 1,
      sym_string,
  [947] = 4,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_path_repeat1,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [964] = 4,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_path_repeat1,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [981] = 4,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_path_repeat1,
    ACTIONS(178), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [998] = 3,
    ACTIONS(184), 1,
      sym_number,
    ACTIONS(182), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1013] = 4,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1030] = 4,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1047] = 4,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_command_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1064] = 4,
    ACTIONS(198), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_command_repeat1,
    ACTIONS(201), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1081] = 8,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_command_name_token1,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(157), 1,
      aux_sym_nbt_object_key_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_nbt_object_key,
    STATE(156), 1,
      sym_string,
    STATE(159), 1,
      sym_selector_score_key,
  [1106] = 4,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_command_repeat1,
    ACTIONS(207), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1123] = 2,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1135] = 2,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1147] = 2,
    ACTIONS(219), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1159] = 2,
    ACTIONS(201), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1171] = 3,
    ACTIONS(221), 1,
      anon_sym_,
    ACTIONS(201), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1185] = 2,
    ACTIONS(226), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1197] = 2,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1209] = 2,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1221] = 2,
    ACTIONS(238), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1233] = 2,
    ACTIONS(75), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1245] = 2,
    ACTIONS(242), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1257] = 2,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1269] = 2,
    ACTIONS(250), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1281] = 7,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_command_name_token1,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(157), 1,
      aux_sym_nbt_object_key_token1,
    STATE(153), 1,
      sym_nbt_object_key,
    STATE(156), 1,
      sym_string,
    STATE(159), 1,
      sym_selector_score_key,
  [1303] = 2,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1315] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1327] = 2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1339] = 2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1351] = 2,
    ACTIONS(182), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1363] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1375] = 2,
    ACTIONS(274), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1387] = 3,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(281), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1401] = 2,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1413] = 2,
    ACTIONS(178), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1425] = 2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1437] = 2,
    ACTIONS(293), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1449] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(37), 1,
      sym_command_name,
    STATE(67), 2,
      sym_command,
      sym_execute_command,
  [1466] = 5,
    ACTIONS(295), 1,
      aux_sym_command_name_token1,
    ACTIONS(297), 1,
      sym_number,
    STATE(134), 1,
      sym_boolean,
    STATE(135), 1,
      sym_state_value,
    ACTIONS(299), 2,
      anon_sym_true,
      anon_sym_false,
  [1483] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(37), 1,
      sym_command_name,
    STATE(72), 2,
      sym_command,
      sym_execute_command,
  [1500] = 2,
    ACTIONS(303), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1511] = 2,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1522] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1539] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1556] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(37), 1,
      sym_command_name,
    STATE(77), 2,
      sym_command,
      sym_execute_command,
  [1573] = 2,
    ACTIONS(315), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1584] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1601] = 2,
    ACTIONS(321), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(319), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1612] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1629] = 4,
    STATE(172), 1,
      sym_selector_score_value,
    STATE(173), 1,
      sym_selector_number,
    ACTIONS(103), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(105), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1644] = 2,
    ACTIONS(327), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1655] = 2,
    ACTIONS(331), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(329), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1666] = 4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1680] = 4,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    STATE(83), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1694] = 4,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(82), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1708] = 4,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(83), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1722] = 4,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_string_token1,
    ACTIONS(350), 1,
      anon_sym_BSLASH,
    STATE(83), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1736] = 4,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    STATE(80), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1750] = 1,
    ACTIONS(357), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1758] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(359), 1,
      sym_number,
    STATE(59), 1,
      sym_coordinate,
  [1771] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(359), 1,
      sym_number,
    STATE(48), 1,
      sym_coordinate,
  [1784] = 3,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_state_key,
  [1794] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_path_repeat1,
  [1804] = 3,
    ACTIONS(365), 1,
      aux_sym_command_name_token1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_selector_score_key,
  [1814] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_path_repeat1,
  [1824] = 3,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_state_key,
  [1834] = 3,
    ACTIONS(371), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym_selector_score_repeat1,
    STATE(129), 1,
      aux_sym_selector_nbt_repeat1,
  [1844] = 3,
    ACTIONS(373), 1,
      aux_sym_command_name_token1,
    STATE(136), 1,
      sym_selector_option,
    STATE(202), 1,
      sym_selector_key,
  [1854] = 3,
    ACTIONS(375), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1864] = 3,
    ACTIONS(379), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [1874] = 2,
    ACTIONS(387), 1,
      aux_sym_string_token1,
    ACTIONS(385), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1882] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(389), 1,
      anon_sym_execute,
    STATE(32), 1,
      sym_command_name,
  [1892] = 3,
    ACTIONS(391), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1902] = 3,
    ACTIONS(375), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_selector_option_section_repeat1,
  [1912] = 2,
    ACTIONS(398), 1,
      aux_sym_selector_option_section_token1,
    STATE(110), 1,
      aux_sym_selector_score_repeat1,
  [1919] = 2,
    ACTIONS(400), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(402), 1,
      anon_sym_COMMA,
  [1926] = 2,
    ACTIONS(404), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym_nbt_array_repeat1,
  [1933] = 2,
    ACTIONS(407), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym_nbt_object_repeat1,
  [1940] = 2,
    ACTIONS(409), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym_nbt_array_repeat1,
  [1947] = 2,
    ACTIONS(411), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym_nbt_object_repeat1,
  [1954] = 2,
    ACTIONS(414), 1,
      aux_sym_selector_option_section_token1,
    STATE(104), 1,
      aux_sym_nbt_object_repeat1,
  [1961] = 2,
    ACTIONS(416), 1,
      aux_sym_selector_option_section_token1,
    STATE(105), 1,
      aux_sym_nbt_array_repeat1,
  [1968] = 2,
    ACTIONS(418), 1,
      aux_sym_selector_option_section_token1,
    STATE(109), 1,
      aux_sym_item_state_repeat1,
  [1975] = 2,
    ACTIONS(421), 1,
      aux_sym_selector_option_section_token1,
    STATE(110), 1,
      aux_sym_selector_score_repeat1,
  [1982] = 2,
    ACTIONS(424), 1,
      aux_sym_selector_option_section_token1,
    STATE(109), 1,
      aux_sym_item_state_repeat1,
  [1989] = 2,
    ACTIONS(426), 1,
      anon_sym_,
    STATE(133), 1,
      aux_sym_execute_command_repeat1,
  [1996] = 2,
    ACTIONS(428), 1,
      anon_sym_,
    STATE(117), 1,
      aux_sym_execute_command_repeat1,
  [2003] = 2,
    ACTIONS(430), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(432), 1,
      anon_sym_COMMA,
  [2010] = 2,
    ACTIONS(434), 1,
      aux_sym_selector_option_section_token1,
    STATE(111), 1,
      aux_sym_item_state_repeat1,
  [2017] = 2,
    ACTIONS(436), 1,
      aux_sym_selector_option_section_token1,
    STATE(116), 1,
      aux_sym_selector_nbt_repeat1,
  [2024] = 2,
    ACTIONS(439), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym_execute_command_repeat1,
  [2031] = 2,
    ACTIONS(441), 1,
      aux_sym_selector_option_section_token1,
    STATE(123), 1,
      aux_sym_nbt_object_repeat1,
  [2038] = 2,
    ACTIONS(443), 1,
      aux_sym_selector_option_section_token1,
    STATE(131), 1,
      aux_sym_nbt_array_repeat1,
  [2045] = 2,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      aux_sym_selector_option_section_token1,
  [2052] = 2,
    ACTIONS(445), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(447), 1,
      anon_sym_COMMA,
  [2059] = 2,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    STATE(203), 1,
      sym_state_key,
  [2066] = 2,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym_nbt_object_repeat1,
  [2073] = 2,
    ACTIONS(451), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(453), 1,
      anon_sym_COMMA,
  [2080] = 2,
    ACTIONS(455), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(457), 1,
      anon_sym_COMMA,
  [2087] = 2,
    ACTIONS(365), 1,
      aux_sym_command_name_token1,
    STATE(162), 1,
      sym_selector_score_key,
  [2094] = 2,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [2101] = 2,
    ACTIONS(463), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
  [2108] = 2,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    STATE(116), 1,
      aux_sym_selector_nbt_repeat1,
  [2115] = 2,
    ACTIONS(469), 1,
      aux_sym_command_name_token1,
    ACTIONS(471), 1,
      sym_number,
  [2122] = 2,
    ACTIONS(473), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym_nbt_array_repeat1,
  [2129] = 2,
    ACTIONS(475), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym_execute_command_repeat1,
  [2136] = 2,
    ACTIONS(428), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym_execute_command_repeat1,
  [2143] = 2,
    ACTIONS(478), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(480), 1,
      anon_sym_COMMA,
  [2150] = 2,
    ACTIONS(482), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(484), 1,
      anon_sym_COMMA,
  [2157] = 1,
    ACTIONS(486), 1,
      aux_sym_selector_option_section_token1,
  [2161] = 1,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
  [2165] = 1,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
  [2169] = 1,
    ACTIONS(492), 1,
      aux_sym_command_name_token1,
  [2173] = 1,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
  [2177] = 1,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
  [2181] = 1,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
  [2185] = 1,
    ACTIONS(501), 1,
      aux_sym_selector_option_section_token1,
  [2189] = 1,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
  [2193] = 1,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
  [2197] = 1,
    ACTIONS(507), 1,
      aux_sym_selector_option_section_token1,
  [2201] = 1,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
  [2205] = 1,
    ACTIONS(511), 1,
      aux_sym_selector_option_section_token1,
  [2209] = 1,
    ACTIONS(513), 1,
      anon_sym_,
  [2213] = 1,
    ACTIONS(515), 1,
      aux_sym_selector_option_section_token1,
  [2217] = 1,
    ACTIONS(517), 1,
      aux_sym_selector_option_section_token1,
  [2221] = 1,
    ACTIONS(520), 1,
      aux_sym_selector_option_section_token1,
  [2225] = 1,
    ACTIONS(522), 1,
      aux_sym_selector_option_section_token1,
  [2229] = 1,
    ACTIONS(524), 1,
      aux_sym_selector_option_section_token1,
  [2233] = 1,
    ACTIONS(526), 1,
      aux_sym_selector_option_section_token1,
  [2237] = 1,
    ACTIONS(528), 1,
      aux_sym_selector_option_section_token1,
  [2241] = 1,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [2245] = 1,
    ACTIONS(532), 1,
      aux_sym_selector_option_section_token1,
  [2249] = 1,
    ACTIONS(534), 1,
      aux_sym_selector_option_section_token1,
  [2253] = 1,
    ACTIONS(536), 1,
      anon_sym_,
  [2257] = 1,
    ACTIONS(538), 1,
      aux_sym_selector_option_section_token1,
  [2261] = 1,
    ACTIONS(540), 1,
      aux_sym_selector_option_section_token1,
  [2265] = 1,
    ACTIONS(542), 1,
      aux_sym_selector_option_section_token1,
  [2269] = 1,
    ACTIONS(544), 1,
      aux_sym_selector_option_section_token1,
  [2273] = 1,
    ACTIONS(546), 1,
      aux_sym_selector_option_section_token1,
  [2277] = 1,
    ACTIONS(548), 1,
      aux_sym_selector_option_section_token1,
  [2281] = 1,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [2285] = 1,
    ACTIONS(459), 1,
      anon_sym_EQ,
  [2289] = 1,
    ACTIONS(550), 1,
      aux_sym_command_name_token1,
  [2293] = 1,
    ACTIONS(552), 1,
      aux_sym_selector_option_section_token1,
  [2297] = 1,
    ACTIONS(554), 1,
      aux_sym_selector_option_section_token1,
  [2301] = 1,
    ACTIONS(556), 1,
      aux_sym_selector_option_section_token1,
  [2305] = 1,
    ACTIONS(558), 1,
      aux_sym_selector_option_section_token1,
  [2309] = 1,
    ACTIONS(560), 1,
      aux_sym_selector_option_section_token1,
  [2313] = 1,
    ACTIONS(562), 1,
      aux_sym_selector_option_section_token1,
  [2317] = 1,
    ACTIONS(564), 1,
      aux_sym_selector_option_section_token1,
  [2321] = 1,
    ACTIONS(566), 1,
      aux_sym_selector_option_section_token1,
  [2325] = 1,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [2329] = 1,
    ACTIONS(570), 1,
      aux_sym_selector_option_section_token1,
  [2333] = 1,
    ACTIONS(572), 1,
      aux_sym_selector_option_section_token1,
  [2337] = 1,
    ACTIONS(574), 1,
      aux_sym_selector_option_section_token1,
  [2341] = 1,
    ACTIONS(184), 1,
      sym_number,
  [2345] = 1,
    ACTIONS(244), 1,
      aux_sym_selector_option_section_token1,
  [2349] = 1,
    ACTIONS(217), 1,
      aux_sym_selector_option_section_token1,
  [2353] = 1,
    ACTIONS(576), 1,
      anon_sym_,
  [2357] = 1,
    ACTIONS(213), 1,
      aux_sym_selector_option_section_token1,
  [2361] = 1,
    ACTIONS(579), 1,
      anon_sym_,
  [2365] = 1,
    ACTIONS(272), 1,
      aux_sym_selector_option_section_token1,
  [2369] = 1,
    ACTIONS(581), 1,
      anon_sym_,
  [2373] = 1,
    ACTIONS(256), 1,
      aux_sym_selector_option_section_token1,
  [2377] = 1,
    ACTIONS(232), 1,
      aux_sym_selector_option_section_token1,
  [2381] = 1,
    ACTIONS(283), 1,
      aux_sym_selector_option_section_token1,
  [2385] = 1,
    ACTIONS(264), 1,
      aux_sym_selector_option_section_token1,
  [2389] = 1,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [2393] = 1,
    ACTIONS(585), 1,
      anon_sym_,
  [2397] = 1,
    ACTIONS(587), 1,
      aux_sym_command_name_token1,
  [2401] = 1,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
  [2405] = 1,
    ACTIONS(591), 1,
      anon_sym_COLON,
  [2409] = 1,
    ACTIONS(593), 1,
      anon_sym_,
  [2413] = 1,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [2417] = 1,
    ACTIONS(597), 1,
      aux_sym_selector_option_section_token1,
  [2421] = 1,
    ACTIONS(599), 1,
      aux_sym_selector_option_section_token1,
  [2425] = 1,
    ACTIONS(601), 1,
      aux_sym_selector_option_section_token1,
  [2429] = 1,
    ACTIONS(603), 1,
      aux_sym_selector_option_section_token1,
  [2433] = 1,
    ACTIONS(605), 1,
      aux_sym_selector_option_section_token1,
  [2437] = 1,
    ACTIONS(607), 1,
      aux_sym_selector_option_section_token1,
  [2441] = 1,
    ACTIONS(609), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 305,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 401,
  [SMALL_STATE(9)] = 437,
  [SMALL_STATE(10)] = 470,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 536,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 629,
  [SMALL_STATE(16)] = 659,
  [SMALL_STATE(17)] = 689,
  [SMALL_STATE(18)] = 719,
  [SMALL_STATE(19)] = 749,
  [SMALL_STATE(20)] = 779,
  [SMALL_STATE(21)] = 808,
  [SMALL_STATE(22)] = 837,
  [SMALL_STATE(23)] = 855,
  [SMALL_STATE(24)] = 873,
  [SMALL_STATE(25)] = 891,
  [SMALL_STATE(26)] = 909,
  [SMALL_STATE(27)] = 922,
  [SMALL_STATE(28)] = 947,
  [SMALL_STATE(29)] = 964,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 998,
  [SMALL_STATE(32)] = 1013,
  [SMALL_STATE(33)] = 1030,
  [SMALL_STATE(34)] = 1047,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1081,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1123,
  [SMALL_STATE(39)] = 1135,
  [SMALL_STATE(40)] = 1147,
  [SMALL_STATE(41)] = 1159,
  [SMALL_STATE(42)] = 1171,
  [SMALL_STATE(43)] = 1185,
  [SMALL_STATE(44)] = 1197,
  [SMALL_STATE(45)] = 1209,
  [SMALL_STATE(46)] = 1221,
  [SMALL_STATE(47)] = 1233,
  [SMALL_STATE(48)] = 1245,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1269,
  [SMALL_STATE(51)] = 1281,
  [SMALL_STATE(52)] = 1303,
  [SMALL_STATE(53)] = 1315,
  [SMALL_STATE(54)] = 1327,
  [SMALL_STATE(55)] = 1339,
  [SMALL_STATE(56)] = 1351,
  [SMALL_STATE(57)] = 1363,
  [SMALL_STATE(58)] = 1375,
  [SMALL_STATE(59)] = 1387,
  [SMALL_STATE(60)] = 1401,
  [SMALL_STATE(61)] = 1413,
  [SMALL_STATE(62)] = 1425,
  [SMALL_STATE(63)] = 1437,
  [SMALL_STATE(64)] = 1449,
  [SMALL_STATE(65)] = 1466,
  [SMALL_STATE(66)] = 1483,
  [SMALL_STATE(67)] = 1500,
  [SMALL_STATE(68)] = 1511,
  [SMALL_STATE(69)] = 1522,
  [SMALL_STATE(70)] = 1539,
  [SMALL_STATE(71)] = 1556,
  [SMALL_STATE(72)] = 1573,
  [SMALL_STATE(73)] = 1584,
  [SMALL_STATE(74)] = 1601,
  [SMALL_STATE(75)] = 1612,
  [SMALL_STATE(76)] = 1629,
  [SMALL_STATE(77)] = 1644,
  [SMALL_STATE(78)] = 1655,
  [SMALL_STATE(79)] = 1666,
  [SMALL_STATE(80)] = 1680,
  [SMALL_STATE(81)] = 1694,
  [SMALL_STATE(82)] = 1708,
  [SMALL_STATE(83)] = 1722,
  [SMALL_STATE(84)] = 1736,
  [SMALL_STATE(85)] = 1750,
  [SMALL_STATE(86)] = 1758,
  [SMALL_STATE(87)] = 1771,
  [SMALL_STATE(88)] = 1784,
  [SMALL_STATE(89)] = 1794,
  [SMALL_STATE(90)] = 1804,
  [SMALL_STATE(91)] = 1814,
  [SMALL_STATE(92)] = 1824,
  [SMALL_STATE(93)] = 1834,
  [SMALL_STATE(94)] = 1844,
  [SMALL_STATE(95)] = 1854,
  [SMALL_STATE(96)] = 1864,
  [SMALL_STATE(97)] = 1874,
  [SMALL_STATE(98)] = 1882,
  [SMALL_STATE(99)] = 1892,
  [SMALL_STATE(100)] = 1902,
  [SMALL_STATE(101)] = 1912,
  [SMALL_STATE(102)] = 1919,
  [SMALL_STATE(103)] = 1926,
  [SMALL_STATE(104)] = 1933,
  [SMALL_STATE(105)] = 1940,
  [SMALL_STATE(106)] = 1947,
  [SMALL_STATE(107)] = 1954,
  [SMALL_STATE(108)] = 1961,
  [SMALL_STATE(109)] = 1968,
  [SMALL_STATE(110)] = 1975,
  [SMALL_STATE(111)] = 1982,
  [SMALL_STATE(112)] = 1989,
  [SMALL_STATE(113)] = 1996,
  [SMALL_STATE(114)] = 2003,
  [SMALL_STATE(115)] = 2010,
  [SMALL_STATE(116)] = 2017,
  [SMALL_STATE(117)] = 2024,
  [SMALL_STATE(118)] = 2031,
  [SMALL_STATE(119)] = 2038,
  [SMALL_STATE(120)] = 2045,
  [SMALL_STATE(121)] = 2052,
  [SMALL_STATE(122)] = 2059,
  [SMALL_STATE(123)] = 2066,
  [SMALL_STATE(124)] = 2073,
  [SMALL_STATE(125)] = 2080,
  [SMALL_STATE(126)] = 2087,
  [SMALL_STATE(127)] = 2094,
  [SMALL_STATE(128)] = 2101,
  [SMALL_STATE(129)] = 2108,
  [SMALL_STATE(130)] = 2115,
  [SMALL_STATE(131)] = 2122,
  [SMALL_STATE(132)] = 2129,
  [SMALL_STATE(133)] = 2136,
  [SMALL_STATE(134)] = 2143,
  [SMALL_STATE(135)] = 2150,
  [SMALL_STATE(136)] = 2157,
  [SMALL_STATE(137)] = 2161,
  [SMALL_STATE(138)] = 2165,
  [SMALL_STATE(139)] = 2169,
  [SMALL_STATE(140)] = 2173,
  [SMALL_STATE(141)] = 2177,
  [SMALL_STATE(142)] = 2181,
  [SMALL_STATE(143)] = 2185,
  [SMALL_STATE(144)] = 2189,
  [SMALL_STATE(145)] = 2193,
  [SMALL_STATE(146)] = 2197,
  [SMALL_STATE(147)] = 2201,
  [SMALL_STATE(148)] = 2205,
  [SMALL_STATE(149)] = 2209,
  [SMALL_STATE(150)] = 2213,
  [SMALL_STATE(151)] = 2217,
  [SMALL_STATE(152)] = 2221,
  [SMALL_STATE(153)] = 2225,
  [SMALL_STATE(154)] = 2229,
  [SMALL_STATE(155)] = 2233,
  [SMALL_STATE(156)] = 2237,
  [SMALL_STATE(157)] = 2241,
  [SMALL_STATE(158)] = 2245,
  [SMALL_STATE(159)] = 2249,
  [SMALL_STATE(160)] = 2253,
  [SMALL_STATE(161)] = 2257,
  [SMALL_STATE(162)] = 2261,
  [SMALL_STATE(163)] = 2265,
  [SMALL_STATE(164)] = 2269,
  [SMALL_STATE(165)] = 2273,
  [SMALL_STATE(166)] = 2277,
  [SMALL_STATE(167)] = 2281,
  [SMALL_STATE(168)] = 2285,
  [SMALL_STATE(169)] = 2289,
  [SMALL_STATE(170)] = 2293,
  [SMALL_STATE(171)] = 2297,
  [SMALL_STATE(172)] = 2301,
  [SMALL_STATE(173)] = 2305,
  [SMALL_STATE(174)] = 2309,
  [SMALL_STATE(175)] = 2313,
  [SMALL_STATE(176)] = 2317,
  [SMALL_STATE(177)] = 2321,
  [SMALL_STATE(178)] = 2325,
  [SMALL_STATE(179)] = 2329,
  [SMALL_STATE(180)] = 2333,
  [SMALL_STATE(181)] = 2337,
  [SMALL_STATE(182)] = 2341,
  [SMALL_STATE(183)] = 2345,
  [SMALL_STATE(184)] = 2349,
  [SMALL_STATE(185)] = 2353,
  [SMALL_STATE(186)] = 2357,
  [SMALL_STATE(187)] = 2361,
  [SMALL_STATE(188)] = 2365,
  [SMALL_STATE(189)] = 2369,
  [SMALL_STATE(190)] = 2373,
  [SMALL_STATE(191)] = 2377,
  [SMALL_STATE(192)] = 2381,
  [SMALL_STATE(193)] = 2385,
  [SMALL_STATE(194)] = 2389,
  [SMALL_STATE(195)] = 2393,
  [SMALL_STATE(196)] = 2397,
  [SMALL_STATE(197)] = 2401,
  [SMALL_STATE(198)] = 2405,
  [SMALL_STATE(199)] = 2409,
  [SMALL_STATE(200)] = 2413,
  [SMALL_STATE(201)] = 2417,
  [SMALL_STATE(202)] = 2421,
  [SMALL_STATE(203)] = 2425,
  [SMALL_STATE(204)] = 2429,
  [SMALL_STATE(205)] = 2433,
  [SMALL_STATE(206)] = 2437,
  [SMALL_STATE(207)] = 2441,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(139),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(139),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(78),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(98),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(112),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(19),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(130),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(139),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(139),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(139),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(87),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(83),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(197),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(94),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(79),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(122),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(126),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(51),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(5),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_execute_command_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [595] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
