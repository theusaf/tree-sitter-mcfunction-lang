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
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  sym_text = 23,
  aux_sym_command_name_token1 = 24,
  sym__identifier = 25,
  sym_number = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_TILDE = 29,
  anon_sym_CARET = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_string_token1 = 32,
  anon_sym_BSLASH = 33,
  anon_sym_AT = 34,
  anon_sym_p = 35,
  anon_sym_a = 36,
  anon_sym_r = 37,
  anon_sym_s = 38,
  anon_sym_e = 39,
  anon_sym_LBRACK = 40,
  aux_sym_selector_option_section_token1 = 41,
  anon_sym_COMMA = 42,
  anon_sym_RBRACK = 43,
  anon_sym_LBRACE = 44,
  anon_sym_COLON = 45,
  anon_sym_RBRACE = 46,
  aux_sym_selector_number_token1 = 47,
  aux_sym_selector_number_token2 = 48,
  aux_sym_selector_number_token3 = 49,
  anon_sym_l = 50,
  anon_sym_d = 51,
  anon_sym_f = 52,
  anon_sym_b = 53,
  aux_sym_container_token1 = 54,
  anon_sym_DOT = 55,
  sym_namespaced_container = 56,
  sym_nbt_path = 57,
  sym_root = 58,
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
  sym_container = 87,
  sym_item = 88,
  sym__blank_item_with_namespace = 89,
  sym_item_nbt = 90,
  sym_item_state = 91,
  sym_state_key = 92,
  sym_state_value = 93,
  sym_path = 94,
  aux_sym_root_repeat1 = 95,
  aux_sym_command_repeat1 = 96,
  aux_sym_execute_command_repeat1 = 97,
  aux_sym__legacy_execute_repeat1 = 98,
  aux_sym_string_repeat1 = 99,
  aux_sym_selector_option_section_repeat1 = 100,
  aux_sym_selector_nbt_repeat1 = 101,
  aux_sym_selector_score_repeat1 = 102,
  aux_sym_nbt_object_repeat1 = 103,
  aux_sym_nbt_array_repeat1 = 104,
  aux_sym_container_repeat1 = 105,
  aux_sym_item_state_repeat1 = 106,
  aux_sym_path_repeat1 = 107,
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
  [sym_text] = "text",
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
  [aux_sym_container_token1] = "container_token1",
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
  [sym_container] = "container",
  [sym_item] = "item",
  [sym__blank_item_with_namespace] = "item",
  [sym_item_nbt] = "item_nbt",
  [sym_item_state] = "item_state",
  [sym_state_key] = "state_key",
  [sym_state_value] = "state_value",
  [sym_path] = "path",
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
  [aux_sym_container_repeat1] = "container_repeat1",
  [aux_sym_item_state_repeat1] = "item_state_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [sym_text] = sym_text,
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
  [aux_sym_container_token1] = aux_sym_container_token1,
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
  [sym_container] = sym_container,
  [sym_item] = sym_item,
  [sym__blank_item_with_namespace] = sym_item,
  [sym_item_nbt] = sym_item_nbt,
  [sym_item_state] = sym_item_state,
  [sym_state_key] = sym_state_key,
  [sym_state_value] = sym_state_value,
  [sym_path] = sym_path,
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
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
  [aux_sym_item_state_repeat1] = aux_sym_item_state_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
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
  [sym_text] = {
    .visible = true,
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
  [aux_sym_container_token1] = {
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
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_item_with_namespace] = {
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
  [aux_sym_container_repeat1] = {
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
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(293);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
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
      if (lookahead == '"') ADVANCE(331);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(332);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(319);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
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
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(331);
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
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(280);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '[') ADVANCE(304);
      if (lookahead == '^') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
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
      if (lookahead == ' ') ADVANCE(305);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
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
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
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
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(270);
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
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 's') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == ',') ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == ']') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == ']') ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_selector_option_section_token1);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_container_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '"') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(332);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '[') ADVANCE(75);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '[') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
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
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 89},
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
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 89},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 89},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 89},
  [42] = {.lex_state = 89},
  [43] = {.lex_state = 89},
  [44] = {.lex_state = 89},
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
  [59] = {.lex_state = 89},
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
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 89},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 89},
  [85] = {.lex_state = 309},
  [86] = {.lex_state = 89},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 89},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 89},
  [96] = {.lex_state = 89},
  [97] = {.lex_state = 89},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 89},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 89},
  [103] = {.lex_state = 89},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 89},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 89},
  [113] = {.lex_state = 89},
  [114] = {.lex_state = 89},
  [115] = {.lex_state = 89},
  [116] = {.lex_state = 89},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 89},
  [119] = {.lex_state = 89},
  [120] = {.lex_state = 89},
  [121] = {.lex_state = 89},
  [122] = {.lex_state = 89},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 89},
  [127] = {.lex_state = 307},
  [128] = {.lex_state = 89},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 305},
  [133] = {.lex_state = 308},
  [134] = {.lex_state = 308},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 308},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 89},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 306},
  [141] = {.lex_state = 89},
  [142] = {.lex_state = 306},
  [143] = {.lex_state = 306},
  [144] = {.lex_state = 305},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 305},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 308},
  [149] = {.lex_state = 305},
  [150] = {.lex_state = 305},
  [151] = {.lex_state = 89},
  [152] = {.lex_state = 305},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 306},
  [155] = {.lex_state = 306},
  [156] = {.lex_state = 306},
  [157] = {.lex_state = 305},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 89},
  [161] = {.lex_state = 305},
  [162] = {.lex_state = 305},
  [163] = {.lex_state = 305},
  [164] = {.lex_state = 305},
  [165] = {.lex_state = 305},
  [166] = {.lex_state = 305},
  [167] = {.lex_state = 89},
  [168] = {.lex_state = 305},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 89},
  [171] = {.lex_state = 305},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 305},
  [174] = {.lex_state = 305},
  [175] = {.lex_state = 305},
  [176] = {.lex_state = 306},
  [177] = {.lex_state = 306},
  [178] = {.lex_state = 305},
  [179] = {.lex_state = 305},
  [180] = {.lex_state = 89},
  [181] = {.lex_state = 89},
  [182] = {.lex_state = 305},
  [183] = {.lex_state = 305},
  [184] = {.lex_state = 89},
  [185] = {.lex_state = 305},
  [186] = {.lex_state = 305},
  [187] = {.lex_state = 305},
  [188] = {.lex_state = 305},
  [189] = {.lex_state = 305},
  [190] = {.lex_state = 89},
  [191] = {.lex_state = 89},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 89},
  [194] = {.lex_state = 305},
  [195] = {.lex_state = 305},
  [196] = {.lex_state = 89},
  [197] = {.lex_state = 305},
  [198] = {.lex_state = 305},
  [199] = {.lex_state = 305},
  [200] = {.lex_state = 305},
  [201] = {.lex_state = 305},
  [202] = {.lex_state = 305},
  [203] = {.lex_state = 305},
  [204] = {.lex_state = 305},
  [205] = {.lex_state = 305},
  [206] = {.lex_state = 89},
  [207] = {.lex_state = 89},
  [208] = {.lex_state = 305},
  [209] = {.lex_state = 305},
  [210] = {.lex_state = 305},
  [211] = {.lex_state = 305},
  [212] = {.lex_state = 305},
  [213] = {.lex_state = 305},
  [214] = {.lex_state = 305},
  [215] = {.lex_state = 305},
  [216] = {.lex_state = 305},
  [217] = {.lex_state = 89},
  [218] = {.lex_state = 305},
  [219] = {.lex_state = 305},
  [220] = {.lex_state = 305},
  [221] = {.lex_state = 305},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 305},
  [224] = {.lex_state = 305},
  [225] = {.lex_state = 305},
  [226] = {.lex_state = 89},
  [227] = {.lex_state = 305},
  [228] = {.lex_state = 89},
  [229] = {.lex_state = 305},
  [230] = {.lex_state = 305},
  [231] = {.lex_state = 305},
  [232] = {.lex_state = 305},
  [233] = {.lex_state = 305},
  [234] = {.lex_state = 305},
  [235] = {.lex_state = 305},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 305},
  [238] = {.lex_state = 305},
  [239] = {.lex_state = 89},
  [240] = {.lex_state = 89},
  [241] = {.lex_state = 89},
  [242] = {.lex_state = 305},
  [243] = {.lex_state = 305},
  [244] = {.lex_state = 89},
  [245] = {.lex_state = 89},
  [246] = {.lex_state = 89},
  [247] = {.lex_state = 305},
  [248] = {.lex_state = 89},
  [249] = {.lex_state = 89},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 89},
  [252] = {.lex_state = 89},
  [253] = {.lex_state = 89},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 305},
  [256] = {.lex_state = 305},
  [257] = {.lex_state = 89},
  [258] = {.lex_state = 89},
  [259] = {.lex_state = 89},
  [260] = {.lex_state = 89},
  [261] = {.lex_state = 89},
  [262] = {.lex_state = 305},
  [263] = {.lex_state = 305},
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
    [sym_root] = STATE(222),
    [sym_command] = STATE(19),
    [sym_execute_command] = STATE(100),
    [sym__legacy_execute] = STATE(19),
    [sym_command_name] = STATE(35),
    [aux_sym_root_repeat1] = STATE(19),
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
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    STATE(251), 1,
      sym_selector,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [83] = 19,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    ACTIONS(43), 1,
      anon_sym_run,
    STATE(251), 1,
      sym_selector,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [166] = 17,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [244] = 17,
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [322] = 17,
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    ACTIONS(43), 1,
      anon_sym_run,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [400] = 16,
    ACTIONS(23), 1,
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
      aux_sym_container_token1,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(21), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
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
    STATE(253), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [475] = 15,
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
    ACTIONS(51), 1,
      aux_sym_command_name_token1,
    ACTIONS(53), 1,
      aux_sym_container_token1,
    STATE(252), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(66), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(49), 3,
      sym_text,
      sym__identifier,
      sym_nbt_path,
    STATE(65), 11,
      sym__command_choices,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [536] = 11,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_item_state,
    STATE(26), 1,
      aux_sym_container_repeat1,
    STATE(27), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
    STATE(41), 1,
      aux_sym_path_repeat1,
    ACTIONS(60), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [574] = 9,
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
    STATE(233), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [607] = 9,
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
    STATE(233), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [640] = 9,
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
    STATE(233), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [673] = 9,
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
    STATE(233), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [706] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [736] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [766] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [796] = 8,
    ACTIONS(84), 1,
      aux_sym_command_name_token1,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_selector_number_token3,
    STATE(208), 1,
      sym_selector_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(194), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [826] = 8,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(229), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(234), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [856] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_command_name,
    STATE(100), 1,
      sym_execute_command,
    ACTIONS(98), 2,
      sym_comment,
      sym__line_separator,
    STATE(20), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [884] = 8,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(108), 1,
      anon_sym_execute,
    ACTIONS(111), 1,
      aux_sym_command_name_token1,
    STATE(35), 1,
      sym_command_name,
    STATE(100), 1,
      sym_execute_command,
    ACTIONS(102), 2,
      sym_comment,
      sym__line_separator,
    STATE(20), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [912] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_nbt_object,
    STATE(78), 1,
      sym_item_nbt,
    ACTIONS(116), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [933] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_item_state,
    STATE(26), 1,
      aux_sym_container_repeat1,
    STATE(27), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
    STATE(120), 1,
      aux_sym_path_repeat1,
  [964] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_nbt_object,
    STATE(68), 1,
      sym_item_nbt,
    ACTIONS(122), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [985] = 5,
    ACTIONS(126), 1,
      anon_sym_,
    STATE(37), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(160), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1005] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(132), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1023] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_container_repeat1,
    ACTIONS(139), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1041] = 4,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_item_state,
    ACTIONS(122), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1059] = 5,
    ACTIONS(143), 1,
      anon_sym_,
    STATE(46), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(138), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(145), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1079] = 4,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_selector_option_section,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1097] = 4,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_item_state,
    ACTIONS(116), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1115] = 4,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(158), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1132] = 2,
    ACTIONS(162), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1145] = 8,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(166), 1,
      aux_sym_command_name_token1,
    ACTIONS(168), 1,
      sym_number,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_nbt_object_key,
    STATE(198), 1,
      sym_selector_score_key,
    STATE(231), 1,
      sym_string,
  [1170] = 8,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(166), 1,
      aux_sym_command_name_token1,
    ACTIONS(168), 1,
      sym_number,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_selector_score_key,
    STATE(189), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
  [1195] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(40), 1,
      aux_sym_command_repeat1,
    ACTIONS(178), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1212] = 2,
    ACTIONS(182), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1225] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(188), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1242] = 4,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_path_repeat1,
    ACTIONS(195), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1259] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1276] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1293] = 4,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_path_repeat1,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1310] = 4,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_path_repeat1,
    ACTIONS(217), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1327] = 4,
    ACTIONS(219), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1344] = 2,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1357] = 2,
    ACTIONS(132), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1370] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1387] = 4,
    ACTIONS(226), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1404] = 2,
    ACTIONS(231), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1417] = 4,
    ACTIONS(176), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym_command_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1434] = 4,
    ACTIONS(235), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(238), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(233), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1451] = 4,
    ACTIONS(240), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(145), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1468] = 4,
    ACTIONS(243), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(188), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1485] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1502] = 2,
    ACTIONS(251), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1515] = 4,
    ACTIONS(253), 1,
      anon_sym_,
    STATE(53), 1,
      aux_sym_command_repeat1,
    ACTIONS(178), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1532] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_command_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1549] = 4,
    ACTIONS(219), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(128), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1566] = 3,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1581] = 2,
    ACTIONS(264), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1593] = 2,
    ACTIONS(268), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(266), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1605] = 2,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1617] = 7,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_item_state,
    STATE(30), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
    STATE(42), 1,
      aux_sym_path_repeat1,
  [1639] = 2,
    ACTIONS(276), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1651] = 2,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1663] = 2,
    ACTIONS(158), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1675] = 2,
    ACTIONS(284), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1687] = 2,
    ACTIONS(288), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1699] = 2,
    ACTIONS(292), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1711] = 2,
    ACTIONS(296), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(294), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1723] = 2,
    ACTIONS(300), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(298), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1735] = 3,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1749] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1761] = 7,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_item_state,
    STATE(30), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
    STATE(128), 1,
      aux_sym_path_repeat1,
  [1783] = 2,
    ACTIONS(311), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1795] = 2,
    ACTIONS(195), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1807] = 2,
    ACTIONS(315), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1819] = 7,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(166), 1,
      aux_sym_command_name_token1,
    ACTIONS(168), 1,
      sym_number,
    STATE(189), 1,
      sym_nbt_object_key,
    STATE(198), 1,
      sym_selector_score_key,
    STATE(231), 1,
      sym_string,
  [1841] = 2,
    ACTIONS(122), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1853] = 2,
    ACTIONS(319), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1865] = 2,
    ACTIONS(323), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1877] = 2,
    ACTIONS(327), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1889] = 3,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(334), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(329), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1903] = 2,
    ACTIONS(338), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1915] = 2,
    ACTIONS(342), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1927] = 2,
    ACTIONS(346), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(344), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1938] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(350), 1,
      anon_sym_execute,
    STATE(55), 1,
      sym_command_name,
    STATE(69), 2,
      sym_command,
      sym__legacy_execute,
  [1955] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(352), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(97), 2,
      sym_command,
      sym_execute_command,
  [1972] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
    ACTIONS(168), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [1989] = 4,
    STATE(211), 1,
      sym_selector_score_value,
    STATE(212), 1,
      sym_selector_number,
    ACTIONS(92), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(94), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2004] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
    ACTIONS(168), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2021] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
    ACTIONS(168), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2038] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(352), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(95), 2,
      sym_command,
      sym_execute_command,
  [2055] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(362), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2066] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
    ACTIONS(168), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2083] = 2,
    ACTIONS(370), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(368), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2094] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(352), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(93), 2,
      sym_command,
      sym_execute_command,
  [2111] = 2,
    ACTIONS(374), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(372), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2122] = 5,
    ACTIONS(376), 1,
      aux_sym_command_name_token1,
    ACTIONS(378), 1,
      sym_number,
    STATE(154), 1,
      sym_boolean,
    STATE(155), 1,
      sym_state_value,
    ACTIONS(380), 2,
      anon_sym_true,
      anon_sym_false,
  [2139] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(350), 1,
      anon_sym_execute,
    STATE(55), 1,
      sym_command_name,
    STATE(64), 2,
      sym_command,
      sym__legacy_execute,
  [2156] = 2,
    ACTIONS(384), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(382), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2167] = 5,
    ACTIONS(386), 1,
      aux_sym_command_name_token1,
    ACTIONS(388), 1,
      sym_number,
    STATE(181), 1,
      sym_state_value,
    STATE(245), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2184] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(350), 1,
      anon_sym_execute,
    STATE(55), 1,
      sym_command_name,
    STATE(74), 2,
      sym_command,
      sym__legacy_execute,
  [2201] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(226), 1,
      sym_location,
    STATE(259), 1,
      sym_coordinate,
  [2217] = 4,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_string_token1,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    STATE(108), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2231] = 4,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(231), 1,
      sym_string,
    ACTIONS(168), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2245] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(153), 1,
      sym_location,
    STATE(239), 1,
      sym_coordinate,
  [2261] = 1,
    ACTIONS(398), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2269] = 4,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    STATE(109), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2283] = 4,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      aux_sym_string_token1,
    ACTIONS(409), 1,
      anon_sym_BSLASH,
    STATE(109), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2297] = 4,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    STATE(109), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2311] = 4,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_string_token1,
    STATE(110), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2325] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_item_state,
    STATE(27), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
  [2341] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_item_state,
    STATE(30), 1,
      sym_item_nbt,
    STATE(32), 1,
      sym_nbt_object,
  [2357] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(82), 1,
      sym_coordinate,
  [2370] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(240), 1,
      sym_coordinate,
  [2383] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(228), 1,
      sym_coordinate,
  [2396] = 3,
    ACTIONS(420), 1,
      aux_sym_command_name_token1,
    STATE(191), 1,
      sym_state_key,
    ACTIONS(418), 2,
      anon_sym_STAR,
      sym_number,
  [2407] = 4,
    ACTIONS(422), 1,
      sym_number,
    ACTIONS(424), 1,
      anon_sym_TILDE,
    ACTIONS(426), 1,
      anon_sym_CARET,
    STATE(147), 1,
      sym_coordinate,
  [2420] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(390), 1,
      sym_number,
    STATE(67), 1,
      sym_coordinate,
  [2433] = 3,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(205), 1,
      anon_sym_,
    STATE(38), 1,
      aux_sym_path_repeat1,
  [2443] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(428), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
  [2453] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(430), 1,
      anon_sym_execute,
    STATE(56), 1,
      sym_command_name,
  [2463] = 3,
    ACTIONS(432), 1,
      aux_sym_command_name_token1,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_state_key,
  [2473] = 3,
    ACTIONS(436), 1,
      aux_sym_command_name_token1,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_selector_score_key,
  [2483] = 3,
    ACTIONS(440), 1,
      aux_sym_command_name_token1,
    ACTIONS(442), 1,
      aux_sym_container_token1,
    STATE(193), 1,
      sym_item,
  [2493] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(444), 1,
      anon_sym_execute,
    STATE(49), 1,
      sym_command_name,
  [2503] = 3,
    ACTIONS(446), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
  [2513] = 3,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      anon_sym_,
    STATE(38), 1,
      aux_sym_path_repeat1,
  [2523] = 3,
    ACTIONS(432), 1,
      aux_sym_command_name_token1,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_state_key,
  [2533] = 3,
    ACTIONS(256), 1,
      anon_sym_detect,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(454), 1,
      sym_number,
  [2543] = 2,
    ACTIONS(458), 1,
      aux_sym_string_token1,
    ACTIONS(456), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2551] = 3,
    ACTIONS(460), 1,
      aux_sym_selector_option_section_token1,
    STATE(162), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(163), 1,
      aux_sym_selector_score_repeat1,
  [2561] = 3,
    ACTIONS(462), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_selector_option_section_repeat1,
  [2571] = 3,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_selector_option_section_repeat1,
  [2581] = 3,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(471), 1,
      aux_sym__legacy_execute_token1,
    STATE(260), 1,
      sym_selector,
  [2591] = 3,
    ACTIONS(467), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_selector_option_section_repeat1,
  [2601] = 3,
    ACTIONS(475), 1,
      aux_sym_command_name_token1,
    STATE(178), 1,
      sym_selector_option,
    STATE(221), 1,
      sym_selector_key,
  [2611] = 2,
    ACTIONS(477), 1,
      anon_sym_,
    STATE(141), 1,
      aux_sym_execute_command_repeat1,
  [2618] = 2,
    ACTIONS(479), 1,
      aux_sym_command_name_token1,
    ACTIONS(481), 1,
      aux_sym_container_token1,
  [2625] = 2,
    ACTIONS(483), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(485), 1,
      anon_sym_COMMA,
  [2632] = 2,
    ACTIONS(487), 1,
      anon_sym_,
    STATE(141), 1,
      aux_sym_execute_command_repeat1,
  [2639] = 2,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      aux_sym_selector_option_section_token1,
  [2646] = 2,
    ACTIONS(490), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(492), 1,
      anon_sym_COMMA,
  [2653] = 2,
    ACTIONS(494), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_array_repeat1,
  [2660] = 2,
    ACTIONS(432), 1,
      aux_sym_command_name_token1,
    STATE(224), 1,
      sym_state_key,
  [2667] = 2,
    ACTIONS(496), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_item_state_repeat1,
  [2674] = 2,
    ACTIONS(286), 1,
      anon_sym_detect,
    ACTIONS(288), 1,
      anon_sym_,
  [2681] = 2,
    ACTIONS(499), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [2688] = 2,
    ACTIONS(503), 1,
      aux_sym_selector_option_section_token1,
    STATE(144), 1,
      aux_sym_nbt_array_repeat1,
  [2695] = 2,
    ACTIONS(505), 1,
      aux_sym_selector_option_section_token1,
    STATE(173), 1,
      aux_sym_nbt_object_repeat1,
  [2702] = 2,
    ACTIONS(507), 1,
      anon_sym_,
    STATE(138), 1,
      aux_sym_execute_command_repeat1,
  [2709] = 2,
    ACTIONS(509), 1,
      aux_sym_selector_option_section_token1,
    STATE(152), 1,
      aux_sym_nbt_object_repeat1,
  [2716] = 2,
    ACTIONS(512), 1,
      anon_sym_,
    ACTIONS(514), 1,
      anon_sym_detect,
  [2723] = 2,
    ACTIONS(516), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2730] = 2,
    ACTIONS(520), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [2737] = 2,
    ACTIONS(524), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(526), 1,
      anon_sym_COMMA,
  [2744] = 2,
    ACTIONS(528), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_array_repeat1,
  [2751] = 2,
    ACTIONS(256), 1,
      anon_sym_detect,
    ACTIONS(258), 1,
      anon_sym_,
  [2758] = 2,
    ACTIONS(266), 1,
      anon_sym_detect,
    ACTIONS(268), 1,
      anon_sym_,
  [2765] = 2,
    ACTIONS(531), 1,
      anon_sym_,
    STATE(141), 1,
      aux_sym_execute_command_repeat1,
  [2772] = 2,
    ACTIONS(533), 1,
      aux_sym_selector_option_section_token1,
    STATE(165), 1,
      aux_sym_item_state_repeat1,
  [2779] = 2,
    ACTIONS(535), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_selector_nbt_repeat1,
  [2786] = 2,
    ACTIONS(537), 1,
      aux_sym_selector_option_section_token1,
    STATE(168), 1,
      aux_sym_selector_score_repeat1,
  [2793] = 2,
    ACTIONS(539), 1,
      aux_sym_selector_option_section_token1,
    STATE(157), 1,
      aux_sym_nbt_array_repeat1,
  [2800] = 2,
    ACTIONS(541), 1,
      aux_sym_selector_option_section_token1,
    STATE(146), 1,
      aux_sym_item_state_repeat1,
  [2807] = 2,
    ACTIONS(543), 1,
      aux_sym_selector_option_section_token1,
    STATE(166), 1,
      aux_sym_selector_nbt_repeat1,
  [2814] = 2,
    ACTIONS(477), 1,
      anon_sym_,
    STATE(160), 1,
      aux_sym_execute_command_repeat1,
  [2821] = 2,
    ACTIONS(546), 1,
      aux_sym_selector_option_section_token1,
    STATE(168), 1,
      aux_sym_selector_score_repeat1,
  [2828] = 2,
    ACTIONS(549), 1,
      aux_sym_command_name_token1,
    ACTIONS(551), 1,
      sym_number,
  [2835] = 2,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [2842] = 2,
    ACTIONS(557), 1,
      aux_sym_selector_option_section_token1,
    STATE(164), 1,
      aux_sym_nbt_array_repeat1,
  [2849] = 2,
    ACTIONS(436), 1,
      aux_sym_command_name_token1,
    STATE(201), 1,
      sym_selector_score_key,
  [2856] = 2,
    ACTIONS(559), 1,
      aux_sym_selector_option_section_token1,
    STATE(152), 1,
      aux_sym_nbt_object_repeat1,
  [2863] = 2,
    ACTIONS(561), 1,
      aux_sym_selector_option_section_token1,
    STATE(152), 1,
      aux_sym_nbt_object_repeat1,
  [2870] = 2,
    ACTIONS(563), 1,
      aux_sym_selector_option_section_token1,
    STATE(174), 1,
      aux_sym_nbt_object_repeat1,
  [2877] = 2,
    ACTIONS(565), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(567), 1,
      anon_sym_COMMA,
  [2884] = 2,
    ACTIONS(569), 1,
      aux_sym_selector_option_section_token1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
  [2891] = 1,
    ACTIONS(573), 1,
      aux_sym_selector_option_section_token1,
  [2895] = 1,
    ACTIONS(575), 1,
      aux_sym_selector_option_section_token1,
  [2899] = 1,
    ACTIONS(577), 1,
      anon_sym_EQ,
  [2903] = 1,
    ACTIONS(579), 1,
      anon_sym_,
  [2907] = 1,
    ACTIONS(581), 1,
      aux_sym_selector_option_section_token1,
  [2911] = 1,
    ACTIONS(583), 1,
      aux_sym_selector_option_section_token1,
  [2915] = 1,
    ACTIONS(585), 1,
      anon_sym_COLON,
  [2919] = 1,
    ACTIONS(587), 1,
      aux_sym_selector_option_section_token1,
  [2923] = 1,
    ACTIONS(589), 1,
      aux_sym_selector_option_section_token1,
  [2927] = 1,
    ACTIONS(591), 1,
      aux_sym_selector_option_section_token1,
  [2931] = 1,
    ACTIONS(594), 1,
      aux_sym_selector_option_section_token1,
  [2935] = 1,
    ACTIONS(596), 1,
      aux_sym_selector_option_section_token1,
  [2939] = 1,
    ACTIONS(598), 1,
      anon_sym_,
  [2943] = 1,
    ACTIONS(600), 1,
      anon_sym_EQ,
  [2947] = 1,
    ACTIONS(602), 1,
      aux_sym_command_name_token1,
  [2951] = 1,
    ACTIONS(604), 1,
      anon_sym_,
  [2955] = 1,
    ACTIONS(606), 1,
      aux_sym_selector_option_section_token1,
  [2959] = 1,
    ACTIONS(608), 1,
      aux_sym_selector_option_section_token1,
  [2963] = 1,
    ACTIONS(611), 1,
      anon_sym_COLON,
  [2967] = 1,
    ACTIONS(613), 1,
      aux_sym_selector_option_section_token1,
  [2971] = 1,
    ACTIONS(615), 1,
      aux_sym_selector_option_section_token1,
  [2975] = 1,
    ACTIONS(617), 1,
      aux_sym_selector_option_section_token1,
  [2979] = 1,
    ACTIONS(619), 1,
      aux_sym_selector_option_section_token1,
  [2983] = 1,
    ACTIONS(621), 1,
      aux_sym_selector_option_section_token1,
  [2987] = 1,
    ACTIONS(623), 1,
      aux_sym_selector_option_section_token1,
  [2991] = 1,
    ACTIONS(625), 1,
      aux_sym_selector_option_section_token1,
  [2995] = 1,
    ACTIONS(627), 1,
      aux_sym_selector_option_section_token1,
  [2999] = 1,
    ACTIONS(629), 1,
      aux_sym_selector_option_section_token1,
  [3003] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3007] = 1,
    ACTIONS(553), 1,
      anon_sym_EQ,
  [3011] = 1,
    ACTIONS(631), 1,
      aux_sym_selector_option_section_token1,
  [3015] = 1,
    ACTIONS(633), 1,
      aux_sym_selector_option_section_token1,
  [3019] = 1,
    ACTIONS(635), 1,
      aux_sym_selector_option_section_token1,
  [3023] = 1,
    ACTIONS(637), 1,
      aux_sym_selector_option_section_token1,
  [3027] = 1,
    ACTIONS(639), 1,
      aux_sym_selector_option_section_token1,
  [3031] = 1,
    ACTIONS(641), 1,
      aux_sym_selector_option_section_token1,
  [3035] = 1,
    ACTIONS(643), 1,
      aux_sym_selector_option_section_token1,
  [3039] = 1,
    ACTIONS(645), 1,
      aux_sym_selector_option_section_token1,
  [3043] = 1,
    ACTIONS(647), 1,
      aux_sym_selector_option_section_token1,
  [3047] = 1,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [3051] = 1,
    ACTIONS(651), 1,
      aux_sym_selector_option_section_token1,
  [3055] = 1,
    ACTIONS(653), 1,
      aux_sym_selector_option_section_token1,
  [3059] = 1,
    ACTIONS(655), 1,
      aux_sym_selector_option_section_token1,
  [3063] = 1,
    ACTIONS(657), 1,
      aux_sym_selector_option_section_token1,
  [3067] = 1,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
  [3071] = 1,
    ACTIONS(661), 1,
      aux_sym_selector_option_section_token1,
  [3075] = 1,
    ACTIONS(663), 1,
      aux_sym_selector_option_section_token1,
  [3079] = 1,
    ACTIONS(665), 1,
      aux_sym_selector_option_section_token1,
  [3083] = 1,
    ACTIONS(667), 1,
      anon_sym_,
  [3087] = 1,
    ACTIONS(298), 1,
      aux_sym_selector_option_section_token1,
  [3091] = 1,
    ACTIONS(669), 1,
      anon_sym_,
  [3095] = 1,
    ACTIONS(282), 1,
      aux_sym_selector_option_section_token1,
  [3099] = 1,
    ACTIONS(671), 1,
      aux_sym_selector_option_section_token1,
  [3103] = 1,
    ACTIONS(673), 1,
      aux_sym_selector_option_section_token1,
  [3107] = 1,
    ACTIONS(270), 1,
      aux_sym_selector_option_section_token1,
  [3111] = 1,
    ACTIONS(675), 1,
      aux_sym_selector_option_section_token1,
  [3115] = 1,
    ACTIONS(677), 1,
      aux_sym_selector_option_section_token1,
  [3119] = 1,
    ACTIONS(325), 1,
      aux_sym_selector_option_section_token1,
  [3123] = 1,
    ACTIONS(679), 1,
      aux_sym_command_name_token1,
  [3127] = 1,
    ACTIONS(313), 1,
      aux_sym_selector_option_section_token1,
  [3131] = 1,
    ACTIONS(222), 1,
      aux_sym_selector_option_section_token1,
  [3135] = 1,
    ACTIONS(681), 1,
      anon_sym_,
  [3139] = 1,
    ACTIONS(683), 1,
      anon_sym_,
  [3143] = 1,
    ACTIONS(665), 1,
      anon_sym_EQ,
  [3147] = 1,
    ACTIONS(274), 1,
      aux_sym_selector_option_section_token1,
  [3151] = 1,
    ACTIONS(229), 1,
      aux_sym_selector_option_section_token1,
  [3155] = 1,
    ACTIONS(685), 1,
      anon_sym_,
  [3159] = 1,
    ACTIONS(518), 1,
      anon_sym_,
  [3163] = 1,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
  [3167] = 1,
    ACTIONS(689), 1,
      aux_sym_selector_option_section_token1,
  [3171] = 1,
    ACTIONS(454), 1,
      sym_number,
  [3175] = 1,
    ACTIONS(691), 1,
      anon_sym_,
  [3179] = 1,
    ACTIONS(693), 1,
      aux_sym_command_name_token1,
  [3183] = 1,
    ACTIONS(695), 1,
      anon_sym_,
  [3187] = 1,
    ACTIONS(698), 1,
      anon_sym_,
  [3191] = 1,
    ACTIONS(700), 1,
      anon_sym_,
  [3195] = 1,
    ACTIONS(702), 1,
      aux_sym_command_name_token1,
  [3199] = 1,
    ACTIONS(704), 1,
      aux_sym_selector_option_section_token1,
  [3203] = 1,
    ACTIONS(706), 1,
      aux_sym_selector_option_section_token1,
  [3207] = 1,
    ACTIONS(260), 1,
      sym_number,
  [3211] = 1,
    ACTIONS(708), 1,
      anon_sym_,
  [3215] = 1,
    ACTIONS(710), 1,
      anon_sym_,
  [3219] = 1,
    ACTIONS(712), 1,
      anon_sym_,
  [3223] = 1,
    ACTIONS(714), 1,
      anon_sym_,
  [3227] = 1,
    ACTIONS(716), 1,
      aux_sym_selector_option_section_token1,
  [3231] = 1,
    ACTIONS(718), 1,
      aux_sym_selector_option_section_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 244,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 400,
  [SMALL_STATE(8)] = 475,
  [SMALL_STATE(9)] = 536,
  [SMALL_STATE(10)] = 574,
  [SMALL_STATE(11)] = 607,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 673,
  [SMALL_STATE(14)] = 706,
  [SMALL_STATE(15)] = 736,
  [SMALL_STATE(16)] = 766,
  [SMALL_STATE(17)] = 796,
  [SMALL_STATE(18)] = 826,
  [SMALL_STATE(19)] = 856,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 912,
  [SMALL_STATE(22)] = 933,
  [SMALL_STATE(23)] = 964,
  [SMALL_STATE(24)] = 985,
  [SMALL_STATE(25)] = 1005,
  [SMALL_STATE(26)] = 1023,
  [SMALL_STATE(27)] = 1041,
  [SMALL_STATE(28)] = 1059,
  [SMALL_STATE(29)] = 1079,
  [SMALL_STATE(30)] = 1097,
  [SMALL_STATE(31)] = 1115,
  [SMALL_STATE(32)] = 1132,
  [SMALL_STATE(33)] = 1145,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1212,
  [SMALL_STATE(37)] = 1225,
  [SMALL_STATE(38)] = 1242,
  [SMALL_STATE(39)] = 1259,
  [SMALL_STATE(40)] = 1276,
  [SMALL_STATE(41)] = 1293,
  [SMALL_STATE(42)] = 1310,
  [SMALL_STATE(43)] = 1327,
  [SMALL_STATE(44)] = 1344,
  [SMALL_STATE(45)] = 1357,
  [SMALL_STATE(46)] = 1370,
  [SMALL_STATE(47)] = 1387,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1417,
  [SMALL_STATE(50)] = 1434,
  [SMALL_STATE(51)] = 1451,
  [SMALL_STATE(52)] = 1468,
  [SMALL_STATE(53)] = 1485,
  [SMALL_STATE(54)] = 1502,
  [SMALL_STATE(55)] = 1515,
  [SMALL_STATE(56)] = 1532,
  [SMALL_STATE(57)] = 1549,
  [SMALL_STATE(58)] = 1566,
  [SMALL_STATE(59)] = 1581,
  [SMALL_STATE(60)] = 1593,
  [SMALL_STATE(61)] = 1605,
  [SMALL_STATE(62)] = 1617,
  [SMALL_STATE(63)] = 1639,
  [SMALL_STATE(64)] = 1651,
  [SMALL_STATE(65)] = 1663,
  [SMALL_STATE(66)] = 1675,
  [SMALL_STATE(67)] = 1687,
  [SMALL_STATE(68)] = 1699,
  [SMALL_STATE(69)] = 1711,
  [SMALL_STATE(70)] = 1723,
  [SMALL_STATE(71)] = 1735,
  [SMALL_STATE(72)] = 1749,
  [SMALL_STATE(73)] = 1761,
  [SMALL_STATE(74)] = 1783,
  [SMALL_STATE(75)] = 1795,
  [SMALL_STATE(76)] = 1807,
  [SMALL_STATE(77)] = 1819,
  [SMALL_STATE(78)] = 1841,
  [SMALL_STATE(79)] = 1853,
  [SMALL_STATE(80)] = 1865,
  [SMALL_STATE(81)] = 1877,
  [SMALL_STATE(82)] = 1889,
  [SMALL_STATE(83)] = 1903,
  [SMALL_STATE(84)] = 1915,
  [SMALL_STATE(85)] = 1927,
  [SMALL_STATE(86)] = 1938,
  [SMALL_STATE(87)] = 1955,
  [SMALL_STATE(88)] = 1972,
  [SMALL_STATE(89)] = 1989,
  [SMALL_STATE(90)] = 2004,
  [SMALL_STATE(91)] = 2021,
  [SMALL_STATE(92)] = 2038,
  [SMALL_STATE(93)] = 2055,
  [SMALL_STATE(94)] = 2066,
  [SMALL_STATE(95)] = 2083,
  [SMALL_STATE(96)] = 2094,
  [SMALL_STATE(97)] = 2111,
  [SMALL_STATE(98)] = 2122,
  [SMALL_STATE(99)] = 2139,
  [SMALL_STATE(100)] = 2156,
  [SMALL_STATE(101)] = 2167,
  [SMALL_STATE(102)] = 2184,
  [SMALL_STATE(103)] = 2201,
  [SMALL_STATE(104)] = 2217,
  [SMALL_STATE(105)] = 2231,
  [SMALL_STATE(106)] = 2245,
  [SMALL_STATE(107)] = 2261,
  [SMALL_STATE(108)] = 2269,
  [SMALL_STATE(109)] = 2283,
  [SMALL_STATE(110)] = 2297,
  [SMALL_STATE(111)] = 2311,
  [SMALL_STATE(112)] = 2325,
  [SMALL_STATE(113)] = 2341,
  [SMALL_STATE(114)] = 2357,
  [SMALL_STATE(115)] = 2370,
  [SMALL_STATE(116)] = 2383,
  [SMALL_STATE(117)] = 2396,
  [SMALL_STATE(118)] = 2407,
  [SMALL_STATE(119)] = 2420,
  [SMALL_STATE(120)] = 2433,
  [SMALL_STATE(121)] = 2443,
  [SMALL_STATE(122)] = 2453,
  [SMALL_STATE(123)] = 2463,
  [SMALL_STATE(124)] = 2473,
  [SMALL_STATE(125)] = 2483,
  [SMALL_STATE(126)] = 2493,
  [SMALL_STATE(127)] = 2503,
  [SMALL_STATE(128)] = 2513,
  [SMALL_STATE(129)] = 2523,
  [SMALL_STATE(130)] = 2533,
  [SMALL_STATE(131)] = 2543,
  [SMALL_STATE(132)] = 2551,
  [SMALL_STATE(133)] = 2561,
  [SMALL_STATE(134)] = 2571,
  [SMALL_STATE(135)] = 2581,
  [SMALL_STATE(136)] = 2591,
  [SMALL_STATE(137)] = 2601,
  [SMALL_STATE(138)] = 2611,
  [SMALL_STATE(139)] = 2618,
  [SMALL_STATE(140)] = 2625,
  [SMALL_STATE(141)] = 2632,
  [SMALL_STATE(142)] = 2639,
  [SMALL_STATE(143)] = 2646,
  [SMALL_STATE(144)] = 2653,
  [SMALL_STATE(145)] = 2660,
  [SMALL_STATE(146)] = 2667,
  [SMALL_STATE(147)] = 2674,
  [SMALL_STATE(148)] = 2681,
  [SMALL_STATE(149)] = 2688,
  [SMALL_STATE(150)] = 2695,
  [SMALL_STATE(151)] = 2702,
  [SMALL_STATE(152)] = 2709,
  [SMALL_STATE(153)] = 2716,
  [SMALL_STATE(154)] = 2723,
  [SMALL_STATE(155)] = 2730,
  [SMALL_STATE(156)] = 2737,
  [SMALL_STATE(157)] = 2744,
  [SMALL_STATE(158)] = 2751,
  [SMALL_STATE(159)] = 2758,
  [SMALL_STATE(160)] = 2765,
  [SMALL_STATE(161)] = 2772,
  [SMALL_STATE(162)] = 2779,
  [SMALL_STATE(163)] = 2786,
  [SMALL_STATE(164)] = 2793,
  [SMALL_STATE(165)] = 2800,
  [SMALL_STATE(166)] = 2807,
  [SMALL_STATE(167)] = 2814,
  [SMALL_STATE(168)] = 2821,
  [SMALL_STATE(169)] = 2828,
  [SMALL_STATE(170)] = 2835,
  [SMALL_STATE(171)] = 2842,
  [SMALL_STATE(172)] = 2849,
  [SMALL_STATE(173)] = 2856,
  [SMALL_STATE(174)] = 2863,
  [SMALL_STATE(175)] = 2870,
  [SMALL_STATE(176)] = 2877,
  [SMALL_STATE(177)] = 2884,
  [SMALL_STATE(178)] = 2891,
  [SMALL_STATE(179)] = 2895,
  [SMALL_STATE(180)] = 2899,
  [SMALL_STATE(181)] = 2903,
  [SMALL_STATE(182)] = 2907,
  [SMALL_STATE(183)] = 2911,
  [SMALL_STATE(184)] = 2915,
  [SMALL_STATE(185)] = 2919,
  [SMALL_STATE(186)] = 2923,
  [SMALL_STATE(187)] = 2927,
  [SMALL_STATE(188)] = 2931,
  [SMALL_STATE(189)] = 2935,
  [SMALL_STATE(190)] = 2939,
  [SMALL_STATE(191)] = 2943,
  [SMALL_STATE(192)] = 2947,
  [SMALL_STATE(193)] = 2951,
  [SMALL_STATE(194)] = 2955,
  [SMALL_STATE(195)] = 2959,
  [SMALL_STATE(196)] = 2963,
  [SMALL_STATE(197)] = 2967,
  [SMALL_STATE(198)] = 2971,
  [SMALL_STATE(199)] = 2975,
  [SMALL_STATE(200)] = 2979,
  [SMALL_STATE(201)] = 2983,
  [SMALL_STATE(202)] = 2987,
  [SMALL_STATE(203)] = 2991,
  [SMALL_STATE(204)] = 2995,
  [SMALL_STATE(205)] = 2999,
  [SMALL_STATE(206)] = 3003,
  [SMALL_STATE(207)] = 3007,
  [SMALL_STATE(208)] = 3011,
  [SMALL_STATE(209)] = 3015,
  [SMALL_STATE(210)] = 3019,
  [SMALL_STATE(211)] = 3023,
  [SMALL_STATE(212)] = 3027,
  [SMALL_STATE(213)] = 3031,
  [SMALL_STATE(214)] = 3035,
  [SMALL_STATE(215)] = 3039,
  [SMALL_STATE(216)] = 3043,
  [SMALL_STATE(217)] = 3047,
  [SMALL_STATE(218)] = 3051,
  [SMALL_STATE(219)] = 3055,
  [SMALL_STATE(220)] = 3059,
  [SMALL_STATE(221)] = 3063,
  [SMALL_STATE(222)] = 3067,
  [SMALL_STATE(223)] = 3071,
  [SMALL_STATE(224)] = 3075,
  [SMALL_STATE(225)] = 3079,
  [SMALL_STATE(226)] = 3083,
  [SMALL_STATE(227)] = 3087,
  [SMALL_STATE(228)] = 3091,
  [SMALL_STATE(229)] = 3095,
  [SMALL_STATE(230)] = 3099,
  [SMALL_STATE(231)] = 3103,
  [SMALL_STATE(232)] = 3107,
  [SMALL_STATE(233)] = 3111,
  [SMALL_STATE(234)] = 3115,
  [SMALL_STATE(235)] = 3119,
  [SMALL_STATE(236)] = 3123,
  [SMALL_STATE(237)] = 3127,
  [SMALL_STATE(238)] = 3131,
  [SMALL_STATE(239)] = 3135,
  [SMALL_STATE(240)] = 3139,
  [SMALL_STATE(241)] = 3143,
  [SMALL_STATE(242)] = 3147,
  [SMALL_STATE(243)] = 3151,
  [SMALL_STATE(244)] = 3155,
  [SMALL_STATE(245)] = 3159,
  [SMALL_STATE(246)] = 3163,
  [SMALL_STATE(247)] = 3167,
  [SMALL_STATE(248)] = 3171,
  [SMALL_STATE(249)] = 3175,
  [SMALL_STATE(250)] = 3179,
  [SMALL_STATE(251)] = 3183,
  [SMALL_STATE(252)] = 3187,
  [SMALL_STATE(253)] = 3191,
  [SMALL_STATE(254)] = 3195,
  [SMALL_STATE(255)] = 3199,
  [SMALL_STATE(256)] = 3203,
  [SMALL_STATE(257)] = 3207,
  [SMALL_STATE(258)] = 3211,
  [SMALL_STATE(259)] = 3215,
  [SMALL_STATE(260)] = 3219,
  [SMALL_STATE(261)] = 3223,
  [SMALL_STATE(262)] = 3227,
  [SMALL_STATE(263)] = 3231,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(139),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(121),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(28),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(79),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(169),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(139),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(139),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(139),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(135),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(135),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(135),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(135),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(109),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(246),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(137),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(145),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(105),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(15),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(77),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(172),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [659] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(106),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
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
