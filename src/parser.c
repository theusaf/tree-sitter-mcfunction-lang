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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 14

enum {
  sym_comment = 1,
  sym_tag = 2,
  anon_sym_SLASH = 3,
  anon_sym_ = 4,
  anon_sym_execute = 5,
  anon_sym_run = 6,
  aux_sym__legacy_execute_token1 = 7,
  anon_sym_detect = 8,
  anon_sym_EQ = 9,
  anon_sym_STAR = 10,
  anon_sym_in = 11,
  anon_sym_if = 12,
  anon_sym_unless = 13,
  anon_sym_facing = 14,
  anon_sym_anchored = 15,
  anon_sym_align = 16,
  anon_sym_at = 17,
  anon_sym_as = 18,
  anon_sym_positioned = 19,
  anon_sym_rotated = 20,
  anon_sym_store = 21,
  sym__line_separator = 22,
  aux_sym_command_name_token1 = 23,
  sym__identifier = 24,
  sym_number = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  anon_sym_TILDE = 28,
  anon_sym_CARET = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_token1 = 31,
  anon_sym_BSLASH = 32,
  anon_sym_AT = 33,
  anon_sym_p = 34,
  anon_sym_a = 35,
  anon_sym_r = 36,
  anon_sym_s = 37,
  anon_sym_e = 38,
  anon_sym_LBRACK = 39,
  aux_sym_selector_option_section_token1 = 40,
  anon_sym_COMMA = 41,
  anon_sym_RBRACK = 42,
  anon_sym_LBRACE = 43,
  anon_sym_COLON = 44,
  anon_sym_RBRACE = 45,
  aux_sym_selector_number_token1 = 46,
  aux_sym_selector_number_token2 = 47,
  aux_sym_selector_number_token3 = 48,
  anon_sym_l = 49,
  anon_sym_d = 50,
  anon_sym_f = 51,
  anon_sym_b = 52,
  aux_sym_item_token1 = 53,
  anon_sym_DOT = 54,
  sym_namespaced_container = 55,
  sym_nbt_path = 56,
  sym_root = 57,
  sym_command = 58,
  sym__command_choices = 59,
  sym_execute_command = 60,
  sym__legacy_execute = 61,
  sym_execute_keyword = 62,
  sym_command_name = 63,
  sym_boolean = 64,
  sym_coordinate = 65,
  sym_rotation = 66,
  sym_location = 67,
  sym_string = 68,
  sym__escape_sequence = 69,
  sym_selector = 70,
  sym_selector_option_section = 71,
  sym_selector_option = 72,
  sym_selector_key = 73,
  sym_selector_value = 74,
  sym_selector_nbt = 75,
  sym_selector_score = 76,
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
  aux_sym__legacy_execute_repeat1 = 96,
  aux_sym_string_repeat1 = 97,
  aux_sym_selector_option_section_repeat1 = 98,
  aux_sym_selector_nbt_repeat1 = 99,
  aux_sym_selector_score_repeat1 = 100,
  aux_sym_nbt_object_repeat1 = 101,
  aux_sym_nbt_array_repeat1 = 102,
  aux_sym_item_state_repeat1 = 103,
  aux_sym_path_repeat1 = 104,
  aux_sym_container_repeat1 = 105,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
  [anon_sym_execute] = "command_name",
  [anon_sym_run] = "execute_keyword",
  [aux_sym__legacy_execute_token1] = "_legacy_execute_token1",
  [anon_sym_detect] = "execute_keyword",
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
  [sym_comment] = sym_comment,
  [sym_tag] = sym_tag,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_execute] = sym_command_name,
  [anon_sym_run] = sym_execute_keyword,
  [aux_sym__legacy_execute_token1] = aux_sym__legacy_execute_token1,
  [anon_sym_detect] = sym_execute_keyword,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
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
    .named = true,
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
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == '}') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(277);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '}') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '{') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(303);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '[') ADVANCE(288);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '~') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '[') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(315);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '[') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '[') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '[') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == ',') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '[') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
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
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 80},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 80},
  [43] = {.lex_state = 80},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 80},
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
  [57] = {.lex_state = 80},
  [58] = {.lex_state = 80},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 4},
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
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 80},
  [84] = {.lex_state = 80},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 80},
  [87] = {.lex_state = 80},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 80},
  [91] = {.lex_state = 80},
  [92] = {.lex_state = 80},
  [93] = {.lex_state = 80},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 80},
  [97] = {.lex_state = 80},
  [98] = {.lex_state = 293},
  [99] = {.lex_state = 80},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 80},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 80},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 80},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 292},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 80},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 289},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 80},
  [126] = {.lex_state = 292},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 80},
  [129] = {.lex_state = 80},
  [130] = {.lex_state = 292},
  [131] = {.lex_state = 291},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 289},
  [135] = {.lex_state = 80},
  [136] = {.lex_state = 290},
  [137] = {.lex_state = 290},
  [138] = {.lex_state = 289},
  [139] = {.lex_state = 80},
  [140] = {.lex_state = 289},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 289},
  [143] = {.lex_state = 292},
  [144] = {.lex_state = 289},
  [145] = {.lex_state = 289},
  [146] = {.lex_state = 289},
  [147] = {.lex_state = 289},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 290},
  [150] = {.lex_state = 290},
  [151] = {.lex_state = 290},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 289},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 80},
  [156] = {.lex_state = 80},
  [157] = {.lex_state = 289},
  [158] = {.lex_state = 289},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 289},
  [161] = {.lex_state = 289},
  [162] = {.lex_state = 289},
  [163] = {.lex_state = 289},
  [164] = {.lex_state = 289},
  [165] = {.lex_state = 80},
  [166] = {.lex_state = 290},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 289},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 290},
  [172] = {.lex_state = 290},
  [173] = {.lex_state = 289},
  [174] = {.lex_state = 289},
  [175] = {.lex_state = 80},
  [176] = {.lex_state = 80},
  [177] = {.lex_state = 289},
  [178] = {.lex_state = 289},
  [179] = {.lex_state = 80},
  [180] = {.lex_state = 289},
  [181] = {.lex_state = 289},
  [182] = {.lex_state = 289},
  [183] = {.lex_state = 289},
  [184] = {.lex_state = 289},
  [185] = {.lex_state = 80},
  [186] = {.lex_state = 80},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 80},
  [189] = {.lex_state = 289},
  [190] = {.lex_state = 289},
  [191] = {.lex_state = 80},
  [192] = {.lex_state = 289},
  [193] = {.lex_state = 289},
  [194] = {.lex_state = 289},
  [195] = {.lex_state = 289},
  [196] = {.lex_state = 289},
  [197] = {.lex_state = 289},
  [198] = {.lex_state = 289},
  [199] = {.lex_state = 289},
  [200] = {.lex_state = 289},
  [201] = {.lex_state = 80},
  [202] = {.lex_state = 80},
  [203] = {.lex_state = 289},
  [204] = {.lex_state = 289},
  [205] = {.lex_state = 289},
  [206] = {.lex_state = 289},
  [207] = {.lex_state = 289},
  [208] = {.lex_state = 289},
  [209] = {.lex_state = 289},
  [210] = {.lex_state = 289},
  [211] = {.lex_state = 289},
  [212] = {.lex_state = 80},
  [213] = {.lex_state = 289},
  [214] = {.lex_state = 289},
  [215] = {.lex_state = 289},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 289},
  [218] = {.lex_state = 289},
  [219] = {.lex_state = 289},
  [220] = {.lex_state = 289},
  [221] = {.lex_state = 80},
  [222] = {.lex_state = 80},
  [223] = {.lex_state = 289},
  [224] = {.lex_state = 289},
  [225] = {.lex_state = 289},
  [226] = {.lex_state = 289},
  [227] = {.lex_state = 289},
  [228] = {.lex_state = 289},
  [229] = {.lex_state = 289},
  [230] = {.lex_state = 80},
  [231] = {.lex_state = 289},
  [232] = {.lex_state = 80},
  [233] = {.lex_state = 289},
  [234] = {.lex_state = 289},
  [235] = {.lex_state = 80},
  [236] = {.lex_state = 80},
  [237] = {.lex_state = 80},
  [238] = {.lex_state = 289},
  [239] = {.lex_state = 289},
  [240] = {.lex_state = 289},
  [241] = {.lex_state = 80},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 80},
  [244] = {.lex_state = 80},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 80},
  [247] = {.lex_state = 80},
  [248] = {.lex_state = 80},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 289},
  [251] = {.lex_state = 289},
  [252] = {.lex_state = 80},
  [253] = {.lex_state = 80},
  [254] = {.lex_state = 80},
  [255] = {.lex_state = 80},
  [256] = {.lex_state = 80},
  [257] = {.lex_state = 289},
  [258] = {.lex_state = 289},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
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
    [sym_root] = STATE(216),
    [sym_command] = STATE(21),
    [sym_execute_command] = STATE(97),
    [sym__legacy_execute] = STATE(21),
    [sym_command_name] = STATE(38),
    [aux_sym_root_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(5),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
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
    STATE(246), 1,
      sym_selector,
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(248), 10,
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
  [81] = 19,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
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
      anon_sym_run,
    STATE(246), 1,
      sym_selector,
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(248), 10,
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
  [162] = 17,
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
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
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
    STATE(248), 11,
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
  [238] = 17,
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
      anon_sym_run,
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
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
    STATE(248), 11,
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
  [314] = 17,
    ACTIONS(15), 1,
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
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
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
    STATE(248), 11,
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
  [390] = 16,
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
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(23), 2,
      sym__identifier,
      sym_nbt_path,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
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
    STATE(248), 11,
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
  [463] = 15,
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
    STATE(247), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(51), 2,
      sym__identifier,
      sym_nbt_path,
    STATE(58), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(54), 10,
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
  [522] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_container_repeat1,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    ACTIONS(60), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(76), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [558] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_container_repeat1,
    STATE(37), 1,
      aux_sym_path_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    ACTIONS(71), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(62), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [594] = 9,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [627] = 9,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [660] = 9,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [693] = 9,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [726] = 8,
    ACTIONS(91), 1,
      aux_sym_command_name_token1,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      aux_sym_selector_number_token3,
    STATE(203), 1,
      sym_selector_value,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(189), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [756] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [786] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [816] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [846] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(229), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [876] = 8,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_execute,
    ACTIONS(114), 1,
      aux_sym_command_name_token1,
    STATE(38), 1,
      sym_command_name,
    STATE(97), 1,
      sym_execute_command,
    ACTIONS(105), 2,
      sym_comment,
      sym__line_separator,
    STATE(20), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [904] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_command_name,
    STATE(97), 1,
      sym_execute_command,
    ACTIONS(119), 2,
      sym_comment,
      sym__line_separator,
    STATE(20), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [932] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_container_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    STATE(128), 1,
      aux_sym_path_repeat1,
    STATE(76), 2,
      sym_item_nbt,
      sym_item_state,
  [961] = 9,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_container_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    STATE(118), 1,
      aux_sym_path_repeat1,
    STATE(62), 2,
      sym_item_nbt,
      sym_item_state,
  [990] = 5,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(36), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(148), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1010] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(131), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1028] = 4,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_selector_option_section,
    ACTIONS(138), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1046] = 5,
    ACTIONS(144), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(156), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(146), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1066] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(150), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1084] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1102] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1119] = 4,
    ACTIONS(164), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(167), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1136] = 4,
    ACTIONS(169), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1153] = 4,
    ACTIONS(171), 1,
      anon_sym_,
    STATE(42), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(146), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1170] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1187] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1204] = 4,
    ACTIONS(169), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(183), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1221] = 4,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1238] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_command_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1255] = 8,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(198), 1,
      aux_sym_command_name_token1,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_selector_score_key,
    STATE(184), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
  [1280] = 4,
    ACTIONS(204), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1297] = 4,
    ACTIONS(207), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(183), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1314] = 4,
    ACTIONS(210), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1331] = 4,
    ACTIONS(215), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(218), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1348] = 8,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(198), 1,
      aux_sym_command_name_token1,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_nbt_object_key,
    STATE(193), 1,
      sym_selector_score_key,
    STATE(226), 1,
      sym_string,
  [1373] = 3,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1388] = 2,
    ACTIONS(131), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1401] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1418] = 4,
    ACTIONS(204), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1435] = 4,
    ACTIONS(235), 1,
      anon_sym_,
    STATE(40), 1,
      aux_sym_command_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1452] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1469] = 4,
    ACTIONS(210), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1486] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1503] = 2,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1515] = 2,
    ACTIONS(218), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1527] = 2,
    ACTIONS(251), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1539] = 2,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1551] = 2,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1563] = 2,
    ACTIONS(263), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1575] = 2,
    ACTIONS(267), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1587] = 7,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(198), 1,
      aux_sym_command_name_token1,
    ACTIONS(200), 1,
      sym_number,
    STATE(184), 1,
      sym_nbt_object_key,
    STATE(193), 1,
      sym_selector_score_key,
    STATE(226), 1,
      sym_string,
  [1609] = 2,
    ACTIONS(271), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1621] = 2,
    ACTIONS(60), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1633] = 2,
    ACTIONS(275), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1645] = 2,
    ACTIONS(279), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1657] = 2,
    ACTIONS(283), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1669] = 2,
    ACTIONS(287), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1681] = 2,
    ACTIONS(291), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1693] = 2,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1705] = 3,
    ACTIONS(299), 1,
      anon_sym_,
    ACTIONS(302), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1719] = 2,
    ACTIONS(306), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1731] = 2,
    ACTIONS(310), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1743] = 2,
    ACTIONS(314), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1755] = 3,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(321), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(316), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1769] = 2,
    ACTIONS(325), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1781] = 2,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1793] = 2,
    ACTIONS(329), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1805] = 2,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1817] = 2,
    ACTIONS(333), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1829] = 2,
    ACTIONS(337), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(335), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1841] = 2,
    ACTIONS(341), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1853] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(91), 2,
      sym_command,
      sym_execute_command,
  [1870] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
    ACTIONS(200), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1887] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(90), 2,
      sym_command,
      sym_execute_command,
  [1904] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_,
    STATE(61), 1,
      sym_nbt_object,
    STATE(62), 2,
      sym_item_nbt,
      sym_item_state,
  [1921] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
    ACTIONS(200), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1938] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_nbt_object,
    STATE(76), 2,
      sym_item_nbt,
      sym_item_state,
  [1955] = 2,
    ACTIONS(353), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(351), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1966] = 5,
    ACTIONS(355), 1,
      aux_sym_command_name_token1,
    ACTIONS(357), 1,
      sym_number,
    STATE(149), 1,
      sym_boolean,
    STATE(150), 1,
      sym_state_value,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
  [1983] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
    ACTIONS(200), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2000] = 2,
    ACTIONS(365), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(363), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2011] = 2,
    ACTIONS(369), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(367), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2022] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(87), 2,
      sym_command,
      sym_execute_command,
  [2039] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(71), 2,
      sym_command,
      sym__legacy_execute,
  [2056] = 5,
    ACTIONS(375), 1,
      aux_sym_command_name_token1,
    ACTIONS(377), 1,
      sym_number,
    STATE(176), 1,
      sym_state_value,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2073] = 4,
    STATE(206), 1,
      sym_selector_score_value,
    STATE(207), 1,
      sym_selector_number,
    ACTIONS(99), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(101), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2088] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(57), 2,
      sym_command,
      sym__legacy_execute,
  [2105] = 2,
    ACTIONS(381), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(379), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2116] = 2,
    ACTIONS(385), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(383), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2127] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(63), 2,
      sym_command,
      sym__legacy_execute,
  [2144] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
    ACTIONS(200), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2161] = 4,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    STATE(104), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2175] = 4,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_token1,
    ACTIONS(400), 1,
      anon_sym_BSLASH,
    STATE(102), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2189] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(221), 1,
      sym_location,
    STATE(254), 1,
      sym_coordinate,
  [2205] = 4,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym_string_token1,
    STATE(102), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2219] = 1,
    ACTIONS(409), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2227] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(152), 1,
      sym_location,
    STATE(230), 1,
      sym_coordinate,
  [2243] = 4,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      aux_sym_string_token1,
    STATE(109), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2257] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_nbt_object_key,
    STATE(226), 1,
      sym_string,
    ACTIONS(200), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2271] = 4,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(407), 1,
      aux_sym_string_token1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    STATE(102), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2285] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(73), 1,
      sym_coordinate,
  [2298] = 4,
    ACTIONS(417), 1,
      sym_number,
    ACTIONS(419), 1,
      anon_sym_TILDE,
    ACTIONS(421), 1,
      anon_sym_CARET,
    STATE(170), 1,
      sym_coordinate,
  [2311] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(236), 1,
      sym_coordinate,
  [2324] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(222), 1,
      sym_coordinate,
  [2337] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(403), 1,
      sym_number,
    STATE(74), 1,
      sym_coordinate,
  [2350] = 3,
    ACTIONS(425), 1,
      aux_sym_command_name_token1,
    STATE(186), 1,
      sym_state_key,
    ACTIONS(423), 2,
      anon_sym_STAR,
      sym_number,
  [2361] = 3,
    ACTIONS(427), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_selector_option_section_repeat1,
  [2371] = 3,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(431), 1,
      aux_sym__legacy_execute_token1,
    STATE(255), 1,
      sym_selector,
  [2381] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_path_repeat1,
  [2391] = 3,
    ACTIONS(433), 1,
      aux_sym_command_name_token1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_selector_score_key,
  [2401] = 3,
    ACTIONS(222), 1,
      anon_sym_detect,
    ACTIONS(224), 1,
      anon_sym_,
    ACTIONS(437), 1,
      sym_number,
  [2411] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(439), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2421] = 3,
    ACTIONS(441), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(158), 1,
      aux_sym_selector_score_repeat1,
  [2431] = 2,
    ACTIONS(445), 1,
      aux_sym_string_token1,
    ACTIONS(443), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2439] = 3,
    ACTIONS(447), 1,
      aux_sym_command_name_token1,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym_state_key,
  [2449] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(451), 1,
      anon_sym_execute,
    STATE(48), 1,
      sym_command_name,
  [2459] = 3,
    ACTIONS(427), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_selector_option_section_repeat1,
  [2469] = 3,
    ACTIONS(455), 1,
      aux_sym_command_name_token1,
    STATE(173), 1,
      sym_selector_option,
    STATE(217), 1,
      sym_selector_key,
  [2479] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_path_repeat1,
  [2489] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(457), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2499] = 3,
    ACTIONS(459), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_selector_option_section_repeat1,
  [2509] = 3,
    ACTIONS(464), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
  [2519] = 3,
    ACTIONS(447), 1,
      aux_sym_command_name_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym_state_key,
  [2529] = 3,
    ACTIONS(472), 1,
      aux_sym_command_name_token1,
    ACTIONS(474), 1,
      aux_sym_item_token1,
    STATE(188), 1,
      sym_item,
  [2539] = 2,
    ACTIONS(476), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_nbt_array_repeat1,
  [2546] = 2,
    ACTIONS(478), 1,
      anon_sym_,
    STATE(156), 1,
      aux_sym_execute_command_repeat1,
  [2553] = 2,
    ACTIONS(480), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [2560] = 2,
    ACTIONS(484), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(486), 1,
      anon_sym_COMMA,
  [2567] = 2,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
    STATE(134), 1,
      aux_sym_nbt_array_repeat1,
  [2574] = 2,
    ACTIONS(490), 1,
      anon_sym_,
    STATE(148), 1,
      aux_sym_execute_command_repeat1,
  [2581] = 2,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
    STATE(169), 1,
      aux_sym_nbt_object_repeat1,
  [2588] = 2,
    ACTIONS(447), 1,
      aux_sym_command_name_token1,
    STATE(219), 1,
      sym_state_key,
  [2595] = 2,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
    STATE(144), 1,
      aux_sym_nbt_object_repeat1,
  [2602] = 2,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
  [2609] = 2,
    ACTIONS(500), 1,
      aux_sym_selector_option_section_token1,
    STATE(144), 1,
      aux_sym_nbt_object_repeat1,
  [2616] = 2,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_nbt_array_repeat1,
  [2623] = 2,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_item_state_repeat1,
  [2630] = 2,
    ACTIONS(508), 1,
      aux_sym_selector_option_section_token1,
    STATE(153), 1,
      aux_sym_item_state_repeat1,
  [2637] = 2,
    ACTIONS(510), 1,
      anon_sym_,
    STATE(155), 1,
      aux_sym_execute_command_repeat1,
  [2644] = 2,
    ACTIONS(512), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
  [2651] = 2,
    ACTIONS(516), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2658] = 2,
    ACTIONS(520), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [2665] = 2,
    ACTIONS(524), 1,
      anon_sym_,
    ACTIONS(526), 1,
      anon_sym_detect,
  [2672] = 2,
    ACTIONS(528), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_item_state_repeat1,
  [2679] = 2,
    ACTIONS(277), 1,
      anon_sym_detect,
    ACTIONS(279), 1,
      anon_sym_,
  [2686] = 2,
    ACTIONS(530), 1,
      anon_sym_,
    STATE(155), 1,
      aux_sym_execute_command_repeat1,
  [2693] = 2,
    ACTIONS(490), 1,
      anon_sym_,
    STATE(155), 1,
      aux_sym_execute_command_repeat1,
  [2700] = 2,
    ACTIONS(533), 1,
      aux_sym_selector_option_section_token1,
    STATE(161), 1,
      aux_sym_selector_nbt_repeat1,
  [2707] = 2,
    ACTIONS(535), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_score_repeat1,
  [2714] = 2,
    ACTIONS(222), 1,
      anon_sym_detect,
    ACTIONS(224), 1,
      anon_sym_,
  [2721] = 2,
    ACTIONS(537), 1,
      aux_sym_selector_option_section_token1,
    STATE(142), 1,
      aux_sym_nbt_object_repeat1,
  [2728] = 2,
    ACTIONS(539), 1,
      aux_sym_selector_option_section_token1,
    STATE(161), 1,
      aux_sym_selector_nbt_repeat1,
  [2735] = 2,
    ACTIONS(542), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_nbt_array_repeat1,
  [2742] = 2,
    ACTIONS(545), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_score_repeat1,
  [2749] = 2,
    ACTIONS(548), 1,
      aux_sym_selector_option_section_token1,
    STATE(145), 1,
      aux_sym_nbt_array_repeat1,
  [2756] = 2,
    ACTIONS(550), 1,
      anon_sym_EQ,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [2763] = 2,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      aux_sym_selector_option_section_token1,
  [2770] = 2,
    ACTIONS(433), 1,
      aux_sym_command_name_token1,
    STATE(196), 1,
      sym_selector_score_key,
  [2777] = 2,
    ACTIONS(554), 1,
      aux_sym_command_name_token1,
    ACTIONS(556), 1,
      sym_number,
  [2784] = 2,
    ACTIONS(558), 1,
      aux_sym_selector_option_section_token1,
    STATE(144), 1,
      aux_sym_nbt_object_repeat1,
  [2791] = 2,
    ACTIONS(323), 1,
      anon_sym_detect,
    ACTIONS(325), 1,
      anon_sym_,
  [2798] = 2,
    ACTIONS(560), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2805] = 2,
    ACTIONS(564), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(566), 1,
      anon_sym_COMMA,
  [2812] = 1,
    ACTIONS(568), 1,
      aux_sym_selector_option_section_token1,
  [2816] = 1,
    ACTIONS(570), 1,
      aux_sym_selector_option_section_token1,
  [2820] = 1,
    ACTIONS(572), 1,
      anon_sym_EQ,
  [2824] = 1,
    ACTIONS(574), 1,
      anon_sym_,
  [2828] = 1,
    ACTIONS(576), 1,
      aux_sym_selector_option_section_token1,
  [2832] = 1,
    ACTIONS(578), 1,
      aux_sym_selector_option_section_token1,
  [2836] = 1,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [2840] = 1,
    ACTIONS(582), 1,
      aux_sym_selector_option_section_token1,
  [2844] = 1,
    ACTIONS(584), 1,
      aux_sym_selector_option_section_token1,
  [2848] = 1,
    ACTIONS(586), 1,
      aux_sym_selector_option_section_token1,
  [2852] = 1,
    ACTIONS(589), 1,
      aux_sym_selector_option_section_token1,
  [2856] = 1,
    ACTIONS(591), 1,
      aux_sym_selector_option_section_token1,
  [2860] = 1,
    ACTIONS(593), 1,
      anon_sym_,
  [2864] = 1,
    ACTIONS(595), 1,
      anon_sym_EQ,
  [2868] = 1,
    ACTIONS(597), 1,
      aux_sym_command_name_token1,
  [2872] = 1,
    ACTIONS(599), 1,
      anon_sym_,
  [2876] = 1,
    ACTIONS(601), 1,
      aux_sym_selector_option_section_token1,
  [2880] = 1,
    ACTIONS(603), 1,
      aux_sym_selector_option_section_token1,
  [2884] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [2888] = 1,
    ACTIONS(608), 1,
      aux_sym_selector_option_section_token1,
  [2892] = 1,
    ACTIONS(610), 1,
      aux_sym_selector_option_section_token1,
  [2896] = 1,
    ACTIONS(612), 1,
      aux_sym_selector_option_section_token1,
  [2900] = 1,
    ACTIONS(614), 1,
      aux_sym_selector_option_section_token1,
  [2904] = 1,
    ACTIONS(616), 1,
      aux_sym_selector_option_section_token1,
  [2908] = 1,
    ACTIONS(618), 1,
      aux_sym_selector_option_section_token1,
  [2912] = 1,
    ACTIONS(620), 1,
      aux_sym_selector_option_section_token1,
  [2916] = 1,
    ACTIONS(622), 1,
      aux_sym_selector_option_section_token1,
  [2920] = 1,
    ACTIONS(624), 1,
      aux_sym_selector_option_section_token1,
  [2924] = 1,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [2928] = 1,
    ACTIONS(550), 1,
      anon_sym_EQ,
  [2932] = 1,
    ACTIONS(626), 1,
      aux_sym_selector_option_section_token1,
  [2936] = 1,
    ACTIONS(628), 1,
      aux_sym_selector_option_section_token1,
  [2940] = 1,
    ACTIONS(630), 1,
      aux_sym_selector_option_section_token1,
  [2944] = 1,
    ACTIONS(632), 1,
      aux_sym_selector_option_section_token1,
  [2948] = 1,
    ACTIONS(634), 1,
      aux_sym_selector_option_section_token1,
  [2952] = 1,
    ACTIONS(636), 1,
      aux_sym_selector_option_section_token1,
  [2956] = 1,
    ACTIONS(638), 1,
      aux_sym_selector_option_section_token1,
  [2960] = 1,
    ACTIONS(640), 1,
      aux_sym_selector_option_section_token1,
  [2964] = 1,
    ACTIONS(642), 1,
      aux_sym_selector_option_section_token1,
  [2968] = 1,
    ACTIONS(644), 1,
      anon_sym_EQ,
  [2972] = 1,
    ACTIONS(646), 1,
      aux_sym_selector_option_section_token1,
  [2976] = 1,
    ACTIONS(648), 1,
      aux_sym_selector_option_section_token1,
  [2980] = 1,
    ACTIONS(650), 1,
      aux_sym_selector_option_section_token1,
  [2984] = 1,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
  [2988] = 1,
    ACTIONS(654), 1,
      aux_sym_selector_option_section_token1,
  [2992] = 1,
    ACTIONS(656), 1,
      aux_sym_selector_option_section_token1,
  [2996] = 1,
    ACTIONS(658), 1,
      aux_sym_selector_option_section_token1,
  [3000] = 1,
    ACTIONS(660), 1,
      aux_sym_selector_option_section_token1,
  [3004] = 1,
    ACTIONS(662), 1,
      anon_sym_,
  [3008] = 1,
    ACTIONS(664), 1,
      anon_sym_,
  [3012] = 1,
    ACTIONS(293), 1,
      aux_sym_selector_option_section_token1,
  [3016] = 1,
    ACTIONS(666), 1,
      aux_sym_selector_option_section_token1,
  [3020] = 1,
    ACTIONS(261), 1,
      aux_sym_selector_option_section_token1,
  [3024] = 1,
    ACTIONS(668), 1,
      aux_sym_selector_option_section_token1,
  [3028] = 1,
    ACTIONS(670), 1,
      aux_sym_selector_option_section_token1,
  [3032] = 1,
    ACTIONS(281), 1,
      aux_sym_selector_option_section_token1,
  [3036] = 1,
    ACTIONS(672), 1,
      aux_sym_selector_option_section_token1,
  [3040] = 1,
    ACTIONS(674), 1,
      anon_sym_,
  [3044] = 1,
    ACTIONS(339), 1,
      aux_sym_selector_option_section_token1,
  [3048] = 1,
    ACTIONS(676), 1,
      anon_sym_,
  [3052] = 1,
    ACTIONS(285), 1,
      aux_sym_selector_option_section_token1,
  [3056] = 1,
    ACTIONS(253), 1,
      aux_sym_selector_option_section_token1,
  [3060] = 1,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
  [3064] = 1,
    ACTIONS(680), 1,
      anon_sym_,
  [3068] = 1,
    ACTIONS(660), 1,
      anon_sym_EQ,
  [3072] = 1,
    ACTIONS(304), 1,
      aux_sym_selector_option_section_token1,
  [3076] = 1,
    ACTIONS(312), 1,
      aux_sym_selector_option_section_token1,
  [3080] = 1,
    ACTIONS(682), 1,
      aux_sym_selector_option_section_token1,
  [3084] = 1,
    ACTIONS(514), 1,
      anon_sym_,
  [3088] = 1,
    ACTIONS(684), 1,
      aux_sym_command_name_token1,
  [3092] = 1,
    ACTIONS(437), 1,
      sym_number,
  [3096] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3100] = 1,
    ACTIONS(688), 1,
      aux_sym_command_name_token1,
  [3104] = 1,
    ACTIONS(690), 1,
      anon_sym_,
  [3108] = 1,
    ACTIONS(693), 1,
      anon_sym_,
  [3112] = 1,
    ACTIONS(695), 1,
      anon_sym_,
  [3116] = 1,
    ACTIONS(697), 1,
      aux_sym_command_name_token1,
  [3120] = 1,
    ACTIONS(699), 1,
      aux_sym_selector_option_section_token1,
  [3124] = 1,
    ACTIONS(701), 1,
      aux_sym_selector_option_section_token1,
  [3128] = 1,
    ACTIONS(226), 1,
      sym_number,
  [3132] = 1,
    ACTIONS(703), 1,
      anon_sym_,
  [3136] = 1,
    ACTIONS(705), 1,
      anon_sym_,
  [3140] = 1,
    ACTIONS(707), 1,
      anon_sym_,
  [3144] = 1,
    ACTIONS(709), 1,
      anon_sym_,
  [3148] = 1,
    ACTIONS(711), 1,
      aux_sym_selector_option_section_token1,
  [3152] = 1,
    ACTIONS(713), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 238,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 463,
  [SMALL_STATE(9)] = 522,
  [SMALL_STATE(10)] = 558,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 627,
  [SMALL_STATE(13)] = 660,
  [SMALL_STATE(14)] = 693,
  [SMALL_STATE(15)] = 726,
  [SMALL_STATE(16)] = 756,
  [SMALL_STATE(17)] = 786,
  [SMALL_STATE(18)] = 816,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 876,
  [SMALL_STATE(21)] = 904,
  [SMALL_STATE(22)] = 932,
  [SMALL_STATE(23)] = 961,
  [SMALL_STATE(24)] = 990,
  [SMALL_STATE(25)] = 1010,
  [SMALL_STATE(26)] = 1028,
  [SMALL_STATE(27)] = 1046,
  [SMALL_STATE(28)] = 1066,
  [SMALL_STATE(29)] = 1084,
  [SMALL_STATE(30)] = 1102,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1136,
  [SMALL_STATE(33)] = 1153,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1187,
  [SMALL_STATE(36)] = 1204,
  [SMALL_STATE(37)] = 1221,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1255,
  [SMALL_STATE(40)] = 1280,
  [SMALL_STATE(41)] = 1297,
  [SMALL_STATE(42)] = 1314,
  [SMALL_STATE(43)] = 1331,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1373,
  [SMALL_STATE(46)] = 1388,
  [SMALL_STATE(47)] = 1401,
  [SMALL_STATE(48)] = 1418,
  [SMALL_STATE(49)] = 1435,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1469,
  [SMALL_STATE(52)] = 1486,
  [SMALL_STATE(53)] = 1503,
  [SMALL_STATE(54)] = 1515,
  [SMALL_STATE(55)] = 1527,
  [SMALL_STATE(56)] = 1539,
  [SMALL_STATE(57)] = 1551,
  [SMALL_STATE(58)] = 1563,
  [SMALL_STATE(59)] = 1575,
  [SMALL_STATE(60)] = 1587,
  [SMALL_STATE(61)] = 1609,
  [SMALL_STATE(62)] = 1621,
  [SMALL_STATE(63)] = 1633,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1657,
  [SMALL_STATE(66)] = 1669,
  [SMALL_STATE(67)] = 1681,
  [SMALL_STATE(68)] = 1693,
  [SMALL_STATE(69)] = 1705,
  [SMALL_STATE(70)] = 1719,
  [SMALL_STATE(71)] = 1731,
  [SMALL_STATE(72)] = 1743,
  [SMALL_STATE(73)] = 1755,
  [SMALL_STATE(74)] = 1769,
  [SMALL_STATE(75)] = 1781,
  [SMALL_STATE(76)] = 1793,
  [SMALL_STATE(77)] = 1805,
  [SMALL_STATE(78)] = 1817,
  [SMALL_STATE(79)] = 1829,
  [SMALL_STATE(80)] = 1841,
  [SMALL_STATE(81)] = 1853,
  [SMALL_STATE(82)] = 1870,
  [SMALL_STATE(83)] = 1887,
  [SMALL_STATE(84)] = 1904,
  [SMALL_STATE(85)] = 1921,
  [SMALL_STATE(86)] = 1938,
  [SMALL_STATE(87)] = 1955,
  [SMALL_STATE(88)] = 1966,
  [SMALL_STATE(89)] = 1983,
  [SMALL_STATE(90)] = 2000,
  [SMALL_STATE(91)] = 2011,
  [SMALL_STATE(92)] = 2022,
  [SMALL_STATE(93)] = 2039,
  [SMALL_STATE(94)] = 2056,
  [SMALL_STATE(95)] = 2073,
  [SMALL_STATE(96)] = 2088,
  [SMALL_STATE(97)] = 2105,
  [SMALL_STATE(98)] = 2116,
  [SMALL_STATE(99)] = 2127,
  [SMALL_STATE(100)] = 2144,
  [SMALL_STATE(101)] = 2161,
  [SMALL_STATE(102)] = 2175,
  [SMALL_STATE(103)] = 2189,
  [SMALL_STATE(104)] = 2205,
  [SMALL_STATE(105)] = 2219,
  [SMALL_STATE(106)] = 2227,
  [SMALL_STATE(107)] = 2243,
  [SMALL_STATE(108)] = 2257,
  [SMALL_STATE(109)] = 2271,
  [SMALL_STATE(110)] = 2285,
  [SMALL_STATE(111)] = 2298,
  [SMALL_STATE(112)] = 2311,
  [SMALL_STATE(113)] = 2324,
  [SMALL_STATE(114)] = 2337,
  [SMALL_STATE(115)] = 2350,
  [SMALL_STATE(116)] = 2361,
  [SMALL_STATE(117)] = 2371,
  [SMALL_STATE(118)] = 2381,
  [SMALL_STATE(119)] = 2391,
  [SMALL_STATE(120)] = 2401,
  [SMALL_STATE(121)] = 2411,
  [SMALL_STATE(122)] = 2421,
  [SMALL_STATE(123)] = 2431,
  [SMALL_STATE(124)] = 2439,
  [SMALL_STATE(125)] = 2449,
  [SMALL_STATE(126)] = 2459,
  [SMALL_STATE(127)] = 2469,
  [SMALL_STATE(128)] = 2479,
  [SMALL_STATE(129)] = 2489,
  [SMALL_STATE(130)] = 2499,
  [SMALL_STATE(131)] = 2509,
  [SMALL_STATE(132)] = 2519,
  [SMALL_STATE(133)] = 2529,
  [SMALL_STATE(134)] = 2539,
  [SMALL_STATE(135)] = 2546,
  [SMALL_STATE(136)] = 2553,
  [SMALL_STATE(137)] = 2560,
  [SMALL_STATE(138)] = 2567,
  [SMALL_STATE(139)] = 2574,
  [SMALL_STATE(140)] = 2581,
  [SMALL_STATE(141)] = 2588,
  [SMALL_STATE(142)] = 2595,
  [SMALL_STATE(143)] = 2602,
  [SMALL_STATE(144)] = 2609,
  [SMALL_STATE(145)] = 2616,
  [SMALL_STATE(146)] = 2623,
  [SMALL_STATE(147)] = 2630,
  [SMALL_STATE(148)] = 2637,
  [SMALL_STATE(149)] = 2644,
  [SMALL_STATE(150)] = 2651,
  [SMALL_STATE(151)] = 2658,
  [SMALL_STATE(152)] = 2665,
  [SMALL_STATE(153)] = 2672,
  [SMALL_STATE(154)] = 2679,
  [SMALL_STATE(155)] = 2686,
  [SMALL_STATE(156)] = 2693,
  [SMALL_STATE(157)] = 2700,
  [SMALL_STATE(158)] = 2707,
  [SMALL_STATE(159)] = 2714,
  [SMALL_STATE(160)] = 2721,
  [SMALL_STATE(161)] = 2728,
  [SMALL_STATE(162)] = 2735,
  [SMALL_STATE(163)] = 2742,
  [SMALL_STATE(164)] = 2749,
  [SMALL_STATE(165)] = 2756,
  [SMALL_STATE(166)] = 2763,
  [SMALL_STATE(167)] = 2770,
  [SMALL_STATE(168)] = 2777,
  [SMALL_STATE(169)] = 2784,
  [SMALL_STATE(170)] = 2791,
  [SMALL_STATE(171)] = 2798,
  [SMALL_STATE(172)] = 2805,
  [SMALL_STATE(173)] = 2812,
  [SMALL_STATE(174)] = 2816,
  [SMALL_STATE(175)] = 2820,
  [SMALL_STATE(176)] = 2824,
  [SMALL_STATE(177)] = 2828,
  [SMALL_STATE(178)] = 2832,
  [SMALL_STATE(179)] = 2836,
  [SMALL_STATE(180)] = 2840,
  [SMALL_STATE(181)] = 2844,
  [SMALL_STATE(182)] = 2848,
  [SMALL_STATE(183)] = 2852,
  [SMALL_STATE(184)] = 2856,
  [SMALL_STATE(185)] = 2860,
  [SMALL_STATE(186)] = 2864,
  [SMALL_STATE(187)] = 2868,
  [SMALL_STATE(188)] = 2872,
  [SMALL_STATE(189)] = 2876,
  [SMALL_STATE(190)] = 2880,
  [SMALL_STATE(191)] = 2884,
  [SMALL_STATE(192)] = 2888,
  [SMALL_STATE(193)] = 2892,
  [SMALL_STATE(194)] = 2896,
  [SMALL_STATE(195)] = 2900,
  [SMALL_STATE(196)] = 2904,
  [SMALL_STATE(197)] = 2908,
  [SMALL_STATE(198)] = 2912,
  [SMALL_STATE(199)] = 2916,
  [SMALL_STATE(200)] = 2920,
  [SMALL_STATE(201)] = 2924,
  [SMALL_STATE(202)] = 2928,
  [SMALL_STATE(203)] = 2932,
  [SMALL_STATE(204)] = 2936,
  [SMALL_STATE(205)] = 2940,
  [SMALL_STATE(206)] = 2944,
  [SMALL_STATE(207)] = 2948,
  [SMALL_STATE(208)] = 2952,
  [SMALL_STATE(209)] = 2956,
  [SMALL_STATE(210)] = 2960,
  [SMALL_STATE(211)] = 2964,
  [SMALL_STATE(212)] = 2968,
  [SMALL_STATE(213)] = 2972,
  [SMALL_STATE(214)] = 2976,
  [SMALL_STATE(215)] = 2980,
  [SMALL_STATE(216)] = 2984,
  [SMALL_STATE(217)] = 2988,
  [SMALL_STATE(218)] = 2992,
  [SMALL_STATE(219)] = 2996,
  [SMALL_STATE(220)] = 3000,
  [SMALL_STATE(221)] = 3004,
  [SMALL_STATE(222)] = 3008,
  [SMALL_STATE(223)] = 3012,
  [SMALL_STATE(224)] = 3016,
  [SMALL_STATE(225)] = 3020,
  [SMALL_STATE(226)] = 3024,
  [SMALL_STATE(227)] = 3028,
  [SMALL_STATE(228)] = 3032,
  [SMALL_STATE(229)] = 3036,
  [SMALL_STATE(230)] = 3040,
  [SMALL_STATE(231)] = 3044,
  [SMALL_STATE(232)] = 3048,
  [SMALL_STATE(233)] = 3052,
  [SMALL_STATE(234)] = 3056,
  [SMALL_STATE(235)] = 3060,
  [SMALL_STATE(236)] = 3064,
  [SMALL_STATE(237)] = 3068,
  [SMALL_STATE(238)] = 3072,
  [SMALL_STATE(239)] = 3076,
  [SMALL_STATE(240)] = 3080,
  [SMALL_STATE(241)] = 3084,
  [SMALL_STATE(242)] = 3088,
  [SMALL_STATE(243)] = 3092,
  [SMALL_STATE(244)] = 3096,
  [SMALL_STATE(245)] = 3100,
  [SMALL_STATE(246)] = 3104,
  [SMALL_STATE(247)] = 3108,
  [SMALL_STATE(248)] = 3112,
  [SMALL_STATE(249)] = 3116,
  [SMALL_STATE(250)] = 3120,
  [SMALL_STATE(251)] = 3124,
  [SMALL_STATE(252)] = 3128,
  [SMALL_STATE(253)] = 3132,
  [SMALL_STATE(254)] = 3136,
  [SMALL_STATE(255)] = 3140,
  [SMALL_STATE(256)] = 3144,
  [SMALL_STATE(257)] = 3148,
  [SMALL_STATE(258)] = 3152,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(242),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(242),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(129),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(27),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(168),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(117),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(117),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(242),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(117),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(117),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(242),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(242),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(114),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(235),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(127),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(108),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(141),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(60),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(17),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(167),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [652] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(106),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
