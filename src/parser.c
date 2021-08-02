#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  anon_sym_nbt = 39,
  anon_sym_LBRACE = 40,
  anon_sym_COLON = 41,
  anon_sym_RBRACE = 42,
  anon_sym_scores = 43,
  aux_sym_selector_number_token1 = 44,
  aux_sym_selector_number_token2 = 45,
  aux_sym_selector_number_token3 = 46,
  aux_sym_nbt_object_key_token1 = 47,
  anon_sym_l = 48,
  anon_sym_d = 49,
  anon_sym_f = 50,
  anon_sym_b = 51,
  aux_sym_item_token1 = 52,
  anon_sym_DOT = 53,
  sym_nbt_path = 54,
  sym_root = 55,
  sym_comment = 56,
  sym_invalid_comment = 57,
  sym_command = 58,
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
  sym__selector_nbt = 74,
  sym_selector_score = 75,
  sym__selector_score_object = 76,
  sym_selector_score_key = 77,
  sym_selector_score_value = 78,
  sym_selector_number = 79,
  sym_nbt = 80,
  sym_nbt_object = 81,
  sym_nbt_array = 82,
  sym_nbt_object_key = 83,
  sym_nbt_object_value = 84,
  sym_nbt_number = 85,
  sym_item = 86,
  sym_item_nbt = 87,
  sym_item_state = 88,
  sym_state_key = 89,
  sym_state_value = 90,
  sym_path = 91,
  sym_container = 92,
  aux_sym_root_repeat1 = 93,
  aux_sym_command_repeat1 = 94,
  aux_sym_execute_command_repeat1 = 95,
  aux_sym_string_repeat1 = 96,
  aux_sym_selector_option_section_repeat1 = 97,
  aux_sym__selector_nbt_repeat1 = 98,
  aux_sym__selector_score_object_repeat1 = 99,
  aux_sym_nbt_array_repeat1 = 100,
  aux_sym_item_state_repeat1 = 101,
  aux_sym_path_repeat1 = 102,
  aux_sym_container_repeat1 = 103,
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
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '~') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '}') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '}') ADVANCE(224);
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
      if (lookahead == '.') ADVANCE(230);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(230);
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
      if (lookahead == 't') ADVANCE(220);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '{') ADVANCE(222);
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
      if (lookahead == ' ') ADVANCE(210);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == 's') ADVANCE(225);
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
      if (lookahead == 't') ADVANCE(221);
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
      if (lookahead == ':') ADVANCE(237);
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
      if (lookahead == ':') ADVANCE(237);
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
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == ',') ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == ']') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_nbt);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_nbt);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_scores);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_nbt_object_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(68);
      if (lookahead == '[') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
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
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 10},
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
  [53] = {.lex_state = 69},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 215},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 69},
  [68] = {.lex_state = 69},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 69},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 69},
  [85] = {.lex_state = 69},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 212},
  [89] = {.lex_state = 216},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 214},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 69},
  [94] = {.lex_state = 69},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 214},
  [98] = {.lex_state = 214},
  [99] = {.lex_state = 69},
  [100] = {.lex_state = 216},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 210},
  [103] = {.lex_state = 210},
  [104] = {.lex_state = 69},
  [105] = {.lex_state = 69},
  [106] = {.lex_state = 210},
  [107] = {.lex_state = 69},
  [108] = {.lex_state = 211},
  [109] = {.lex_state = 216},
  [110] = {.lex_state = 210},
  [111] = {.lex_state = 210},
  [112] = {.lex_state = 211},
  [113] = {.lex_state = 210},
  [114] = {.lex_state = 210},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 211},
  [117] = {.lex_state = 210},
  [118] = {.lex_state = 210},
  [119] = {.lex_state = 210},
  [120] = {.lex_state = 210},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 210},
  [123] = {.lex_state = 210},
  [124] = {.lex_state = 210},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 210},
  [127] = {.lex_state = 211},
  [128] = {.lex_state = 69},
  [129] = {.lex_state = 210},
  [130] = {.lex_state = 211},
  [131] = {.lex_state = 69},
  [132] = {.lex_state = 69},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 211},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 210},
  [137] = {.lex_state = 210},
  [138] = {.lex_state = 210},
  [139] = {.lex_state = 210},
  [140] = {.lex_state = 210},
  [141] = {.lex_state = 210},
  [142] = {.lex_state = 210},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 69},
  [145] = {.lex_state = 210},
  [146] = {.lex_state = 210},
  [147] = {.lex_state = 210},
  [148] = {.lex_state = 210},
  [149] = {.lex_state = 69},
  [150] = {.lex_state = 210},
  [151] = {.lex_state = 210},
  [152] = {.lex_state = 210},
  [153] = {.lex_state = 69},
  [154] = {.lex_state = 210},
  [155] = {.lex_state = 210},
  [156] = {.lex_state = 69},
  [157] = {.lex_state = 69},
  [158] = {.lex_state = 210},
  [159] = {.lex_state = 210},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 69},
  [162] = {.lex_state = 210},
  [163] = {.lex_state = 210},
  [164] = {.lex_state = 210},
  [165] = {.lex_state = 210},
  [166] = {.lex_state = 69},
  [167] = {.lex_state = 69},
  [168] = {.lex_state = 210},
  [169] = {.lex_state = 69},
  [170] = {.lex_state = 210},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 210},
  [173] = {.lex_state = 210},
  [174] = {.lex_state = 210},
  [175] = {.lex_state = 210},
  [176] = {.lex_state = 210},
  [177] = {.lex_state = 210},
  [178] = {.lex_state = 210},
  [179] = {.lex_state = 210},
  [180] = {.lex_state = 210},
  [181] = {.lex_state = 69},
  [182] = {.lex_state = 210},
  [183] = {.lex_state = 69},
  [184] = {.lex_state = 210},
  [185] = {.lex_state = 210},
  [186] = {.lex_state = 210},
  [187] = {.lex_state = 210},
  [188] = {.lex_state = 210},
  [189] = {.lex_state = 210},
  [190] = {.lex_state = 210},
  [191] = {.lex_state = 210},
  [192] = {.lex_state = 69},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 69},
  [195] = {.lex_state = 69},
  [196] = {.lex_state = 210},
  [197] = {.lex_state = 210},
  [198] = {.lex_state = 210},
  [199] = {.lex_state = 210},
  [200] = {.lex_state = 210},
  [201] = {.lex_state = 210},
  [202] = {.lex_state = 210},
  [203] = {.lex_state = 210},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 210},
  [206] = {.lex_state = 210},
  [207] = {.lex_state = 210},
  [208] = {.lex_state = 69},
  [209] = {.lex_state = 210},
  [210] = {.lex_state = 210},
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
    [sym_comment] = STATE(17),
    [sym_command] = STATE(17),
    [sym_execute_command] = STATE(62),
    [sym_command_name] = STATE(33),
    [aux_sym_root_repeat1] = STATE(17),
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
    STATE(144), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
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
    STATE(192), 11,
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
    STATE(144), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
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
    STATE(192), 11,
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
    STATE(144), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
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
    STATE(192), 11,
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
    STATE(144), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
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
    STATE(192), 11,
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
    STATE(144), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(39), 10,
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
    STATE(30), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    ACTIONS(64), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(46), 2,
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
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    ACTIONS(75), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(55), 2,
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
    STATE(203), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
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
    STATE(203), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
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
    STATE(203), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
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
    STATE(203), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
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
    STATE(199), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
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
    STATE(203), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [629] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(210), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [659] = 9,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_execute,
    ACTIONS(106), 1,
      sym__line_separator,
    ACTIONS(109), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(62), 1,
      sym_execute_command,
    STATE(16), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [689] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym__line_separator,
    STATE(33), 1,
      sym_command_name,
    STATE(62), 1,
      sym_execute_command,
    STATE(16), 3,
      sym_comment,
      sym_command,
      aux_sym_root_repeat1,
  [719] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_container_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    STATE(93), 1,
      aux_sym_path_repeat1,
    STATE(46), 2,
      sym_item_nbt,
      sym_item_state,
  [748] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(45), 1,
      sym_nbt_object,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(55), 2,
      sym_item_nbt,
      sym_item_state,
  [777] = 7,
    ACTIONS(118), 1,
      aux_sym_command_name_token1,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(126), 1,
      aux_sym_selector_number_token3,
    STATE(152), 1,
      sym_selector_value,
    ACTIONS(122), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(136), 2,
      sym_boolean,
      sym_selector_number,
  [802] = 4,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_selector_option_section,
    ACTIONS(130), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [820] = 4,
    ACTIONS(68), 1,
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
  [838] = 4,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(23), 1,
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
  [856] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_container_repeat1,
    ACTIONS(147), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [874] = 4,
    ACTIONS(151), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [891] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [908] = 4,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [925] = 2,
    ACTIONS(140), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [938] = 3,
    ACTIONS(173), 1,
      sym_number,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [953] = 4,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [970] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym_command_repeat1,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [987] = 4,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1004] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(195), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1021] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym_command_repeat1,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1038] = 2,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1050] = 2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1062] = 2,
    ACTIONS(207), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1074] = 2,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1086] = 2,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1098] = 3,
    ACTIONS(213), 1,
      anon_sym_,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1112] = 2,
    ACTIONS(218), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1124] = 2,
    ACTIONS(222), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1136] = 2,
    ACTIONS(226), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1148] = 2,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1160] = 2,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1172] = 2,
    ACTIONS(75), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1184] = 2,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1196] = 2,
    ACTIONS(238), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1208] = 2,
    ACTIONS(242), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1220] = 2,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1232] = 2,
    ACTIONS(250), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1244] = 2,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1256] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1268] = 2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1280] = 2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1292] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1304] = 3,
    ACTIONS(274), 1,
      anon_sym_,
    ACTIONS(277), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1318] = 6,
    ACTIONS(279), 1,
      aux_sym_command_name_token1,
    ACTIONS(281), 1,
      anon_sym_nbt,
    ACTIONS(283), 1,
      anon_sym_scores,
    STATE(189), 1,
      sym_selector_key,
    STATE(190), 1,
      sym_selector_option,
    STATE(186), 2,
      sym_selector_nbt,
      sym_selector_score,
  [1338] = 2,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1350] = 2,
    ACTIONS(287), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1362] = 2,
    ACTIONS(291), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1373] = 2,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1384] = 2,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1395] = 2,
    ACTIONS(303), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(301), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1406] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(70), 2,
      sym_command,
      sym_execute_command,
  [1423] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(63), 2,
      sym_command,
      sym_execute_command,
  [1440] = 2,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1451] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      sym_command_name,
    STATE(61), 2,
      sym_command,
      sym_execute_command,
  [1468] = 5,
    ACTIONS(309), 1,
      aux_sym_command_name_token1,
    ACTIONS(311), 1,
      sym_number,
    STATE(130), 1,
      sym_boolean,
    STATE(134), 1,
      sym_state_value,
    ACTIONS(313), 2,
      anon_sym_true,
      anon_sym_false,
  [1485] = 2,
    ACTIONS(317), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(315), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1496] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_nbt_object_key,
    STATE(202), 1,
      sym_string,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1513] = 4,
    STATE(137), 1,
      sym_selector_number,
    STATE(172), 1,
      sym_selector_score_value,
    ACTIONS(124), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(126), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1528] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_nbt_object_key,
    STATE(202), 1,
      sym_string,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1545] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_nbt_object_key,
    STATE(202), 1,
      sym_string,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1562] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_nbt_object_key,
    STATE(202), 1,
      sym_string,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1579] = 4,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_string_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    STATE(77), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1593] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    STATE(80), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1607] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(81), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1621] = 1,
    ACTIONS(343), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [1629] = 4,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_string_token1,
    ACTIONS(350), 1,
      anon_sym_BSLASH,
    STATE(80), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1643] = 4,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(80), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1657] = 4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_nbt_object_key,
    STATE(202), 1,
      sym_string,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1671] = 4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_string,
    STATE(209), 1,
      sym_nbt_object_key,
    ACTIONS(319), 2,
      sym_number,
      aux_sym_nbt_object_key_token1,
  [1685] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_number,
    STATE(43), 1,
      sym_coordinate,
  [1698] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_number,
    STATE(57), 1,
      sym_coordinate,
  [1711] = 3,
    ACTIONS(357), 1,
      aux_sym_command_name_token1,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_state_key,
  [1721] = 3,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_selector_score_key,
  [1731] = 3,
    ACTIONS(365), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
  [1741] = 3,
    ACTIONS(371), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym__selector_nbt_repeat1,
  [1751] = 2,
    ACTIONS(377), 1,
      aux_sym_string_token1,
    ACTIONS(375), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1759] = 3,
    ACTIONS(379), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_selector_option_section_repeat1,
  [1769] = 3,
    ACTIONS(371), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym__selector_nbt_repeat1,
  [1779] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym_path_repeat1,
  [1789] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym_path_repeat1,
  [1799] = 3,
    ACTIONS(357), 1,
      aux_sym_command_name_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_state_key,
  [1809] = 3,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_selector_score_key,
  [1819] = 3,
    ACTIONS(379), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_selector_option_section_repeat1,
  [1829] = 3,
    ACTIONS(391), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_selector_option_section_repeat1,
  [1839] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(396), 1,
      anon_sym_execute,
    STATE(34), 1,
      sym_command_name,
  [1849] = 3,
    ACTIONS(398), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym__selector_nbt_repeat1,
  [1859] = 3,
    ACTIONS(403), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
  [1869] = 2,
    ACTIONS(409), 1,
      aux_sym_selector_option_section_token1,
    STATE(113), 1,
      aux_sym_nbt_array_repeat1,
  [1876] = 2,
    ACTIONS(411), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym__selector_nbt_repeat1,
  [1883] = 2,
    ACTIONS(414), 1,
      anon_sym_,
    STATE(107), 1,
      aux_sym_execute_command_repeat1,
  [1890] = 2,
    ACTIONS(414), 1,
      anon_sym_,
    STATE(131), 1,
      aux_sym_execute_command_repeat1,
  [1897] = 2,
    ACTIONS(416), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym_item_state_repeat1,
  [1904] = 2,
    ACTIONS(419), 1,
      anon_sym_,
    STATE(131), 1,
      aux_sym_execute_command_repeat1,
  [1911] = 2,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      aux_sym_selector_option_section_token1,
  [1918] = 2,
    ACTIONS(421), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
  [1925] = 2,
    ACTIONS(425), 1,
      aux_sym_selector_option_section_token1,
    STATE(114), 1,
      aux_sym__selector_nbt_repeat1,
  [1932] = 2,
    ACTIONS(427), 1,
      aux_sym_selector_option_section_token1,
    STATE(111), 1,
      aux_sym_nbt_array_repeat1,
  [1939] = 2,
    ACTIONS(430), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(432), 1,
      anon_sym_COMMA,
  [1946] = 2,
    ACTIONS(434), 1,
      aux_sym_selector_option_section_token1,
    STATE(111), 1,
      aux_sym_nbt_array_repeat1,
  [1953] = 2,
    ACTIONS(436), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym__selector_nbt_repeat1,
  [1960] = 2,
    ACTIONS(361), 1,
      aux_sym_command_name_token1,
    STATE(164), 1,
      sym_selector_score_key,
  [1967] = 2,
    ACTIONS(438), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(440), 1,
      anon_sym_COMMA,
  [1974] = 2,
    ACTIONS(442), 1,
      aux_sym_selector_option_section_token1,
    STATE(123), 1,
      aux_sym_nbt_array_repeat1,
  [1981] = 2,
    ACTIONS(444), 1,
      aux_sym_selector_option_section_token1,
    STATE(118), 1,
      aux_sym__selector_score_object_repeat1,
  [1988] = 2,
    ACTIONS(447), 1,
      aux_sym_selector_option_section_token1,
    STATE(106), 1,
      aux_sym_item_state_repeat1,
  [1995] = 2,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    STATE(103), 1,
      aux_sym__selector_nbt_repeat1,
  [2002] = 2,
    ACTIONS(451), 1,
      aux_sym_command_name_token1,
    ACTIONS(453), 1,
      sym_number,
  [2009] = 2,
    ACTIONS(455), 1,
      aux_sym_selector_option_section_token1,
    STATE(118), 1,
      aux_sym__selector_score_object_repeat1,
  [2016] = 2,
    ACTIONS(457), 1,
      aux_sym_selector_option_section_token1,
    STATE(111), 1,
      aux_sym_nbt_array_repeat1,
  [2023] = 2,
    ACTIONS(459), 1,
      aux_sym_selector_option_section_token1,
    STATE(122), 1,
      aux_sym__selector_score_object_repeat1,
  [2030] = 2,
    ACTIONS(357), 1,
      aux_sym_command_name_token1,
    STATE(198), 1,
      sym_state_key,
  [2037] = 2,
    ACTIONS(461), 1,
      aux_sym_selector_option_section_token1,
    STATE(119), 1,
      aux_sym_item_state_repeat1,
  [2044] = 2,
    ACTIONS(403), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [2051] = 2,
    ACTIONS(465), 1,
      anon_sym_,
    STATE(105), 1,
      aux_sym_execute_command_repeat1,
  [2058] = 2,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    STATE(120), 1,
      aux_sym__selector_nbt_repeat1,
  [2065] = 2,
    ACTIONS(469), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(471), 1,
      anon_sym_COMMA,
  [2072] = 2,
    ACTIONS(473), 1,
      anon_sym_,
    STATE(131), 1,
      aux_sym_execute_command_repeat1,
  [2079] = 2,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym__selector_nbt,
  [2086] = 2,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym__selector_score_object,
  [2093] = 2,
    ACTIONS(480), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [2100] = 2,
    ACTIONS(484), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [2107] = 1,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
  [2111] = 1,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
  [2115] = 1,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
  [2119] = 1,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
  [2123] = 1,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
  [2127] = 1,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
  [2131] = 1,
    ACTIONS(500), 1,
      aux_sym_selector_option_section_token1,
  [2135] = 1,
    ACTIONS(502), 1,
      anon_sym_,
  [2139] = 1,
    ACTIONS(504), 1,
      anon_sym_,
  [2143] = 1,
    ACTIONS(506), 1,
      aux_sym_selector_option_section_token1,
  [2147] = 1,
    ACTIONS(508), 1,
      aux_sym_selector_option_section_token1,
  [2151] = 1,
    ACTIONS(510), 1,
      aux_sym_selector_option_section_token1,
  [2155] = 1,
    ACTIONS(512), 1,
      aux_sym_selector_option_section_token1,
  [2159] = 1,
    ACTIONS(514), 1,
      anon_sym_,
  [2163] = 1,
    ACTIONS(516), 1,
      aux_sym_selector_option_section_token1,
  [2167] = 1,
    ACTIONS(519), 1,
      aux_sym_selector_option_section_token1,
  [2171] = 1,
    ACTIONS(521), 1,
      aux_sym_selector_option_section_token1,
  [2175] = 1,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [2179] = 1,
    ACTIONS(525), 1,
      aux_sym_selector_option_section_token1,
  [2183] = 1,
    ACTIONS(527), 1,
      aux_sym_selector_option_section_token1,
  [2187] = 1,
    ACTIONS(529), 1,
      anon_sym_EQ,
  [2191] = 1,
    ACTIONS(531), 1,
      anon_sym_EQ,
  [2195] = 1,
    ACTIONS(423), 1,
      aux_sym_selector_option_section_token1,
  [2199] = 1,
    ACTIONS(533), 1,
      aux_sym_selector_option_section_token1,
  [2203] = 1,
    ACTIONS(535), 1,
      aux_sym_command_name_token1,
  [2207] = 1,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [2211] = 1,
    ACTIONS(539), 1,
      aux_sym_selector_option_section_token1,
  [2215] = 1,
    ACTIONS(541), 1,
      aux_sym_selector_option_section_token1,
  [2219] = 1,
    ACTIONS(543), 1,
      aux_sym_selector_option_section_token1,
  [2223] = 1,
    ACTIONS(545), 1,
      aux_sym_selector_option_section_token1,
  [2227] = 1,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [2231] = 1,
    ACTIONS(549), 1,
      anon_sym_EQ,
  [2235] = 1,
    ACTIONS(551), 1,
      aux_sym_selector_option_section_token1,
  [2239] = 1,
    ACTIONS(553), 1,
      anon_sym_DQUOTE,
  [2243] = 1,
    ACTIONS(555), 1,
      aux_sym_selector_option_section_token1,
  [2247] = 1,
    ACTIONS(557), 1,
      aux_sym_command_name_token1,
  [2251] = 1,
    ACTIONS(559), 1,
      aux_sym_selector_option_section_token1,
  [2255] = 1,
    ACTIONS(561), 1,
      aux_sym_selector_option_section_token1,
  [2259] = 1,
    ACTIONS(563), 1,
      aux_sym_selector_option_section_token1,
  [2263] = 1,
    ACTIONS(565), 1,
      aux_sym_selector_option_section_token1,
  [2267] = 1,
    ACTIONS(567), 1,
      aux_sym_selector_option_section_token1,
  [2271] = 1,
    ACTIONS(201), 1,
      aux_sym_selector_option_section_token1,
  [2275] = 1,
    ACTIONS(209), 1,
      aux_sym_selector_option_section_token1,
  [2279] = 1,
    ACTIONS(569), 1,
      aux_sym_selector_option_section_token1,
  [2283] = 1,
    ACTIONS(244), 1,
      aux_sym_selector_option_section_token1,
  [2287] = 1,
    ACTIONS(173), 1,
      sym_number,
  [2291] = 1,
    ACTIONS(236), 1,
      aux_sym_selector_option_section_token1,
  [2295] = 1,
    ACTIONS(571), 1,
      anon_sym_,
  [2299] = 1,
    ACTIONS(197), 1,
      aux_sym_selector_option_section_token1,
  [2303] = 1,
    ACTIONS(252), 1,
      aux_sym_selector_option_section_token1,
  [2307] = 1,
    ACTIONS(574), 1,
      aux_sym_selector_option_section_token1,
  [2311] = 1,
    ACTIONS(248), 1,
      aux_sym_selector_option_section_token1,
  [2315] = 1,
    ACTIONS(228), 1,
      aux_sym_selector_option_section_token1,
  [2319] = 1,
    ACTIONS(576), 1,
      aux_sym_selector_option_section_token1,
  [2323] = 1,
    ACTIONS(578), 1,
      aux_sym_selector_option_section_token1,
  [2327] = 1,
    ACTIONS(580), 1,
      aux_sym_selector_option_section_token1,
  [2331] = 1,
    ACTIONS(582), 1,
      anon_sym_,
  [2335] = 1,
    ACTIONS(584), 1,
      aux_sym_command_name_token1,
  [2339] = 1,
    ACTIONS(586), 1,
      anon_sym_,
  [2343] = 1,
    ACTIONS(588), 1,
      anon_sym_,
  [2347] = 1,
    ACTIONS(590), 1,
      aux_sym_selector_option_section_token1,
  [2351] = 1,
    ACTIONS(592), 1,
      aux_sym_selector_option_section_token1,
  [2355] = 1,
    ACTIONS(594), 1,
      aux_sym_selector_option_section_token1,
  [2359] = 1,
    ACTIONS(596), 1,
      aux_sym_selector_option_section_token1,
  [2363] = 1,
    ACTIONS(598), 1,
      aux_sym_selector_option_section_token1,
  [2367] = 1,
    ACTIONS(600), 1,
      aux_sym_selector_option_section_token1,
  [2371] = 1,
    ACTIONS(602), 1,
      aux_sym_selector_option_section_token1,
  [2375] = 1,
    ACTIONS(604), 1,
      aux_sym_selector_option_section_token1,
  [2379] = 1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
  [2383] = 1,
    ACTIONS(608), 1,
      aux_sym_selector_option_section_token1,
  [2387] = 1,
    ACTIONS(610), 1,
      aux_sym_selector_option_section_token1,
  [2391] = 1,
    ACTIONS(612), 1,
      aux_sym_selector_option_section_token1,
  [2395] = 1,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [2399] = 1,
    ACTIONS(616), 1,
      aux_sym_selector_option_section_token1,
  [2403] = 1,
    ACTIONS(618), 1,
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
  [SMALL_STATE(19)] = 748,
  [SMALL_STATE(20)] = 777,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 820,
  [SMALL_STATE(23)] = 838,
  [SMALL_STATE(24)] = 856,
  [SMALL_STATE(25)] = 874,
  [SMALL_STATE(26)] = 891,
  [SMALL_STATE(27)] = 908,
  [SMALL_STATE(28)] = 925,
  [SMALL_STATE(29)] = 938,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 970,
  [SMALL_STATE(32)] = 987,
  [SMALL_STATE(33)] = 1004,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1038,
  [SMALL_STATE(36)] = 1050,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1074,
  [SMALL_STATE(39)] = 1086,
  [SMALL_STATE(40)] = 1098,
  [SMALL_STATE(41)] = 1112,
  [SMALL_STATE(42)] = 1124,
  [SMALL_STATE(43)] = 1136,
  [SMALL_STATE(44)] = 1148,
  [SMALL_STATE(45)] = 1160,
  [SMALL_STATE(46)] = 1172,
  [SMALL_STATE(47)] = 1184,
  [SMALL_STATE(48)] = 1196,
  [SMALL_STATE(49)] = 1208,
  [SMALL_STATE(50)] = 1220,
  [SMALL_STATE(51)] = 1232,
  [SMALL_STATE(52)] = 1244,
  [SMALL_STATE(53)] = 1256,
  [SMALL_STATE(54)] = 1268,
  [SMALL_STATE(55)] = 1280,
  [SMALL_STATE(56)] = 1292,
  [SMALL_STATE(57)] = 1304,
  [SMALL_STATE(58)] = 1318,
  [SMALL_STATE(59)] = 1338,
  [SMALL_STATE(60)] = 1350,
  [SMALL_STATE(61)] = 1362,
  [SMALL_STATE(62)] = 1373,
  [SMALL_STATE(63)] = 1384,
  [SMALL_STATE(64)] = 1395,
  [SMALL_STATE(65)] = 1406,
  [SMALL_STATE(66)] = 1423,
  [SMALL_STATE(67)] = 1440,
  [SMALL_STATE(68)] = 1451,
  [SMALL_STATE(69)] = 1468,
  [SMALL_STATE(70)] = 1485,
  [SMALL_STATE(71)] = 1496,
  [SMALL_STATE(72)] = 1513,
  [SMALL_STATE(73)] = 1528,
  [SMALL_STATE(74)] = 1545,
  [SMALL_STATE(75)] = 1562,
  [SMALL_STATE(76)] = 1579,
  [SMALL_STATE(77)] = 1593,
  [SMALL_STATE(78)] = 1607,
  [SMALL_STATE(79)] = 1621,
  [SMALL_STATE(80)] = 1629,
  [SMALL_STATE(81)] = 1643,
  [SMALL_STATE(82)] = 1657,
  [SMALL_STATE(83)] = 1671,
  [SMALL_STATE(84)] = 1685,
  [SMALL_STATE(85)] = 1698,
  [SMALL_STATE(86)] = 1711,
  [SMALL_STATE(87)] = 1721,
  [SMALL_STATE(88)] = 1731,
  [SMALL_STATE(89)] = 1741,
  [SMALL_STATE(90)] = 1751,
  [SMALL_STATE(91)] = 1759,
  [SMALL_STATE(92)] = 1769,
  [SMALL_STATE(93)] = 1779,
  [SMALL_STATE(94)] = 1789,
  [SMALL_STATE(95)] = 1799,
  [SMALL_STATE(96)] = 1809,
  [SMALL_STATE(97)] = 1819,
  [SMALL_STATE(98)] = 1829,
  [SMALL_STATE(99)] = 1839,
  [SMALL_STATE(100)] = 1849,
  [SMALL_STATE(101)] = 1859,
  [SMALL_STATE(102)] = 1869,
  [SMALL_STATE(103)] = 1876,
  [SMALL_STATE(104)] = 1883,
  [SMALL_STATE(105)] = 1890,
  [SMALL_STATE(106)] = 1897,
  [SMALL_STATE(107)] = 1904,
  [SMALL_STATE(108)] = 1911,
  [SMALL_STATE(109)] = 1918,
  [SMALL_STATE(110)] = 1925,
  [SMALL_STATE(111)] = 1932,
  [SMALL_STATE(112)] = 1939,
  [SMALL_STATE(113)] = 1946,
  [SMALL_STATE(114)] = 1953,
  [SMALL_STATE(115)] = 1960,
  [SMALL_STATE(116)] = 1967,
  [SMALL_STATE(117)] = 1974,
  [SMALL_STATE(118)] = 1981,
  [SMALL_STATE(119)] = 1988,
  [SMALL_STATE(120)] = 1995,
  [SMALL_STATE(121)] = 2002,
  [SMALL_STATE(122)] = 2009,
  [SMALL_STATE(123)] = 2016,
  [SMALL_STATE(124)] = 2023,
  [SMALL_STATE(125)] = 2030,
  [SMALL_STATE(126)] = 2037,
  [SMALL_STATE(127)] = 2044,
  [SMALL_STATE(128)] = 2051,
  [SMALL_STATE(129)] = 2058,
  [SMALL_STATE(130)] = 2065,
  [SMALL_STATE(131)] = 2072,
  [SMALL_STATE(132)] = 2079,
  [SMALL_STATE(133)] = 2086,
  [SMALL_STATE(134)] = 2093,
  [SMALL_STATE(135)] = 2100,
  [SMALL_STATE(136)] = 2107,
  [SMALL_STATE(137)] = 2111,
  [SMALL_STATE(138)] = 2115,
  [SMALL_STATE(139)] = 2119,
  [SMALL_STATE(140)] = 2123,
  [SMALL_STATE(141)] = 2127,
  [SMALL_STATE(142)] = 2131,
  [SMALL_STATE(143)] = 2135,
  [SMALL_STATE(144)] = 2139,
  [SMALL_STATE(145)] = 2143,
  [SMALL_STATE(146)] = 2147,
  [SMALL_STATE(147)] = 2151,
  [SMALL_STATE(148)] = 2155,
  [SMALL_STATE(149)] = 2159,
  [SMALL_STATE(150)] = 2163,
  [SMALL_STATE(151)] = 2167,
  [SMALL_STATE(152)] = 2171,
  [SMALL_STATE(153)] = 2175,
  [SMALL_STATE(154)] = 2179,
  [SMALL_STATE(155)] = 2183,
  [SMALL_STATE(156)] = 2187,
  [SMALL_STATE(157)] = 2191,
  [SMALL_STATE(158)] = 2195,
  [SMALL_STATE(159)] = 2199,
  [SMALL_STATE(160)] = 2203,
  [SMALL_STATE(161)] = 2207,
  [SMALL_STATE(162)] = 2211,
  [SMALL_STATE(163)] = 2215,
  [SMALL_STATE(164)] = 2219,
  [SMALL_STATE(165)] = 2223,
  [SMALL_STATE(166)] = 2227,
  [SMALL_STATE(167)] = 2231,
  [SMALL_STATE(168)] = 2235,
  [SMALL_STATE(169)] = 2239,
  [SMALL_STATE(170)] = 2243,
  [SMALL_STATE(171)] = 2247,
  [SMALL_STATE(172)] = 2251,
  [SMALL_STATE(173)] = 2255,
  [SMALL_STATE(174)] = 2259,
  [SMALL_STATE(175)] = 2263,
  [SMALL_STATE(176)] = 2267,
  [SMALL_STATE(177)] = 2271,
  [SMALL_STATE(178)] = 2275,
  [SMALL_STATE(179)] = 2279,
  [SMALL_STATE(180)] = 2283,
  [SMALL_STATE(181)] = 2287,
  [SMALL_STATE(182)] = 2291,
  [SMALL_STATE(183)] = 2295,
  [SMALL_STATE(184)] = 2299,
  [SMALL_STATE(185)] = 2303,
  [SMALL_STATE(186)] = 2307,
  [SMALL_STATE(187)] = 2311,
  [SMALL_STATE(188)] = 2315,
  [SMALL_STATE(189)] = 2319,
  [SMALL_STATE(190)] = 2323,
  [SMALL_STATE(191)] = 2327,
  [SMALL_STATE(192)] = 2331,
  [SMALL_STATE(193)] = 2335,
  [SMALL_STATE(194)] = 2339,
  [SMALL_STATE(195)] = 2343,
  [SMALL_STATE(196)] = 2347,
  [SMALL_STATE(197)] = 2351,
  [SMALL_STATE(198)] = 2355,
  [SMALL_STATE(199)] = 2359,
  [SMALL_STATE(200)] = 2363,
  [SMALL_STATE(201)] = 2367,
  [SMALL_STATE(202)] = 2371,
  [SMALL_STATE(203)] = 2375,
  [SMALL_STATE(204)] = 2379,
  [SMALL_STATE(205)] = 2383,
  [SMALL_STATE(206)] = 2387,
  [SMALL_STATE(207)] = 2391,
  [SMALL_STATE(208)] = 2395,
  [SMALL_STATE(209)] = 2399,
  [SMALL_STATE(210)] = 2403,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(160),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(160),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(67),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(99),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(128),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(16),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(121),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(160),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(160),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(160),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_command_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(84),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(169),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(58),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(83),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 2), SHIFT_REPEAT(82),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(125),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_nbt_repeat1, 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__selector_score_object_repeat1, 7),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 2), SHIFT_REPEAT(115),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_nbt, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_score_object, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__selector_score_object_repeat1, 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_coordinate, 1), REDUCE(aux_sym_execute_command_repeat1, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [606] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
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
