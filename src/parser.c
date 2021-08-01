#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
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
  sym__line_separator = 16,
  aux_sym_command_name_token1 = 17,
  sym__identifier = 18,
  sym_number = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_TILDE = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_token1 = 24,
  anon_sym_BSLASH = 25,
  anon_sym_AT = 26,
  anon_sym_p = 27,
  anon_sym_a = 28,
  anon_sym_r = 29,
  anon_sym_s = 30,
  anon_sym_e = 31,
  anon_sym_LBRACK = 32,
  aux_sym_selector_option_section_token1 = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACK = 35,
  anon_sym_EQ = 36,
  anon_sym_nbt = 37,
  anon_sym_LBRACE = 38,
  anon_sym_COLON = 39,
  anon_sym_RBRACE = 40,
  anon_sym_scores = 41,
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
  sym_command_name = 58,
  sym_boolean = 59,
  sym_coordinate = 60,
  sym_rotation = 61,
  sym_location = 62,
  sym_string = 63,
  sym__escape_sequence = 64,
  sym_selector = 65,
  sym_selector_option_section = 66,
  sym_selector_option = 67,
  sym_selector_key = 68,
  sym_selector_value = 69,
  sym_selector_nbt = 70,
  sym__selector_nbt = 71,
  sym_selector_score = 72,
  sym__selector_score_object = 73,
  sym_selector_score_key = 74,
  sym_selector_score_value = 75,
  sym_selector_number = 76,
  sym_nbt = 77,
  sym_nbt_object = 78,
  sym_nbt_array = 79,
  sym_nbt_object_key = 80,
  sym_nbt_object_value = 81,
  sym_nbt_number = 82,
  sym_item = 83,
  sym_item_nbt = 84,
  sym_item_state = 85,
  sym_state_key = 86,
  sym_state_value = 87,
  sym_path = 88,
  sym_container = 89,
  aux_sym_root_repeat1 = 90,
  aux_sym_command_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_selector_option_section_repeat1 = 93,
  aux_sym__selector_nbt_repeat1 = 94,
  aux_sym__selector_score_object_repeat1 = 95,
  aux_sym_nbt_array_repeat1 = 96,
  aux_sym_item_state_repeat1 = 97,
  aux_sym_path_repeat1 = 98,
  aux_sym_container_repeat1 = 99,
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
  [sym_execute_command] = "execute_command",
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
  [anon_sym_execute] = sym_command_name,
  [anon_sym_run] = anon_sym_run,
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
  [sym_execute_command] = sym_execute_command,
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
  [sym_execute_command] = {
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

static const TSFieldMapSlice ts_field_map_slices[4] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (eof) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '~') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '~') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '~') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '}') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '}') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(65);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '~') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ',') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '}') ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '}') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nbt);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_nbt);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_scores);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 68},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 68},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 68},
  [46] = {.lex_state = 68},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 68},
  [54] = {.lex_state = 68},
  [55] = {.lex_state = 68},
  [56] = {.lex_state = 68},
  [57] = {.lex_state = 68},
  [58] = {.lex_state = 68},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 68},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 162},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 68},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 68},
  [73] = {.lex_state = 68},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 161},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 160},
  [86] = {.lex_state = 159},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 68},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 163},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 163},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 161},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 161},
  [100] = {.lex_state = 157},
  [101] = {.lex_state = 157},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 157},
  [104] = {.lex_state = 157},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 157},
  [107] = {.lex_state = 157},
  [108] = {.lex_state = 158},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 157},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 158},
  [114] = {.lex_state = 157},
  [115] = {.lex_state = 163},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 157},
  [119] = {.lex_state = 158},
  [120] = {.lex_state = 157},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 157},
  [123] = {.lex_state = 157},
  [124] = {.lex_state = 157},
  [125] = {.lex_state = 158},
  [126] = {.lex_state = 158},
  [127] = {.lex_state = 161},
  [128] = {.lex_state = 157},
  [129] = {.lex_state = 157},
  [130] = {.lex_state = 157},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 158},
  [134] = {.lex_state = 157},
  [135] = {.lex_state = 157},
  [136] = {.lex_state = 157},
  [137] = {.lex_state = 157},
  [138] = {.lex_state = 157},
  [139] = {.lex_state = 157},
  [140] = {.lex_state = 157},
  [141] = {.lex_state = 157},
  [142] = {.lex_state = 157},
  [143] = {.lex_state = 157},
  [144] = {.lex_state = 157},
  [145] = {.lex_state = 157},
  [146] = {.lex_state = 157},
  [147] = {.lex_state = 157},
  [148] = {.lex_state = 157},
  [149] = {.lex_state = 157},
  [150] = {.lex_state = 157},
  [151] = {.lex_state = 157},
  [152] = {.lex_state = 157},
  [153] = {.lex_state = 157},
  [154] = {.lex_state = 157},
  [155] = {.lex_state = 157},
  [156] = {.lex_state = 157},
  [157] = {.lex_state = 68},
  [158] = {.lex_state = 157},
  [159] = {.lex_state = 68},
  [160] = {.lex_state = 157},
  [161] = {.lex_state = 157},
  [162] = {.lex_state = 157},
  [163] = {.lex_state = 68},
  [164] = {.lex_state = 157},
  [165] = {.lex_state = 157},
  [166] = {.lex_state = 157},
  [167] = {.lex_state = 157},
  [168] = {.lex_state = 68},
  [169] = {.lex_state = 157},
  [170] = {.lex_state = 157},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 157},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 157},
  [175] = {.lex_state = 157},
  [176] = {.lex_state = 157},
  [177] = {.lex_state = 157},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 157},
  [180] = {.lex_state = 157},
  [181] = {.lex_state = 68},
  [182] = {.lex_state = 157},
  [183] = {.lex_state = 68},
  [184] = {.lex_state = 157},
  [185] = {.lex_state = 68},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 157},
  [189] = {.lex_state = 157},
  [190] = {.lex_state = 68},
  [191] = {.lex_state = 157},
  [192] = {.lex_state = 68},
  [193] = {.lex_state = 157},
  [194] = {.lex_state = 157},
  [195] = {.lex_state = 157},
  [196] = {.lex_state = 157},
  [197] = {.lex_state = 157},
  [198] = {.lex_state = 157},
  [199] = {.lex_state = 157},
  [200] = {.lex_state = 157},
  [201] = {.lex_state = 157},
  [202] = {.lex_state = 68},
  [203] = {.lex_state = 157},
  [204] = {.lex_state = 0},
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
    [sym_root] = STATE(204),
    [sym_comment] = STATE(16),
    [sym_command] = STATE(16),
    [sym_execute_command] = STATE(62),
    [sym_command_name] = STATE(30),
    [aux_sym_root_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(11),
    [aux_sym_command_name_token1] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym_item_token1,
    ACTIONS(39), 1,
      sym_nbt_path,
    STATE(185), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [60] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym_item_token1,
    ACTIONS(39), 1,
      sym_nbt_path,
    ACTIONS(41), 1,
      anon_sym_run,
    STATE(185), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [120] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym_item_token1,
    ACTIONS(39), 1,
      sym_nbt_path,
    ACTIONS(43), 1,
      anon_sym_run,
    STATE(185), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [180] = 15,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym_command_name_token1,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym_item_token1,
    ACTIONS(39), 1,
      sym_nbt_path,
    STATE(185), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [237] = 15,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_nbt_path,
    ACTIONS(45), 1,
      aux_sym_command_name_token1,
    ACTIONS(47), 1,
      aux_sym_item_token1,
    STATE(185), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [294] = 10,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(32), 1,
      aux_sym_path_repeat1,
    STATE(41), 1,
      sym_nbt_object,
    ACTIONS(54), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(42), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [330] = 10,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      aux_sym_container_repeat1,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(41), 1,
      sym_nbt_object,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(35), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [366] = 9,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [399] = 9,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [432] = 9,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [465] = 9,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [498] = 8,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [528] = 8,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [558] = 8,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(139), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [588] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym__line_separator,
    STATE(30), 1,
      sym_command_name,
    STATE(62), 1,
      sym_execute_command,
    STATE(17), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [618] = 9,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(97), 1,
      anon_sym_execute,
    ACTIONS(100), 1,
      sym__line_separator,
    ACTIONS(103), 1,
      aux_sym_command_name_token1,
    STATE(30), 1,
      sym_command_name,
    STATE(62), 1,
      sym_execute_command,
    STATE(17), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [648] = 7,
    ACTIONS(106), 1,
      aux_sym_command_name_token1,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(114), 1,
      aux_sym_selector_number_token3,
    STATE(147), 1,
      sym_selector_value,
    ACTIONS(110), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(144), 2,
      sym_boolean,
      sym_selector_number,
  [673] = 9,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_nbt_object,
    STATE(88), 1,
      aux_sym_path_repeat1,
    STATE(42), 2,
      sym_item_nbt,
      sym_item_state,
  [702] = 9,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_nbt_object,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(35), 2,
      sym_item_nbt,
      sym_item_state,
  [731] = 4,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(120), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [749] = 4,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_selector_option_section,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [767] = 4,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(133), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [785] = 4,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(137), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [803] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_command_repeat1,
    ACTIONS(143), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [820] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(143), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [837] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(147), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [854] = 4,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_path_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [871] = 2,
    ACTIONS(120), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [884] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(158), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [901] = 4,
    ACTIONS(162), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [918] = 4,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_path_repeat1,
    ACTIONS(172), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [935] = 4,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_path_repeat1,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [952] = 3,
    ACTIONS(181), 1,
      anon_sym_,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [966] = 2,
    ACTIONS(186), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [978] = 2,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [990] = 2,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1002] = 2,
    ACTIONS(198), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1014] = 2,
    ACTIONS(202), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1026] = 2,
    ACTIONS(206), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1038] = 2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1050] = 2,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1062] = 3,
    ACTIONS(214), 1,
      anon_sym_,
    ACTIONS(217), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1076] = 2,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1088] = 2,
    ACTIONS(225), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1100] = 2,
    ACTIONS(229), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1112] = 6,
    ACTIONS(231), 1,
      aux_sym_command_name_token1,
    ACTIONS(233), 1,
      anon_sym_nbt,
    ACTIONS(235), 1,
      anon_sym_scores,
    STATE(152), 1,
      sym_selector_option,
    STATE(198), 1,
      sym_selector_key,
    STATE(197), 2,
      sym_selector_nbt,
      sym_selector_score,
  [1132] = 2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1144] = 2,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1156] = 2,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1168] = 2,
    ACTIONS(251), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1180] = 2,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1192] = 2,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1204] = 2,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1216] = 2,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1228] = 2,
    ACTIONS(263), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1240] = 2,
    ACTIONS(267), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1252] = 2,
    ACTIONS(271), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1264] = 4,
    STATE(164), 1,
      sym_selector_score_value,
    STATE(165), 1,
      sym_selector_number,
    ACTIONS(112), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(114), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1279] = 2,
    ACTIONS(275), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1290] = 5,
    ACTIONS(277), 1,
      aux_sym_command_name_token1,
    ACTIONS(279), 1,
      sym_number,
    STATE(125), 1,
      sym_boolean,
    STATE(126), 1,
      sym_state_value,
    ACTIONS(281), 2,
      anon_sym_true,
      anon_sym_false,
  [1307] = 2,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1318] = 2,
    ACTIONS(289), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(287), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1329] = 5,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_string,
    STATE(182), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1346] = 2,
    ACTIONS(297), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(295), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1357] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(30), 1,
      sym_command_name,
    STATE(73), 2,
      sym_command,
      sym_execute_command,
  [1374] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(30), 1,
      sym_command_name,
    STATE(60), 2,
      sym_command,
      sym_execute_command,
  [1391] = 5,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_string,
    STATE(182), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1408] = 5,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_string,
    STATE(182), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1425] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(30), 1,
      sym_command_name,
    STATE(65), 2,
      sym_command,
      sym_execute_command,
  [1442] = 5,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_string,
    STATE(182), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1459] = 2,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1470] = 2,
    ACTIONS(311), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(309), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1481] = 4,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_string_token1,
    ACTIONS(317), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1495] = 4,
    ACTIONS(315), 1,
      aux_sym_string_token1,
    ACTIONS(317), 1,
      anon_sym_BSLASH,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1509] = 4,
    ACTIONS(317), 1,
      anon_sym_BSLASH,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    STATE(74), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1523] = 1,
    ACTIONS(325), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1531] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_string,
    STATE(182), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1545] = 4,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_string_token1,
    ACTIONS(332), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1559] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_string,
    STATE(203), 1,
      sym_nbt_object_key,
    ACTIONS(291), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1573] = 4,
    ACTIONS(317), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    STATE(75), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1587] = 3,
    ACTIONS(339), 1,
      aux_sym_command_name_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_selector_score_key,
  [1597] = 3,
    ACTIONS(343), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1607] = 3,
    ACTIONS(347), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym__selector_nbt_repeat1,
  [1617] = 3,
    ACTIONS(352), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1627] = 3,
    ACTIONS(358), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
  [1637] = 2,
    ACTIONS(366), 1,
      aux_sym_string_token1,
    ACTIONS(364), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1645] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_,
    STATE(28), 1,
      aux_sym_path_repeat1,
  [1655] = 3,
    ACTIONS(368), 1,
      aux_sym_command_name_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_state_key,
  [1665] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(174), 1,
      anon_sym_,
    STATE(28), 1,
      aux_sym_path_repeat1,
  [1675] = 3,
    ACTIONS(372), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym__selector_nbt_repeat1,
  [1685] = 2,
    STATE(37), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      sym_number,
      anon_sym_TILDE,
  [1693] = 3,
    ACTIONS(372), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym__selector_nbt_repeat1,
  [1703] = 3,
    ACTIONS(339), 1,
      aux_sym_command_name_token1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_selector_score_key,
  [1713] = 3,
    ACTIONS(343), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_selector_option_section_repeat1,
  [1723] = 2,
    STATE(43), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      sym_number,
      anon_sym_TILDE,
  [1731] = 3,
    ACTIONS(368), 1,
      aux_sym_command_name_token1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_state_key,
  [1741] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(384), 1,
      anon_sym_execute,
    STATE(25), 1,
      sym_command_name,
  [1751] = 3,
    ACTIONS(386), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1761] = 2,
    ACTIONS(391), 1,
      aux_sym_selector_option_section_token1,
    STATE(122), 1,
      aux_sym__selector_score_object_repeat1,
  [1768] = 2,
    ACTIONS(393), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym__selector_nbt_repeat1,
  [1775] = 2,
    ACTIONS(395), 1,
      anon_sym_,
    STATE(111), 1,
      aux_sym_command_repeat1,
  [1782] = 2,
    ACTIONS(397), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym__selector_nbt_repeat1,
  [1789] = 2,
    ACTIONS(399), 1,
      aux_sym_selector_option_section_token1,
    STATE(129), 1,
      aux_sym_nbt_array_repeat1,
  [1796] = 2,
    ACTIONS(401), 1,
      anon_sym_,
    STATE(109), 1,
      aux_sym_command_repeat1,
  [1803] = 2,
    ACTIONS(403), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym__selector_nbt_repeat1,
  [1810] = 2,
    ACTIONS(405), 1,
      aux_sym_selector_option_section_token1,
    STATE(104), 1,
      aux_sym_nbt_array_repeat1,
  [1817] = 2,
    ACTIONS(407), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(409), 1,
      anon_sym_COMMA,
  [1824] = 2,
    ACTIONS(395), 1,
      anon_sym_,
    STATE(112), 1,
      aux_sym_command_repeat1,
  [1831] = 2,
    ACTIONS(411), 1,
      aux_sym_selector_option_section_token1,
    STATE(110), 1,
      aux_sym_item_state_repeat1,
  [1838] = 2,
    ACTIONS(414), 1,
      anon_sym_,
    STATE(112), 1,
      aux_sym_command_repeat1,
  [1845] = 2,
    ACTIONS(416), 1,
      anon_sym_,
    STATE(112), 1,
      aux_sym_command_repeat1,
  [1852] = 2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      aux_sym_selector_option_section_token1,
  [1859] = 2,
    ACTIONS(419), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym__selector_nbt_repeat1,
  [1866] = 2,
    ACTIONS(422), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [1873] = 2,
    ACTIONS(426), 1,
      aux_sym_command_name_token1,
    ACTIONS(428), 1,
      sym_number,
  [1880] = 2,
    ACTIONS(368), 1,
      aux_sym_command_name_token1,
    STATE(191), 1,
      sym_state_key,
  [1887] = 2,
    ACTIONS(430), 1,
      aux_sym_selector_option_section_token1,
    STATE(124), 1,
      aux_sym_nbt_array_repeat1,
  [1894] = 2,
    ACTIONS(432), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(434), 1,
      anon_sym_COMMA,
  [1901] = 2,
    ACTIONS(436), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym__selector_nbt_repeat1,
  [1908] = 2,
    ACTIONS(339), 1,
      aux_sym_command_name_token1,
    STATE(156), 1,
      sym_selector_score_key,
  [1915] = 2,
    ACTIONS(438), 1,
      aux_sym_selector_option_section_token1,
    STATE(122), 1,
      aux_sym__selector_score_object_repeat1,
  [1922] = 2,
    ACTIONS(441), 1,
      aux_sym_selector_option_section_token1,
    STATE(128), 1,
      aux_sym_item_state_repeat1,
  [1929] = 2,
    ACTIONS(443), 1,
      aux_sym_selector_option_section_token1,
    STATE(129), 1,
      aux_sym_nbt_array_repeat1,
  [1936] = 2,
    ACTIONS(445), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(447), 1,
      anon_sym_COMMA,
  [1943] = 2,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
  [1950] = 2,
    ACTIONS(453), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
  [1957] = 2,
    ACTIONS(457), 1,
      aux_sym_selector_option_section_token1,
    STATE(110), 1,
      aux_sym_item_state_repeat1,
  [1964] = 2,
    ACTIONS(459), 1,
      aux_sym_selector_option_section_token1,
    STATE(129), 1,
      aux_sym_nbt_array_repeat1,
  [1971] = 2,
    ACTIONS(462), 1,
      aux_sym_selector_option_section_token1,
    STATE(100), 1,
      aux_sym__selector_score_object_repeat1,
  [1978] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym__selector_nbt,
  [1985] = 2,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__selector_score_object,
  [1992] = 2,
    ACTIONS(352), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(468), 1,
      anon_sym_COMMA,
  [1999] = 1,
    ACTIONS(470), 1,
      aux_sym_selector_option_section_token1,
  [2003] = 1,
    ACTIONS(253), 1,
      aux_sym_selector_option_section_token1,
  [2007] = 1,
    ACTIONS(472), 1,
      aux_sym_selector_option_section_token1,
  [2011] = 1,
    ACTIONS(474), 1,
      aux_sym_selector_option_section_token1,
  [2015] = 1,
    ACTIONS(476), 1,
      aux_sym_selector_option_section_token1,
  [2019] = 1,
    ACTIONS(478), 1,
      aux_sym_selector_option_section_token1,
  [2023] = 1,
    ACTIONS(480), 1,
      aux_sym_selector_option_section_token1,
  [2027] = 1,
    ACTIONS(482), 1,
      aux_sym_selector_option_section_token1,
  [2031] = 1,
    ACTIONS(484), 1,
      aux_sym_selector_option_section_token1,
  [2035] = 1,
    ACTIONS(486), 1,
      aux_sym_selector_option_section_token1,
  [2039] = 1,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
  [2043] = 1,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
  [2047] = 1,
    ACTIONS(493), 1,
      aux_sym_selector_option_section_token1,
  [2051] = 1,
    ACTIONS(495), 1,
      aux_sym_selector_option_section_token1,
  [2055] = 1,
    ACTIONS(497), 1,
      aux_sym_selector_option_section_token1,
  [2059] = 1,
    ACTIONS(499), 1,
      aux_sym_selector_option_section_token1,
  [2063] = 1,
    ACTIONS(424), 1,
      aux_sym_selector_option_section_token1,
  [2067] = 1,
    ACTIONS(501), 1,
      aux_sym_selector_option_section_token1,
  [2071] = 1,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
  [2075] = 1,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
  [2079] = 1,
    ACTIONS(507), 1,
      aux_sym_selector_option_section_token1,
  [2083] = 1,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
  [2087] = 1,
    ACTIONS(511), 1,
      aux_sym_selector_option_section_token1,
  [2091] = 1,
    ACTIONS(513), 1,
      anon_sym_,
  [2095] = 1,
    ACTIONS(515), 1,
      aux_sym_selector_option_section_token1,
  [2099] = 1,
    ACTIONS(517), 1,
      anon_sym_EQ,
  [2103] = 1,
    ACTIONS(519), 1,
      aux_sym_selector_option_section_token1,
  [2107] = 1,
    ACTIONS(521), 1,
      aux_sym_selector_option_section_token1,
  [2111] = 1,
    ACTIONS(523), 1,
      aux_sym_selector_option_section_token1,
  [2115] = 1,
    ACTIONS(525), 1,
      anon_sym_EQ,
  [2119] = 1,
    ACTIONS(527), 1,
      aux_sym_selector_option_section_token1,
  [2123] = 1,
    ACTIONS(529), 1,
      aux_sym_selector_option_section_token1,
  [2127] = 1,
    ACTIONS(531), 1,
      aux_sym_selector_option_section_token1,
  [2131] = 1,
    ACTIONS(533), 1,
      aux_sym_selector_option_section_token1,
  [2135] = 1,
    ACTIONS(535), 1,
      anon_sym_EQ,
  [2139] = 1,
    ACTIONS(537), 1,
      aux_sym_selector_option_section_token1,
  [2143] = 1,
    ACTIONS(200), 1,
      aux_sym_selector_option_section_token1,
  [2147] = 1,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
  [2151] = 1,
    ACTIONS(223), 1,
      aux_sym_selector_option_section_token1,
  [2155] = 1,
    ACTIONS(541), 1,
      anon_sym_EQ,
  [2159] = 1,
    ACTIONS(261), 1,
      aux_sym_selector_option_section_token1,
  [2163] = 1,
    ACTIONS(543), 1,
      aux_sym_selector_option_section_token1,
  [2167] = 1,
    ACTIONS(219), 1,
      aux_sym_selector_option_section_token1,
  [2171] = 1,
    ACTIONS(269), 1,
      aux_sym_selector_option_section_token1,
  [2175] = 1,
    ACTIONS(545), 1,
      aux_sym_command_name_token1,
  [2179] = 1,
    ACTIONS(204), 1,
      aux_sym_selector_option_section_token1,
  [2183] = 1,
    ACTIONS(188), 1,
      aux_sym_selector_option_section_token1,
  [2187] = 1,
    ACTIONS(547), 1,
      anon_sym_,
  [2191] = 1,
    ACTIONS(549), 1,
      aux_sym_selector_option_section_token1,
  [2195] = 1,
    ACTIONS(551), 1,
      anon_sym_EQ,
  [2199] = 1,
    ACTIONS(553), 1,
      aux_sym_selector_option_section_token1,
  [2203] = 1,
    ACTIONS(555), 1,
      anon_sym_,
  [2207] = 1,
    ACTIONS(557), 1,
      aux_sym_command_name_token1,
  [2211] = 1,
    ACTIONS(559), 1,
      aux_sym_command_name_token1,
  [2215] = 1,
    ACTIONS(561), 1,
      aux_sym_selector_option_section_token1,
  [2219] = 1,
    ACTIONS(563), 1,
      aux_sym_selector_option_section_token1,
  [2223] = 1,
    ACTIONS(565), 1,
      anon_sym_,
  [2227] = 1,
    ACTIONS(567), 1,
      aux_sym_selector_option_section_token1,
  [2231] = 1,
    ACTIONS(569), 1,
      anon_sym_COLON,
  [2235] = 1,
    ACTIONS(571), 1,
      aux_sym_selector_option_section_token1,
  [2239] = 1,
    ACTIONS(573), 1,
      aux_sym_selector_option_section_token1,
  [2243] = 1,
    ACTIONS(575), 1,
      aux_sym_selector_option_section_token1,
  [2247] = 1,
    ACTIONS(577), 1,
      aux_sym_selector_option_section_token1,
  [2251] = 1,
    ACTIONS(579), 1,
      aux_sym_selector_option_section_token1,
  [2255] = 1,
    ACTIONS(581), 1,
      aux_sym_selector_option_section_token1,
  [2259] = 1,
    ACTIONS(583), 1,
      aux_sym_selector_option_section_token1,
  [2263] = 1,
    ACTIONS(585), 1,
      aux_sym_selector_option_section_token1,
  [2267] = 1,
    ACTIONS(587), 1,
      aux_sym_selector_option_section_token1,
  [2271] = 1,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [2275] = 1,
    ACTIONS(591), 1,
      aux_sym_selector_option_section_token1,
  [2279] = 1,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 294,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 399,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 465,
  [SMALL_STATE(13)] = 498,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 558,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 618,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 673,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 749,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 820,
  [SMALL_STATE(27)] = 837,
  [SMALL_STATE(28)] = 854,
  [SMALL_STATE(29)] = 871,
  [SMALL_STATE(30)] = 884,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 935,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 966,
  [SMALL_STATE(36)] = 978,
  [SMALL_STATE(37)] = 990,
  [SMALL_STATE(38)] = 1002,
  [SMALL_STATE(39)] = 1014,
  [SMALL_STATE(40)] = 1026,
  [SMALL_STATE(41)] = 1038,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1062,
  [SMALL_STATE(44)] = 1076,
  [SMALL_STATE(45)] = 1088,
  [SMALL_STATE(46)] = 1100,
  [SMALL_STATE(47)] = 1112,
  [SMALL_STATE(48)] = 1132,
  [SMALL_STATE(49)] = 1144,
  [SMALL_STATE(50)] = 1156,
  [SMALL_STATE(51)] = 1168,
  [SMALL_STATE(52)] = 1180,
  [SMALL_STATE(53)] = 1192,
  [SMALL_STATE(54)] = 1204,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1228,
  [SMALL_STATE(57)] = 1240,
  [SMALL_STATE(58)] = 1252,
  [SMALL_STATE(59)] = 1264,
  [SMALL_STATE(60)] = 1279,
  [SMALL_STATE(61)] = 1290,
  [SMALL_STATE(62)] = 1307,
  [SMALL_STATE(63)] = 1318,
  [SMALL_STATE(64)] = 1329,
  [SMALL_STATE(65)] = 1346,
  [SMALL_STATE(66)] = 1357,
  [SMALL_STATE(67)] = 1374,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1408,
  [SMALL_STATE(70)] = 1425,
  [SMALL_STATE(71)] = 1442,
  [SMALL_STATE(72)] = 1459,
  [SMALL_STATE(73)] = 1470,
  [SMALL_STATE(74)] = 1481,
  [SMALL_STATE(75)] = 1495,
  [SMALL_STATE(76)] = 1509,
  [SMALL_STATE(77)] = 1523,
  [SMALL_STATE(78)] = 1531,
  [SMALL_STATE(79)] = 1545,
  [SMALL_STATE(80)] = 1559,
  [SMALL_STATE(81)] = 1573,
  [SMALL_STATE(82)] = 1587,
  [SMALL_STATE(83)] = 1597,
  [SMALL_STATE(84)] = 1607,
  [SMALL_STATE(85)] = 1617,
  [SMALL_STATE(86)] = 1627,
  [SMALL_STATE(87)] = 1637,
  [SMALL_STATE(88)] = 1645,
  [SMALL_STATE(89)] = 1655,
  [SMALL_STATE(90)] = 1665,
  [SMALL_STATE(91)] = 1675,
  [SMALL_STATE(92)] = 1685,
  [SMALL_STATE(93)] = 1693,
  [SMALL_STATE(94)] = 1703,
  [SMALL_STATE(95)] = 1713,
  [SMALL_STATE(96)] = 1723,
  [SMALL_STATE(97)] = 1731,
  [SMALL_STATE(98)] = 1741,
  [SMALL_STATE(99)] = 1751,
  [SMALL_STATE(100)] = 1761,
  [SMALL_STATE(101)] = 1768,
  [SMALL_STATE(102)] = 1775,
  [SMALL_STATE(103)] = 1782,
  [SMALL_STATE(104)] = 1789,
  [SMALL_STATE(105)] = 1796,
  [SMALL_STATE(106)] = 1803,
  [SMALL_STATE(107)] = 1810,
  [SMALL_STATE(108)] = 1817,
  [SMALL_STATE(109)] = 1824,
  [SMALL_STATE(110)] = 1831,
  [SMALL_STATE(111)] = 1838,
  [SMALL_STATE(112)] = 1845,
  [SMALL_STATE(113)] = 1852,
  [SMALL_STATE(114)] = 1859,
  [SMALL_STATE(115)] = 1866,
  [SMALL_STATE(116)] = 1873,
  [SMALL_STATE(117)] = 1880,
  [SMALL_STATE(118)] = 1887,
  [SMALL_STATE(119)] = 1894,
  [SMALL_STATE(120)] = 1901,
  [SMALL_STATE(121)] = 1908,
  [SMALL_STATE(122)] = 1915,
  [SMALL_STATE(123)] = 1922,
  [SMALL_STATE(124)] = 1929,
  [SMALL_STATE(125)] = 1936,
  [SMALL_STATE(126)] = 1943,
  [SMALL_STATE(127)] = 1950,
  [SMALL_STATE(128)] = 1957,
  [SMALL_STATE(129)] = 1964,
  [SMALL_STATE(130)] = 1971,
  [SMALL_STATE(131)] = 1978,
  [SMALL_STATE(132)] = 1985,
  [SMALL_STATE(133)] = 1992,
  [SMALL_STATE(134)] = 1999,
  [SMALL_STATE(135)] = 2003,
  [SMALL_STATE(136)] = 2007,
  [SMALL_STATE(137)] = 2011,
  [SMALL_STATE(138)] = 2015,
  [SMALL_STATE(139)] = 2019,
  [SMALL_STATE(140)] = 2023,
  [SMALL_STATE(141)] = 2027,
  [SMALL_STATE(142)] = 2031,
  [SMALL_STATE(143)] = 2035,
  [SMALL_STATE(144)] = 2039,
  [SMALL_STATE(145)] = 2043,
  [SMALL_STATE(146)] = 2047,
  [SMALL_STATE(147)] = 2051,
  [SMALL_STATE(148)] = 2055,
  [SMALL_STATE(149)] = 2059,
  [SMALL_STATE(150)] = 2063,
  [SMALL_STATE(151)] = 2067,
  [SMALL_STATE(152)] = 2071,
  [SMALL_STATE(153)] = 2075,
  [SMALL_STATE(154)] = 2079,
  [SMALL_STATE(155)] = 2083,
  [SMALL_STATE(156)] = 2087,
  [SMALL_STATE(157)] = 2091,
  [SMALL_STATE(158)] = 2095,
  [SMALL_STATE(159)] = 2099,
  [SMALL_STATE(160)] = 2103,
  [SMALL_STATE(161)] = 2107,
  [SMALL_STATE(162)] = 2111,
  [SMALL_STATE(163)] = 2115,
  [SMALL_STATE(164)] = 2119,
  [SMALL_STATE(165)] = 2123,
  [SMALL_STATE(166)] = 2127,
  [SMALL_STATE(167)] = 2131,
  [SMALL_STATE(168)] = 2135,
  [SMALL_STATE(169)] = 2139,
  [SMALL_STATE(170)] = 2143,
  [SMALL_STATE(171)] = 2147,
  [SMALL_STATE(172)] = 2151,
  [SMALL_STATE(173)] = 2155,
  [SMALL_STATE(174)] = 2159,
  [SMALL_STATE(175)] = 2163,
  [SMALL_STATE(176)] = 2167,
  [SMALL_STATE(177)] = 2171,
  [SMALL_STATE(178)] = 2175,
  [SMALL_STATE(179)] = 2179,
  [SMALL_STATE(180)] = 2183,
  [SMALL_STATE(181)] = 2187,
  [SMALL_STATE(182)] = 2191,
  [SMALL_STATE(183)] = 2195,
  [SMALL_STATE(184)] = 2199,
  [SMALL_STATE(185)] = 2203,
  [SMALL_STATE(186)] = 2207,
  [SMALL_STATE(187)] = 2211,
  [SMALL_STATE(188)] = 2215,
  [SMALL_STATE(189)] = 2219,
  [SMALL_STATE(190)] = 2223,
  [SMALL_STATE(191)] = 2227,
  [SMALL_STATE(192)] = 2231,
  [SMALL_STATE(193)] = 2235,
  [SMALL_STATE(194)] = 2239,
  [SMALL_STATE(195)] = 2243,
  [SMALL_STATE(196)] = 2247,
  [SMALL_STATE(197)] = 2251,
  [SMALL_STATE(198)] = 2255,
  [SMALL_STATE(199)] = 2259,
  [SMALL_STATE(200)] = 2263,
  [SMALL_STATE(201)] = 2267,
  [SMALL_STATE(202)] = 2271,
  [SMALL_STATE(203)] = 2275,
  [SMALL_STATE(204)] = 2279,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(178),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(178),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(72),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(98),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(105),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(116),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(178),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(178),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(178),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(92),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(79),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(171),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(80),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(47),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(117),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(78),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_score_object_repeat1, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 2), SHIFT_REPEAT(121),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 8),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [593] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
