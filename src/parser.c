#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 207
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
  sym_namespaced_container = 52,
  sym_nbt_path = 53,
  sym_root = 54,
  sym_comment = 55,
  sym_invalid_comment = 56,
  sym_command = 57,
  sym__command_choices = 58,
  sym_execute_command = 59,
  sym_execute_keyword = 60,
  sym_command_name = 61,
  sym_boolean = 62,
  sym_coordinate = 63,
  sym_rotation = 64,
  sym_location = 65,
  sym_string = 66,
  sym__escape_sequence = 67,
  sym_selector = 68,
  sym_selector_option_section = 69,
  sym_selector_option = 70,
  sym_selector_key = 71,
  sym_selector_value = 72,
  sym_selector_nbt = 73,
  sym_selector_score = 74,
  sym_selector_score_key = 75,
  sym_selector_score_value = 76,
  sym_selector_number = 77,
  sym_nbt = 78,
  sym_nbt_object = 79,
  sym_nbt_array = 80,
  sym_nbt_object_key = 81,
  sym_nbt_object_value = 82,
  sym_nbt_number = 83,
  sym_item = 84,
  sym_item_nbt = 85,
  sym_item_state = 86,
  sym_state_key = 87,
  sym_state_value = 88,
  sym_path = 89,
  sym_container = 90,
  aux_sym_root_repeat1 = 91,
  aux_sym_command_repeat1 = 92,
  aux_sym_execute_command_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
  aux_sym_selector_option_section_repeat1 = 95,
  aux_sym_selector_nbt_repeat1 = 96,
  aux_sym_selector_score_repeat1 = 97,
  aux_sym_nbt_object_repeat1 = 98,
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
  [sym_namespaced_container] = "namespaced_container",
  [sym_nbt_path] = "nbt_path",
  [sym_root] = "root",
  [sym_comment] = "comment",
  [sym_invalid_comment] = "invalid_comment",
  [sym_command] = "command",
  [sym__command_choices] = "_command_choices",
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
  [sym_namespaced_container] = sym_namespaced_container,
  [sym_nbt_path] = sym_nbt_path,
  [sym_root] = sym_root,
  [sym_comment] = sym_comment,
  [sym_invalid_comment] = sym_invalid_comment,
  [sym_command] = sym_command,
  [sym__command_choices] = sym__command_choices,
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
  [sym_namespaced_container] = {
    .visible = true,
    .named = true,
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
  [sym__command_choices] = {
    .visible = false,
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
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '~') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == '}') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '}') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(222);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 61:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(72);
      if (lookahead == '[') ADVANCE(67);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 72:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(72);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == ',') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == ']') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(72);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 73},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 73},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 73},
  [52] = {.lex_state = 73},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 211},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 73},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 73},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 209},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 73},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 73},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 207},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 73},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 73},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 207},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 73},
  [109] = {.lex_state = 207},
  [110] = {.lex_state = 73},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 208},
  [113] = {.lex_state = 208},
  [114] = {.lex_state = 207},
  [115] = {.lex_state = 208},
  [116] = {.lex_state = 208},
  [117] = {.lex_state = 208},
  [118] = {.lex_state = 207},
  [119] = {.lex_state = 73},
  [120] = {.lex_state = 207},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 207},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 73},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 210},
  [128] = {.lex_state = 207},
  [129] = {.lex_state = 207},
  [130] = {.lex_state = 207},
  [131] = {.lex_state = 207},
  [132] = {.lex_state = 207},
  [133] = {.lex_state = 208},
  [134] = {.lex_state = 208},
  [135] = {.lex_state = 208},
  [136] = {.lex_state = 73},
  [137] = {.lex_state = 207},
  [138] = {.lex_state = 207},
  [139] = {.lex_state = 207},
  [140] = {.lex_state = 207},
  [141] = {.lex_state = 207},
  [142] = {.lex_state = 207},
  [143] = {.lex_state = 207},
  [144] = {.lex_state = 73},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 207},
  [147] = {.lex_state = 207},
  [148] = {.lex_state = 207},
  [149] = {.lex_state = 207},
  [150] = {.lex_state = 207},
  [151] = {.lex_state = 207},
  [152] = {.lex_state = 207},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 207},
  [155] = {.lex_state = 207},
  [156] = {.lex_state = 73},
  [157] = {.lex_state = 207},
  [158] = {.lex_state = 207},
  [159] = {.lex_state = 73},
  [160] = {.lex_state = 207},
  [161] = {.lex_state = 207},
  [162] = {.lex_state = 73},
  [163] = {.lex_state = 207},
  [164] = {.lex_state = 207},
  [165] = {.lex_state = 207},
  [166] = {.lex_state = 73},
  [167] = {.lex_state = 73},
  [168] = {.lex_state = 73},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 207},
  [171] = {.lex_state = 207},
  [172] = {.lex_state = 207},
  [173] = {.lex_state = 207},
  [174] = {.lex_state = 207},
  [175] = {.lex_state = 207},
  [176] = {.lex_state = 207},
  [177] = {.lex_state = 73},
  [178] = {.lex_state = 207},
  [179] = {.lex_state = 207},
  [180] = {.lex_state = 207},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 207},
  [183] = {.lex_state = 207},
  [184] = {.lex_state = 207},
  [185] = {.lex_state = 207},
  [186] = {.lex_state = 207},
  [187] = {.lex_state = 207},
  [188] = {.lex_state = 73},
  [189] = {.lex_state = 207},
  [190] = {.lex_state = 207},
  [191] = {.lex_state = 207},
  [192] = {.lex_state = 207},
  [193] = {.lex_state = 207},
  [194] = {.lex_state = 73},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 73},
  [197] = {.lex_state = 207},
  [198] = {.lex_state = 207},
  [199] = {.lex_state = 207},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 207},
  [202] = {.lex_state = 207},
  [203] = {.lex_state = 207},
  [204] = {.lex_state = 207},
  [205] = {.lex_state = 207},
  [206] = {.lex_state = 207},
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
    [sym_execute_command] = STATE(72),
    [sym_command_name] = STATE(36),
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
      sym_namespaced_container,
    STATE(169), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
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
    STATE(136), 12,
      sym_invalid_comment,
      sym__command_choices,
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
  [79] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
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
      sym_namespaced_container,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(169), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
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
    STATE(136), 12,
      sym_invalid_comment,
      sym__command_choices,
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
  [158] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
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
      sym_namespaced_container,
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(169), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
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
    STATE(136), 12,
      sym_invalid_comment,
      sym__command_choices,
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
  [237] = 17,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_command_name_token1,
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
      sym_namespaced_container,
    STATE(169), 1,
      sym_coordinate,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
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
    STATE(136), 12,
      sym_invalid_comment,
      sym__command_choices,
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
  [313] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
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
    ACTIONS(49), 1,
      aux_sym_command_name_token1,
    ACTIONS(53), 1,
      aux_sym_item_token1,
    ACTIONS(55), 1,
      sym_namespaced_container,
    STATE(169), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__identifier,
      sym_nbt_path,
    STATE(40), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(42), 11,
      sym_invalid_comment,
      sym__command_choices,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [375] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    ACTIONS(62), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(46), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [411] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    ACTIONS(73), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(47), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [447] = 9,
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
    STATE(176), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [480] = 9,
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
    STATE(176), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [513] = 9,
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
    STATE(176), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [546] = 9,
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
    STATE(176), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [579] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [609] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [639] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [669] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(175), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [699] = 8,
    ACTIONS(93), 1,
      aux_sym_command_name_token1,
    ACTIONS(95), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      aux_sym_selector_number_token3,
    STATE(139), 1,
      sym_selector_value,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(140), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [729] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__line_separator,
    STATE(36), 1,
      sym_command_name,
    STATE(72), 1,
      sym_execute_command,
    STATE(19), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [759] = 9,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_execute,
    ACTIONS(120), 1,
      sym__line_separator,
    ACTIONS(123), 1,
      aux_sym_command_name_token1,
    STATE(36), 1,
      sym_command_name,
    STATE(72), 1,
      sym_execute_command,
    STATE(19), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [789] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    STATE(100), 1,
      aux_sym_path_repeat1,
    STATE(46), 2,
      sym_item_nbt,
      sym_item_state,
  [818] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(47), 2,
      sym_item_nbt,
      sym_item_state,
  [847] = 4,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(130), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [865] = 4,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      sym_selector_option_section,
    ACTIONS(134), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [883] = 4,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(140), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [901] = 4,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [919] = 2,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [932] = 4,
    ACTIONS(151), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym_command_repeat1,
    ACTIONS(153), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [949] = 4,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [966] = 3,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [981] = 4,
    ACTIONS(151), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym_command_repeat1,
    ACTIONS(170), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [998] = 4,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(177), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1015] = 4,
    ACTIONS(151), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_command_repeat1,
    ACTIONS(170), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1032] = 4,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1049] = 4,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym_command_repeat1,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1066] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_command_name_token1,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      aux_sym_nbt_object_key_token1,
    STATE(150), 1,
      sym_nbt_object_key,
    STATE(158), 1,
      sym_selector_score_key,
    STATE(193), 1,
      sym_string,
  [1091] = 4,
    ACTIONS(151), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_command_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1108] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_command_name_token1,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(199), 1,
      aux_sym_nbt_object_key_token1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_selector_score_key,
    STATE(150), 1,
      sym_nbt_object_key,
    STATE(193), 1,
      sym_string,
  [1133] = 2,
    ACTIONS(209), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1145] = 2,
    ACTIONS(213), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1157] = 2,
    ACTIONS(217), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1169] = 7,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_command_name_token1,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(199), 1,
      aux_sym_nbt_object_key_token1,
    STATE(150), 1,
      sym_nbt_object_key,
    STATE(158), 1,
      sym_selector_score_key,
    STATE(193), 1,
      sym_string,
  [1191] = 2,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1203] = 2,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1215] = 2,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1227] = 2,
    ACTIONS(225), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1239] = 2,
    ACTIONS(73), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1251] = 2,
    ACTIONS(229), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1263] = 2,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1275] = 2,
    ACTIONS(237), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1287] = 2,
    ACTIONS(241), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1299] = 2,
    ACTIONS(245), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1311] = 2,
    ACTIONS(249), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1323] = 2,
    ACTIONS(253), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1335] = 2,
    ACTIONS(257), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1347] = 2,
    ACTIONS(261), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(259), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1359] = 2,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1371] = 2,
    ACTIONS(269), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(267), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1383] = 3,
    ACTIONS(273), 1,
      anon_sym_,
    ACTIONS(276), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(271), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1397] = 3,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(283), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1411] = 2,
    ACTIONS(287), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1423] = 2,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1435] = 2,
    ACTIONS(291), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1447] = 2,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1459] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(36), 1,
      sym_command_name,
    STATE(70), 2,
      sym_command,
      sym_execute_command,
  [1476] = 2,
    ACTIONS(299), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(297), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1487] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_string,
    STATE(198), 1,
      sym_nbt_object_key,
    ACTIONS(195), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1504] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(36), 1,
      sym_command_name,
    STATE(71), 2,
      sym_command,
      sym_execute_command,
  [1521] = 2,
    ACTIONS(305), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1532] = 4,
    STATE(171), 1,
      sym_selector_number,
    STATE(204), 1,
      sym_selector_score_value,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(103), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1547] = 2,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1558] = 2,
    ACTIONS(313), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(311), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1569] = 2,
    ACTIONS(317), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(315), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1580] = 5,
    ACTIONS(319), 1,
      aux_sym_command_name_token1,
    ACTIONS(321), 1,
      sym_number,
    STATE(133), 1,
      sym_boolean,
    STATE(134), 1,
      sym_state_value,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
  [1597] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_string,
    STATE(198), 1,
      sym_nbt_object_key,
    ACTIONS(195), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1614] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_string,
    STATE(198), 1,
      sym_nbt_object_key,
    ACTIONS(195), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1631] = 2,
    ACTIONS(331), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(329), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1642] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_string,
    STATE(198), 1,
      sym_nbt_object_key,
    ACTIONS(195), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1659] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(36), 1,
      sym_command_name,
    STATE(68), 2,
      sym_command,
      sym_execute_command,
  [1676] = 4,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(340), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1690] = 1,
    ACTIONS(343), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1698] = 4,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_string_token1,
    ACTIONS(349), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1712] = 4,
    ACTIONS(349), 1,
      anon_sym_BSLASH,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym_string_token1,
    STATE(81), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1726] = 4,
    ACTIONS(349), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_string_token1,
    STATE(85), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1740] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_string,
    STATE(198), 1,
      sym_nbt_object_key,
    ACTIONS(195), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1754] = 4,
    ACTIONS(347), 1,
      aux_sym_string_token1,
    ACTIONS(349), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1768] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(361), 1,
      sym_number,
    STATE(59), 1,
      sym_coordinate,
  [1781] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(361), 1,
      sym_number,
    STATE(48), 1,
      sym_coordinate,
  [1794] = 2,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    ACTIONS(363), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1802] = 3,
    ACTIONS(367), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_selector_option_section_repeat1,
  [1812] = 3,
    ACTIONS(371), 1,
      aux_sym_command_name_token1,
    STATE(199), 1,
      sym_selector_key,
    STATE(201), 1,
      sym_selector_option,
  [1822] = 3,
    ACTIONS(373), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [1832] = 3,
    ACTIONS(379), 1,
      aux_sym_command_name_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_state_key,
  [1842] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(383), 1,
      anon_sym_execute,
    STATE(32), 1,
      sym_command_name,
  [1852] = 3,
    ACTIONS(367), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_selector_option_section_repeat1,
  [1862] = 3,
    ACTIONS(387), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_selector_option_section_repeat1,
  [1872] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [1882] = 3,
    ACTIONS(392), 1,
      aux_sym_command_name_token1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_selector_score_key,
  [1892] = 3,
    ACTIONS(396), 1,
      aux_sym_selector_option_section_token1,
    STATE(128), 1,
      aux_sym_selector_score_repeat1,
    STATE(130), 1,
      aux_sym_selector_nbt_repeat1,
  [1902] = 3,
    ACTIONS(379), 1,
      aux_sym_command_name_token1,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_state_key,
  [1912] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [1922] = 2,
    ACTIONS(400), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym_selector_nbt_repeat1,
  [1929] = 2,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [1936] = 2,
    ACTIONS(407), 1,
      aux_sym_selector_option_section_token1,
    STATE(109), 1,
      aux_sym_nbt_object_repeat1,
  [1943] = 2,
    ACTIONS(409), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym_nbt_array_repeat1,
  [1950] = 2,
    ACTIONS(411), 1,
      aux_sym_selector_option_section_token1,
    STATE(105), 1,
      aux_sym_item_state_repeat1,
  [1957] = 2,
    ACTIONS(414), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym_nbt_object_repeat1,
  [1964] = 2,
    ACTIONS(416), 1,
      aux_sym_selector_option_section_token1,
    STATE(104), 1,
      aux_sym_nbt_array_repeat1,
  [1971] = 2,
    ACTIONS(418), 1,
      anon_sym_,
    STATE(111), 1,
      aux_sym_execute_command_repeat1,
  [1978] = 2,
    ACTIONS(420), 1,
      aux_sym_selector_option_section_token1,
    STATE(109), 1,
      aux_sym_nbt_object_repeat1,
  [1985] = 2,
    ACTIONS(418), 1,
      anon_sym_,
    STATE(119), 1,
      aux_sym_execute_command_repeat1,
  [1992] = 2,
    ACTIONS(423), 1,
      anon_sym_,
    STATE(119), 1,
      aux_sym_execute_command_repeat1,
  [1999] = 2,
    ACTIONS(425), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(427), 1,
      anon_sym_COMMA,
  [2006] = 2,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      aux_sym_selector_option_section_token1,
  [2013] = 2,
    ACTIONS(429), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym_nbt_array_repeat1,
  [2020] = 2,
    ACTIONS(432), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(434), 1,
      anon_sym_COMMA,
  [2027] = 2,
    ACTIONS(436), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(438), 1,
      anon_sym_COMMA,
  [2034] = 2,
    ACTIONS(440), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(442), 1,
      anon_sym_COMMA,
  [2041] = 2,
    ACTIONS(444), 1,
      aux_sym_selector_option_section_token1,
    STATE(105), 1,
      aux_sym_item_state_repeat1,
  [2048] = 2,
    ACTIONS(446), 1,
      anon_sym_,
    STATE(119), 1,
      aux_sym_execute_command_repeat1,
  [2055] = 2,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    STATE(109), 1,
      aux_sym_nbt_object_repeat1,
  [2062] = 2,
    ACTIONS(379), 1,
      aux_sym_command_name_token1,
    STATE(137), 1,
      sym_state_key,
  [2069] = 2,
    ACTIONS(451), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym_nbt_array_repeat1,
  [2076] = 2,
    ACTIONS(392), 1,
      aux_sym_command_name_token1,
    STATE(161), 1,
      sym_selector_score_key,
  [2083] = 2,
    ACTIONS(453), 1,
      anon_sym_,
    STATE(110), 1,
      aux_sym_execute_command_repeat1,
  [2090] = 2,
    ACTIONS(455), 1,
      aux_sym_selector_option_section_token1,
    STATE(125), 1,
      aux_sym_selector_score_repeat1,
  [2097] = 2,
    ACTIONS(458), 1,
      aux_sym_command_name_token1,
    ACTIONS(460), 1,
      sym_number,
  [2104] = 2,
    ACTIONS(462), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
  [2111] = 2,
    ACTIONS(466), 1,
      aux_sym_selector_option_section_token1,
    STATE(125), 1,
      aux_sym_selector_score_repeat1,
  [2118] = 2,
    ACTIONS(468), 1,
      aux_sym_selector_option_section_token1,
    STATE(118), 1,
      aux_sym_item_state_repeat1,
  [2125] = 2,
    ACTIONS(470), 1,
      aux_sym_selector_option_section_token1,
    STATE(101), 1,
      aux_sym_selector_nbt_repeat1,
  [2132] = 2,
    ACTIONS(472), 1,
      aux_sym_selector_option_section_token1,
    STATE(120), 1,
      aux_sym_nbt_object_repeat1,
  [2139] = 2,
    ACTIONS(474), 1,
      aux_sym_selector_option_section_token1,
    STATE(122), 1,
      aux_sym_nbt_array_repeat1,
  [2146] = 2,
    ACTIONS(476), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(478), 1,
      anon_sym_COMMA,
  [2153] = 2,
    ACTIONS(480), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [2160] = 2,
    ACTIONS(484), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(486), 1,
      anon_sym_COMMA,
  [2167] = 1,
    ACTIONS(488), 1,
      anon_sym_,
  [2171] = 1,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
  [2175] = 1,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
  [2179] = 1,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
  [2183] = 1,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
  [2187] = 1,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
  [2191] = 1,
    ACTIONS(501), 1,
      aux_sym_selector_option_section_token1,
  [2195] = 1,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
  [2199] = 1,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
  [2203] = 1,
    ACTIONS(507), 1,
      anon_sym_,
  [2207] = 1,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
  [2211] = 1,
    ACTIONS(511), 1,
      aux_sym_selector_option_section_token1,
  [2215] = 1,
    ACTIONS(513), 1,
      aux_sym_selector_option_section_token1,
  [2219] = 1,
    ACTIONS(516), 1,
      aux_sym_selector_option_section_token1,
  [2223] = 1,
    ACTIONS(518), 1,
      aux_sym_selector_option_section_token1,
  [2227] = 1,
    ACTIONS(520), 1,
      aux_sym_selector_option_section_token1,
  [2231] = 1,
    ACTIONS(522), 1,
      aux_sym_selector_option_section_token1,
  [2235] = 1,
    ACTIONS(524), 1,
      aux_sym_command_name_token1,
  [2239] = 1,
    ACTIONS(526), 1,
      aux_sym_selector_option_section_token1,
  [2243] = 1,
    ACTIONS(528), 1,
      aux_sym_selector_option_section_token1,
  [2247] = 1,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [2251] = 1,
    ACTIONS(532), 1,
      aux_sym_selector_option_section_token1,
  [2255] = 1,
    ACTIONS(534), 1,
      aux_sym_selector_option_section_token1,
  [2259] = 1,
    ACTIONS(536), 1,
      anon_sym_,
  [2263] = 1,
    ACTIONS(538), 1,
      aux_sym_selector_option_section_token1,
  [2267] = 1,
    ACTIONS(540), 1,
      aux_sym_selector_option_section_token1,
  [2271] = 1,
    ACTIONS(542), 1,
      anon_sym_EQ,
  [2275] = 1,
    ACTIONS(544), 1,
      aux_sym_selector_option_section_token1,
  [2279] = 1,
    ACTIONS(546), 1,
      aux_sym_selector_option_section_token1,
  [2283] = 1,
    ACTIONS(548), 1,
      aux_sym_selector_option_section_token1,
  [2287] = 1,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [2291] = 1,
    ACTIONS(403), 1,
      anon_sym_EQ,
  [2295] = 1,
    ACTIONS(550), 1,
      anon_sym_EQ,
  [2299] = 1,
    ACTIONS(552), 1,
      anon_sym_,
  [2303] = 1,
    ACTIONS(554), 1,
      aux_sym_selector_option_section_token1,
  [2307] = 1,
    ACTIONS(556), 1,
      aux_sym_selector_option_section_token1,
  [2311] = 1,
    ACTIONS(558), 1,
      aux_sym_selector_option_section_token1,
  [2315] = 1,
    ACTIONS(560), 1,
      aux_sym_selector_option_section_token1,
  [2319] = 1,
    ACTIONS(562), 1,
      aux_sym_selector_option_section_token1,
  [2323] = 1,
    ACTIONS(564), 1,
      aux_sym_selector_option_section_token1,
  [2327] = 1,
    ACTIONS(566), 1,
      aux_sym_selector_option_section_token1,
  [2331] = 1,
    ACTIONS(568), 1,
      anon_sym_COLON,
  [2335] = 1,
    ACTIONS(570), 1,
      aux_sym_selector_option_section_token1,
  [2339] = 1,
    ACTIONS(572), 1,
      aux_sym_selector_option_section_token1,
  [2343] = 1,
    ACTIONS(574), 1,
      aux_sym_selector_option_section_token1,
  [2347] = 1,
    ACTIONS(576), 1,
      aux_sym_command_name_token1,
  [2351] = 1,
    ACTIONS(263), 1,
      aux_sym_selector_option_section_token1,
  [2355] = 1,
    ACTIONS(215), 1,
      aux_sym_selector_option_section_token1,
  [2359] = 1,
    ACTIONS(578), 1,
      aux_sym_selector_option_section_token1,
  [2363] = 1,
    ACTIONS(207), 1,
      aux_sym_selector_option_section_token1,
  [2367] = 1,
    ACTIONS(580), 1,
      aux_sym_selector_option_section_token1,
  [2371] = 1,
    ACTIONS(243), 1,
      aux_sym_selector_option_section_token1,
  [2375] = 1,
    ACTIONS(166), 1,
      sym_number,
  [2379] = 1,
    ACTIONS(285), 1,
      aux_sym_selector_option_section_token1,
  [2383] = 1,
    ACTIONS(247), 1,
      aux_sym_selector_option_section_token1,
  [2387] = 1,
    ACTIONS(251), 1,
      aux_sym_selector_option_section_token1,
  [2391] = 1,
    ACTIONS(267), 1,
      aux_sym_selector_option_section_token1,
  [2395] = 1,
    ACTIONS(582), 1,
      aux_sym_selector_option_section_token1,
  [2399] = 1,
    ACTIONS(584), 1,
      anon_sym_,
  [2403] = 1,
    ACTIONS(586), 1,
      aux_sym_command_name_token1,
  [2407] = 1,
    ACTIONS(588), 1,
      anon_sym_,
  [2411] = 1,
    ACTIONS(590), 1,
      aux_sym_selector_option_section_token1,
  [2415] = 1,
    ACTIONS(592), 1,
      aux_sym_selector_option_section_token1,
  [2419] = 1,
    ACTIONS(594), 1,
      aux_sym_selector_option_section_token1,
  [2423] = 1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
  [2427] = 1,
    ACTIONS(598), 1,
      aux_sym_selector_option_section_token1,
  [2431] = 1,
    ACTIONS(600), 1,
      aux_sym_selector_option_section_token1,
  [2435] = 1,
    ACTIONS(602), 1,
      aux_sym_selector_option_section_token1,
  [2439] = 1,
    ACTIONS(604), 1,
      aux_sym_selector_option_section_token1,
  [2443] = 1,
    ACTIONS(606), 1,
      aux_sym_selector_option_section_token1,
  [2447] = 1,
    ACTIONS(608), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 313,
  [SMALL_STATE(7)] = 375,
  [SMALL_STATE(8)] = 411,
  [SMALL_STATE(9)] = 447,
  [SMALL_STATE(10)] = 480,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 579,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 639,
  [SMALL_STATE(16)] = 669,
  [SMALL_STATE(17)] = 699,
  [SMALL_STATE(18)] = 729,
  [SMALL_STATE(19)] = 759,
  [SMALL_STATE(20)] = 789,
  [SMALL_STATE(21)] = 818,
  [SMALL_STATE(22)] = 847,
  [SMALL_STATE(23)] = 865,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 901,
  [SMALL_STATE(26)] = 919,
  [SMALL_STATE(27)] = 932,
  [SMALL_STATE(28)] = 949,
  [SMALL_STATE(29)] = 966,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 998,
  [SMALL_STATE(32)] = 1015,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1091,
  [SMALL_STATE(37)] = 1108,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1145,
  [SMALL_STATE(40)] = 1157,
  [SMALL_STATE(41)] = 1169,
  [SMALL_STATE(42)] = 1191,
  [SMALL_STATE(43)] = 1203,
  [SMALL_STATE(44)] = 1215,
  [SMALL_STATE(45)] = 1227,
  [SMALL_STATE(46)] = 1239,
  [SMALL_STATE(47)] = 1251,
  [SMALL_STATE(48)] = 1263,
  [SMALL_STATE(49)] = 1275,
  [SMALL_STATE(50)] = 1287,
  [SMALL_STATE(51)] = 1299,
  [SMALL_STATE(52)] = 1311,
  [SMALL_STATE(53)] = 1323,
  [SMALL_STATE(54)] = 1335,
  [SMALL_STATE(55)] = 1347,
  [SMALL_STATE(56)] = 1359,
  [SMALL_STATE(57)] = 1371,
  [SMALL_STATE(58)] = 1383,
  [SMALL_STATE(59)] = 1397,
  [SMALL_STATE(60)] = 1411,
  [SMALL_STATE(61)] = 1423,
  [SMALL_STATE(62)] = 1435,
  [SMALL_STATE(63)] = 1447,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1476,
  [SMALL_STATE(66)] = 1487,
  [SMALL_STATE(67)] = 1504,
  [SMALL_STATE(68)] = 1521,
  [SMALL_STATE(69)] = 1532,
  [SMALL_STATE(70)] = 1547,
  [SMALL_STATE(71)] = 1558,
  [SMALL_STATE(72)] = 1569,
  [SMALL_STATE(73)] = 1580,
  [SMALL_STATE(74)] = 1597,
  [SMALL_STATE(75)] = 1614,
  [SMALL_STATE(76)] = 1631,
  [SMALL_STATE(77)] = 1642,
  [SMALL_STATE(78)] = 1659,
  [SMALL_STATE(79)] = 1676,
  [SMALL_STATE(80)] = 1690,
  [SMALL_STATE(81)] = 1698,
  [SMALL_STATE(82)] = 1712,
  [SMALL_STATE(83)] = 1726,
  [SMALL_STATE(84)] = 1740,
  [SMALL_STATE(85)] = 1754,
  [SMALL_STATE(86)] = 1768,
  [SMALL_STATE(87)] = 1781,
  [SMALL_STATE(88)] = 1794,
  [SMALL_STATE(89)] = 1802,
  [SMALL_STATE(90)] = 1812,
  [SMALL_STATE(91)] = 1822,
  [SMALL_STATE(92)] = 1832,
  [SMALL_STATE(93)] = 1842,
  [SMALL_STATE(94)] = 1852,
  [SMALL_STATE(95)] = 1862,
  [SMALL_STATE(96)] = 1872,
  [SMALL_STATE(97)] = 1882,
  [SMALL_STATE(98)] = 1892,
  [SMALL_STATE(99)] = 1902,
  [SMALL_STATE(100)] = 1912,
  [SMALL_STATE(101)] = 1922,
  [SMALL_STATE(102)] = 1929,
  [SMALL_STATE(103)] = 1936,
  [SMALL_STATE(104)] = 1943,
  [SMALL_STATE(105)] = 1950,
  [SMALL_STATE(106)] = 1957,
  [SMALL_STATE(107)] = 1964,
  [SMALL_STATE(108)] = 1971,
  [SMALL_STATE(109)] = 1978,
  [SMALL_STATE(110)] = 1985,
  [SMALL_STATE(111)] = 1992,
  [SMALL_STATE(112)] = 1999,
  [SMALL_STATE(113)] = 2006,
  [SMALL_STATE(114)] = 2013,
  [SMALL_STATE(115)] = 2020,
  [SMALL_STATE(116)] = 2027,
  [SMALL_STATE(117)] = 2034,
  [SMALL_STATE(118)] = 2041,
  [SMALL_STATE(119)] = 2048,
  [SMALL_STATE(120)] = 2055,
  [SMALL_STATE(121)] = 2062,
  [SMALL_STATE(122)] = 2069,
  [SMALL_STATE(123)] = 2076,
  [SMALL_STATE(124)] = 2083,
  [SMALL_STATE(125)] = 2090,
  [SMALL_STATE(126)] = 2097,
  [SMALL_STATE(127)] = 2104,
  [SMALL_STATE(128)] = 2111,
  [SMALL_STATE(129)] = 2118,
  [SMALL_STATE(130)] = 2125,
  [SMALL_STATE(131)] = 2132,
  [SMALL_STATE(132)] = 2139,
  [SMALL_STATE(133)] = 2146,
  [SMALL_STATE(134)] = 2153,
  [SMALL_STATE(135)] = 2160,
  [SMALL_STATE(136)] = 2167,
  [SMALL_STATE(137)] = 2171,
  [SMALL_STATE(138)] = 2175,
  [SMALL_STATE(139)] = 2179,
  [SMALL_STATE(140)] = 2183,
  [SMALL_STATE(141)] = 2187,
  [SMALL_STATE(142)] = 2191,
  [SMALL_STATE(143)] = 2195,
  [SMALL_STATE(144)] = 2199,
  [SMALL_STATE(145)] = 2203,
  [SMALL_STATE(146)] = 2207,
  [SMALL_STATE(147)] = 2211,
  [SMALL_STATE(148)] = 2215,
  [SMALL_STATE(149)] = 2219,
  [SMALL_STATE(150)] = 2223,
  [SMALL_STATE(151)] = 2227,
  [SMALL_STATE(152)] = 2231,
  [SMALL_STATE(153)] = 2235,
  [SMALL_STATE(154)] = 2239,
  [SMALL_STATE(155)] = 2243,
  [SMALL_STATE(156)] = 2247,
  [SMALL_STATE(157)] = 2251,
  [SMALL_STATE(158)] = 2255,
  [SMALL_STATE(159)] = 2259,
  [SMALL_STATE(160)] = 2263,
  [SMALL_STATE(161)] = 2267,
  [SMALL_STATE(162)] = 2271,
  [SMALL_STATE(163)] = 2275,
  [SMALL_STATE(164)] = 2279,
  [SMALL_STATE(165)] = 2283,
  [SMALL_STATE(166)] = 2287,
  [SMALL_STATE(167)] = 2291,
  [SMALL_STATE(168)] = 2295,
  [SMALL_STATE(169)] = 2299,
  [SMALL_STATE(170)] = 2303,
  [SMALL_STATE(171)] = 2307,
  [SMALL_STATE(172)] = 2311,
  [SMALL_STATE(173)] = 2315,
  [SMALL_STATE(174)] = 2319,
  [SMALL_STATE(175)] = 2323,
  [SMALL_STATE(176)] = 2327,
  [SMALL_STATE(177)] = 2331,
  [SMALL_STATE(178)] = 2335,
  [SMALL_STATE(179)] = 2339,
  [SMALL_STATE(180)] = 2343,
  [SMALL_STATE(181)] = 2347,
  [SMALL_STATE(182)] = 2351,
  [SMALL_STATE(183)] = 2355,
  [SMALL_STATE(184)] = 2359,
  [SMALL_STATE(185)] = 2363,
  [SMALL_STATE(186)] = 2367,
  [SMALL_STATE(187)] = 2371,
  [SMALL_STATE(188)] = 2375,
  [SMALL_STATE(189)] = 2379,
  [SMALL_STATE(190)] = 2383,
  [SMALL_STATE(191)] = 2387,
  [SMALL_STATE(192)] = 2391,
  [SMALL_STATE(193)] = 2395,
  [SMALL_STATE(194)] = 2399,
  [SMALL_STATE(195)] = 2403,
  [SMALL_STATE(196)] = 2407,
  [SMALL_STATE(197)] = 2411,
  [SMALL_STATE(198)] = 2415,
  [SMALL_STATE(199)] = 2419,
  [SMALL_STATE(200)] = 2423,
  [SMALL_STATE(201)] = 2427,
  [SMALL_STATE(202)] = 2431,
  [SMALL_STATE(203)] = 2435,
  [SMALL_STATE(204)] = 2439,
  [SMALL_STATE(205)] = 2443,
  [SMALL_STATE(206)] = 2447,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(153),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(153),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(76),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(93),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(124),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(19),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(44),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(126),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(153),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(153),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(153),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(87),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(79),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(90),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(41),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(121),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(84),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(5),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(123),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [596] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
