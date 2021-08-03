#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 14

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_SLASH = 2,
  anon_sym_ = 3,
  anon_sym_execute = 4,
  anon_sym_run = 5,
  aux_sym__legacy_execute_token1 = 6,
  anon_sym_detect = 7,
  anon_sym_EQ = 8,
  anon_sym_STAR = 9,
  anon_sym_in = 10,
  anon_sym_if = 11,
  anon_sym_unless = 12,
  anon_sym_facing = 13,
  anon_sym_anchored = 14,
  anon_sym_align = 15,
  anon_sym_at = 16,
  anon_sym_as = 17,
  anon_sym_positioned = 18,
  anon_sym_rotated = 19,
  anon_sym_store = 20,
  sym__line_separator = 21,
  aux_sym_command_name_token1 = 22,
  sym__identifier = 23,
  sym_number = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_TILDE = 27,
  anon_sym_CARET = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_token1 = 30,
  anon_sym_BSLASH = 31,
  anon_sym_AT = 32,
  anon_sym_p = 33,
  anon_sym_a = 34,
  anon_sym_r = 35,
  anon_sym_s = 36,
  anon_sym_e = 37,
  anon_sym_LBRACK = 38,
  aux_sym_selector_option_section_token1 = 39,
  anon_sym_COMMA = 40,
  anon_sym_RBRACK = 41,
  anon_sym_LBRACE = 42,
  anon_sym_COLON = 43,
  anon_sym_RBRACE = 44,
  aux_sym_selector_number_token1 = 45,
  aux_sym_selector_number_token2 = 46,
  aux_sym_selector_number_token3 = 47,
  anon_sym_l = 48,
  anon_sym_d = 49,
  anon_sym_f = 50,
  anon_sym_b = 51,
  aux_sym_item_token1 = 52,
  anon_sym_DOT = 53,
  sym_namespaced_container = 54,
  sym_nbt_path = 55,
  sym_root = 56,
  sym_comment = 57,
  sym_invalid_comment = 58,
  sym_command = 59,
  sym__command_choices = 60,
  sym_execute_command = 61,
  sym__legacy_execute = 62,
  sym_execute_keyword = 63,
  sym_command_name = 64,
  sym_boolean = 65,
  sym_coordinate = 66,
  sym_rotation = 67,
  sym_location = 68,
  sym_string = 69,
  sym__escape_sequence = 70,
  sym_selector = 71,
  sym_selector_option_section = 72,
  sym_selector_option = 73,
  sym_selector_key = 74,
  sym_selector_value = 75,
  sym_selector_nbt = 76,
  sym_selector_score = 77,
  sym_selector_score_key = 78,
  sym_selector_score_value = 79,
  sym_selector_number = 80,
  sym_nbt = 81,
  sym_nbt_object = 82,
  sym_nbt_array = 83,
  sym_nbt_object_key = 84,
  sym_nbt_object_value = 85,
  sym_nbt_number = 86,
  sym_item = 87,
  sym_item_nbt = 88,
  sym_item_state = 89,
  sym_state_key = 90,
  sym_state_value = 91,
  sym_path = 92,
  sym_container = 93,
  aux_sym_root_repeat1 = 94,
  aux_sym_command_repeat1 = 95,
  aux_sym_execute_command_repeat1 = 96,
  aux_sym__legacy_execute_repeat1 = 97,
  aux_sym_string_repeat1 = 98,
  aux_sym_selector_option_section_repeat1 = 99,
  aux_sym_selector_nbt_repeat1 = 100,
  aux_sym_selector_score_repeat1 = 101,
  aux_sym_nbt_object_repeat1 = 102,
  aux_sym_nbt_array_repeat1 = 103,
  aux_sym_item_state_repeat1 = 104,
  aux_sym_path_repeat1 = 105,
  aux_sym_container_repeat1 = 106,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
  [anon_sym_execute] = "command_name",
  [anon_sym_run] = "execute_keyword",
  [aux_sym__legacy_execute_token1] = "_legacy_execute_token1",
  [anon_sym_detect] = " detect ",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_selector_number_token1] = "selector_number_token1",
  [aux_sym_selector_number_token2] = "selector_number_token2",
  [aux_sym_selector_number_token3] = "selector_number_token3",
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
  [sym__legacy_execute] = "execute_command",
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
  [aux_sym__legacy_execute_repeat1] = "_legacy_execute_repeat1",
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
  [aux_sym__legacy_execute_token1] = aux_sym__legacy_execute_token1,
  [anon_sym_detect] = anon_sym_detect,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_selector_number_token1] = aux_sym_selector_number_token1,
  [aux_sym_selector_number_token2] = aux_sym_selector_number_token2,
  [aux_sym_selector_number_token3] = aux_sym_selector_number_token3,
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
  [sym__legacy_execute] = sym_execute_command,
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
  [aux_sym__legacy_execute_repeat1] = aux_sym__legacy_execute_repeat1,
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
  [aux_sym__legacy_execute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_detect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
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
  [sym__legacy_execute] = {
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
  [aux_sym__legacy_execute_repeat1] = {
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
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'b') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == '}') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '}') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '{') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(297);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(308);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 68:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(79);
      if (lookahead == '[') ADVANCE(74);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '~') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(79);
      if (lookahead == '[') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(79);
      if (lookahead == '[') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == ',') ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(79);
      if (lookahead == '[') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 80},
  [33] = {.lex_state = 80},
  [34] = {.lex_state = 80},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 80},
  [39] = {.lex_state = 80},
  [40] = {.lex_state = 80},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 80},
  [44] = {.lex_state = 80},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 80},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 80},
  [51] = {.lex_state = 80},
  [52] = {.lex_state = 80},
  [53] = {.lex_state = 80},
  [54] = {.lex_state = 80},
  [55] = {.lex_state = 80},
  [56] = {.lex_state = 80},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 80},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 80},
  [61] = {.lex_state = 80},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 80},
  [64] = {.lex_state = 80},
  [65] = {.lex_state = 80},
  [66] = {.lex_state = 80},
  [67] = {.lex_state = 80},
  [68] = {.lex_state = 80},
  [69] = {.lex_state = 80},
  [70] = {.lex_state = 80},
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 80},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 80},
  [76] = {.lex_state = 80},
  [77] = {.lex_state = 80},
  [78] = {.lex_state = 80},
  [79] = {.lex_state = 80},
  [80] = {.lex_state = 80},
  [81] = {.lex_state = 80},
  [82] = {.lex_state = 80},
  [83] = {.lex_state = 80},
  [84] = {.lex_state = 80},
  [85] = {.lex_state = 80},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 80},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 80},
  [92] = {.lex_state = 80},
  [93] = {.lex_state = 80},
  [94] = {.lex_state = 80},
  [95] = {.lex_state = 80},
  [96] = {.lex_state = 80},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 80},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 80},
  [101] = {.lex_state = 287},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 80},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 80},
  [116] = {.lex_state = 80},
  [117] = {.lex_state = 80},
  [118] = {.lex_state = 283},
  [119] = {.lex_state = 285},
  [120] = {.lex_state = 80},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 80},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 286},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 80},
  [128] = {.lex_state = 286},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 286},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 80},
  [136] = {.lex_state = 80},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 283},
  [139] = {.lex_state = 283},
  [140] = {.lex_state = 283},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 286},
  [146] = {.lex_state = 283},
  [147] = {.lex_state = 80},
  [148] = {.lex_state = 283},
  [149] = {.lex_state = 283},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 284},
  [152] = {.lex_state = 284},
  [153] = {.lex_state = 284},
  [154] = {.lex_state = 283},
  [155] = {.lex_state = 284},
  [156] = {.lex_state = 283},
  [157] = {.lex_state = 283},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 283},
  [160] = {.lex_state = 283},
  [161] = {.lex_state = 283},
  [162] = {.lex_state = 283},
  [163] = {.lex_state = 283},
  [164] = {.lex_state = 283},
  [165] = {.lex_state = 283},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 80},
  [168] = {.lex_state = 283},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 284},
  [171] = {.lex_state = 284},
  [172] = {.lex_state = 80},
  [173] = {.lex_state = 284},
  [174] = {.lex_state = 284},
  [175] = {.lex_state = 283},
  [176] = {.lex_state = 283},
  [177] = {.lex_state = 80},
  [178] = {.lex_state = 80},
  [179] = {.lex_state = 283},
  [180] = {.lex_state = 283},
  [181] = {.lex_state = 80},
  [182] = {.lex_state = 283},
  [183] = {.lex_state = 283},
  [184] = {.lex_state = 283},
  [185] = {.lex_state = 283},
  [186] = {.lex_state = 283},
  [187] = {.lex_state = 80},
  [188] = {.lex_state = 80},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 80},
  [191] = {.lex_state = 283},
  [192] = {.lex_state = 283},
  [193] = {.lex_state = 80},
  [194] = {.lex_state = 283},
  [195] = {.lex_state = 283},
  [196] = {.lex_state = 283},
  [197] = {.lex_state = 283},
  [198] = {.lex_state = 283},
  [199] = {.lex_state = 283},
  [200] = {.lex_state = 283},
  [201] = {.lex_state = 283},
  [202] = {.lex_state = 283},
  [203] = {.lex_state = 80},
  [204] = {.lex_state = 80},
  [205] = {.lex_state = 283},
  [206] = {.lex_state = 283},
  [207] = {.lex_state = 283},
  [208] = {.lex_state = 283},
  [209] = {.lex_state = 283},
  [210] = {.lex_state = 283},
  [211] = {.lex_state = 283},
  [212] = {.lex_state = 283},
  [213] = {.lex_state = 283},
  [214] = {.lex_state = 80},
  [215] = {.lex_state = 283},
  [216] = {.lex_state = 283},
  [217] = {.lex_state = 283},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 283},
  [220] = {.lex_state = 283},
  [221] = {.lex_state = 283},
  [222] = {.lex_state = 283},
  [223] = {.lex_state = 80},
  [224] = {.lex_state = 80},
  [225] = {.lex_state = 283},
  [226] = {.lex_state = 283},
  [227] = {.lex_state = 283},
  [228] = {.lex_state = 283},
  [229] = {.lex_state = 283},
  [230] = {.lex_state = 283},
  [231] = {.lex_state = 283},
  [232] = {.lex_state = 80},
  [233] = {.lex_state = 283},
  [234] = {.lex_state = 80},
  [235] = {.lex_state = 283},
  [236] = {.lex_state = 283},
  [237] = {.lex_state = 80},
  [238] = {.lex_state = 80},
  [239] = {.lex_state = 80},
  [240] = {.lex_state = 283},
  [241] = {.lex_state = 283},
  [242] = {.lex_state = 283},
  [243] = {.lex_state = 80},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 80},
  [246] = {.lex_state = 80},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 80},
  [249] = {.lex_state = 80},
  [250] = {.lex_state = 80},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 283},
  [253] = {.lex_state = 283},
  [254] = {.lex_state = 80},
  [255] = {.lex_state = 80},
  [256] = {.lex_state = 80},
  [257] = {.lex_state = 80},
  [258] = {.lex_state = 80},
  [259] = {.lex_state = 283},
  [260] = {.lex_state = 283},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_detect] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_root] = STATE(218),
    [sym_comment] = STATE(21),
    [sym_command] = STATE(21),
    [sym_execute_command] = STATE(92),
    [sym__legacy_execute] = STATE(21),
    [sym_command_name] = STATE(38),
    [aux_sym_root_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(11),
    [aux_sym_command_name_token1] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    STATE(248), 1,
      sym_selector,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 11,
      sym_invalid_comment,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [84] = 20,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(248), 1,
      sym_selector,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 11,
      sym_invalid_comment,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_nbt,
      sym_item,
      sym_path,
      sym_container,
  [168] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    ACTIONS(49), 1,
      anon_sym_run,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 12,
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
  [247] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 12,
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
  [326] = 18,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 12,
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
  [405] = 17,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym_namespaced_container,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(25), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 11,
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
    STATE(250), 12,
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
  [481] = 16,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      aux_sym_command_name_token1,
    ACTIONS(55), 1,
      aux_sym_item_token1,
    ACTIONS(57), 1,
      sym_namespaced_container,
    STATE(249), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      sym__identifier,
      sym_nbt_path,
    STATE(60), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(53), 11,
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
  [543] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_container_repeat1,
    STATE(49), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(64), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(68), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [579] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      aux_sym_container_repeat1,
    STATE(37), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(75), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(64), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [615] = 9,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [648] = 9,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [681] = 9,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [714] = 9,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [747] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [777] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [807] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [837] = 8,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(231), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [867] = 8,
    ACTIONS(95), 1,
      aux_sym_command_name_token1,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      aux_sym_selector_number_token3,
    STATE(205), 1,
      sym_selector_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(191), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [897] = 9,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_execute,
    ACTIONS(118), 1,
      sym__line_separator,
    ACTIONS(121), 1,
      aux_sym_command_name_token1,
    STATE(38), 1,
      sym_command_name,
    STATE(92), 1,
      sym_execute_command,
    STATE(20), 4,
      sym_comment,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [928] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      sym__line_separator,
    STATE(38), 1,
      sym_command_name,
    STATE(92), 1,
      sym_execute_command,
    STATE(20), 4,
      sym_comment,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [959] = 9,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_container_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    STATE(123), 1,
      aux_sym_path_repeat1,
    STATE(68), 2,
      sym_item_nbt,
      sym_item_state,
  [988] = 9,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      aux_sym_container_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    STATE(127), 1,
      aux_sym_path_repeat1,
    STATE(64), 2,
      sym_item_nbt,
      sym_item_state,
  [1017] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_selector_option_section,
    ACTIONS(132), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1035] = 5,
    ACTIONS(138), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(150), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(140), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1055] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(29), 1,
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
  [1073] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_container_repeat1,
    ACTIONS(148), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1091] = 5,
    ACTIONS(152), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(136), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1111] = 4,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_container_repeat1,
    ACTIONS(158), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1129] = 4,
    ACTIONS(165), 1,
      anon_sym_,
    STATE(44), 1,
      aux_sym_command_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1146] = 4,
    ACTIONS(171), 1,
      anon_sym_,
    STATE(36), 1,
      aux_sym_command_repeat1,
    ACTIONS(174), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1163] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(140), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1180] = 4,
    ACTIONS(181), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1197] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1214] = 3,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1229] = 4,
    ACTIONS(194), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1246] = 4,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(202), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1263] = 4,
    ACTIONS(165), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat1,
    ACTIONS(174), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1280] = 4,
    ACTIONS(204), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1297] = 4,
    ACTIONS(194), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_command_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1314] = 4,
    ACTIONS(209), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(212), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1331] = 8,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(216), 1,
      aux_sym_command_name_token1,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_selector_score_key,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
  [1356] = 4,
    ACTIONS(224), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(227), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1373] = 4,
    ACTIONS(165), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1390] = 4,
    ACTIONS(231), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1407] = 8,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(216), 1,
      aux_sym_command_name_token1,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(195), 1,
      sym_selector_score_key,
    STATE(228), 1,
      sym_string,
  [1432] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(212), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1449] = 2,
    ACTIONS(158), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1462] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1479] = 4,
    ACTIONS(204), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1496] = 4,
    ACTIONS(165), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1513] = 4,
    ACTIONS(247), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(250), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_,
      sym__line_separator,
  [1530] = 2,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1542] = 2,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1554] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1566] = 2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1578] = 7,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(216), 1,
      aux_sym_command_name_token1,
    ACTIONS(218), 1,
      sym_number,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(195), 1,
      sym_selector_score_key,
    STATE(228), 1,
      sym_string,
  [1600] = 2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1612] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1624] = 2,
    ACTIONS(274), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1636] = 3,
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
  [1650] = 2,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1662] = 2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1674] = 2,
    ACTIONS(64), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1686] = 2,
    ACTIONS(293), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1698] = 2,
    ACTIONS(297), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(295), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1710] = 2,
    ACTIONS(301), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(299), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1722] = 2,
    ACTIONS(305), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1734] = 2,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1746] = 2,
    ACTIONS(313), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(311), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1758] = 2,
    ACTIONS(317), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(315), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1770] = 3,
    ACTIONS(321), 1,
      anon_sym_,
    ACTIONS(324), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(319), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1784] = 2,
    ACTIONS(328), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(326), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1796] = 2,
    ACTIONS(332), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(330), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1808] = 2,
    ACTIONS(336), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(334), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1820] = 2,
    ACTIONS(340), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1832] = 2,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1844] = 2,
    ACTIONS(344), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1856] = 2,
    ACTIONS(250), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1868] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1880] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1892] = 2,
    ACTIONS(356), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(354), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [1903] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(360), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(93), 2,
      sym_command,
      sym_execute_command,
  [1920] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_,
    STATE(63), 1,
      sym_nbt_object,
    STATE(64), 2,
      sym_item_nbt,
      sym_item_state,
  [1937] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_nbt_object,
    STATE(68), 2,
      sym_item_nbt,
      sym_item_state,
  [1954] = 5,
    ACTIONS(362), 1,
      aux_sym_command_name_token1,
    ACTIONS(364), 1,
      sym_number,
    STATE(151), 1,
      sym_boolean,
    STATE(152), 1,
      sym_state_value,
    ACTIONS(366), 2,
      anon_sym_true,
      anon_sym_false,
  [1971] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(218), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1988] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(218), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2005] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(372), 1,
      anon_sym_SLASH,
    ACTIONS(374), 1,
      anon_sym_execute,
    STATE(31), 1,
      sym_command_name,
    STATE(62), 2,
      sym_command,
      sym__legacy_execute,
  [2022] = 5,
    ACTIONS(376), 1,
      aux_sym_command_name_token1,
    ACTIONS(378), 1,
      sym_number,
    STATE(178), 1,
      sym_state_value,
    STATE(243), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2039] = 2,
    ACTIONS(382), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(380), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [2050] = 2,
    ACTIONS(386), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(384), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [2061] = 2,
    ACTIONS(390), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(388), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [2072] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(360), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(95), 2,
      sym_command,
      sym_execute_command,
  [2089] = 2,
    ACTIONS(394), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(392), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      sym__line_separator,
  [2100] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(372), 1,
      anon_sym_SLASH,
    ACTIONS(374), 1,
      anon_sym_execute,
    STATE(31), 1,
      sym_command_name,
    STATE(59), 2,
      sym_command,
      sym__legacy_execute,
  [2117] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(218), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2134] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(372), 1,
      anon_sym_SLASH,
    ACTIONS(374), 1,
      anon_sym_execute,
    STATE(31), 1,
      sym_command_name,
    STATE(65), 2,
      sym_command,
      sym__legacy_execute,
  [2151] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(218), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2168] = 5,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(360), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(82), 2,
      sym_command,
      sym_execute_command,
  [2185] = 2,
    ACTIONS(402), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(400), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2196] = 4,
    STATE(208), 1,
      sym_selector_score_value,
    STATE(209), 1,
      sym_selector_number,
    ACTIONS(103), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(105), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2211] = 4,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      aux_sym_string_token1,
    ACTIONS(409), 1,
      anon_sym_BSLASH,
    STATE(103), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2225] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(141), 1,
      sym_location,
    STATE(232), 1,
      sym_coordinate,
  [2241] = 4,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_string_token1,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    STATE(103), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2255] = 4,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      aux_sym_string_token1,
    STATE(107), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2269] = 4,
    ACTIONS(416), 1,
      aux_sym_string_token1,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(103), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2283] = 4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(218), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2297] = 4,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      aux_sym_string_token1,
    STATE(105), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2311] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(223), 1,
      sym_location,
    STATE(256), 1,
      sym_coordinate,
  [2327] = 1,
    ACTIONS(430), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2335] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(238), 1,
      sym_coordinate,
  [2348] = 4,
    ACTIONS(432), 1,
      sym_number,
    ACTIONS(434), 1,
      anon_sym_TILDE,
    ACTIONS(436), 1,
      anon_sym_CARET,
    STATE(166), 1,
      sym_coordinate,
  [2361] = 3,
    ACTIONS(440), 1,
      aux_sym_command_name_token1,
    STATE(188), 1,
      sym_state_key,
    ACTIONS(438), 2,
      anon_sym_STAR,
      sym_number,
  [2372] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(61), 1,
      sym_coordinate,
  [2385] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(75), 1,
      sym_coordinate,
  [2398] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      sym_number,
    STATE(224), 1,
      sym_coordinate,
  [2411] = 3,
    ACTIONS(442), 1,
      aux_sym_selector_option_section_token1,
    STATE(159), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(160), 1,
      aux_sym_selector_score_repeat1,
  [2421] = 3,
    ACTIONS(444), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
  [2431] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(450), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2441] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(452), 1,
      anon_sym_execute,
    STATE(40), 1,
      sym_command_name,
  [2451] = 3,
    ACTIONS(454), 1,
      aux_sym_command_name_token1,
    STATE(175), 1,
      sym_selector_option,
    STATE(219), 1,
      sym_selector_key,
  [2461] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [2471] = 3,
    ACTIONS(456), 1,
      aux_sym_command_name_token1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_selector_score_key,
  [2481] = 3,
    ACTIONS(460), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
  [2491] = 3,
    ACTIONS(464), 1,
      aux_sym_command_name_token1,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_state_key,
  [2501] = 3,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [2511] = 3,
    ACTIONS(460), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_selector_option_section_repeat1,
  [2521] = 3,
    ACTIONS(464), 1,
      aux_sym_command_name_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_state_key,
  [2531] = 3,
    ACTIONS(188), 1,
      anon_sym_detect,
    ACTIONS(190), 1,
      anon_sym_,
    ACTIONS(472), 1,
      sym_number,
  [2541] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(474), 1,
      aux_sym__legacy_execute_token1,
    STATE(257), 1,
      sym_selector,
  [2551] = 3,
    ACTIONS(476), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
  [2561] = 3,
    ACTIONS(481), 1,
      aux_sym_command_name_token1,
    ACTIONS(483), 1,
      aux_sym_item_token1,
    STATE(190), 1,
      sym_item,
  [2571] = 2,
    ACTIONS(487), 1,
      aux_sym_string_token1,
    ACTIONS(485), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2579] = 3,
    ACTIONS(13), 1,
      aux_sym_command_name_token1,
    ACTIONS(489), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2589] = 2,
    ACTIONS(491), 1,
      anon_sym_,
    STATE(147), 1,
      aux_sym_execute_command_repeat1,
  [2596] = 2,
    ACTIONS(295), 1,
      anon_sym_detect,
    ACTIONS(297), 1,
      anon_sym_,
  [2603] = 2,
    ACTIONS(493), 1,
      aux_sym_selector_option_section_token1,
    STATE(148), 1,
      aux_sym_nbt_array_repeat1,
  [2610] = 2,
    ACTIONS(495), 1,
      aux_sym_selector_option_section_token1,
    STATE(140), 1,
      aux_sym_item_state_repeat1,
  [2617] = 2,
    ACTIONS(497), 1,
      aux_sym_selector_option_section_token1,
    STATE(161), 1,
      aux_sym_item_state_repeat1,
  [2624] = 2,
    ACTIONS(499), 1,
      anon_sym_,
    ACTIONS(501), 1,
      anon_sym_detect,
  [2631] = 2,
    ACTIONS(503), 1,
      anon_sym_,
    STATE(150), 1,
      aux_sym_execute_command_repeat1,
  [2638] = 2,
    ACTIONS(464), 1,
      aux_sym_command_name_token1,
    STATE(221), 1,
      sym_state_key,
  [2645] = 2,
    ACTIONS(188), 1,
      anon_sym_detect,
    ACTIONS(190), 1,
      anon_sym_,
  [2652] = 2,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
  [2659] = 2,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_nbt_object_repeat1,
  [2666] = 2,
    ACTIONS(512), 1,
      anon_sym_,
    STATE(147), 1,
      aux_sym_execute_command_repeat1,
  [2673] = 2,
    ACTIONS(515), 1,
      aux_sym_selector_option_section_token1,
    STATE(148), 1,
      aux_sym_nbt_array_repeat1,
  [2680] = 2,
    ACTIONS(518), 1,
      aux_sym_selector_option_section_token1,
    STATE(168), 1,
      aux_sym_nbt_object_repeat1,
  [2687] = 2,
    ACTIONS(520), 1,
      anon_sym_,
    STATE(147), 1,
      aux_sym_execute_command_repeat1,
  [2694] = 2,
    ACTIONS(522), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(524), 1,
      anon_sym_COMMA,
  [2701] = 2,
    ACTIONS(526), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(528), 1,
      anon_sym_COMMA,
  [2708] = 2,
    ACTIONS(530), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [2715] = 2,
    ACTIONS(534), 1,
      aux_sym_selector_option_section_token1,
    STATE(164), 1,
      aux_sym_nbt_array_repeat1,
  [2722] = 2,
    ACTIONS(536), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
  [2729] = 2,
    ACTIONS(540), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_nbt_object_repeat1,
  [2736] = 2,
    ACTIONS(542), 1,
      aux_sym_selector_option_section_token1,
    STATE(138), 1,
      aux_sym_nbt_array_repeat1,
  [2743] = 2,
    ACTIONS(544), 1,
      aux_sym_command_name_token1,
    ACTIONS(546), 1,
      sym_number,
  [2750] = 2,
    ACTIONS(548), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_nbt_repeat1,
  [2757] = 2,
    ACTIONS(550), 1,
      aux_sym_selector_option_section_token1,
    STATE(165), 1,
      aux_sym_selector_score_repeat1,
  [2764] = 2,
    ACTIONS(552), 1,
      aux_sym_selector_option_section_token1,
    STATE(161), 1,
      aux_sym_item_state_repeat1,
  [2771] = 2,
    ACTIONS(555), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_nbt_object_repeat1,
  [2778] = 2,
    ACTIONS(557), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_nbt_repeat1,
  [2785] = 2,
    ACTIONS(560), 1,
      aux_sym_selector_option_section_token1,
    STATE(148), 1,
      aux_sym_nbt_array_repeat1,
  [2792] = 2,
    ACTIONS(562), 1,
      aux_sym_selector_option_section_token1,
    STATE(165), 1,
      aux_sym_selector_score_repeat1,
  [2799] = 2,
    ACTIONS(334), 1,
      anon_sym_detect,
    ACTIONS(336), 1,
      anon_sym_,
  [2806] = 2,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [2813] = 2,
    ACTIONS(569), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_nbt_object_repeat1,
  [2820] = 2,
    ACTIONS(456), 1,
      aux_sym_command_name_token1,
    STATE(198), 1,
      sym_selector_score_key,
  [2827] = 2,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      aux_sym_selector_option_section_token1,
  [2834] = 2,
    ACTIONS(571), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [2841] = 2,
    ACTIONS(520), 1,
      anon_sym_,
    STATE(136), 1,
      aux_sym_execute_command_repeat1,
  [2848] = 2,
    ACTIONS(575), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(577), 1,
      anon_sym_COMMA,
  [2855] = 2,
    ACTIONS(579), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [2862] = 1,
    ACTIONS(583), 1,
      aux_sym_selector_option_section_token1,
  [2866] = 1,
    ACTIONS(585), 1,
      aux_sym_selector_option_section_token1,
  [2870] = 1,
    ACTIONS(587), 1,
      anon_sym_EQ,
  [2874] = 1,
    ACTIONS(589), 1,
      anon_sym_,
  [2878] = 1,
    ACTIONS(591), 1,
      aux_sym_selector_option_section_token1,
  [2882] = 1,
    ACTIONS(593), 1,
      aux_sym_selector_option_section_token1,
  [2886] = 1,
    ACTIONS(595), 1,
      anon_sym_COLON,
  [2890] = 1,
    ACTIONS(597), 1,
      aux_sym_selector_option_section_token1,
  [2894] = 1,
    ACTIONS(599), 1,
      aux_sym_selector_option_section_token1,
  [2898] = 1,
    ACTIONS(601), 1,
      aux_sym_selector_option_section_token1,
  [2902] = 1,
    ACTIONS(604), 1,
      aux_sym_selector_option_section_token1,
  [2906] = 1,
    ACTIONS(606), 1,
      aux_sym_selector_option_section_token1,
  [2910] = 1,
    ACTIONS(608), 1,
      anon_sym_,
  [2914] = 1,
    ACTIONS(610), 1,
      anon_sym_EQ,
  [2918] = 1,
    ACTIONS(612), 1,
      aux_sym_command_name_token1,
  [2922] = 1,
    ACTIONS(614), 1,
      anon_sym_,
  [2926] = 1,
    ACTIONS(616), 1,
      aux_sym_selector_option_section_token1,
  [2930] = 1,
    ACTIONS(618), 1,
      aux_sym_selector_option_section_token1,
  [2934] = 1,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [2938] = 1,
    ACTIONS(623), 1,
      aux_sym_selector_option_section_token1,
  [2942] = 1,
    ACTIONS(625), 1,
      aux_sym_selector_option_section_token1,
  [2946] = 1,
    ACTIONS(627), 1,
      aux_sym_selector_option_section_token1,
  [2950] = 1,
    ACTIONS(629), 1,
      aux_sym_selector_option_section_token1,
  [2954] = 1,
    ACTIONS(631), 1,
      aux_sym_selector_option_section_token1,
  [2958] = 1,
    ACTIONS(633), 1,
      aux_sym_selector_option_section_token1,
  [2962] = 1,
    ACTIONS(635), 1,
      aux_sym_selector_option_section_token1,
  [2966] = 1,
    ACTIONS(637), 1,
      aux_sym_selector_option_section_token1,
  [2970] = 1,
    ACTIONS(639), 1,
      aux_sym_selector_option_section_token1,
  [2974] = 1,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [2978] = 1,
    ACTIONS(565), 1,
      anon_sym_EQ,
  [2982] = 1,
    ACTIONS(641), 1,
      aux_sym_selector_option_section_token1,
  [2986] = 1,
    ACTIONS(643), 1,
      aux_sym_selector_option_section_token1,
  [2990] = 1,
    ACTIONS(645), 1,
      aux_sym_selector_option_section_token1,
  [2994] = 1,
    ACTIONS(647), 1,
      aux_sym_selector_option_section_token1,
  [2998] = 1,
    ACTIONS(649), 1,
      aux_sym_selector_option_section_token1,
  [3002] = 1,
    ACTIONS(651), 1,
      aux_sym_selector_option_section_token1,
  [3006] = 1,
    ACTIONS(653), 1,
      aux_sym_selector_option_section_token1,
  [3010] = 1,
    ACTIONS(655), 1,
      aux_sym_selector_option_section_token1,
  [3014] = 1,
    ACTIONS(657), 1,
      aux_sym_selector_option_section_token1,
  [3018] = 1,
    ACTIONS(659), 1,
      anon_sym_EQ,
  [3022] = 1,
    ACTIONS(661), 1,
      aux_sym_selector_option_section_token1,
  [3026] = 1,
    ACTIONS(663), 1,
      aux_sym_selector_option_section_token1,
  [3030] = 1,
    ACTIONS(665), 1,
      aux_sym_selector_option_section_token1,
  [3034] = 1,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
  [3038] = 1,
    ACTIONS(669), 1,
      aux_sym_selector_option_section_token1,
  [3042] = 1,
    ACTIONS(671), 1,
      aux_sym_selector_option_section_token1,
  [3046] = 1,
    ACTIONS(673), 1,
      aux_sym_selector_option_section_token1,
  [3050] = 1,
    ACTIONS(675), 1,
      aux_sym_selector_option_section_token1,
  [3054] = 1,
    ACTIONS(677), 1,
      anon_sym_,
  [3058] = 1,
    ACTIONS(679), 1,
      anon_sym_,
  [3062] = 1,
    ACTIONS(315), 1,
      aux_sym_selector_option_section_token1,
  [3066] = 1,
    ACTIONS(681), 1,
      aux_sym_selector_option_section_token1,
  [3070] = 1,
    ACTIONS(272), 1,
      aux_sym_selector_option_section_token1,
  [3074] = 1,
    ACTIONS(683), 1,
      aux_sym_selector_option_section_token1,
  [3078] = 1,
    ACTIONS(685), 1,
      aux_sym_selector_option_section_token1,
  [3082] = 1,
    ACTIONS(299), 1,
      aux_sym_selector_option_section_token1,
  [3086] = 1,
    ACTIONS(687), 1,
      aux_sym_selector_option_section_token1,
  [3090] = 1,
    ACTIONS(689), 1,
      anon_sym_,
  [3094] = 1,
    ACTIONS(338), 1,
      aux_sym_selector_option_section_token1,
  [3098] = 1,
    ACTIONS(691), 1,
      anon_sym_,
  [3102] = 1,
    ACTIONS(260), 1,
      aux_sym_selector_option_section_token1,
  [3106] = 1,
    ACTIONS(264), 1,
      aux_sym_selector_option_section_token1,
  [3110] = 1,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
  [3114] = 1,
    ACTIONS(695), 1,
      anon_sym_,
  [3118] = 1,
    ACTIONS(675), 1,
      anon_sym_EQ,
  [3122] = 1,
    ACTIONS(346), 1,
      aux_sym_selector_option_section_token1,
  [3126] = 1,
    ACTIONS(252), 1,
      aux_sym_selector_option_section_token1,
  [3130] = 1,
    ACTIONS(697), 1,
      aux_sym_selector_option_section_token1,
  [3134] = 1,
    ACTIONS(524), 1,
      anon_sym_,
  [3138] = 1,
    ACTIONS(699), 1,
      aux_sym_command_name_token1,
  [3142] = 1,
    ACTIONS(472), 1,
      sym_number,
  [3146] = 1,
    ACTIONS(701), 1,
      anon_sym_,
  [3150] = 1,
    ACTIONS(703), 1,
      aux_sym_command_name_token1,
  [3154] = 1,
    ACTIONS(705), 1,
      anon_sym_,
  [3158] = 1,
    ACTIONS(708), 1,
      anon_sym_,
  [3162] = 1,
    ACTIONS(710), 1,
      anon_sym_,
  [3166] = 1,
    ACTIONS(712), 1,
      aux_sym_command_name_token1,
  [3170] = 1,
    ACTIONS(714), 1,
      aux_sym_selector_option_section_token1,
  [3174] = 1,
    ACTIONS(716), 1,
      aux_sym_selector_option_section_token1,
  [3178] = 1,
    ACTIONS(192), 1,
      sym_number,
  [3182] = 1,
    ACTIONS(718), 1,
      anon_sym_,
  [3186] = 1,
    ACTIONS(720), 1,
      anon_sym_,
  [3190] = 1,
    ACTIONS(722), 1,
      anon_sym_,
  [3194] = 1,
    ACTIONS(724), 1,
      anon_sym_,
  [3198] = 1,
    ACTIONS(726), 1,
      aux_sym_selector_option_section_token1,
  [3202] = 1,
    ACTIONS(728), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 247,
  [SMALL_STATE(6)] = 326,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 481,
  [SMALL_STATE(9)] = 543,
  [SMALL_STATE(10)] = 579,
  [SMALL_STATE(11)] = 615,
  [SMALL_STATE(12)] = 648,
  [SMALL_STATE(13)] = 681,
  [SMALL_STATE(14)] = 714,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 777,
  [SMALL_STATE(17)] = 807,
  [SMALL_STATE(18)] = 837,
  [SMALL_STATE(19)] = 867,
  [SMALL_STATE(20)] = 897,
  [SMALL_STATE(21)] = 928,
  [SMALL_STATE(22)] = 959,
  [SMALL_STATE(23)] = 988,
  [SMALL_STATE(24)] = 1017,
  [SMALL_STATE(25)] = 1035,
  [SMALL_STATE(26)] = 1055,
  [SMALL_STATE(27)] = 1073,
  [SMALL_STATE(28)] = 1091,
  [SMALL_STATE(29)] = 1111,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1146,
  [SMALL_STATE(32)] = 1163,
  [SMALL_STATE(33)] = 1180,
  [SMALL_STATE(34)] = 1197,
  [SMALL_STATE(35)] = 1214,
  [SMALL_STATE(36)] = 1229,
  [SMALL_STATE(37)] = 1246,
  [SMALL_STATE(38)] = 1263,
  [SMALL_STATE(39)] = 1280,
  [SMALL_STATE(40)] = 1297,
  [SMALL_STATE(41)] = 1314,
  [SMALL_STATE(42)] = 1331,
  [SMALL_STATE(43)] = 1356,
  [SMALL_STATE(44)] = 1373,
  [SMALL_STATE(45)] = 1390,
  [SMALL_STATE(46)] = 1407,
  [SMALL_STATE(47)] = 1432,
  [SMALL_STATE(48)] = 1449,
  [SMALL_STATE(49)] = 1462,
  [SMALL_STATE(50)] = 1479,
  [SMALL_STATE(51)] = 1496,
  [SMALL_STATE(52)] = 1513,
  [SMALL_STATE(53)] = 1530,
  [SMALL_STATE(54)] = 1542,
  [SMALL_STATE(55)] = 1554,
  [SMALL_STATE(56)] = 1566,
  [SMALL_STATE(57)] = 1578,
  [SMALL_STATE(58)] = 1600,
  [SMALL_STATE(59)] = 1612,
  [SMALL_STATE(60)] = 1624,
  [SMALL_STATE(61)] = 1636,
  [SMALL_STATE(62)] = 1650,
  [SMALL_STATE(63)] = 1662,
  [SMALL_STATE(64)] = 1674,
  [SMALL_STATE(65)] = 1686,
  [SMALL_STATE(66)] = 1698,
  [SMALL_STATE(67)] = 1710,
  [SMALL_STATE(68)] = 1722,
  [SMALL_STATE(69)] = 1734,
  [SMALL_STATE(70)] = 1746,
  [SMALL_STATE(71)] = 1758,
  [SMALL_STATE(72)] = 1770,
  [SMALL_STATE(73)] = 1784,
  [SMALL_STATE(74)] = 1796,
  [SMALL_STATE(75)] = 1808,
  [SMALL_STATE(76)] = 1820,
  [SMALL_STATE(77)] = 1832,
  [SMALL_STATE(78)] = 1844,
  [SMALL_STATE(79)] = 1856,
  [SMALL_STATE(80)] = 1868,
  [SMALL_STATE(81)] = 1880,
  [SMALL_STATE(82)] = 1892,
  [SMALL_STATE(83)] = 1903,
  [SMALL_STATE(84)] = 1920,
  [SMALL_STATE(85)] = 1937,
  [SMALL_STATE(86)] = 1954,
  [SMALL_STATE(87)] = 1971,
  [SMALL_STATE(88)] = 1988,
  [SMALL_STATE(89)] = 2005,
  [SMALL_STATE(90)] = 2022,
  [SMALL_STATE(91)] = 2039,
  [SMALL_STATE(92)] = 2050,
  [SMALL_STATE(93)] = 2061,
  [SMALL_STATE(94)] = 2072,
  [SMALL_STATE(95)] = 2089,
  [SMALL_STATE(96)] = 2100,
  [SMALL_STATE(97)] = 2117,
  [SMALL_STATE(98)] = 2134,
  [SMALL_STATE(99)] = 2151,
  [SMALL_STATE(100)] = 2168,
  [SMALL_STATE(101)] = 2185,
  [SMALL_STATE(102)] = 2196,
  [SMALL_STATE(103)] = 2211,
  [SMALL_STATE(104)] = 2225,
  [SMALL_STATE(105)] = 2241,
  [SMALL_STATE(106)] = 2255,
  [SMALL_STATE(107)] = 2269,
  [SMALL_STATE(108)] = 2283,
  [SMALL_STATE(109)] = 2297,
  [SMALL_STATE(110)] = 2311,
  [SMALL_STATE(111)] = 2327,
  [SMALL_STATE(112)] = 2335,
  [SMALL_STATE(113)] = 2348,
  [SMALL_STATE(114)] = 2361,
  [SMALL_STATE(115)] = 2372,
  [SMALL_STATE(116)] = 2385,
  [SMALL_STATE(117)] = 2398,
  [SMALL_STATE(118)] = 2411,
  [SMALL_STATE(119)] = 2421,
  [SMALL_STATE(120)] = 2431,
  [SMALL_STATE(121)] = 2441,
  [SMALL_STATE(122)] = 2451,
  [SMALL_STATE(123)] = 2461,
  [SMALL_STATE(124)] = 2471,
  [SMALL_STATE(125)] = 2481,
  [SMALL_STATE(126)] = 2491,
  [SMALL_STATE(127)] = 2501,
  [SMALL_STATE(128)] = 2511,
  [SMALL_STATE(129)] = 2521,
  [SMALL_STATE(130)] = 2531,
  [SMALL_STATE(131)] = 2541,
  [SMALL_STATE(132)] = 2551,
  [SMALL_STATE(133)] = 2561,
  [SMALL_STATE(134)] = 2571,
  [SMALL_STATE(135)] = 2579,
  [SMALL_STATE(136)] = 2589,
  [SMALL_STATE(137)] = 2596,
  [SMALL_STATE(138)] = 2603,
  [SMALL_STATE(139)] = 2610,
  [SMALL_STATE(140)] = 2617,
  [SMALL_STATE(141)] = 2624,
  [SMALL_STATE(142)] = 2631,
  [SMALL_STATE(143)] = 2638,
  [SMALL_STATE(144)] = 2645,
  [SMALL_STATE(145)] = 2652,
  [SMALL_STATE(146)] = 2659,
  [SMALL_STATE(147)] = 2666,
  [SMALL_STATE(148)] = 2673,
  [SMALL_STATE(149)] = 2680,
  [SMALL_STATE(150)] = 2687,
  [SMALL_STATE(151)] = 2694,
  [SMALL_STATE(152)] = 2701,
  [SMALL_STATE(153)] = 2708,
  [SMALL_STATE(154)] = 2715,
  [SMALL_STATE(155)] = 2722,
  [SMALL_STATE(156)] = 2729,
  [SMALL_STATE(157)] = 2736,
  [SMALL_STATE(158)] = 2743,
  [SMALL_STATE(159)] = 2750,
  [SMALL_STATE(160)] = 2757,
  [SMALL_STATE(161)] = 2764,
  [SMALL_STATE(162)] = 2771,
  [SMALL_STATE(163)] = 2778,
  [SMALL_STATE(164)] = 2785,
  [SMALL_STATE(165)] = 2792,
  [SMALL_STATE(166)] = 2799,
  [SMALL_STATE(167)] = 2806,
  [SMALL_STATE(168)] = 2813,
  [SMALL_STATE(169)] = 2820,
  [SMALL_STATE(170)] = 2827,
  [SMALL_STATE(171)] = 2834,
  [SMALL_STATE(172)] = 2841,
  [SMALL_STATE(173)] = 2848,
  [SMALL_STATE(174)] = 2855,
  [SMALL_STATE(175)] = 2862,
  [SMALL_STATE(176)] = 2866,
  [SMALL_STATE(177)] = 2870,
  [SMALL_STATE(178)] = 2874,
  [SMALL_STATE(179)] = 2878,
  [SMALL_STATE(180)] = 2882,
  [SMALL_STATE(181)] = 2886,
  [SMALL_STATE(182)] = 2890,
  [SMALL_STATE(183)] = 2894,
  [SMALL_STATE(184)] = 2898,
  [SMALL_STATE(185)] = 2902,
  [SMALL_STATE(186)] = 2906,
  [SMALL_STATE(187)] = 2910,
  [SMALL_STATE(188)] = 2914,
  [SMALL_STATE(189)] = 2918,
  [SMALL_STATE(190)] = 2922,
  [SMALL_STATE(191)] = 2926,
  [SMALL_STATE(192)] = 2930,
  [SMALL_STATE(193)] = 2934,
  [SMALL_STATE(194)] = 2938,
  [SMALL_STATE(195)] = 2942,
  [SMALL_STATE(196)] = 2946,
  [SMALL_STATE(197)] = 2950,
  [SMALL_STATE(198)] = 2954,
  [SMALL_STATE(199)] = 2958,
  [SMALL_STATE(200)] = 2962,
  [SMALL_STATE(201)] = 2966,
  [SMALL_STATE(202)] = 2970,
  [SMALL_STATE(203)] = 2974,
  [SMALL_STATE(204)] = 2978,
  [SMALL_STATE(205)] = 2982,
  [SMALL_STATE(206)] = 2986,
  [SMALL_STATE(207)] = 2990,
  [SMALL_STATE(208)] = 2994,
  [SMALL_STATE(209)] = 2998,
  [SMALL_STATE(210)] = 3002,
  [SMALL_STATE(211)] = 3006,
  [SMALL_STATE(212)] = 3010,
  [SMALL_STATE(213)] = 3014,
  [SMALL_STATE(214)] = 3018,
  [SMALL_STATE(215)] = 3022,
  [SMALL_STATE(216)] = 3026,
  [SMALL_STATE(217)] = 3030,
  [SMALL_STATE(218)] = 3034,
  [SMALL_STATE(219)] = 3038,
  [SMALL_STATE(220)] = 3042,
  [SMALL_STATE(221)] = 3046,
  [SMALL_STATE(222)] = 3050,
  [SMALL_STATE(223)] = 3054,
  [SMALL_STATE(224)] = 3058,
  [SMALL_STATE(225)] = 3062,
  [SMALL_STATE(226)] = 3066,
  [SMALL_STATE(227)] = 3070,
  [SMALL_STATE(228)] = 3074,
  [SMALL_STATE(229)] = 3078,
  [SMALL_STATE(230)] = 3082,
  [SMALL_STATE(231)] = 3086,
  [SMALL_STATE(232)] = 3090,
  [SMALL_STATE(233)] = 3094,
  [SMALL_STATE(234)] = 3098,
  [SMALL_STATE(235)] = 3102,
  [SMALL_STATE(236)] = 3106,
  [SMALL_STATE(237)] = 3110,
  [SMALL_STATE(238)] = 3114,
  [SMALL_STATE(239)] = 3118,
  [SMALL_STATE(240)] = 3122,
  [SMALL_STATE(241)] = 3126,
  [SMALL_STATE(242)] = 3130,
  [SMALL_STATE(243)] = 3134,
  [SMALL_STATE(244)] = 3138,
  [SMALL_STATE(245)] = 3142,
  [SMALL_STATE(246)] = 3146,
  [SMALL_STATE(247)] = 3150,
  [SMALL_STATE(248)] = 3154,
  [SMALL_STATE(249)] = 3158,
  [SMALL_STATE(250)] = 3162,
  [SMALL_STATE(251)] = 3166,
  [SMALL_STATE(252)] = 3170,
  [SMALL_STATE(253)] = 3174,
  [SMALL_STATE(254)] = 3178,
  [SMALL_STATE(255)] = 3182,
  [SMALL_STATE(256)] = 3186,
  [SMALL_STATE(257)] = 3190,
  [SMALL_STATE(258)] = 3194,
  [SMALL_STATE(259)] = 3198,
  [SMALL_STATE(260)] = 3202,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(244),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(244),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(91),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(120),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(25),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(20),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(55),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(158),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(131),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(244),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(131),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(131),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(244),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(244),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(116),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_comment, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_comment, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(237),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(122),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(108),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(143),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(57),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(169),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [667] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(104),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
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
