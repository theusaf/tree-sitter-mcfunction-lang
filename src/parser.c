#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
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
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_BSLASH = 26,
  anon_sym_AT = 27,
  anon_sym_p = 28,
  anon_sym_a = 29,
  anon_sym_r = 30,
  anon_sym_s = 31,
  anon_sym_e = 32,
  anon_sym_LBRACK = 33,
  aux_sym_selector_option_section_token1 = 34,
  anon_sym_COMMA = 35,
  anon_sym_RBRACK = 36,
  anon_sym_EQ = 37,
  anon_sym_nbt = 38,
  anon_sym_LBRACE = 39,
  anon_sym_COLON = 40,
  anon_sym_RBRACE = 41,
  anon_sym_scores = 42,
  aux_sym_selector_number_token1 = 43,
  aux_sym_selector_number_token2 = 44,
  aux_sym_selector_number_token3 = 45,
  aux_sym_nbt_object_key_token1 = 46,
  anon_sym_l = 47,
  anon_sym_d = 48,
  anon_sym_f = 49,
  anon_sym_b = 50,
  aux_sym_item_token1 = 51,
  anon_sym_DOT = 52,
  sym_nbt_path = 53,
  sym_root = 54,
  sym_comment = 55,
  sym_invalid_comment = 56,
  sym_command = 57,
  sym_execute_command = 58,
  sym_execute_keyword = 59,
  sym_command_name = 60,
  sym_boolean = 61,
  sym_coordinate = 62,
  sym_rotation = 63,
  sym_location = 64,
  sym_string = 65,
  sym__escape_sequence = 66,
  sym_selector = 67,
  sym_selector_option_section = 68,
  sym_selector_option = 69,
  sym_selector_key = 70,
  sym_selector_value = 71,
  sym_selector_nbt = 72,
  sym__selector_nbt = 73,
  sym_selector_score = 74,
  sym__selector_score_object = 75,
  sym_selector_score_key = 76,
  sym_selector_score_value = 77,
  sym_selector_number = 78,
  sym_nbt = 79,
  sym_nbt_object = 80,
  sym_nbt_array = 81,
  sym_nbt_object_key = 82,
  sym_nbt_object_value = 83,
  sym_nbt_number = 84,
  sym_item = 85,
  sym_item_nbt = 86,
  sym_item_state = 87,
  sym_state_key = 88,
  sym_state_value = 89,
  sym_path = 90,
  sym_container = 91,
  aux_sym_root_repeat1 = 92,
  aux_sym_command_repeat1 = 93,
  aux_sym_execute_command_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_selector_option_section_repeat1 = 96,
  aux_sym__selector_nbt_repeat1 = 97,
  aux_sym__selector_score_object_repeat1 = 98,
  aux_sym_nbt_array_repeat1 = 99,
  aux_sym_item_state_repeat1 = 100,
  aux_sym_path_repeat1 = 101,
  aux_sym_container_repeat1 = 102,
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
  [aux_sym_execute_command_repeat1] = "execute_command_repeat1",
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
  [aux_sym_execute_command_repeat1] = aux_sym_execute_command_repeat1,
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
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '}') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '}') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == '[') ADVANCE(66);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 68:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == '[') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == ',') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '}') ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == ']') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '}') ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nbt);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_nbt);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_scores);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == '[') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 69},
  [51] = {.lex_state = 69},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 69},
  [69] = {.lex_state = 69},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 214},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 69},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 69},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 213},
  [88] = {.lex_state = 69},
  [89] = {.lex_state = 212},
  [90] = {.lex_state = 215},
  [91] = {.lex_state = 215},
  [92] = {.lex_state = 215},
  [93] = {.lex_state = 69},
  [94] = {.lex_state = 69},
  [95] = {.lex_state = 211},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 69},
  [98] = {.lex_state = 213},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 209},
  [101] = {.lex_state = 209},
  [102] = {.lex_state = 209},
  [103] = {.lex_state = 69},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 209},
  [106] = {.lex_state = 209},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 209},
  [109] = {.lex_state = 210},
  [110] = {.lex_state = 69},
  [111] = {.lex_state = 209},
  [112] = {.lex_state = 215},
  [113] = {.lex_state = 209},
  [114] = {.lex_state = 209},
  [115] = {.lex_state = 209},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 209},
  [118] = {.lex_state = 213},
  [119] = {.lex_state = 69},
  [120] = {.lex_state = 209},
  [121] = {.lex_state = 69},
  [122] = {.lex_state = 69},
  [123] = {.lex_state = 69},
  [124] = {.lex_state = 210},
  [125] = {.lex_state = 210},
  [126] = {.lex_state = 69},
  [127] = {.lex_state = 210},
  [128] = {.lex_state = 209},
  [129] = {.lex_state = 209},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 209},
  [132] = {.lex_state = 210},
  [133] = {.lex_state = 209},
  [134] = {.lex_state = 209},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 209},
  [137] = {.lex_state = 69},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 209},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 209},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 209},
  [144] = {.lex_state = 209},
  [145] = {.lex_state = 209},
  [146] = {.lex_state = 209},
  [147] = {.lex_state = 209},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 209},
  [150] = {.lex_state = 209},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 209},
  [153] = {.lex_state = 209},
  [154] = {.lex_state = 209},
  [155] = {.lex_state = 209},
  [156] = {.lex_state = 209},
  [157] = {.lex_state = 209},
  [158] = {.lex_state = 209},
  [159] = {.lex_state = 209},
  [160] = {.lex_state = 209},
  [161] = {.lex_state = 209},
  [162] = {.lex_state = 209},
  [163] = {.lex_state = 209},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 209},
  [166] = {.lex_state = 209},
  [167] = {.lex_state = 209},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 209},
  [170] = {.lex_state = 209},
  [171] = {.lex_state = 209},
  [172] = {.lex_state = 209},
  [173] = {.lex_state = 209},
  [174] = {.lex_state = 209},
  [175] = {.lex_state = 209},
  [176] = {.lex_state = 209},
  [177] = {.lex_state = 209},
  [178] = {.lex_state = 209},
  [179] = {.lex_state = 209},
  [180] = {.lex_state = 209},
  [181] = {.lex_state = 209},
  [182] = {.lex_state = 209},
  [183] = {.lex_state = 209},
  [184] = {.lex_state = 209},
  [185] = {.lex_state = 209},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 209},
  [188] = {.lex_state = 69},
  [189] = {.lex_state = 69},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 209},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 69},
  [194] = {.lex_state = 69},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 209},
  [198] = {.lex_state = 209},
  [199] = {.lex_state = 69},
  [200] = {.lex_state = 69},
  [201] = {.lex_state = 69},
  [202] = {.lex_state = 209},
  [203] = {.lex_state = 209},
  [204] = {.lex_state = 209},
  [205] = {.lex_state = 69},
  [206] = {.lex_state = 209},
  [207] = {.lex_state = 69},
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
    [sym_root] = STATE(168),
    [sym_comment] = STATE(16),
    [sym_command] = STATE(16),
    [sym_execute_command] = STATE(68),
    [sym_command_name] = STATE(33),
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
  [0] = 17,
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
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      aux_sym_item_token1,
    ACTIONS(41), 1,
      sym_nbt_path,
    STATE(194), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
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
    STATE(200), 11,
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
  [74] = 17,
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
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      aux_sym_item_token1,
    ACTIONS(41), 1,
      sym_nbt_path,
    ACTIONS(43), 1,
      anon_sym_run,
    STATE(194), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
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
    STATE(200), 11,
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
  [148] = 17,
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
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      aux_sym_item_token1,
    ACTIONS(41), 1,
      sym_nbt_path,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(194), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
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
    STATE(200), 11,
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
  [222] = 16,
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
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      aux_sym_item_token1,
    ACTIONS(41), 1,
      sym_nbt_path,
    STATE(194), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
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
    STATE(200), 11,
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
  [293] = 15,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      aux_sym_command_name_token1,
    ACTIONS(49), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(53), 1,
      aux_sym_item_token1,
    ACTIONS(55), 1,
      sym_nbt_path,
    STATE(194), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(43), 10,
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
  [350] = 10,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      sym_nbt_object,
    ACTIONS(62), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(57), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [386] = 10,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(25), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      sym_nbt_object,
    ACTIONS(73), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(50), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [422] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [455] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [488] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [521] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [554] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [584] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [614] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(187), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [644] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__line_separator,
    STATE(33), 1,
      sym_command_name,
    STATE(68), 1,
      sym_execute_command,
    STATE(17), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [674] = 9,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_execute,
    ACTIONS(108), 1,
      sym__line_separator,
    ACTIONS(111), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(68), 1,
      sym_execute_command,
    STATE(17), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [704] = 7,
    ACTIONS(114), 1,
      aux_sym_command_name_token1,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(122), 1,
      aux_sym_selector_number_token3,
    STATE(149), 1,
      sym_selector_value,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(146), 2,
      sym_boolean,
      sym_selector_number,
  [729] = 9,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(49), 1,
      sym_nbt_object,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(57), 2,
      sym_item_nbt,
      sym_item_state,
  [758] = 9,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(49), 1,
      sym_nbt_object,
    STATE(88), 1,
      aux_sym_path_repeat1,
    STATE(50), 2,
      sym_item_nbt,
      sym_item_state,
  [787] = 4,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [805] = 4,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(135), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [823] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_selector_option_section,
    ACTIONS(139), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [841] = 4,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_container_repeat1,
    ACTIONS(145), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [859] = 4,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      aux_sym_path_repeat1,
    ACTIONS(152), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [876] = 4,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      aux_sym_path_repeat1,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [893] = 2,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [906] = 4,
    ACTIONS(163), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_command_repeat1,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [923] = 4,
    ACTIONS(163), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_command_repeat1,
    ACTIONS(169), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [940] = 4,
    ACTIONS(173), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_command_repeat1,
    ACTIONS(176), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [957] = 4,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      aux_sym_path_repeat1,
    ACTIONS(183), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [974] = 4,
    ACTIONS(163), 1,
      anon_sym_,
    STATE(28), 1,
      aux_sym_command_repeat1,
    ACTIONS(169), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [991] = 4,
    ACTIONS(163), 1,
      anon_sym_,
    STATE(29), 1,
      aux_sym_command_repeat1,
    ACTIONS(187), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1008] = 2,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1020] = 2,
    ACTIONS(195), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1032] = 2,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1044] = 2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1056] = 2,
    ACTIONS(207), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1068] = 2,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1080] = 2,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1092] = 2,
    ACTIONS(219), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1104] = 2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1116] = 2,
    ACTIONS(176), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1128] = 3,
    ACTIONS(225), 1,
      anon_sym_,
    ACTIONS(176), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1142] = 2,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1154] = 2,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1166] = 2,
    ACTIONS(238), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1178] = 2,
    ACTIONS(242), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1190] = 2,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1202] = 2,
    ACTIONS(62), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1214] = 2,
    ACTIONS(250), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1226] = 2,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1238] = 6,
    ACTIONS(256), 1,
      aux_sym_command_name_token1,
    ACTIONS(258), 1,
      anon_sym_nbt,
    ACTIONS(260), 1,
      anon_sym_scores,
    STATE(136), 1,
      sym_selector_key,
    STATE(166), 1,
      sym_selector_option,
    STATE(162), 2,
      sym_selector_nbt,
      sym_selector_score,
  [1258] = 3,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(267), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1272] = 2,
    ACTIONS(271), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1284] = 2,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1296] = 2,
    ACTIONS(275), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1308] = 2,
    ACTIONS(279), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1320] = 2,
    ACTIONS(283), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1331] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_nbt_object_key,
    STATE(183), 1,
      sym_string,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1348] = 5,
    ACTIONS(289), 1,
      aux_sym_command_name_token1,
    ACTIONS(291), 1,
      sym_number,
    STATE(124), 1,
      sym_boolean,
    STATE(125), 1,
      sym_state_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
  [1365] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_nbt_object_key,
    STATE(183), 1,
      sym_string,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1382] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(72), 2,
      sym_command,
      sym_execute_command,
  [1399] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_nbt_object_key,
    STATE(183), 1,
      sym_string,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1416] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(59), 2,
      sym_command,
      sym_execute_command,
  [1433] = 2,
    ACTIONS(301), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1444] = 4,
    STATE(169), 1,
      sym_selector_score_value,
    STATE(170), 1,
      sym_selector_number,
    ACTIONS(120), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(122), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1459] = 2,
    ACTIONS(305), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1470] = 2,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1481] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_nbt_object_key,
    STATE(183), 1,
      sym_string,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1498] = 2,
    ACTIONS(315), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(313), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1509] = 2,
    ACTIONS(319), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1520] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(69), 2,
      sym_command,
      sym_execute_command,
  [1537] = 1,
    ACTIONS(321), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1545] = 4,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_string_token1,
    ACTIONS(327), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1559] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_nbt_object_key,
    STATE(183), 1,
      sym_string,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1573] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_string,
    STATE(206), 1,
      sym_nbt_object_key,
    ACTIONS(285), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1587] = 4,
    ACTIONS(325), 1,
      aux_sym_string_token1,
    ACTIONS(327), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1601] = 4,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_string_token1,
    ACTIONS(336), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1615] = 4,
    ACTIONS(327), 1,
      anon_sym_BSLASH,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(78), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1629] = 4,
    ACTIONS(327), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_string_token1,
    STATE(75), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1643] = 3,
    ACTIONS(347), 1,
      aux_sym_command_name_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_state_key,
  [1653] = 3,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_path_repeat1,
  [1663] = 3,
    ACTIONS(347), 1,
      aux_sym_command_name_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_state_key,
  [1673] = 3,
    ACTIONS(353), 1,
      aux_sym_command_name_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_selector_score_key,
  [1683] = 3,
    ACTIONS(353), 1,
      aux_sym_command_name_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_selector_score_key,
  [1693] = 3,
    ACTIONS(359), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1703] = 3,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    ACTIONS(147), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_path_repeat1,
  [1713] = 3,
    ACTIONS(363), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [1723] = 3,
    ACTIONS(369), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym__selector_nbt_repeat1,
  [1733] = 3,
    ACTIONS(374), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym__selector_nbt_repeat1,
  [1743] = 3,
    ACTIONS(374), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym__selector_nbt_repeat1,
  [1753] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(380), 1,
      anon_sym_execute,
    STATE(32), 1,
      sym_command_name,
  [1763] = 2,
    STATE(54), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      sym_number,
      anon_sym_TILDE,
  [1771] = 3,
    ACTIONS(382), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
  [1781] = 2,
    ACTIONS(390), 1,
      aux_sym_string_token1,
    ACTIONS(388), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1789] = 2,
    STATE(37), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      sym_number,
      anon_sym_TILDE,
  [1797] = 3,
    ACTIONS(359), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_selector_option_section_repeat1,
  [1807] = 3,
    ACTIONS(394), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_selector_option_section_repeat1,
  [1817] = 2,
    ACTIONS(399), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym__selector_nbt_repeat1,
  [1824] = 2,
    ACTIONS(401), 1,
      aux_sym_selector_option_section_token1,
    STATE(105), 1,
      aux_sym_item_state_repeat1,
  [1831] = 2,
    ACTIONS(403), 1,
      aux_sym_selector_option_section_token1,
    STATE(128), 1,
      aux_sym_nbt_array_repeat1,
  [1838] = 2,
    ACTIONS(405), 1,
      anon_sym_,
    STATE(126), 1,
      aux_sym_execute_command_repeat1,
  [1845] = 2,
    ACTIONS(353), 1,
      aux_sym_command_name_token1,
    STATE(161), 1,
      sym_selector_score_key,
  [1852] = 2,
    ACTIONS(407), 1,
      aux_sym_selector_option_section_token1,
    STATE(105), 1,
      aux_sym_item_state_repeat1,
  [1859] = 2,
    ACTIONS(410), 1,
      aux_sym_selector_option_section_token1,
    STATE(117), 1,
      aux_sym__selector_nbt_repeat1,
  [1866] = 2,
    ACTIONS(412), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(414), 1,
      anon_sym_COMMA,
  [1873] = 2,
    ACTIONS(416), 1,
      aux_sym_selector_option_section_token1,
    STATE(120), 1,
      aux_sym__selector_nbt_repeat1,
  [1880] = 2,
    ACTIONS(418), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(420), 1,
      anon_sym_COMMA,
  [1887] = 2,
    ACTIONS(422), 1,
      anon_sym_,
    STATE(110), 1,
      aux_sym_execute_command_repeat1,
  [1894] = 2,
    ACTIONS(425), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym_item_state_repeat1,
  [1901] = 2,
    ACTIONS(427), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [1908] = 2,
    ACTIONS(431), 1,
      aux_sym_selector_option_section_token1,
    STATE(128), 1,
      aux_sym_nbt_array_repeat1,
  [1915] = 2,
    ACTIONS(433), 1,
      aux_sym_selector_option_section_token1,
    STATE(102), 1,
      aux_sym_nbt_array_repeat1,
  [1922] = 2,
    ACTIONS(435), 1,
      aux_sym_selector_option_section_token1,
    STATE(113), 1,
      aux_sym_nbt_array_repeat1,
  [1929] = 2,
    ACTIONS(347), 1,
      aux_sym_command_name_token1,
    STATE(176), 1,
      sym_state_key,
  [1936] = 2,
    ACTIONS(437), 1,
      aux_sym_selector_option_section_token1,
    STATE(117), 1,
      aux_sym__selector_nbt_repeat1,
  [1943] = 2,
    ACTIONS(440), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
  [1950] = 2,
    ACTIONS(444), 1,
      anon_sym_,
    STATE(123), 1,
      aux_sym_execute_command_repeat1,
  [1957] = 2,
    ACTIONS(446), 1,
      aux_sym_selector_option_section_token1,
    STATE(117), 1,
      aux_sym__selector_nbt_repeat1,
  [1964] = 2,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__selector_nbt,
  [1971] = 2,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__selector_score_object,
  [1978] = 2,
    ACTIONS(405), 1,
      anon_sym_,
    STATE(110), 1,
      aux_sym_execute_command_repeat1,
  [1985] = 2,
    ACTIONS(452), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(454), 1,
      anon_sym_COMMA,
  [1992] = 2,
    ACTIONS(456), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
  [1999] = 2,
    ACTIONS(460), 1,
      anon_sym_,
    STATE(110), 1,
      aux_sym_execute_command_repeat1,
  [2006] = 2,
    ACTIONS(363), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(462), 1,
      anon_sym_COMMA,
  [2013] = 2,
    ACTIONS(464), 1,
      aux_sym_selector_option_section_token1,
    STATE(128), 1,
      aux_sym_nbt_array_repeat1,
  [2020] = 2,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    STATE(131), 1,
      aux_sym__selector_score_object_repeat1,
  [2027] = 2,
    ACTIONS(469), 1,
      aux_sym_command_name_token1,
    ACTIONS(471), 1,
      sym_number,
  [2034] = 2,
    ACTIONS(473), 1,
      aux_sym_selector_option_section_token1,
    STATE(133), 1,
      aux_sym__selector_score_object_repeat1,
  [2041] = 2,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      aux_sym_selector_option_section_token1,
  [2048] = 2,
    ACTIONS(475), 1,
      aux_sym_selector_option_section_token1,
    STATE(133), 1,
      aux_sym__selector_score_object_repeat1,
  [2055] = 1,
    ACTIONS(478), 1,
      aux_sym_selector_option_section_token1,
  [2059] = 1,
    ACTIONS(480), 1,
      anon_sym_EQ,
  [2063] = 1,
    ACTIONS(482), 1,
      aux_sym_selector_option_section_token1,
  [2067] = 1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [2071] = 1,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [2075] = 1,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
  [2079] = 1,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [2083] = 1,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
  [2087] = 1,
    ACTIONS(494), 1,
      anon_sym_EQ,
  [2091] = 1,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
  [2095] = 1,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
  [2099] = 1,
    ACTIONS(500), 1,
      aux_sym_selector_option_section_token1,
  [2103] = 1,
    ACTIONS(502), 1,
      aux_sym_selector_option_section_token1,
  [2107] = 1,
    ACTIONS(504), 1,
      aux_sym_selector_option_section_token1,
  [2111] = 1,
    ACTIONS(507), 1,
      aux_sym_selector_option_section_token1,
  [2115] = 1,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
  [2119] = 1,
    ACTIONS(511), 1,
      aux_sym_selector_option_section_token1,
  [2123] = 1,
    ACTIONS(513), 1,
      aux_sym_selector_option_section_token1,
  [2127] = 1,
    ACTIONS(515), 1,
      aux_sym_selector_option_section_token1,
  [2131] = 1,
    ACTIONS(517), 1,
      aux_sym_selector_option_section_token1,
  [2135] = 1,
    ACTIONS(519), 1,
      aux_sym_selector_option_section_token1,
  [2139] = 1,
    ACTIONS(429), 1,
      aux_sym_selector_option_section_token1,
  [2143] = 1,
    ACTIONS(521), 1,
      aux_sym_selector_option_section_token1,
  [2147] = 1,
    ACTIONS(523), 1,
      aux_sym_selector_option_section_token1,
  [2151] = 1,
    ACTIONS(525), 1,
      aux_sym_selector_option_section_token1,
  [2155] = 1,
    ACTIONS(527), 1,
      aux_sym_selector_option_section_token1,
  [2159] = 1,
    ACTIONS(529), 1,
      aux_sym_selector_option_section_token1,
  [2163] = 1,
    ACTIONS(531), 1,
      aux_sym_selector_option_section_token1,
  [2167] = 1,
    ACTIONS(533), 1,
      aux_sym_selector_option_section_token1,
  [2171] = 1,
    ACTIONS(535), 1,
      aux_sym_selector_option_section_token1,
  [2175] = 1,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [2179] = 1,
    ACTIONS(539), 1,
      aux_sym_selector_option_section_token1,
  [2183] = 1,
    ACTIONS(541), 1,
      aux_sym_selector_option_section_token1,
  [2187] = 1,
    ACTIONS(543), 1,
      aux_sym_selector_option_section_token1,
  [2191] = 1,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
  [2195] = 1,
    ACTIONS(547), 1,
      aux_sym_selector_option_section_token1,
  [2199] = 1,
    ACTIONS(549), 1,
      aux_sym_selector_option_section_token1,
  [2203] = 1,
    ACTIONS(551), 1,
      aux_sym_selector_option_section_token1,
  [2207] = 1,
    ACTIONS(553), 1,
      aux_sym_selector_option_section_token1,
  [2211] = 1,
    ACTIONS(555), 1,
      aux_sym_selector_option_section_token1,
  [2215] = 1,
    ACTIONS(193), 1,
      aux_sym_selector_option_section_token1,
  [2219] = 1,
    ACTIONS(217), 1,
      aux_sym_selector_option_section_token1,
  [2223] = 1,
    ACTIONS(557), 1,
      aux_sym_selector_option_section_token1,
  [2227] = 1,
    ACTIONS(252), 1,
      aux_sym_selector_option_section_token1,
  [2231] = 1,
    ACTIONS(559), 1,
      aux_sym_selector_option_section_token1,
  [2235] = 1,
    ACTIONS(189), 1,
      aux_sym_selector_option_section_token1,
  [2239] = 1,
    ACTIONS(561), 1,
      aux_sym_selector_option_section_token1,
  [2243] = 1,
    ACTIONS(240), 1,
      aux_sym_selector_option_section_token1,
  [2247] = 1,
    ACTIONS(232), 1,
      aux_sym_selector_option_section_token1,
  [2251] = 1,
    ACTIONS(563), 1,
      aux_sym_selector_option_section_token1,
  [2255] = 1,
    ACTIONS(213), 1,
      aux_sym_selector_option_section_token1,
  [2259] = 1,
    ACTIONS(205), 1,
      aux_sym_selector_option_section_token1,
  [2263] = 1,
    ACTIONS(565), 1,
      aux_sym_selector_option_section_token1,
  [2267] = 1,
    ACTIONS(567), 1,
      aux_sym_selector_option_section_token1,
  [2271] = 1,
    ACTIONS(569), 1,
      anon_sym_,
  [2275] = 1,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
  [2279] = 1,
    ACTIONS(573), 1,
      aux_sym_command_name_token1,
  [2283] = 1,
    ACTIONS(575), 1,
      aux_sym_selector_option_section_token1,
  [2287] = 1,
    ACTIONS(577), 1,
      aux_sym_command_name_token1,
  [2291] = 1,
    ACTIONS(579), 1,
      anon_sym_,
  [2295] = 1,
    ACTIONS(581), 1,
      anon_sym_,
  [2299] = 1,
    ACTIONS(583), 1,
      aux_sym_command_name_token1,
  [2303] = 1,
    ACTIONS(585), 1,
      aux_sym_selector_option_section_token1,
  [2307] = 1,
    ACTIONS(587), 1,
      aux_sym_selector_option_section_token1,
  [2311] = 1,
    ACTIONS(589), 1,
      aux_sym_selector_option_section_token1,
  [2315] = 1,
    ACTIONS(591), 1,
      anon_sym_,
  [2319] = 1,
    ACTIONS(594), 1,
      anon_sym_,
  [2323] = 1,
    ACTIONS(596), 1,
      anon_sym_,
  [2327] = 1,
    ACTIONS(598), 1,
      aux_sym_selector_option_section_token1,
  [2331] = 1,
    ACTIONS(600), 1,
      aux_sym_selector_option_section_token1,
  [2335] = 1,
    ACTIONS(602), 1,
      aux_sym_selector_option_section_token1,
  [2339] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [2343] = 1,
    ACTIONS(606), 1,
      aux_sym_selector_option_section_token1,
  [2347] = 1,
    ACTIONS(608), 1,
      anon_sym_,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 293,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 386,
  [SMALL_STATE(9)] = 422,
  [SMALL_STATE(10)] = 455,
  [SMALL_STATE(11)] = 488,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 584,
  [SMALL_STATE(15)] = 614,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 674,
  [SMALL_STATE(18)] = 704,
  [SMALL_STATE(19)] = 729,
  [SMALL_STATE(20)] = 758,
  [SMALL_STATE(21)] = 787,
  [SMALL_STATE(22)] = 805,
  [SMALL_STATE(23)] = 823,
  [SMALL_STATE(24)] = 841,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 893,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 923,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 957,
  [SMALL_STATE(32)] = 974,
  [SMALL_STATE(33)] = 991,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1020,
  [SMALL_STATE(36)] = 1032,
  [SMALL_STATE(37)] = 1044,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1068,
  [SMALL_STATE(40)] = 1080,
  [SMALL_STATE(41)] = 1092,
  [SMALL_STATE(42)] = 1104,
  [SMALL_STATE(43)] = 1116,
  [SMALL_STATE(44)] = 1128,
  [SMALL_STATE(45)] = 1142,
  [SMALL_STATE(46)] = 1154,
  [SMALL_STATE(47)] = 1166,
  [SMALL_STATE(48)] = 1178,
  [SMALL_STATE(49)] = 1190,
  [SMALL_STATE(50)] = 1202,
  [SMALL_STATE(51)] = 1214,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1238,
  [SMALL_STATE(54)] = 1258,
  [SMALL_STATE(55)] = 1272,
  [SMALL_STATE(56)] = 1284,
  [SMALL_STATE(57)] = 1296,
  [SMALL_STATE(58)] = 1308,
  [SMALL_STATE(59)] = 1320,
  [SMALL_STATE(60)] = 1331,
  [SMALL_STATE(61)] = 1348,
  [SMALL_STATE(62)] = 1365,
  [SMALL_STATE(63)] = 1382,
  [SMALL_STATE(64)] = 1399,
  [SMALL_STATE(65)] = 1416,
  [SMALL_STATE(66)] = 1433,
  [SMALL_STATE(67)] = 1444,
  [SMALL_STATE(68)] = 1459,
  [SMALL_STATE(69)] = 1470,
  [SMALL_STATE(70)] = 1481,
  [SMALL_STATE(71)] = 1498,
  [SMALL_STATE(72)] = 1509,
  [SMALL_STATE(73)] = 1520,
  [SMALL_STATE(74)] = 1537,
  [SMALL_STATE(75)] = 1545,
  [SMALL_STATE(76)] = 1559,
  [SMALL_STATE(77)] = 1573,
  [SMALL_STATE(78)] = 1587,
  [SMALL_STATE(79)] = 1601,
  [SMALL_STATE(80)] = 1615,
  [SMALL_STATE(81)] = 1629,
  [SMALL_STATE(82)] = 1643,
  [SMALL_STATE(83)] = 1653,
  [SMALL_STATE(84)] = 1663,
  [SMALL_STATE(85)] = 1673,
  [SMALL_STATE(86)] = 1683,
  [SMALL_STATE(87)] = 1693,
  [SMALL_STATE(88)] = 1703,
  [SMALL_STATE(89)] = 1713,
  [SMALL_STATE(90)] = 1723,
  [SMALL_STATE(91)] = 1733,
  [SMALL_STATE(92)] = 1743,
  [SMALL_STATE(93)] = 1753,
  [SMALL_STATE(94)] = 1763,
  [SMALL_STATE(95)] = 1771,
  [SMALL_STATE(96)] = 1781,
  [SMALL_STATE(97)] = 1789,
  [SMALL_STATE(98)] = 1797,
  [SMALL_STATE(99)] = 1807,
  [SMALL_STATE(100)] = 1817,
  [SMALL_STATE(101)] = 1824,
  [SMALL_STATE(102)] = 1831,
  [SMALL_STATE(103)] = 1838,
  [SMALL_STATE(104)] = 1845,
  [SMALL_STATE(105)] = 1852,
  [SMALL_STATE(106)] = 1859,
  [SMALL_STATE(107)] = 1866,
  [SMALL_STATE(108)] = 1873,
  [SMALL_STATE(109)] = 1880,
  [SMALL_STATE(110)] = 1887,
  [SMALL_STATE(111)] = 1894,
  [SMALL_STATE(112)] = 1901,
  [SMALL_STATE(113)] = 1908,
  [SMALL_STATE(114)] = 1915,
  [SMALL_STATE(115)] = 1922,
  [SMALL_STATE(116)] = 1929,
  [SMALL_STATE(117)] = 1936,
  [SMALL_STATE(118)] = 1943,
  [SMALL_STATE(119)] = 1950,
  [SMALL_STATE(120)] = 1957,
  [SMALL_STATE(121)] = 1964,
  [SMALL_STATE(122)] = 1971,
  [SMALL_STATE(123)] = 1978,
  [SMALL_STATE(124)] = 1985,
  [SMALL_STATE(125)] = 1992,
  [SMALL_STATE(126)] = 1999,
  [SMALL_STATE(127)] = 2006,
  [SMALL_STATE(128)] = 2013,
  [SMALL_STATE(129)] = 2020,
  [SMALL_STATE(130)] = 2027,
  [SMALL_STATE(131)] = 2034,
  [SMALL_STATE(132)] = 2041,
  [SMALL_STATE(133)] = 2048,
  [SMALL_STATE(134)] = 2055,
  [SMALL_STATE(135)] = 2059,
  [SMALL_STATE(136)] = 2063,
  [SMALL_STATE(137)] = 2067,
  [SMALL_STATE(138)] = 2071,
  [SMALL_STATE(139)] = 2075,
  [SMALL_STATE(140)] = 2079,
  [SMALL_STATE(141)] = 2083,
  [SMALL_STATE(142)] = 2087,
  [SMALL_STATE(143)] = 2091,
  [SMALL_STATE(144)] = 2095,
  [SMALL_STATE(145)] = 2099,
  [SMALL_STATE(146)] = 2103,
  [SMALL_STATE(147)] = 2107,
  [SMALL_STATE(148)] = 2111,
  [SMALL_STATE(149)] = 2115,
  [SMALL_STATE(150)] = 2119,
  [SMALL_STATE(151)] = 2123,
  [SMALL_STATE(152)] = 2127,
  [SMALL_STATE(153)] = 2131,
  [SMALL_STATE(154)] = 2135,
  [SMALL_STATE(155)] = 2139,
  [SMALL_STATE(156)] = 2143,
  [SMALL_STATE(157)] = 2147,
  [SMALL_STATE(158)] = 2151,
  [SMALL_STATE(159)] = 2155,
  [SMALL_STATE(160)] = 2159,
  [SMALL_STATE(161)] = 2163,
  [SMALL_STATE(162)] = 2167,
  [SMALL_STATE(163)] = 2171,
  [SMALL_STATE(164)] = 2175,
  [SMALL_STATE(165)] = 2179,
  [SMALL_STATE(166)] = 2183,
  [SMALL_STATE(167)] = 2187,
  [SMALL_STATE(168)] = 2191,
  [SMALL_STATE(169)] = 2195,
  [SMALL_STATE(170)] = 2199,
  [SMALL_STATE(171)] = 2203,
  [SMALL_STATE(172)] = 2207,
  [SMALL_STATE(173)] = 2211,
  [SMALL_STATE(174)] = 2215,
  [SMALL_STATE(175)] = 2219,
  [SMALL_STATE(176)] = 2223,
  [SMALL_STATE(177)] = 2227,
  [SMALL_STATE(178)] = 2231,
  [SMALL_STATE(179)] = 2235,
  [SMALL_STATE(180)] = 2239,
  [SMALL_STATE(181)] = 2243,
  [SMALL_STATE(182)] = 2247,
  [SMALL_STATE(183)] = 2251,
  [SMALL_STATE(184)] = 2255,
  [SMALL_STATE(185)] = 2259,
  [SMALL_STATE(186)] = 2263,
  [SMALL_STATE(187)] = 2267,
  [SMALL_STATE(188)] = 2271,
  [SMALL_STATE(189)] = 2275,
  [SMALL_STATE(190)] = 2279,
  [SMALL_STATE(191)] = 2283,
  [SMALL_STATE(192)] = 2287,
  [SMALL_STATE(193)] = 2291,
  [SMALL_STATE(194)] = 2295,
  [SMALL_STATE(195)] = 2299,
  [SMALL_STATE(196)] = 2303,
  [SMALL_STATE(197)] = 2307,
  [SMALL_STATE(198)] = 2311,
  [SMALL_STATE(199)] = 2315,
  [SMALL_STATE(200)] = 2319,
  [SMALL_STATE(201)] = 2323,
  [SMALL_STATE(202)] = 2327,
  [SMALL_STATE(203)] = 2331,
  [SMALL_STATE(204)] = 2335,
  [SMALL_STATE(205)] = 2339,
  [SMALL_STATE(206)] = 2343,
  [SMALL_STATE(207)] = 2347,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(192),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(192),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(66),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(93),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(119),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(39),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(130),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(192),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(192),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(192),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(79),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(189),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(77),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(53),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(116),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_score_object_repeat1, 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(5),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(76),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(13),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 2), SHIFT_REPEAT(104),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 8),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_execute_command_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
