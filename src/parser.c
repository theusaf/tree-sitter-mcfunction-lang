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
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '}') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(328);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '}') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(316);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == ',') ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == ']') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == ']') ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '[') ADVANCE(75);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 89},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 89},
  [42] = {.lex_state = 89},
  [43] = {.lex_state = 89},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 89},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 89},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 89},
  [57] = {.lex_state = 89},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 89},
  [65] = {.lex_state = 89},
  [66] = {.lex_state = 89},
  [67] = {.lex_state = 89},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 89},
  [72] = {.lex_state = 89},
  [73] = {.lex_state = 89},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 89},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 89},
  [83] = {.lex_state = 306},
  [84] = {.lex_state = 89},
  [85] = {.lex_state = 89},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 89},
  [90] = {.lex_state = 89},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 89},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 89},
  [95] = {.lex_state = 89},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 89},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 89},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 89},
  [108] = {.lex_state = 89},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 89},
  [112] = {.lex_state = 89},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 89},
  [115] = {.lex_state = 89},
  [116] = {.lex_state = 89},
  [117] = {.lex_state = 305},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 89},
  [120] = {.lex_state = 89},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 89},
  [124] = {.lex_state = 302},
  [125] = {.lex_state = 305},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 304},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 305},
  [133] = {.lex_state = 89},
  [134] = {.lex_state = 89},
  [135] = {.lex_state = 305},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 89},
  [138] = {.lex_state = 302},
  [139] = {.lex_state = 302},
  [140] = {.lex_state = 302},
  [141] = {.lex_state = 302},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 303},
  [144] = {.lex_state = 303},
  [145] = {.lex_state = 302},
  [146] = {.lex_state = 302},
  [147] = {.lex_state = 302},
  [148] = {.lex_state = 302},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 89},
  [151] = {.lex_state = 303},
  [152] = {.lex_state = 303},
  [153] = {.lex_state = 303},
  [154] = {.lex_state = 303},
  [155] = {.lex_state = 89},
  [156] = {.lex_state = 302},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 89},
  [159] = {.lex_state = 302},
  [160] = {.lex_state = 302},
  [161] = {.lex_state = 302},
  [162] = {.lex_state = 302},
  [163] = {.lex_state = 302},
  [164] = {.lex_state = 89},
  [165] = {.lex_state = 302},
  [166] = {.lex_state = 302},
  [167] = {.lex_state = 89},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 302},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 303},
  [174] = {.lex_state = 303},
  [175] = {.lex_state = 302},
  [176] = {.lex_state = 302},
  [177] = {.lex_state = 89},
  [178] = {.lex_state = 89},
  [179] = {.lex_state = 302},
  [180] = {.lex_state = 302},
  [181] = {.lex_state = 89},
  [182] = {.lex_state = 302},
  [183] = {.lex_state = 302},
  [184] = {.lex_state = 302},
  [185] = {.lex_state = 302},
  [186] = {.lex_state = 302},
  [187] = {.lex_state = 89},
  [188] = {.lex_state = 89},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 89},
  [191] = {.lex_state = 302},
  [192] = {.lex_state = 302},
  [193] = {.lex_state = 89},
  [194] = {.lex_state = 302},
  [195] = {.lex_state = 302},
  [196] = {.lex_state = 302},
  [197] = {.lex_state = 302},
  [198] = {.lex_state = 302},
  [199] = {.lex_state = 302},
  [200] = {.lex_state = 302},
  [201] = {.lex_state = 302},
  [202] = {.lex_state = 302},
  [203] = {.lex_state = 89},
  [204] = {.lex_state = 89},
  [205] = {.lex_state = 302},
  [206] = {.lex_state = 302},
  [207] = {.lex_state = 302},
  [208] = {.lex_state = 302},
  [209] = {.lex_state = 302},
  [210] = {.lex_state = 302},
  [211] = {.lex_state = 302},
  [212] = {.lex_state = 302},
  [213] = {.lex_state = 302},
  [214] = {.lex_state = 89},
  [215] = {.lex_state = 302},
  [216] = {.lex_state = 302},
  [217] = {.lex_state = 302},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 302},
  [220] = {.lex_state = 302},
  [221] = {.lex_state = 302},
  [222] = {.lex_state = 302},
  [223] = {.lex_state = 89},
  [224] = {.lex_state = 89},
  [225] = {.lex_state = 302},
  [226] = {.lex_state = 302},
  [227] = {.lex_state = 302},
  [228] = {.lex_state = 302},
  [229] = {.lex_state = 302},
  [230] = {.lex_state = 302},
  [231] = {.lex_state = 302},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 302},
  [234] = {.lex_state = 89},
  [235] = {.lex_state = 302},
  [236] = {.lex_state = 302},
  [237] = {.lex_state = 89},
  [238] = {.lex_state = 89},
  [239] = {.lex_state = 89},
  [240] = {.lex_state = 302},
  [241] = {.lex_state = 302},
  [242] = {.lex_state = 89},
  [243] = {.lex_state = 89},
  [244] = {.lex_state = 302},
  [245] = {.lex_state = 89},
  [246] = {.lex_state = 89},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 89},
  [249] = {.lex_state = 89},
  [250] = {.lex_state = 89},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 302},
  [253] = {.lex_state = 302},
  [254] = {.lex_state = 89},
  [255] = {.lex_state = 89},
  [256] = {.lex_state = 89},
  [257] = {.lex_state = 89},
  [258] = {.lex_state = 89},
  [259] = {.lex_state = 302},
  [260] = {.lex_state = 302},
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
    [sym_root] = STATE(218),
    [sym_command] = STATE(21),
    [sym_execute_command] = STATE(82),
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
    STATE(248), 1,
      sym_selector,
    STATE(249), 1,
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
    STATE(250), 10,
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
    STATE(248), 1,
      sym_selector,
    STATE(249), 1,
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
    STATE(250), 10,
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
    STATE(249), 1,
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
    STATE(250), 11,
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
    STATE(249), 1,
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
    STATE(250), 11,
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
    STATE(249), 1,
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
    STATE(250), 11,
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
    STATE(249), 1,
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
    STATE(250), 11,
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
    STATE(249), 1,
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
    STATE(53), 10,
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
    STATE(28), 1,
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
    STATE(27), 1,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
  [726] = 8,
    ACTIONS(91), 1,
      aux_sym_command_name_token1,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      aux_sym_selector_number_token3,
    STATE(205), 1,
      sym_selector_value,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(191), 4,
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
    STATE(211), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
  [786] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
  [816] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
  [846] = 8,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_nbt_object_value,
    ACTIONS(75), 2,
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
    STATE(82), 1,
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
    STATE(82), 1,
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
    STATE(28), 1,
      aux_sym_container_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    STATE(134), 1,
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
    STATE(27), 1,
      aux_sym_container_repeat1,
    STATE(61), 1,
      sym_nbt_object,
    STATE(120), 1,
      aux_sym_path_repeat1,
    STATE(62), 2,
      sym_item_nbt,
      sym_item_state,
  [990] = 5,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(158), 1,
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
  [1046] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1064] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(148), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1082] = 5,
    ACTIONS(152), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(150), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1102] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(51), 1,
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
    STATE(40), 1,
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
    ACTIONS(174), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(177), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1170] = 4,
    ACTIONS(179), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
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
    ACTIONS(181), 1,
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
  [1221] = 4,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(189), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1238] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_command_repeat1,
    ACTIONS(193), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1255] = 8,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(197), 1,
      aux_sym_command_name_token1,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_selector_score_key,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
  [1280] = 4,
    ACTIONS(203), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1297] = 4,
    ACTIONS(208), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1314] = 3,
    ACTIONS(217), 1,
      sym_number,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1329] = 4,
    ACTIONS(221), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1346] = 8,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(197), 1,
      aux_sym_command_name_token1,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(195), 1,
      sym_selector_score_key,
    STATE(228), 1,
      sym_string,
  [1371] = 4,
    ACTIONS(181), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_command_repeat1,
    ACTIONS(160), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
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
    STATE(48), 1,
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
    ACTIONS(237), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1435] = 4,
    ACTIONS(242), 1,
      anon_sym_,
    STATE(36), 1,
      aux_sym_command_repeat1,
    ACTIONS(193), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1452] = 4,
    ACTIONS(203), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(154), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1469] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(177), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1486] = 4,
    ACTIONS(179), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1503] = 2,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1515] = 2,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 5,
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
  [1575] = 7,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(197), 1,
      aux_sym_command_name_token1,
    ACTIONS(199), 1,
      sym_number,
    STATE(186), 1,
      sym_nbt_object_key,
    STATE(195), 1,
      sym_selector_score_key,
    STATE(228), 1,
      sym_string,
  [1597] = 2,
    ACTIONS(267), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
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
  [1705] = 2,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1717] = 3,
    ACTIONS(303), 1,
      anon_sym_,
    ACTIONS(306), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
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
  [1743] = 3,
    ACTIONS(314), 1,
      anon_sym_,
    ACTIONS(317), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1757] = 2,
    ACTIONS(321), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
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
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(213), 5,
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
    ACTIONS(333), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1817] = 2,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(235), 5,
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
  [1853] = 2,
    ACTIONS(345), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1865] = 2,
    ACTIONS(349), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1876] = 2,
    ACTIONS(353), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(351), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1887] = 5,
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
  [1904] = 2,
    ACTIONS(357), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(355), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1915] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(199), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1932] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(199), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1949] = 5,
    ACTIONS(363), 1,
      aux_sym_command_name_token1,
    ACTIONS(365), 1,
      sym_number,
    STATE(151), 1,
      sym_boolean,
    STATE(152), 1,
      sym_state_value,
    ACTIONS(367), 2,
      anon_sym_true,
      anon_sym_false,
  [1966] = 2,
    ACTIONS(371), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(369), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1977] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(373), 1,
      anon_sym_SLASH,
    ACTIONS(375), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(69), 2,
      sym_command,
      sym__legacy_execute,
  [1994] = 5,
    ACTIONS(377), 1,
      aux_sym_command_name_token1,
    ACTIONS(379), 1,
      sym_number,
    STATE(178), 1,
      sym_state_value,
    STATE(243), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2011] = 2,
    ACTIONS(383), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(381), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2022] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(85), 2,
      sym_command,
      sym_execute_command,
  [2039] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(92), 2,
      sym_command,
      sym_execute_command,
  [2056] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(385), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_execute,
    STATE(38), 1,
      sym_command_name,
    STATE(89), 2,
      sym_command,
      sym_execute_command,
  [2073] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(199), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2090] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(373), 1,
      anon_sym_SLASH,
    ACTIONS(375), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(57), 2,
      sym_command,
      sym__legacy_execute,
  [2107] = 4,
    STATE(208), 1,
      sym_selector_score_value,
    STATE(209), 1,
      sym_selector_number,
    ACTIONS(99), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(101), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2122] = 5,
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
  [2139] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(373), 1,
      anon_sym_SLASH,
    ACTIONS(375), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
    STATE(60), 2,
      sym_command,
      sym__legacy_execute,
  [2156] = 5,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(199), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2173] = 1,
    ACTIONS(393), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2181] = 4,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_token1,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    STATE(105), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2195] = 4,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_string_token1,
    STATE(103), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2209] = 4,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym_string_token1,
    ACTIONS(410), 1,
      anon_sym_BSLASH,
    STATE(105), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2223] = 4,
    ACTIONS(397), 1,
      aux_sym_string_token1,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(105), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2237] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(223), 1,
      sym_location,
    STATE(256), 1,
      sym_coordinate,
  [2253] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(149), 1,
      sym_location,
    STATE(234), 1,
      sym_coordinate,
  [2269] = 4,
    ACTIONS(399), 1,
      anon_sym_BSLASH,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      aux_sym_string_token1,
    STATE(106), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2283] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(228), 1,
      sym_string,
    ACTIONS(199), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2297] = 4,
    ACTIONS(421), 1,
      sym_number,
    ACTIONS(423), 1,
      anon_sym_TILDE,
    ACTIONS(425), 1,
      anon_sym_CARET,
    STATE(170), 1,
      sym_coordinate,
  [2310] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(238), 1,
      sym_coordinate,
  [2323] = 3,
    ACTIONS(429), 1,
      aux_sym_command_name_token1,
    STATE(188), 1,
      sym_state_key,
    ACTIONS(427), 2,
      anon_sym_STAR,
      sym_number,
  [2334] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(224), 1,
      sym_coordinate,
  [2347] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(72), 1,
      sym_coordinate,
  [2360] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(77), 1,
      sym_coordinate,
  [2373] = 3,
    ACTIONS(431), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_selector_option_section_repeat1,
  [2383] = 3,
    ACTIONS(435), 1,
      aux_sym_command_name_token1,
    ACTIONS(437), 1,
      aux_sym_item_token1,
    STATE(190), 1,
      sym_item,
  [2393] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(439), 1,
      anon_sym_execute,
    STATE(45), 1,
      sym_command_name,
  [2403] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_path_repeat1,
  [2413] = 3,
    ACTIONS(213), 1,
      anon_sym_detect,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(441), 1,
      sym_number,
  [2423] = 3,
    ACTIONS(443), 1,
      aux_sym_command_name_token1,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_selector_score_key,
  [2433] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(447), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2443] = 3,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    STATE(159), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(160), 1,
      aux_sym_selector_score_repeat1,
  [2453] = 3,
    ACTIONS(431), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
  [2463] = 3,
    ACTIONS(453), 1,
      aux_sym_command_name_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_state_key,
  [2473] = 2,
    ACTIONS(459), 1,
      aux_sym_string_token1,
    ACTIONS(457), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2481] = 3,
    ACTIONS(461), 1,
      aux_sym_command_name_token1,
    STATE(175), 1,
      sym_selector_option,
    STATE(219), 1,
      sym_selector_key,
  [2491] = 3,
    ACTIONS(463), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
  [2501] = 3,
    ACTIONS(453), 1,
      aux_sym_command_name_token1,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_state_key,
  [2511] = 3,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(471), 1,
      aux_sym__legacy_execute_token1,
    STATE(257), 1,
      sym_selector,
  [2521] = 3,
    ACTIONS(473), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_selector_option_section_repeat1,
  [2531] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(478), 1,
      anon_sym_execute,
    STATE(30), 1,
      sym_command_name,
  [2541] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_path_repeat1,
  [2551] = 2,
    ACTIONS(480), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [2558] = 2,
    ACTIONS(213), 1,
      anon_sym_detect,
    ACTIONS(215), 1,
      anon_sym_,
  [2565] = 2,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(150), 1,
      aux_sym_execute_command_repeat1,
  [2572] = 2,
    ACTIONS(486), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_nbt_array_repeat1,
  [2579] = 2,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
    STATE(145), 1,
      aux_sym_nbt_object_repeat1,
  [2586] = 2,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
    STATE(171), 1,
      aux_sym_nbt_object_repeat1,
  [2593] = 2,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_nbt_array_repeat1,
  [2600] = 2,
    ACTIONS(453), 1,
      aux_sym_command_name_token1,
    STATE(221), 1,
      sym_state_key,
  [2607] = 2,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      aux_sym_selector_option_section_token1,
  [2614] = 2,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
  [2621] = 2,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
    STATE(145), 1,
      aux_sym_nbt_object_repeat1,
  [2628] = 2,
    ACTIONS(501), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_nbt_array_repeat1,
  [2635] = 2,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
    STATE(156), 1,
      aux_sym_item_state_repeat1,
  [2642] = 2,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
    STATE(147), 1,
      aux_sym_item_state_repeat1,
  [2649] = 2,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 1,
      anon_sym_detect,
  [2656] = 2,
    ACTIONS(511), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [2663] = 2,
    ACTIONS(513), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(515), 1,
      anon_sym_COMMA,
  [2670] = 2,
    ACTIONS(517), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
  [2677] = 2,
    ACTIONS(521), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(523), 1,
      anon_sym_COMMA,
  [2684] = 2,
    ACTIONS(525), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(527), 1,
      anon_sym_COMMA,
  [2691] = 2,
    ACTIONS(529), 1,
      anon_sym_,
    STATE(158), 1,
      aux_sym_execute_command_repeat1,
  [2698] = 2,
    ACTIONS(531), 1,
      aux_sym_selector_option_section_token1,
    STATE(156), 1,
      aux_sym_item_state_repeat1,
  [2705] = 2,
    ACTIONS(277), 1,
      anon_sym_detect,
    ACTIONS(279), 1,
      anon_sym_,
  [2712] = 2,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [2719] = 2,
    ACTIONS(534), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_nbt_repeat1,
  [2726] = 2,
    ACTIONS(536), 1,
      aux_sym_selector_option_section_token1,
    STATE(165), 1,
      aux_sym_selector_score_repeat1,
  [2733] = 2,
    ACTIONS(538), 1,
      aux_sym_selector_option_section_token1,
    STATE(139), 1,
      aux_sym_nbt_object_repeat1,
  [2740] = 2,
    ACTIONS(540), 1,
      aux_sym_selector_option_section_token1,
    STATE(141), 1,
      aux_sym_nbt_array_repeat1,
  [2747] = 2,
    ACTIONS(542), 1,
      aux_sym_selector_option_section_token1,
    STATE(163), 1,
      aux_sym_selector_nbt_repeat1,
  [2754] = 2,
    ACTIONS(545), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [2761] = 2,
    ACTIONS(548), 1,
      aux_sym_selector_option_section_token1,
    STATE(165), 1,
      aux_sym_selector_score_repeat1,
  [2768] = 2,
    ACTIONS(551), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_nbt_array_repeat1,
  [2775] = 2,
    ACTIONS(554), 1,
      anon_sym_EQ,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [2782] = 2,
    ACTIONS(558), 1,
      aux_sym_command_name_token1,
    ACTIONS(560), 1,
      sym_number,
  [2789] = 2,
    ACTIONS(443), 1,
      aux_sym_command_name_token1,
    STATE(198), 1,
      sym_selector_score_key,
  [2796] = 2,
    ACTIONS(331), 1,
      anon_sym_detect,
    ACTIONS(333), 1,
      anon_sym_,
  [2803] = 2,
    ACTIONS(562), 1,
      aux_sym_selector_option_section_token1,
    STATE(145), 1,
      aux_sym_nbt_object_repeat1,
  [2810] = 2,
    ACTIONS(564), 1,
      aux_sym_command_name_token1,
    ACTIONS(566), 1,
      aux_sym_item_token1,
  [2817] = 2,
    ACTIONS(568), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(570), 1,
      anon_sym_COMMA,
  [2824] = 2,
    ACTIONS(572), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [2831] = 1,
    ACTIONS(576), 1,
      aux_sym_selector_option_section_token1,
  [2835] = 1,
    ACTIONS(578), 1,
      aux_sym_selector_option_section_token1,
  [2839] = 1,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [2843] = 1,
    ACTIONS(582), 1,
      anon_sym_,
  [2847] = 1,
    ACTIONS(584), 1,
      aux_sym_selector_option_section_token1,
  [2851] = 1,
    ACTIONS(586), 1,
      aux_sym_selector_option_section_token1,
  [2855] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [2859] = 1,
    ACTIONS(590), 1,
      aux_sym_selector_option_section_token1,
  [2863] = 1,
    ACTIONS(592), 1,
      aux_sym_selector_option_section_token1,
  [2867] = 1,
    ACTIONS(594), 1,
      aux_sym_selector_option_section_token1,
  [2871] = 1,
    ACTIONS(597), 1,
      aux_sym_selector_option_section_token1,
  [2875] = 1,
    ACTIONS(599), 1,
      aux_sym_selector_option_section_token1,
  [2879] = 1,
    ACTIONS(601), 1,
      anon_sym_,
  [2883] = 1,
    ACTIONS(603), 1,
      anon_sym_EQ,
  [2887] = 1,
    ACTIONS(605), 1,
      aux_sym_command_name_token1,
  [2891] = 1,
    ACTIONS(607), 1,
      anon_sym_,
  [2895] = 1,
    ACTIONS(609), 1,
      aux_sym_selector_option_section_token1,
  [2899] = 1,
    ACTIONS(611), 1,
      aux_sym_selector_option_section_token1,
  [2903] = 1,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [2907] = 1,
    ACTIONS(616), 1,
      aux_sym_selector_option_section_token1,
  [2911] = 1,
    ACTIONS(618), 1,
      aux_sym_selector_option_section_token1,
  [2915] = 1,
    ACTIONS(620), 1,
      aux_sym_selector_option_section_token1,
  [2919] = 1,
    ACTIONS(622), 1,
      aux_sym_selector_option_section_token1,
  [2923] = 1,
    ACTIONS(624), 1,
      aux_sym_selector_option_section_token1,
  [2927] = 1,
    ACTIONS(626), 1,
      aux_sym_selector_option_section_token1,
  [2931] = 1,
    ACTIONS(628), 1,
      aux_sym_selector_option_section_token1,
  [2935] = 1,
    ACTIONS(630), 1,
      aux_sym_selector_option_section_token1,
  [2939] = 1,
    ACTIONS(632), 1,
      aux_sym_selector_option_section_token1,
  [2943] = 1,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [2947] = 1,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [2951] = 1,
    ACTIONS(634), 1,
      aux_sym_selector_option_section_token1,
  [2955] = 1,
    ACTIONS(636), 1,
      aux_sym_selector_option_section_token1,
  [2959] = 1,
    ACTIONS(638), 1,
      aux_sym_selector_option_section_token1,
  [2963] = 1,
    ACTIONS(640), 1,
      aux_sym_selector_option_section_token1,
  [2967] = 1,
    ACTIONS(642), 1,
      aux_sym_selector_option_section_token1,
  [2971] = 1,
    ACTIONS(644), 1,
      aux_sym_selector_option_section_token1,
  [2975] = 1,
    ACTIONS(646), 1,
      aux_sym_selector_option_section_token1,
  [2979] = 1,
    ACTIONS(648), 1,
      aux_sym_selector_option_section_token1,
  [2983] = 1,
    ACTIONS(650), 1,
      aux_sym_selector_option_section_token1,
  [2987] = 1,
    ACTIONS(652), 1,
      anon_sym_EQ,
  [2991] = 1,
    ACTIONS(654), 1,
      aux_sym_selector_option_section_token1,
  [2995] = 1,
    ACTIONS(656), 1,
      aux_sym_selector_option_section_token1,
  [2999] = 1,
    ACTIONS(658), 1,
      aux_sym_selector_option_section_token1,
  [3003] = 1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [3007] = 1,
    ACTIONS(662), 1,
      aux_sym_selector_option_section_token1,
  [3011] = 1,
    ACTIONS(664), 1,
      aux_sym_selector_option_section_token1,
  [3015] = 1,
    ACTIONS(666), 1,
      aux_sym_selector_option_section_token1,
  [3019] = 1,
    ACTIONS(668), 1,
      aux_sym_selector_option_section_token1,
  [3023] = 1,
    ACTIONS(670), 1,
      anon_sym_,
  [3027] = 1,
    ACTIONS(672), 1,
      anon_sym_,
  [3031] = 1,
    ACTIONS(245), 1,
      aux_sym_selector_option_section_token1,
  [3035] = 1,
    ACTIONS(674), 1,
      aux_sym_selector_option_section_token1,
  [3039] = 1,
    ACTIONS(261), 1,
      aux_sym_selector_option_section_token1,
  [3043] = 1,
    ACTIONS(676), 1,
      aux_sym_selector_option_section_token1,
  [3047] = 1,
    ACTIONS(678), 1,
      aux_sym_selector_option_section_token1,
  [3051] = 1,
    ACTIONS(281), 1,
      aux_sym_selector_option_section_token1,
  [3055] = 1,
    ACTIONS(680), 1,
      aux_sym_selector_option_section_token1,
  [3059] = 1,
    ACTIONS(682), 1,
      aux_sym_command_name_token1,
  [3063] = 1,
    ACTIONS(343), 1,
      aux_sym_selector_option_section_token1,
  [3067] = 1,
    ACTIONS(684), 1,
      anon_sym_,
  [3071] = 1,
    ACTIONS(273), 1,
      aux_sym_selector_option_section_token1,
  [3075] = 1,
    ACTIONS(253), 1,
      aux_sym_selector_option_section_token1,
  [3079] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3083] = 1,
    ACTIONS(688), 1,
      anon_sym_,
  [3087] = 1,
    ACTIONS(668), 1,
      anon_sym_EQ,
  [3091] = 1,
    ACTIONS(319), 1,
      aux_sym_selector_option_section_token1,
  [3095] = 1,
    ACTIONS(323), 1,
      aux_sym_selector_option_section_token1,
  [3099] = 1,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
  [3103] = 1,
    ACTIONS(515), 1,
      anon_sym_,
  [3107] = 1,
    ACTIONS(692), 1,
      aux_sym_selector_option_section_token1,
  [3111] = 1,
    ACTIONS(441), 1,
      sym_number,
  [3115] = 1,
    ACTIONS(694), 1,
      anon_sym_,
  [3119] = 1,
    ACTIONS(696), 1,
      aux_sym_command_name_token1,
  [3123] = 1,
    ACTIONS(698), 1,
      anon_sym_,
  [3127] = 1,
    ACTIONS(701), 1,
      anon_sym_,
  [3131] = 1,
    ACTIONS(703), 1,
      anon_sym_,
  [3135] = 1,
    ACTIONS(705), 1,
      aux_sym_command_name_token1,
  [3139] = 1,
    ACTIONS(707), 1,
      aux_sym_selector_option_section_token1,
  [3143] = 1,
    ACTIONS(709), 1,
      aux_sym_selector_option_section_token1,
  [3147] = 1,
    ACTIONS(217), 1,
      sym_number,
  [3151] = 1,
    ACTIONS(711), 1,
      anon_sym_,
  [3155] = 1,
    ACTIONS(713), 1,
      anon_sym_,
  [3159] = 1,
    ACTIONS(715), 1,
      anon_sym_,
  [3163] = 1,
    ACTIONS(717), 1,
      anon_sym_,
  [3167] = 1,
    ACTIONS(719), 1,
      aux_sym_selector_option_section_token1,
  [3171] = 1,
    ACTIONS(721), 1,
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
  [SMALL_STATE(28)] = 1064,
  [SMALL_STATE(29)] = 1082,
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
  [SMALL_STATE(43)] = 1329,
  [SMALL_STATE(44)] = 1346,
  [SMALL_STATE(45)] = 1371,
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
  [SMALL_STATE(60)] = 1597,
  [SMALL_STATE(61)] = 1609,
  [SMALL_STATE(62)] = 1621,
  [SMALL_STATE(63)] = 1633,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1657,
  [SMALL_STATE(66)] = 1669,
  [SMALL_STATE(67)] = 1681,
  [SMALL_STATE(68)] = 1693,
  [SMALL_STATE(69)] = 1705,
  [SMALL_STATE(70)] = 1717,
  [SMALL_STATE(71)] = 1731,
  [SMALL_STATE(72)] = 1743,
  [SMALL_STATE(73)] = 1757,
  [SMALL_STATE(74)] = 1769,
  [SMALL_STATE(75)] = 1781,
  [SMALL_STATE(76)] = 1793,
  [SMALL_STATE(77)] = 1805,
  [SMALL_STATE(78)] = 1817,
  [SMALL_STATE(79)] = 1829,
  [SMALL_STATE(80)] = 1841,
  [SMALL_STATE(81)] = 1853,
  [SMALL_STATE(82)] = 1865,
  [SMALL_STATE(83)] = 1876,
  [SMALL_STATE(84)] = 1887,
  [SMALL_STATE(85)] = 1904,
  [SMALL_STATE(86)] = 1915,
  [SMALL_STATE(87)] = 1932,
  [SMALL_STATE(88)] = 1949,
  [SMALL_STATE(89)] = 1966,
  [SMALL_STATE(90)] = 1977,
  [SMALL_STATE(91)] = 1994,
  [SMALL_STATE(92)] = 2011,
  [SMALL_STATE(93)] = 2022,
  [SMALL_STATE(94)] = 2039,
  [SMALL_STATE(95)] = 2056,
  [SMALL_STATE(96)] = 2073,
  [SMALL_STATE(97)] = 2090,
  [SMALL_STATE(98)] = 2107,
  [SMALL_STATE(99)] = 2122,
  [SMALL_STATE(100)] = 2139,
  [SMALL_STATE(101)] = 2156,
  [SMALL_STATE(102)] = 2173,
  [SMALL_STATE(103)] = 2181,
  [SMALL_STATE(104)] = 2195,
  [SMALL_STATE(105)] = 2209,
  [SMALL_STATE(106)] = 2223,
  [SMALL_STATE(107)] = 2237,
  [SMALL_STATE(108)] = 2253,
  [SMALL_STATE(109)] = 2269,
  [SMALL_STATE(110)] = 2283,
  [SMALL_STATE(111)] = 2297,
  [SMALL_STATE(112)] = 2310,
  [SMALL_STATE(113)] = 2323,
  [SMALL_STATE(114)] = 2334,
  [SMALL_STATE(115)] = 2347,
  [SMALL_STATE(116)] = 2360,
  [SMALL_STATE(117)] = 2373,
  [SMALL_STATE(118)] = 2383,
  [SMALL_STATE(119)] = 2393,
  [SMALL_STATE(120)] = 2403,
  [SMALL_STATE(121)] = 2413,
  [SMALL_STATE(122)] = 2423,
  [SMALL_STATE(123)] = 2433,
  [SMALL_STATE(124)] = 2443,
  [SMALL_STATE(125)] = 2453,
  [SMALL_STATE(126)] = 2463,
  [SMALL_STATE(127)] = 2473,
  [SMALL_STATE(128)] = 2481,
  [SMALL_STATE(129)] = 2491,
  [SMALL_STATE(130)] = 2501,
  [SMALL_STATE(131)] = 2511,
  [SMALL_STATE(132)] = 2521,
  [SMALL_STATE(133)] = 2531,
  [SMALL_STATE(134)] = 2541,
  [SMALL_STATE(135)] = 2551,
  [SMALL_STATE(136)] = 2558,
  [SMALL_STATE(137)] = 2565,
  [SMALL_STATE(138)] = 2572,
  [SMALL_STATE(139)] = 2579,
  [SMALL_STATE(140)] = 2586,
  [SMALL_STATE(141)] = 2593,
  [SMALL_STATE(142)] = 2600,
  [SMALL_STATE(143)] = 2607,
  [SMALL_STATE(144)] = 2614,
  [SMALL_STATE(145)] = 2621,
  [SMALL_STATE(146)] = 2628,
  [SMALL_STATE(147)] = 2635,
  [SMALL_STATE(148)] = 2642,
  [SMALL_STATE(149)] = 2649,
  [SMALL_STATE(150)] = 2656,
  [SMALL_STATE(151)] = 2663,
  [SMALL_STATE(152)] = 2670,
  [SMALL_STATE(153)] = 2677,
  [SMALL_STATE(154)] = 2684,
  [SMALL_STATE(155)] = 2691,
  [SMALL_STATE(156)] = 2698,
  [SMALL_STATE(157)] = 2705,
  [SMALL_STATE(158)] = 2712,
  [SMALL_STATE(159)] = 2719,
  [SMALL_STATE(160)] = 2726,
  [SMALL_STATE(161)] = 2733,
  [SMALL_STATE(162)] = 2740,
  [SMALL_STATE(163)] = 2747,
  [SMALL_STATE(164)] = 2754,
  [SMALL_STATE(165)] = 2761,
  [SMALL_STATE(166)] = 2768,
  [SMALL_STATE(167)] = 2775,
  [SMALL_STATE(168)] = 2782,
  [SMALL_STATE(169)] = 2789,
  [SMALL_STATE(170)] = 2796,
  [SMALL_STATE(171)] = 2803,
  [SMALL_STATE(172)] = 2810,
  [SMALL_STATE(173)] = 2817,
  [SMALL_STATE(174)] = 2824,
  [SMALL_STATE(175)] = 2831,
  [SMALL_STATE(176)] = 2835,
  [SMALL_STATE(177)] = 2839,
  [SMALL_STATE(178)] = 2843,
  [SMALL_STATE(179)] = 2847,
  [SMALL_STATE(180)] = 2851,
  [SMALL_STATE(181)] = 2855,
  [SMALL_STATE(182)] = 2859,
  [SMALL_STATE(183)] = 2863,
  [SMALL_STATE(184)] = 2867,
  [SMALL_STATE(185)] = 2871,
  [SMALL_STATE(186)] = 2875,
  [SMALL_STATE(187)] = 2879,
  [SMALL_STATE(188)] = 2883,
  [SMALL_STATE(189)] = 2887,
  [SMALL_STATE(190)] = 2891,
  [SMALL_STATE(191)] = 2895,
  [SMALL_STATE(192)] = 2899,
  [SMALL_STATE(193)] = 2903,
  [SMALL_STATE(194)] = 2907,
  [SMALL_STATE(195)] = 2911,
  [SMALL_STATE(196)] = 2915,
  [SMALL_STATE(197)] = 2919,
  [SMALL_STATE(198)] = 2923,
  [SMALL_STATE(199)] = 2927,
  [SMALL_STATE(200)] = 2931,
  [SMALL_STATE(201)] = 2935,
  [SMALL_STATE(202)] = 2939,
  [SMALL_STATE(203)] = 2943,
  [SMALL_STATE(204)] = 2947,
  [SMALL_STATE(205)] = 2951,
  [SMALL_STATE(206)] = 2955,
  [SMALL_STATE(207)] = 2959,
  [SMALL_STATE(208)] = 2963,
  [SMALL_STATE(209)] = 2967,
  [SMALL_STATE(210)] = 2971,
  [SMALL_STATE(211)] = 2975,
  [SMALL_STATE(212)] = 2979,
  [SMALL_STATE(213)] = 2983,
  [SMALL_STATE(214)] = 2987,
  [SMALL_STATE(215)] = 2991,
  [SMALL_STATE(216)] = 2995,
  [SMALL_STATE(217)] = 2999,
  [SMALL_STATE(218)] = 3003,
  [SMALL_STATE(219)] = 3007,
  [SMALL_STATE(220)] = 3011,
  [SMALL_STATE(221)] = 3015,
  [SMALL_STATE(222)] = 3019,
  [SMALL_STATE(223)] = 3023,
  [SMALL_STATE(224)] = 3027,
  [SMALL_STATE(225)] = 3031,
  [SMALL_STATE(226)] = 3035,
  [SMALL_STATE(227)] = 3039,
  [SMALL_STATE(228)] = 3043,
  [SMALL_STATE(229)] = 3047,
  [SMALL_STATE(230)] = 3051,
  [SMALL_STATE(231)] = 3055,
  [SMALL_STATE(232)] = 3059,
  [SMALL_STATE(233)] = 3063,
  [SMALL_STATE(234)] = 3067,
  [SMALL_STATE(235)] = 3071,
  [SMALL_STATE(236)] = 3075,
  [SMALL_STATE(237)] = 3079,
  [SMALL_STATE(238)] = 3083,
  [SMALL_STATE(239)] = 3087,
  [SMALL_STATE(240)] = 3091,
  [SMALL_STATE(241)] = 3095,
  [SMALL_STATE(242)] = 3099,
  [SMALL_STATE(243)] = 3103,
  [SMALL_STATE(244)] = 3107,
  [SMALL_STATE(245)] = 3111,
  [SMALL_STATE(246)] = 3115,
  [SMALL_STATE(247)] = 3119,
  [SMALL_STATE(248)] = 3123,
  [SMALL_STATE(249)] = 3127,
  [SMALL_STATE(250)] = 3131,
  [SMALL_STATE(251)] = 3135,
  [SMALL_STATE(252)] = 3139,
  [SMALL_STATE(253)] = 3143,
  [SMALL_STATE(254)] = 3147,
  [SMALL_STATE(255)] = 3151,
  [SMALL_STATE(256)] = 3155,
  [SMALL_STATE(257)] = 3159,
  [SMALL_STATE(258)] = 3163,
  [SMALL_STATE(259)] = 3167,
  [SMALL_STATE(260)] = 3171,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(172),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(172),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(133),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(24),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(168),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(131),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(131),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(172),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(131),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(131),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(172),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(172),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(242),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(128),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(110),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(142),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(59),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(169),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(108),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
