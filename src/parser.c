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
#define STATE_COUNT 260
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
      if (eof) ADVANCE(103);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ']') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '_') ADVANCE(277);
      if (lookahead == '}') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '}') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '{') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(329);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '[') ADVANCE(4);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '[') ADVANCE(314);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '~') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == ',') ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == ']') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == ']') ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '[') ADVANCE(4);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '[') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 102},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 102},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 102},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 102},
  [26] = {.lex_state = 102},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 102},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 102},
  [49] = {.lex_state = 102},
  [50] = {.lex_state = 102},
  [51] = {.lex_state = 102},
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 102},
  [59] = {.lex_state = 102},
  [60] = {.lex_state = 102},
  [61] = {.lex_state = 102},
  [62] = {.lex_state = 102},
  [63] = {.lex_state = 102},
  [64] = {.lex_state = 102},
  [65] = {.lex_state = 102},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 102},
  [68] = {.lex_state = 102},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 102},
  [71] = {.lex_state = 102},
  [72] = {.lex_state = 102},
  [73] = {.lex_state = 102},
  [74] = {.lex_state = 102},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 102},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 102},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 102},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 102},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 102},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 102},
  [89] = {.lex_state = 102},
  [90] = {.lex_state = 102},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 102},
  [94] = {.lex_state = 102},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 319},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 102},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 102},
  [111] = {.lex_state = 102},
  [112] = {.lex_state = 102},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 102},
  [115] = {.lex_state = 102},
  [116] = {.lex_state = 102},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 102},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 317},
  [123] = {.lex_state = 102},
  [124] = {.lex_state = 318},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 102},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 318},
  [131] = {.lex_state = 315},
  [132] = {.lex_state = 102},
  [133] = {.lex_state = 318},
  [134] = {.lex_state = 102},
  [135] = {.lex_state = 102},
  [136] = {.lex_state = 315},
  [137] = {.lex_state = 316},
  [138] = {.lex_state = 315},
  [139] = {.lex_state = 315},
  [140] = {.lex_state = 315},
  [141] = {.lex_state = 102},
  [142] = {.lex_state = 102},
  [143] = {.lex_state = 315},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 316},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 102},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 315},
  [152] = {.lex_state = 315},
  [153] = {.lex_state = 318},
  [154] = {.lex_state = 316},
  [155] = {.lex_state = 316},
  [156] = {.lex_state = 316},
  [157] = {.lex_state = 315},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 315},
  [161] = {.lex_state = 315},
  [162] = {.lex_state = 315},
  [163] = {.lex_state = 316},
  [164] = {.lex_state = 316},
  [165] = {.lex_state = 102},
  [166] = {.lex_state = 315},
  [167] = {.lex_state = 315},
  [168] = {.lex_state = 30},
  [169] = {.lex_state = 315},
  [170] = {.lex_state = 316},
  [171] = {.lex_state = 315},
  [172] = {.lex_state = 315},
  [173] = {.lex_state = 315},
  [174] = {.lex_state = 315},
  [175] = {.lex_state = 315},
  [176] = {.lex_state = 102},
  [177] = {.lex_state = 102},
  [178] = {.lex_state = 315},
  [179] = {.lex_state = 315},
  [180] = {.lex_state = 315},
  [181] = {.lex_state = 315},
  [182] = {.lex_state = 315},
  [183] = {.lex_state = 315},
  [184] = {.lex_state = 315},
  [185] = {.lex_state = 315},
  [186] = {.lex_state = 315},
  [187] = {.lex_state = 102},
  [188] = {.lex_state = 315},
  [189] = {.lex_state = 315},
  [190] = {.lex_state = 315},
  [191] = {.lex_state = 315},
  [192] = {.lex_state = 102},
  [193] = {.lex_state = 315},
  [194] = {.lex_state = 315},
  [195] = {.lex_state = 30},
  [196] = {.lex_state = 315},
  [197] = {.lex_state = 315},
  [198] = {.lex_state = 102},
  [199] = {.lex_state = 315},
  [200] = {.lex_state = 315},
  [201] = {.lex_state = 315},
  [202] = {.lex_state = 102},
  [203] = {.lex_state = 102},
  [204] = {.lex_state = 315},
  [205] = {.lex_state = 102},
  [206] = {.lex_state = 102},
  [207] = {.lex_state = 315},
  [208] = {.lex_state = 315},
  [209] = {.lex_state = 315},
  [210] = {.lex_state = 315},
  [211] = {.lex_state = 315},
  [212] = {.lex_state = 102},
  [213] = {.lex_state = 102},
  [214] = {.lex_state = 315},
  [215] = {.lex_state = 315},
  [216] = {.lex_state = 315},
  [217] = {.lex_state = 315},
  [218] = {.lex_state = 315},
  [219] = {.lex_state = 102},
  [220] = {.lex_state = 315},
  [221] = {.lex_state = 102},
  [222] = {.lex_state = 102},
  [223] = {.lex_state = 30},
  [224] = {.lex_state = 315},
  [225] = {.lex_state = 102},
  [226] = {.lex_state = 315},
  [227] = {.lex_state = 102},
  [228] = {.lex_state = 315},
  [229] = {.lex_state = 315},
  [230] = {.lex_state = 102},
  [231] = {.lex_state = 315},
  [232] = {.lex_state = 315},
  [233] = {.lex_state = 30},
  [234] = {.lex_state = 315},
  [235] = {.lex_state = 315},
  [236] = {.lex_state = 315},
  [237] = {.lex_state = 102},
  [238] = {.lex_state = 102},
  [239] = {.lex_state = 315},
  [240] = {.lex_state = 315},
  [241] = {.lex_state = 315},
  [242] = {.lex_state = 102},
  [243] = {.lex_state = 102},
  [244] = {.lex_state = 102},
  [245] = {.lex_state = 315},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 102},
  [248] = {.lex_state = 102},
  [249] = {.lex_state = 102},
  [250] = {.lex_state = 102},
  [251] = {.lex_state = 315},
  [252] = {.lex_state = 102},
  [253] = {.lex_state = 315},
  [254] = {.lex_state = 315},
  [255] = {.lex_state = 102},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 315},
  [258] = {.lex_state = 315},
  [259] = {.lex_state = 315},
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
    [sym_root] = STATE(256),
    [sym_command] = STATE(20),
    [sym_execute_command] = STATE(85),
    [sym__legacy_execute] = STATE(20),
    [sym_command_name] = STATE(34),
    [aux_sym_root_repeat1] = STATE(20),
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
    STATE(225), 1,
      sym_selector,
    STATE(227), 1,
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
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(230), 10,
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
    STATE(225), 1,
      sym_selector,
    STATE(227), 1,
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
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(230), 10,
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
    ACTIONS(43), 1,
      anon_sym_run,
    STATE(227), 1,
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
    STATE(66), 2,
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
    STATE(230), 11,
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
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(227), 1,
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
    STATE(66), 2,
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
    STATE(230), 11,
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
    STATE(227), 1,
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
    STATE(66), 2,
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
    STATE(230), 11,
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
    STATE(227), 1,
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
    STATE(66), 2,
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
    STATE(230), 11,
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
    STATE(227), 1,
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
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(64), 10,
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
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(37), 1,
      aux_sym_path_repeat1,
    STATE(58), 1,
      sym_nbt_object,
    ACTIONS(60), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(78), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [558] = 9,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [591] = 9,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [624] = 9,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [657] = 9,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [690] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [720] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [750] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [780] = 8,
    ACTIONS(84), 1,
      aux_sym_command_name_token1,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_selector_number_token3,
    STATE(182), 1,
      sym_selector_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(178), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [810] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(185), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [840] = 8,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(58), 1,
      sym_nbt_object,
    ACTIONS(101), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    STATE(55), 2,
      sym_item_nbt,
      sym_item_state,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [870] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_command_name,
    STATE(85), 1,
      sym_execute_command,
    ACTIONS(105), 2,
      sym_comment,
      sym__line_separator,
    STATE(21), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [898] = 8,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_execute,
    ACTIONS(118), 1,
      aux_sym_command_name_token1,
    STATE(34), 1,
      sym_command_name,
    STATE(85), 1,
      sym_execute_command,
    ACTIONS(109), 2,
      sym_comment,
      sym__line_separator,
    STATE(21), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [926] = 9,
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
    STATE(24), 1,
      aux_sym_container_repeat1,
    STATE(58), 1,
      sym_nbt_object,
    STATE(132), 1,
      aux_sym_path_repeat1,
    STATE(78), 2,
      sym_item_nbt,
      sym_item_state,
  [955] = 5,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(142), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [975] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [993] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_selector_option_section,
    ACTIONS(135), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1011] = 5,
    ACTIONS(141), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(141), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(143), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1031] = 4,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_container_repeat1,
    ACTIONS(147), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1049] = 4,
    ACTIONS(154), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(156), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1066] = 4,
    ACTIONS(158), 1,
      anon_sym_,
    STATE(44), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1083] = 8,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(163), 1,
      aux_sym_command_name_token1,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_selector_score_key,
    STATE(191), 1,
      sym_nbt_object_key,
    STATE(204), 1,
      sym_string,
  [1108] = 8,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(163), 1,
      aux_sym_command_name_token1,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_nbt_object_key,
    STATE(194), 1,
      sym_selector_score_key,
    STATE(204), 1,
      sym_string,
  [1133] = 3,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1148] = 4,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(182), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1165] = 4,
    ACTIONS(154), 1,
      anon_sym_,
    STATE(42), 1,
      aux_sym_command_repeat1,
    ACTIONS(186), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1182] = 4,
    ACTIONS(154), 1,
      anon_sym_,
    STATE(28), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1199] = 4,
    ACTIONS(192), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(143), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1216] = 4,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(200), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1233] = 4,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    ACTIONS(207), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1250] = 4,
    ACTIONS(209), 1,
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
  [1267] = 4,
    ACTIONS(211), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(156), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1284] = 4,
    ACTIONS(216), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(219), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1301] = 4,
    ACTIONS(154), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1318] = 4,
    ACTIONS(223), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(226), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1335] = 4,
    ACTIONS(230), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1352] = 4,
    ACTIONS(209), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1369] = 2,
    ACTIONS(147), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1382] = 4,
    ACTIONS(235), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_command_repeat1,
    ACTIONS(186), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1399] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(43), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1416] = 4,
    ACTIONS(158), 1,
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
  [1433] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(40), 1,
      aux_sym_command_repeat1,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1450] = 7,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_nbt_object,
    STATE(123), 1,
      aux_sym_path_repeat1,
    STATE(55), 2,
      sym_item_nbt,
      sym_item_state,
  [1473] = 2,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1485] = 2,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1497] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1511] = 2,
    ACTIONS(60), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1523] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1535] = 2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1547] = 2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1559] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1571] = 2,
    ACTIONS(274), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1583] = 2,
    ACTIONS(278), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1595] = 2,
    ACTIONS(282), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1607] = 2,
    ACTIONS(286), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1619] = 2,
    ACTIONS(226), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1631] = 2,
    ACTIONS(290), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1643] = 2,
    ACTIONS(294), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1655] = 2,
    ACTIONS(298), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1667] = 2,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1679] = 7,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(163), 1,
      aux_sym_command_name_token1,
    ACTIONS(165), 1,
      sym_number,
    STATE(191), 1,
      sym_nbt_object_key,
    STATE(194), 1,
      sym_selector_score_key,
    STATE(204), 1,
      sym_string,
  [1701] = 2,
    ACTIONS(182), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1713] = 2,
    ACTIONS(302), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1725] = 2,
    ACTIONS(306), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1737] = 2,
    ACTIONS(310), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1749] = 2,
    ACTIONS(314), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1761] = 2,
    ACTIONS(318), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1773] = 2,
    ACTIONS(322), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1785] = 2,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1797] = 2,
    ACTIONS(330), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(328), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1809] = 2,
    ACTIONS(334), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1821] = 3,
    ACTIONS(338), 1,
      anon_sym_,
    ACTIONS(341), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1835] = 2,
    ACTIONS(345), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(343), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1846] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_string,
    STATE(211), 1,
      sym_nbt_object_key,
    ACTIONS(165), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1863] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(351), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(71), 2,
      sym_command,
      sym__legacy_execute,
  [1880] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_string,
    STATE(211), 1,
      sym_nbt_object_key,
    ACTIONS(165), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1897] = 2,
    ACTIONS(357), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(355), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1908] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_string,
    STATE(211), 1,
      sym_nbt_object_key,
    ACTIONS(165), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1925] = 4,
    STATE(207), 1,
      sym_selector_score_value,
    STATE(208), 1,
      sym_selector_number,
    ACTIONS(92), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(94), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [1940] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_,
    STATE(58), 1,
      sym_nbt_object,
    STATE(55), 2,
      sym_item_nbt,
      sym_item_state,
  [1957] = 2,
    ACTIONS(363), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(361), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1968] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(365), 1,
      anon_sym_SLASH,
    ACTIONS(367), 1,
      anon_sym_execute,
    STATE(34), 1,
      sym_command_name,
    STATE(91), 2,
      sym_command,
      sym_execute_command,
  [1985] = 2,
    ACTIONS(371), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(369), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1996] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(365), 1,
      anon_sym_SLASH,
    ACTIONS(367), 1,
      anon_sym_execute,
    STATE(34), 1,
      sym_command_name,
    STATE(81), 2,
      sym_command,
      sym_execute_command,
  [2013] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_nbt_object,
    STATE(78), 2,
      sym_item_nbt,
      sym_item_state,
  [2030] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(351), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(53), 2,
      sym_command,
      sym__legacy_execute,
  [2047] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_string,
    STATE(211), 1,
      sym_nbt_object_key,
    ACTIONS(165), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2064] = 2,
    ACTIONS(377), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(375), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2075] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(365), 1,
      anon_sym_SLASH,
    ACTIONS(367), 1,
      anon_sym_execute,
    STATE(34), 1,
      sym_command_name,
    STATE(89), 2,
      sym_command,
      sym_execute_command,
  [2092] = 5,
    ACTIONS(379), 1,
      aux_sym_command_name_token1,
    ACTIONS(381), 1,
      sym_number,
    STATE(187), 1,
      sym_state_value,
    STATE(242), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2109] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(351), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(57), 2,
      sym_command,
      sym__legacy_execute,
  [2126] = 5,
    ACTIONS(383), 1,
      aux_sym_command_name_token1,
    ACTIONS(385), 1,
      sym_number,
    STATE(163), 1,
      sym_boolean,
    STATE(164), 1,
      sym_state_value,
    ACTIONS(387), 2,
      anon_sym_true,
      anon_sym_false,
  [2143] = 4,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    STATE(107), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2157] = 4,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_string,
    STATE(211), 1,
      sym_nbt_object_key,
    ACTIONS(165), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2171] = 4,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(107), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2185] = 4,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_string_token1,
    STATE(103), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2199] = 4,
    ACTIONS(393), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_string_token1,
    STATE(101), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2213] = 1,
    ACTIONS(405), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2221] = 4,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_token1,
    ACTIONS(412), 1,
      anon_sym_BSLASH,
    STATE(107), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2235] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(213), 1,
      sym_location,
    STATE(255), 1,
      sym_coordinate,
  [2251] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(158), 1,
      sym_location,
    STATE(205), 1,
      sym_coordinate,
  [2267] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(237), 1,
      sym_coordinate,
  [2280] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(80), 1,
      sym_coordinate,
  [2293] = 4,
    ACTIONS(417), 1,
      sym_number,
    ACTIONS(419), 1,
      anon_sym_TILDE,
    ACTIONS(421), 1,
      anon_sym_CARET,
    STATE(146), 1,
      sym_coordinate,
  [2306] = 3,
    ACTIONS(425), 1,
      aux_sym_command_name_token1,
    STATE(177), 1,
      sym_state_key,
    ACTIONS(423), 2,
      anon_sym_STAR,
      sym_number,
  [2317] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(212), 1,
      sym_coordinate,
  [2330] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      sym_number,
    STATE(56), 1,
      sym_coordinate,
  [2343] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(427), 1,
      anon_sym_execute,
    STATE(50), 1,
      sym_command_name,
  [2353] = 3,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      aux_sym__legacy_execute_token1,
    STATE(249), 1,
      sym_selector,
  [2363] = 3,
    ACTIONS(431), 1,
      aux_sym_command_name_token1,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_state_key,
  [2373] = 3,
    ACTIONS(171), 1,
      anon_sym_detect,
    ACTIONS(173), 1,
      anon_sym_,
    ACTIONS(435), 1,
      sym_number,
  [2383] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(437), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
  [2393] = 3,
    ACTIONS(439), 1,
      aux_sym_command_name_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_selector_score_key,
  [2403] = 3,
    ACTIONS(443), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
  [2413] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [2423] = 3,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_selector_option_section_repeat1,
  [2433] = 3,
    ACTIONS(431), 1,
      aux_sym_command_name_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_state_key,
  [2443] = 3,
    ACTIONS(455), 1,
      aux_sym_command_name_token1,
    ACTIONS(457), 1,
      aux_sym_item_token1,
    STATE(221), 1,
      sym_item,
  [2453] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(459), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
  [2463] = 3,
    ACTIONS(461), 1,
      aux_sym_command_name_token1,
    STATE(254), 1,
      sym_selector_option,
    STATE(257), 1,
      sym_selector_key,
  [2473] = 2,
    ACTIONS(465), 1,
      aux_sym_string_token1,
    ACTIONS(463), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2481] = 3,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_selector_option_section_repeat1,
  [2491] = 3,
    ACTIONS(472), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(167), 1,
      aux_sym_selector_score_repeat1,
  [2501] = 3,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    ACTIONS(195), 1,
      anon_sym_,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [2511] = 3,
    ACTIONS(449), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_selector_option_section_repeat1,
  [2521] = 2,
    ACTIONS(476), 1,
      anon_sym_,
    STATE(141), 1,
      aux_sym_execute_command_repeat1,
  [2528] = 2,
    ACTIONS(478), 1,
      anon_sym_EQ,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [2535] = 2,
    ACTIONS(482), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_object_repeat1,
  [2542] = 2,
    ACTIONS(484), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(486), 1,
      anon_sym_COMMA,
  [2549] = 2,
    ACTIONS(488), 1,
      aux_sym_selector_option_section_token1,
    STATE(171), 1,
      aux_sym_nbt_array_repeat1,
  [2556] = 2,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
    STATE(136), 1,
      aux_sym_nbt_object_repeat1,
  [2563] = 2,
    ACTIONS(492), 1,
      aux_sym_selector_option_section_token1,
    STATE(138), 1,
      aux_sym_nbt_array_repeat1,
  [2570] = 2,
    ACTIONS(494), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym_execute_command_repeat1,
  [2577] = 2,
    ACTIONS(496), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym_execute_command_repeat1,
  [2584] = 2,
    ACTIONS(498), 1,
      aux_sym_selector_option_section_token1,
    STATE(143), 1,
      aux_sym_item_state_repeat1,
  [2591] = 2,
    ACTIONS(431), 1,
      aux_sym_command_name_token1,
    STATE(251), 1,
      sym_state_key,
  [2598] = 2,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      aux_sym_selector_option_section_token1,
  [2605] = 2,
    ACTIONS(256), 1,
      anon_sym_detect,
    ACTIONS(258), 1,
      anon_sym_,
  [2612] = 2,
    ACTIONS(171), 1,
      anon_sym_detect,
    ACTIONS(173), 1,
      anon_sym_,
  [2619] = 2,
    ACTIONS(296), 1,
      anon_sym_detect,
    ACTIONS(298), 1,
      anon_sym_,
  [2626] = 2,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym_execute_command_repeat1,
  [2633] = 2,
    ACTIONS(504), 1,
      aux_sym_command_name_token1,
    ACTIONS(506), 1,
      aux_sym_item_token1,
  [2640] = 2,
    ACTIONS(508), 1,
      aux_sym_selector_option_section_token1,
    STATE(169), 1,
      aux_sym_nbt_array_repeat1,
  [2647] = 2,
    ACTIONS(510), 1,
      aux_sym_selector_option_section_token1,
    STATE(160), 1,
      aux_sym_nbt_object_repeat1,
  [2654] = 2,
    ACTIONS(512), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [2661] = 2,
    ACTIONS(516), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2668] = 2,
    ACTIONS(520), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [2675] = 2,
    ACTIONS(524), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(526), 1,
      anon_sym_COMMA,
  [2682] = 2,
    ACTIONS(528), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_object_repeat1,
  [2689] = 2,
    ACTIONS(531), 1,
      anon_sym_,
    ACTIONS(533), 1,
      anon_sym_detect,
  [2696] = 2,
    ACTIONS(439), 1,
      aux_sym_command_name_token1,
    STATE(197), 1,
      sym_selector_score_key,
  [2703] = 2,
    ACTIONS(535), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_object_repeat1,
  [2710] = 2,
    ACTIONS(537), 1,
      aux_sym_selector_option_section_token1,
    STATE(143), 1,
      aux_sym_item_state_repeat1,
  [2717] = 2,
    ACTIONS(539), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_selector_nbt_repeat1,
  [2724] = 2,
    ACTIONS(542), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2731] = 2,
    ACTIONS(546), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2738] = 2,
    ACTIONS(494), 1,
      anon_sym_,
    STATE(142), 1,
      aux_sym_execute_command_repeat1,
  [2745] = 2,
    ACTIONS(550), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_selector_nbt_repeat1,
  [2752] = 2,
    ACTIONS(552), 1,
      aux_sym_selector_option_section_token1,
    STATE(172), 1,
      aux_sym_selector_score_repeat1,
  [2759] = 2,
    ACTIONS(554), 1,
      aux_sym_command_name_token1,
    ACTIONS(556), 1,
      sym_number,
  [2766] = 2,
    ACTIONS(558), 1,
      aux_sym_selector_option_section_token1,
    STATE(171), 1,
      aux_sym_nbt_array_repeat1,
  [2773] = 2,
    ACTIONS(560), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
  [2780] = 2,
    ACTIONS(564), 1,
      aux_sym_selector_option_section_token1,
    STATE(171), 1,
      aux_sym_nbt_array_repeat1,
  [2787] = 2,
    ACTIONS(567), 1,
      aux_sym_selector_option_section_token1,
    STATE(172), 1,
      aux_sym_selector_score_repeat1,
  [2794] = 2,
    ACTIONS(570), 1,
      aux_sym_selector_option_section_token1,
    STATE(161), 1,
      aux_sym_item_state_repeat1,
  [2801] = 1,
    ACTIONS(572), 1,
      aux_sym_selector_option_section_token1,
  [2805] = 1,
    ACTIONS(574), 1,
      aux_sym_selector_option_section_token1,
  [2809] = 1,
    ACTIONS(576), 1,
      anon_sym_,
  [2813] = 1,
    ACTIONS(578), 1,
      anon_sym_EQ,
  [2817] = 1,
    ACTIONS(580), 1,
      aux_sym_selector_option_section_token1,
  [2821] = 1,
    ACTIONS(582), 1,
      aux_sym_selector_option_section_token1,
  [2825] = 1,
    ACTIONS(585), 1,
      aux_sym_selector_option_section_token1,
  [2829] = 1,
    ACTIONS(587), 1,
      aux_sym_selector_option_section_token1,
  [2833] = 1,
    ACTIONS(589), 1,
      aux_sym_selector_option_section_token1,
  [2837] = 1,
    ACTIONS(591), 1,
      aux_sym_selector_option_section_token1,
  [2841] = 1,
    ACTIONS(593), 1,
      aux_sym_selector_option_section_token1,
  [2845] = 1,
    ACTIONS(595), 1,
      aux_sym_selector_option_section_token1,
  [2849] = 1,
    ACTIONS(597), 1,
      aux_sym_selector_option_section_token1,
  [2853] = 1,
    ACTIONS(599), 1,
      anon_sym_,
  [2857] = 1,
    ACTIONS(601), 1,
      aux_sym_selector_option_section_token1,
  [2861] = 1,
    ACTIONS(603), 1,
      aux_sym_selector_option_section_token1,
  [2865] = 1,
    ACTIONS(606), 1,
      aux_sym_selector_option_section_token1,
  [2869] = 1,
    ACTIONS(608), 1,
      aux_sym_selector_option_section_token1,
  [2873] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [2877] = 1,
    ACTIONS(612), 1,
      aux_sym_selector_option_section_token1,
  [2881] = 1,
    ACTIONS(614), 1,
      aux_sym_selector_option_section_token1,
  [2885] = 1,
    ACTIONS(616), 1,
      aux_sym_command_name_token1,
  [2889] = 1,
    ACTIONS(618), 1,
      aux_sym_selector_option_section_token1,
  [2893] = 1,
    ACTIONS(620), 1,
      aux_sym_selector_option_section_token1,
  [2897] = 1,
    ACTIONS(622), 1,
      anon_sym_COLON,
  [2901] = 1,
    ACTIONS(624), 1,
      aux_sym_selector_option_section_token1,
  [2905] = 1,
    ACTIONS(626), 1,
      aux_sym_selector_option_section_token1,
  [2909] = 1,
    ACTIONS(628), 1,
      aux_sym_selector_option_section_token1,
  [2913] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [2917] = 1,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [2921] = 1,
    ACTIONS(630), 1,
      aux_sym_selector_option_section_token1,
  [2925] = 1,
    ACTIONS(632), 1,
      anon_sym_,
  [2929] = 1,
    ACTIONS(634), 1,
      anon_sym_,
  [2933] = 1,
    ACTIONS(636), 1,
      aux_sym_selector_option_section_token1,
  [2937] = 1,
    ACTIONS(638), 1,
      aux_sym_selector_option_section_token1,
  [2941] = 1,
    ACTIONS(640), 1,
      aux_sym_selector_option_section_token1,
  [2945] = 1,
    ACTIONS(642), 1,
      aux_sym_selector_option_section_token1,
  [2949] = 1,
    ACTIONS(644), 1,
      aux_sym_selector_option_section_token1,
  [2953] = 1,
    ACTIONS(646), 1,
      anon_sym_,
  [2957] = 1,
    ACTIONS(648), 1,
      anon_sym_,
  [2961] = 1,
    ACTIONS(650), 1,
      aux_sym_selector_option_section_token1,
  [2965] = 1,
    ACTIONS(652), 1,
      aux_sym_selector_option_section_token1,
  [2969] = 1,
    ACTIONS(654), 1,
      aux_sym_selector_option_section_token1,
  [2973] = 1,
    ACTIONS(656), 1,
      aux_sym_selector_option_section_token1,
  [2977] = 1,
    ACTIONS(658), 1,
      aux_sym_selector_option_section_token1,
  [2981] = 1,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
  [2985] = 1,
    ACTIONS(662), 1,
      aux_sym_selector_option_section_token1,
  [2989] = 1,
    ACTIONS(664), 1,
      anon_sym_,
  [2993] = 1,
    ACTIONS(666), 1,
      anon_sym_,
  [2997] = 1,
    ACTIONS(668), 1,
      aux_sym_command_name_token1,
  [3001] = 1,
    ACTIONS(324), 1,
      aux_sym_selector_option_section_token1,
  [3005] = 1,
    ACTIONS(670), 1,
      anon_sym_,
  [3009] = 1,
    ACTIONS(292), 1,
      aux_sym_selector_option_section_token1,
  [3013] = 1,
    ACTIONS(673), 1,
      anon_sym_,
  [3017] = 1,
    ACTIONS(675), 1,
      aux_sym_selector_option_section_token1,
  [3021] = 1,
    ACTIONS(241), 1,
      aux_sym_selector_option_section_token1,
  [3025] = 1,
    ACTIONS(677), 1,
      anon_sym_,
  [3029] = 1,
    ACTIONS(679), 1,
      aux_sym_selector_option_section_token1,
  [3033] = 1,
    ACTIONS(308), 1,
      aux_sym_selector_option_section_token1,
  [3037] = 1,
    ACTIONS(681), 1,
      aux_sym_command_name_token1,
  [3041] = 1,
    ACTIONS(276), 1,
      aux_sym_selector_option_section_token1,
  [3045] = 1,
    ACTIONS(268), 1,
      aux_sym_selector_option_section_token1,
  [3049] = 1,
    ACTIONS(683), 1,
      aux_sym_selector_option_section_token1,
  [3053] = 1,
    ACTIONS(685), 1,
      anon_sym_,
  [3057] = 1,
    ACTIONS(675), 1,
      anon_sym_EQ,
  [3061] = 1,
    ACTIONS(316), 1,
      aux_sym_selector_option_section_token1,
  [3065] = 1,
    ACTIONS(280), 1,
      aux_sym_selector_option_section_token1,
  [3069] = 1,
    ACTIONS(687), 1,
      aux_sym_selector_option_section_token1,
  [3073] = 1,
    ACTIONS(544), 1,
      anon_sym_,
  [3077] = 1,
    ACTIONS(689), 1,
      anon_sym_EQ,
  [3081] = 1,
    ACTIONS(435), 1,
      sym_number,
  [3085] = 1,
    ACTIONS(691), 1,
      aux_sym_selector_option_section_token1,
  [3089] = 1,
    ACTIONS(693), 1,
      aux_sym_command_name_token1,
  [3093] = 1,
    ACTIONS(175), 1,
      sym_number,
  [3097] = 1,
    ACTIONS(695), 1,
      anon_sym_,
  [3101] = 1,
    ACTIONS(697), 1,
      anon_sym_,
  [3105] = 1,
    ACTIONS(699), 1,
      anon_sym_,
  [3109] = 1,
    ACTIONS(701), 1,
      aux_sym_selector_option_section_token1,
  [3113] = 1,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [3117] = 1,
    ACTIONS(705), 1,
      aux_sym_selector_option_section_token1,
  [3121] = 1,
    ACTIONS(707), 1,
      aux_sym_selector_option_section_token1,
  [3125] = 1,
    ACTIONS(709), 1,
      anon_sym_,
  [3129] = 1,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
  [3133] = 1,
    ACTIONS(713), 1,
      aux_sym_selector_option_section_token1,
  [3137] = 1,
    ACTIONS(715), 1,
      aux_sym_selector_option_section_token1,
  [3141] = 1,
    ACTIONS(717), 1,
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
  [SMALL_STATE(11)] = 591,
  [SMALL_STATE(12)] = 624,
  [SMALL_STATE(13)] = 657,
  [SMALL_STATE(14)] = 690,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 750,
  [SMALL_STATE(17)] = 780,
  [SMALL_STATE(18)] = 810,
  [SMALL_STATE(19)] = 840,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 898,
  [SMALL_STATE(22)] = 926,
  [SMALL_STATE(23)] = 955,
  [SMALL_STATE(24)] = 975,
  [SMALL_STATE(25)] = 993,
  [SMALL_STATE(26)] = 1011,
  [SMALL_STATE(27)] = 1031,
  [SMALL_STATE(28)] = 1049,
  [SMALL_STATE(29)] = 1066,
  [SMALL_STATE(30)] = 1083,
  [SMALL_STATE(31)] = 1108,
  [SMALL_STATE(32)] = 1133,
  [SMALL_STATE(33)] = 1148,
  [SMALL_STATE(34)] = 1165,
  [SMALL_STATE(35)] = 1182,
  [SMALL_STATE(36)] = 1199,
  [SMALL_STATE(37)] = 1216,
  [SMALL_STATE(38)] = 1233,
  [SMALL_STATE(39)] = 1250,
  [SMALL_STATE(40)] = 1267,
  [SMALL_STATE(41)] = 1284,
  [SMALL_STATE(42)] = 1301,
  [SMALL_STATE(43)] = 1318,
  [SMALL_STATE(44)] = 1335,
  [SMALL_STATE(45)] = 1352,
  [SMALL_STATE(46)] = 1369,
  [SMALL_STATE(47)] = 1382,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1416,
  [SMALL_STATE(50)] = 1433,
  [SMALL_STATE(51)] = 1450,
  [SMALL_STATE(52)] = 1473,
  [SMALL_STATE(53)] = 1485,
  [SMALL_STATE(54)] = 1497,
  [SMALL_STATE(55)] = 1511,
  [SMALL_STATE(56)] = 1523,
  [SMALL_STATE(57)] = 1535,
  [SMALL_STATE(58)] = 1547,
  [SMALL_STATE(59)] = 1559,
  [SMALL_STATE(60)] = 1571,
  [SMALL_STATE(61)] = 1583,
  [SMALL_STATE(62)] = 1595,
  [SMALL_STATE(63)] = 1607,
  [SMALL_STATE(64)] = 1619,
  [SMALL_STATE(65)] = 1631,
  [SMALL_STATE(66)] = 1643,
  [SMALL_STATE(67)] = 1655,
  [SMALL_STATE(68)] = 1667,
  [SMALL_STATE(69)] = 1679,
  [SMALL_STATE(70)] = 1701,
  [SMALL_STATE(71)] = 1713,
  [SMALL_STATE(72)] = 1725,
  [SMALL_STATE(73)] = 1737,
  [SMALL_STATE(74)] = 1749,
  [SMALL_STATE(75)] = 1761,
  [SMALL_STATE(76)] = 1773,
  [SMALL_STATE(77)] = 1785,
  [SMALL_STATE(78)] = 1797,
  [SMALL_STATE(79)] = 1809,
  [SMALL_STATE(80)] = 1821,
  [SMALL_STATE(81)] = 1835,
  [SMALL_STATE(82)] = 1846,
  [SMALL_STATE(83)] = 1863,
  [SMALL_STATE(84)] = 1880,
  [SMALL_STATE(85)] = 1897,
  [SMALL_STATE(86)] = 1908,
  [SMALL_STATE(87)] = 1925,
  [SMALL_STATE(88)] = 1940,
  [SMALL_STATE(89)] = 1957,
  [SMALL_STATE(90)] = 1968,
  [SMALL_STATE(91)] = 1985,
  [SMALL_STATE(92)] = 1996,
  [SMALL_STATE(93)] = 2013,
  [SMALL_STATE(94)] = 2030,
  [SMALL_STATE(95)] = 2047,
  [SMALL_STATE(96)] = 2064,
  [SMALL_STATE(97)] = 2075,
  [SMALL_STATE(98)] = 2092,
  [SMALL_STATE(99)] = 2109,
  [SMALL_STATE(100)] = 2126,
  [SMALL_STATE(101)] = 2143,
  [SMALL_STATE(102)] = 2157,
  [SMALL_STATE(103)] = 2171,
  [SMALL_STATE(104)] = 2185,
  [SMALL_STATE(105)] = 2199,
  [SMALL_STATE(106)] = 2213,
  [SMALL_STATE(107)] = 2221,
  [SMALL_STATE(108)] = 2235,
  [SMALL_STATE(109)] = 2251,
  [SMALL_STATE(110)] = 2267,
  [SMALL_STATE(111)] = 2280,
  [SMALL_STATE(112)] = 2293,
  [SMALL_STATE(113)] = 2306,
  [SMALL_STATE(114)] = 2317,
  [SMALL_STATE(115)] = 2330,
  [SMALL_STATE(116)] = 2343,
  [SMALL_STATE(117)] = 2353,
  [SMALL_STATE(118)] = 2363,
  [SMALL_STATE(119)] = 2373,
  [SMALL_STATE(120)] = 2383,
  [SMALL_STATE(121)] = 2393,
  [SMALL_STATE(122)] = 2403,
  [SMALL_STATE(123)] = 2413,
  [SMALL_STATE(124)] = 2423,
  [SMALL_STATE(125)] = 2433,
  [SMALL_STATE(126)] = 2443,
  [SMALL_STATE(127)] = 2453,
  [SMALL_STATE(128)] = 2463,
  [SMALL_STATE(129)] = 2473,
  [SMALL_STATE(130)] = 2481,
  [SMALL_STATE(131)] = 2491,
  [SMALL_STATE(132)] = 2501,
  [SMALL_STATE(133)] = 2511,
  [SMALL_STATE(134)] = 2521,
  [SMALL_STATE(135)] = 2528,
  [SMALL_STATE(136)] = 2535,
  [SMALL_STATE(137)] = 2542,
  [SMALL_STATE(138)] = 2549,
  [SMALL_STATE(139)] = 2556,
  [SMALL_STATE(140)] = 2563,
  [SMALL_STATE(141)] = 2570,
  [SMALL_STATE(142)] = 2577,
  [SMALL_STATE(143)] = 2584,
  [SMALL_STATE(144)] = 2591,
  [SMALL_STATE(145)] = 2598,
  [SMALL_STATE(146)] = 2605,
  [SMALL_STATE(147)] = 2612,
  [SMALL_STATE(148)] = 2619,
  [SMALL_STATE(149)] = 2626,
  [SMALL_STATE(150)] = 2633,
  [SMALL_STATE(151)] = 2640,
  [SMALL_STATE(152)] = 2647,
  [SMALL_STATE(153)] = 2654,
  [SMALL_STATE(154)] = 2661,
  [SMALL_STATE(155)] = 2668,
  [SMALL_STATE(156)] = 2675,
  [SMALL_STATE(157)] = 2682,
  [SMALL_STATE(158)] = 2689,
  [SMALL_STATE(159)] = 2696,
  [SMALL_STATE(160)] = 2703,
  [SMALL_STATE(161)] = 2710,
  [SMALL_STATE(162)] = 2717,
  [SMALL_STATE(163)] = 2724,
  [SMALL_STATE(164)] = 2731,
  [SMALL_STATE(165)] = 2738,
  [SMALL_STATE(166)] = 2745,
  [SMALL_STATE(167)] = 2752,
  [SMALL_STATE(168)] = 2759,
  [SMALL_STATE(169)] = 2766,
  [SMALL_STATE(170)] = 2773,
  [SMALL_STATE(171)] = 2780,
  [SMALL_STATE(172)] = 2787,
  [SMALL_STATE(173)] = 2794,
  [SMALL_STATE(174)] = 2801,
  [SMALL_STATE(175)] = 2805,
  [SMALL_STATE(176)] = 2809,
  [SMALL_STATE(177)] = 2813,
  [SMALL_STATE(178)] = 2817,
  [SMALL_STATE(179)] = 2821,
  [SMALL_STATE(180)] = 2825,
  [SMALL_STATE(181)] = 2829,
  [SMALL_STATE(182)] = 2833,
  [SMALL_STATE(183)] = 2837,
  [SMALL_STATE(184)] = 2841,
  [SMALL_STATE(185)] = 2845,
  [SMALL_STATE(186)] = 2849,
  [SMALL_STATE(187)] = 2853,
  [SMALL_STATE(188)] = 2857,
  [SMALL_STATE(189)] = 2861,
  [SMALL_STATE(190)] = 2865,
  [SMALL_STATE(191)] = 2869,
  [SMALL_STATE(192)] = 2873,
  [SMALL_STATE(193)] = 2877,
  [SMALL_STATE(194)] = 2881,
  [SMALL_STATE(195)] = 2885,
  [SMALL_STATE(196)] = 2889,
  [SMALL_STATE(197)] = 2893,
  [SMALL_STATE(198)] = 2897,
  [SMALL_STATE(199)] = 2901,
  [SMALL_STATE(200)] = 2905,
  [SMALL_STATE(201)] = 2909,
  [SMALL_STATE(202)] = 2913,
  [SMALL_STATE(203)] = 2917,
  [SMALL_STATE(204)] = 2921,
  [SMALL_STATE(205)] = 2925,
  [SMALL_STATE(206)] = 2929,
  [SMALL_STATE(207)] = 2933,
  [SMALL_STATE(208)] = 2937,
  [SMALL_STATE(209)] = 2941,
  [SMALL_STATE(210)] = 2945,
  [SMALL_STATE(211)] = 2949,
  [SMALL_STATE(212)] = 2953,
  [SMALL_STATE(213)] = 2957,
  [SMALL_STATE(214)] = 2961,
  [SMALL_STATE(215)] = 2965,
  [SMALL_STATE(216)] = 2969,
  [SMALL_STATE(217)] = 2973,
  [SMALL_STATE(218)] = 2977,
  [SMALL_STATE(219)] = 2981,
  [SMALL_STATE(220)] = 2985,
  [SMALL_STATE(221)] = 2989,
  [SMALL_STATE(222)] = 2993,
  [SMALL_STATE(223)] = 2997,
  [SMALL_STATE(224)] = 3001,
  [SMALL_STATE(225)] = 3005,
  [SMALL_STATE(226)] = 3009,
  [SMALL_STATE(227)] = 3013,
  [SMALL_STATE(228)] = 3017,
  [SMALL_STATE(229)] = 3021,
  [SMALL_STATE(230)] = 3025,
  [SMALL_STATE(231)] = 3029,
  [SMALL_STATE(232)] = 3033,
  [SMALL_STATE(233)] = 3037,
  [SMALL_STATE(234)] = 3041,
  [SMALL_STATE(235)] = 3045,
  [SMALL_STATE(236)] = 3049,
  [SMALL_STATE(237)] = 3053,
  [SMALL_STATE(238)] = 3057,
  [SMALL_STATE(239)] = 3061,
  [SMALL_STATE(240)] = 3065,
  [SMALL_STATE(241)] = 3069,
  [SMALL_STATE(242)] = 3073,
  [SMALL_STATE(243)] = 3077,
  [SMALL_STATE(244)] = 3081,
  [SMALL_STATE(245)] = 3085,
  [SMALL_STATE(246)] = 3089,
  [SMALL_STATE(247)] = 3093,
  [SMALL_STATE(248)] = 3097,
  [SMALL_STATE(249)] = 3101,
  [SMALL_STATE(250)] = 3105,
  [SMALL_STATE(251)] = 3109,
  [SMALL_STATE(252)] = 3113,
  [SMALL_STATE(253)] = 3117,
  [SMALL_STATE(254)] = 3121,
  [SMALL_STATE(255)] = 3125,
  [SMALL_STATE(256)] = 3129,
  [SMALL_STATE(257)] = 3133,
  [SMALL_STATE(258)] = 3137,
  [SMALL_STATE(259)] = 3141,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 2), SHIFT(150),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_item, 1), SHIFT(150),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(120),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(79),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(168),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(117),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(150),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(117),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(150),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(150),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(117),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(115),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(107),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(219),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(128),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(144),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(102),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(69),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(15),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(159),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(109),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [711] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
