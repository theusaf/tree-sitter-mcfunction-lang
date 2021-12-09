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
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
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
  anon_sym_DOT = 34,
  anon_sym_LBRACK = 35,
  aux_sym_nbt_path_token1 = 36,
  aux_sym_nbt_path_token2 = 37,
  anon_sym_RBRACK = 38,
  anon_sym_AT = 39,
  anon_sym_p = 40,
  anon_sym_a = 41,
  anon_sym_r = 42,
  anon_sym_s = 43,
  anon_sym_e = 44,
  anon_sym_COMMA = 45,
  anon_sym_LBRACE = 46,
  anon_sym_COLON = 47,
  anon_sym_RBRACE = 48,
  aux_sym_selector_number_token1 = 49,
  aux_sym_selector_number_token2 = 50,
  aux_sym_selector_number_token3 = 51,
  anon_sym_l = 52,
  anon_sym_d = 53,
  anon_sym_f = 54,
  anon_sym_b = 55,
  aux_sym_container_token1 = 56,
  sym_namespaced_container = 57,
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
  sym_nbt_path = 71,
  sym_selector = 72,
  sym_selector_option_section = 73,
  sym_selector_option = 74,
  sym_selector_key = 75,
  sym_selector_value = 76,
  sym_selector_nbt = 77,
  sym_selector_score = 78,
  sym_selector_score_key = 79,
  sym_selector_score_value = 80,
  sym_selector_number = 81,
  sym_nbt = 82,
  sym_nbt_object = 83,
  sym_nbt_array = 84,
  sym_nbt_object_key = 85,
  sym_nbt_object_value = 86,
  sym_nbt_number = 87,
  sym_container = 88,
  sym_item = 89,
  sym__blank_item_with_namespace = 90,
  sym_item_nbt = 91,
  sym_item_state = 92,
  sym_state_key = 93,
  sym_state_value = 94,
  sym_path = 95,
  aux_sym_root_repeat1 = 96,
  aux_sym_command_repeat1 = 97,
  aux_sym_execute_command_repeat1 = 98,
  aux_sym__legacy_execute_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  aux_sym_nbt_path_repeat1 = 101,
  aux_sym_nbt_path_repeat2 = 102,
  aux_sym_nbt_path_repeat3 = 103,
  aux_sym_selector_option_section_repeat1 = 104,
  aux_sym_selector_nbt_repeat1 = 105,
  aux_sym_selector_score_repeat1 = 106,
  aux_sym_nbt_object_repeat1 = 107,
  aux_sym_nbt_array_repeat1 = 108,
  aux_sym_container_repeat1 = 109,
  aux_sym_item_state_repeat1 = 110,
  aux_sym_path_repeat1 = 111,
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
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [aux_sym_nbt_path_token1] = "nbt_path_token1",
  [aux_sym_nbt_path_token2] = "number",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_p] = "p",
  [anon_sym_a] = "a",
  [anon_sym_r] = "r",
  [anon_sym_s] = "s",
  [anon_sym_e] = "e",
  [anon_sym_COMMA] = ",",
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
  [sym_namespaced_container] = "namespaced_container",
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
  [sym_nbt_path] = "nbt_path",
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
  [aux_sym_nbt_path_repeat1] = "nbt_path_repeat1",
  [aux_sym_nbt_path_repeat2] = "nbt_path_repeat2",
  [aux_sym_nbt_path_repeat3] = "nbt_path_repeat3",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_nbt_path_token1] = aux_sym_nbt_path_token1,
  [aux_sym_nbt_path_token2] = sym_number,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_namespaced_container] = sym_namespaced_container,
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
  [sym_nbt_path] = sym_nbt_path,
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
  [aux_sym_nbt_path_repeat1] = aux_sym_nbt_path_repeat1,
  [aux_sym_nbt_path_repeat2] = aux_sym_nbt_path_repeat2,
  [aux_sym_nbt_path_repeat3] = aux_sym_nbt_path_repeat3,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nbt_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_path_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COMMA] = {
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
  [sym_namespaced_container] = {
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
  [sym_nbt_path] = {
    .visible = true,
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
  [aux_sym_nbt_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_path_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_path_repeat3] = {
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
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(282);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '}') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '{') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(270);
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
      if (lookahead == 'g') ADVANCE(156);
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
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(162);
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
      if (lookahead == 's') ADVANCE(153);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(286);
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
      if (lookahead == '-') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'g') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'g') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
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
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 't') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'x') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'g') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'x') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == ',') ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_nbt_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_container_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 77},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 77},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 77},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 77},
  [69] = {.lex_state = 77},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 77},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 77},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 77},
  [96] = {.lex_state = 290},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 77},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 77},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 77},
  [124] = {.lex_state = 77},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 77},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 286},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 288},
  [140] = {.lex_state = 289},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 289},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 289},
  [151] = {.lex_state = 77},
  [152] = {.lex_state = 77},
  [153] = {.lex_state = 286},
  [154] = {.lex_state = 286},
  [155] = {.lex_state = 286},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 286},
  [158] = {.lex_state = 287},
  [159] = {.lex_state = 77},
  [160] = {.lex_state = 286},
  [161] = {.lex_state = 77},
  [162] = {.lex_state = 287},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 77},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 286},
  [170] = {.lex_state = 286},
  [171] = {.lex_state = 77},
  [172] = {.lex_state = 289},
  [173] = {.lex_state = 287},
  [174] = {.lex_state = 287},
  [175] = {.lex_state = 287},
  [176] = {.lex_state = 286},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 286},
  [180] = {.lex_state = 286},
  [181] = {.lex_state = 286},
  [182] = {.lex_state = 287},
  [183] = {.lex_state = 287},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 286},
  [186] = {.lex_state = 286},
  [187] = {.lex_state = 286},
  [188] = {.lex_state = 77},
  [189] = {.lex_state = 287},
  [190] = {.lex_state = 286},
  [191] = {.lex_state = 286},
  [192] = {.lex_state = 286},
  [193] = {.lex_state = 77},
  [194] = {.lex_state = 77},
  [195] = {.lex_state = 77},
  [196] = {.lex_state = 286},
  [197] = {.lex_state = 286},
  [198] = {.lex_state = 286},
  [199] = {.lex_state = 286},
  [200] = {.lex_state = 286},
  [201] = {.lex_state = 286},
  [202] = {.lex_state = 286},
  [203] = {.lex_state = 286},
  [204] = {.lex_state = 286},
  [205] = {.lex_state = 77},
  [206] = {.lex_state = 286},
  [207] = {.lex_state = 286},
  [208] = {.lex_state = 286},
  [209] = {.lex_state = 286},
  [210] = {.lex_state = 286},
  [211] = {.lex_state = 77},
  [212] = {.lex_state = 286},
  [213] = {.lex_state = 286},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 286},
  [216] = {.lex_state = 286},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 286},
  [219] = {.lex_state = 286},
  [220] = {.lex_state = 286},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 77},
  [223] = {.lex_state = 78},
  [224] = {.lex_state = 286},
  [225] = {.lex_state = 77},
  [226] = {.lex_state = 286},
  [227] = {.lex_state = 286},
  [228] = {.lex_state = 286},
  [229] = {.lex_state = 286},
  [230] = {.lex_state = 286},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 77},
  [233] = {.lex_state = 286},
  [234] = {.lex_state = 286},
  [235] = {.lex_state = 286},
  [236] = {.lex_state = 286},
  [237] = {.lex_state = 286},
  [238] = {.lex_state = 286},
  [239] = {.lex_state = 77},
  [240] = {.lex_state = 77},
  [241] = {.lex_state = 286},
  [242] = {.lex_state = 286},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 286},
  [245] = {.lex_state = 286},
  [246] = {.lex_state = 77},
  [247] = {.lex_state = 286},
  [248] = {.lex_state = 77},
  [249] = {.lex_state = 286},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 286},
  [252] = {.lex_state = 77},
  [253] = {.lex_state = 286},
  [254] = {.lex_state = 286},
  [255] = {.lex_state = 77},
  [256] = {.lex_state = 77},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 286},
  [259] = {.lex_state = 286},
  [260] = {.lex_state = 286},
  [261] = {.lex_state = 77},
  [262] = {.lex_state = 286},
  [263] = {.lex_state = 77},
  [264] = {.lex_state = 77},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 286},
  [268] = {.lex_state = 286},
  [269] = {.lex_state = 77},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 77},
  [272] = {.lex_state = 77},
  [273] = {.lex_state = 286},
  [274] = {.lex_state = 77},
  [275] = {.lex_state = 286},
  [276] = {.lex_state = 77},
  [277] = {.lex_state = 77},
  [278] = {.lex_state = 286},
  [279] = {.lex_state = 286},
  [280] = {.lex_state = 286},
  [281] = {.lex_state = 286},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_nbt_path_token1] = ACTIONS(1),
    [aux_sym_nbt_path_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
  },
  [1] = {
    [sym_root] = STATE(231),
    [sym_command] = STATE(22),
    [sym_execute_command] = STATE(98),
    [sym__legacy_execute] = STATE(22),
    [sym_command_name] = STATE(68),
    [aux_sym_root_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(5),
    [aux_sym_command_name_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    STATE(105), 1,
      sym_string,
    STATE(252), 1,
      sym_selector,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [87] = 21,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(105), 1,
      sym_string,
    STATE(252), 1,
      sym_selector,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [174] = 19,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    STATE(105), 1,
      sym_string,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [256] = 19,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(105), 1,
      sym_string,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [338] = 19,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(105), 1,
      sym_string,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [420] = 18,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      aux_sym_command_name_token1,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_container_token1,
    STATE(105), 1,
      sym_string,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(263), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [499] = 17,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(53), 1,
      aux_sym_command_name_token1,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      aux_sym_container_token1,
    STATE(20), 1,
      sym_string,
    STATE(255), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(90), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(93), 11,
      sym__command_choices,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_container,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [564] = 11,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
    STATE(63), 1,
      aux_sym_path_repeat1,
    ACTIONS(64), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [602] = 9,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [635] = 9,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [668] = 9,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [701] = 9,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [734] = 8,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [764] = 8,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [794] = 8,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [824] = 8,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_nbt_object_value,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(244), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(203), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [854] = 8,
    ACTIONS(88), 1,
      aux_sym_command_name_token1,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      aux_sym_selector_number_token3,
    STATE(200), 1,
      sym_selector_value,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(196), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [884] = 7,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(24), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(102), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [911] = 7,
    ACTIONS(114), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      aux_sym_nbt_path_repeat3,
    STATE(24), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(112), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [938] = 7,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(24), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(120), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [965] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_command_name,
    STATE(98), 1,
      sym_execute_command,
    ACTIONS(126), 2,
      sym_comment,
      sym__line_separator,
    STATE(23), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [993] = 8,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_execute,
    ACTIONS(139), 1,
      aux_sym_command_name_token1,
    STATE(68), 1,
      sym_command_name,
    STATE(98), 1,
      sym_execute_command,
    ACTIONS(130), 2,
      sym_comment,
      sym__line_separator,
    STATE(23), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [1021] = 4,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1040] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_nbt_object,
    STATE(83), 1,
      sym_item_nbt,
    ACTIONS(151), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1061] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
    STATE(141), 1,
      aux_sym_path_repeat1,
  [1092] = 4,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(157), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1111] = 4,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1130] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_nbt_object,
    STATE(87), 1,
      sym_item_nbt,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1151] = 4,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1170] = 5,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      sym_text,
    STATE(36), 1,
      sym_string,
    ACTIONS(178), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1191] = 2,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1205] = 2,
    ACTIONS(188), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1219] = 5,
    ACTIONS(192), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(159), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1239] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_selector_option_section,
    ACTIONS(198), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1257] = 2,
    ACTIONS(157), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1271] = 4,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_container_repeat1,
    ACTIONS(204), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1289] = 2,
    ACTIONS(208), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1303] = 4,
    ACTIONS(214), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_container_repeat1,
    ACTIONS(212), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1321] = 4,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_item_state,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1339] = 4,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_item_state,
    ACTIONS(151), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1357] = 5,
    ACTIONS(219), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(161), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1377] = 4,
    ACTIONS(225), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(228), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1394] = 2,
    ACTIONS(232), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1407] = 4,
    ACTIONS(236), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1424] = 4,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1441] = 4,
    ACTIONS(248), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1458] = 4,
    ACTIONS(248), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(252), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1475] = 4,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1492] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat1,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1509] = 2,
    ACTIONS(212), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1522] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(269), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(267), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1539] = 3,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(273), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(271), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1554] = 4,
    ACTIONS(277), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(269), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(267), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1571] = 4,
    ACTIONS(280), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(252), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1588] = 8,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(285), 1,
      aux_sym_command_name_token1,
    ACTIONS(287), 1,
      sym_number,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_nbt_object_key,
    STATE(213), 1,
      sym_selector_score_key,
    STATE(224), 1,
      sym_string,
  [1613] = 4,
    ACTIONS(293), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(296), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1630] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1647] = 4,
    ACTIONS(298), 1,
      anon_sym_,
    STATE(64), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1664] = 2,
    ACTIONS(303), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1677] = 2,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1690] = 4,
    ACTIONS(309), 1,
      anon_sym_,
    STATE(45), 1,
      aux_sym_command_repeat1,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1707] = 4,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(317), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1724] = 4,
    ACTIONS(319), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1741] = 8,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(285), 1,
      aux_sym_command_name_token1,
    ACTIONS(287), 1,
      sym_number,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_selector_score_key,
    STATE(210), 1,
      sym_nbt_object_key,
    STATE(224), 1,
      sym_string,
  [1766] = 4,
    ACTIONS(309), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym_command_repeat1,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1783] = 2,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1796] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_command_repeat1,
    ACTIONS(228), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1813] = 4,
    ACTIONS(319), 1,
      anon_sym_,
    STATE(55), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1830] = 2,
    ACTIONS(330), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1843] = 2,
    ACTIONS(273), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(271), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1855] = 2,
    ACTIONS(334), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1867] = 2,
    ACTIONS(338), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1879] = 2,
    ACTIONS(342), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1891] = 2,
    ACTIONS(346), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1903] = 2,
    ACTIONS(350), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1915] = 2,
    ACTIONS(354), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1927] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
    STATE(136), 1,
      aux_sym_path_repeat1,
  [1949] = 7,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(285), 1,
      aux_sym_command_name_token1,
    ACTIONS(287), 1,
      sym_number,
    STATE(210), 1,
      sym_nbt_object_key,
    STATE(213), 1,
      sym_selector_score_key,
    STATE(224), 1,
      sym_string,
  [1971] = 3,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(112), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1985] = 2,
    ACTIONS(361), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1997] = 2,
    ACTIONS(365), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2009] = 2,
    ACTIONS(369), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(367), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2021] = 2,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2033] = 2,
    ACTIONS(373), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(371), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2045] = 2,
    ACTIONS(377), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2057] = 2,
    ACTIONS(151), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2069] = 2,
    ACTIONS(381), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(379), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2081] = 2,
    ACTIONS(385), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(383), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2093] = 2,
    ACTIONS(389), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2105] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
    STATE(46), 1,
      aux_sym_path_repeat1,
  [2127] = 3,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(396), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(391), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2141] = 2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2153] = 2,
    ACTIONS(400), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(398), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2165] = 2,
    ACTIONS(404), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(402), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2176] = 2,
    ACTIONS(406), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(408), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2187] = 2,
    ACTIONS(412), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(410), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2198] = 2,
    ACTIONS(416), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(414), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2209] = 4,
    STATE(226), 1,
      sym_selector_score_value,
    STATE(227), 1,
      sym_selector_number,
    ACTIONS(96), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(98), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2224] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    ACTIONS(287), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2241] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    ACTIONS(287), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2258] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_execute,
    STATE(68), 1,
      sym_command_name,
    STATE(97), 2,
      sym_command,
      sym_execute_command,
  [2275] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(428), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(86), 2,
      sym_command,
      sym__legacy_execute,
  [2292] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    ACTIONS(287), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2309] = 6,
    ACTIONS(110), 1,
      anon_sym_,
    ACTIONS(114), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(108), 1,
      aux_sym_nbt_path_repeat3,
  [2328] = 2,
    ACTIONS(434), 2,
      anon_sym_execute,
      aux_sym_command_name_token1,
    ACTIONS(432), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2339] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_execute,
    STATE(68), 1,
      sym_command_name,
    STATE(95), 2,
      sym_command,
      sym_execute_command,
  [2356] = 6,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(436), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(24), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
  [2375] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    ACTIONS(287), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2392] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(428), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(77), 2,
      sym_command,
      sym__legacy_execute,
  [2409] = 5,
    ACTIONS(440), 1,
      aux_sym_command_name_token1,
    ACTIONS(442), 1,
      sym_number,
    STATE(182), 1,
      sym_boolean,
    STATE(183), 1,
      sym_state_value,
    ACTIONS(444), 2,
      anon_sym_true,
      anon_sym_false,
  [2426] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_execute,
    STATE(68), 1,
      sym_command_name,
    STATE(106), 2,
      sym_command,
      sym_execute_command,
  [2443] = 5,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(428), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(94), 2,
      sym_command,
      sym__legacy_execute,
  [2460] = 5,
    ACTIONS(446), 1,
      aux_sym_command_name_token1,
    ACTIONS(448), 1,
      sym_number,
    STATE(205), 1,
      sym_state_value,
    STATE(261), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2477] = 4,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      aux_sym_string_token1,
    ACTIONS(454), 1,
      anon_sym_BSLASH,
    STATE(122), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2491] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(177), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2507] = 4,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    ACTIONS(287), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2521] = 4,
    ACTIONS(454), 1,
      anon_sym_BSLASH,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      aux_sym_string_token1,
    STATE(125), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2535] = 1,
    ACTIONS(462), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2543] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
  [2559] = 4,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 1,
      aux_sym_string_token1,
    ACTIONS(469), 1,
      anon_sym_BSLASH,
    STATE(121), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2573] = 4,
    ACTIONS(454), 1,
      anon_sym_BSLASH,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      aux_sym_string_token1,
    STATE(121), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2587] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(232), 1,
      sym_location,
    STATE(277), 1,
      sym_coordinate,
  [2603] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_item_state,
    STATE(41), 1,
      sym_item_nbt,
    STATE(44), 1,
      sym_nbt_object,
  [2619] = 4,
    ACTIONS(454), 1,
      anon_sym_BSLASH,
    ACTIONS(474), 1,
      aux_sym_string_token1,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    STATE(121), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2633] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(92), 1,
      sym_coordinate,
  [2646] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(256), 1,
      sym_coordinate,
  [2659] = 4,
    ACTIONS(478), 1,
      sym_number,
    ACTIONS(480), 1,
      anon_sym_TILDE,
    ACTIONS(482), 1,
      anon_sym_CARET,
    STATE(164), 1,
      sym_coordinate,
  [2672] = 3,
    ACTIONS(486), 1,
      aux_sym_command_name_token1,
    STATE(195), 1,
      sym_state_key,
    ACTIONS(484), 2,
      anon_sym_STAR,
      sym_number,
  [2683] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(276), 1,
      sym_coordinate,
  [2696] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(488), 1,
      sym_text,
    STATE(36), 1,
      sym_string,
  [2709] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      sym_number,
    STATE(76), 1,
      sym_coordinate,
  [2722] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      sym_text,
    STATE(36), 1,
      sym_string,
  [2732] = 3,
    ACTIONS(490), 1,
      aux_sym_nbt_path_token1,
    STATE(186), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(187), 1,
      aux_sym_selector_score_repeat1,
  [2742] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(492), 1,
      anon_sym_execute,
    STATE(66), 1,
      sym_command_name,
  [2752] = 3,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(241), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym_path_repeat1,
  [2762] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(494), 1,
      anon_sym_execute,
    STATE(50), 1,
      sym_command_name,
  [2772] = 3,
    ACTIONS(496), 1,
      aux_sym_command_name_token1,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_state_key,
  [2782] = 3,
    ACTIONS(500), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [2792] = 3,
    ACTIONS(506), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2802] = 3,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(312), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym_path_repeat1,
  [2812] = 3,
    ACTIONS(271), 1,
      anon_sym_detect,
    ACTIONS(273), 1,
      anon_sym_,
    ACTIONS(510), 1,
      sym_number,
  [2822] = 3,
    ACTIONS(496), 1,
      aux_sym_command_name_token1,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_state_key,
  [2832] = 3,
    ACTIONS(514), 1,
      aux_sym_command_name_token1,
    ACTIONS(516), 1,
      aux_sym_container_token1,
    STATE(239), 1,
      sym_item,
  [2842] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(518), 1,
      aux_sym__legacy_execute_token1,
    STATE(271), 1,
      sym_selector,
  [2852] = 3,
    ACTIONS(506), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_selector_option_section_repeat1,
  [2862] = 3,
    ACTIONS(522), 1,
      aux_sym_command_name_token1,
    STATE(197), 1,
      sym_selector_option,
    STATE(279), 1,
      sym_selector_key,
  [2872] = 3,
    ACTIONS(524), 1,
      aux_sym_command_name_token1,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_selector_score_key,
  [2882] = 2,
    ACTIONS(530), 1,
      aux_sym_string_token1,
    ACTIONS(528), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2890] = 3,
    ACTIONS(532), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2900] = 3,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(537), 1,
      anon_sym_execute,
    STATE(50), 1,
      sym_command_name,
  [2910] = 2,
    ACTIONS(539), 1,
      anon_sym_EQ,
    ACTIONS(541), 1,
      anon_sym_COLON,
  [2917] = 2,
    ACTIONS(543), 1,
      aux_sym_nbt_path_token1,
    STATE(153), 1,
      aux_sym_selector_score_repeat1,
  [2924] = 2,
    ACTIONS(546), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_object_repeat1,
  [2931] = 2,
    ACTIONS(548), 1,
      aux_sym_nbt_path_token1,
    STATE(190), 1,
      aux_sym_nbt_array_repeat1,
  [2938] = 2,
    ACTIONS(550), 1,
      aux_sym_nbt_path_token1,
    STATE(154), 1,
      aux_sym_nbt_object_repeat1,
  [2945] = 2,
    ACTIONS(552), 1,
      aux_sym_nbt_path_token1,
    STATE(155), 1,
      aux_sym_nbt_array_repeat1,
  [2952] = 2,
    ACTIONS(554), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(556), 1,
      anon_sym_COMMA,
  [2959] = 2,
    ACTIONS(558), 1,
      anon_sym_,
    STATE(165), 1,
      aux_sym_execute_command_repeat1,
  [2966] = 2,
    ACTIONS(560), 1,
      aux_sym_nbt_path_token1,
    STATE(160), 1,
      aux_sym_item_state_repeat1,
  [2973] = 2,
    ACTIONS(563), 1,
      anon_sym_,
    STATE(165), 1,
      aux_sym_execute_command_repeat1,
  [2980] = 2,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      aux_sym_nbt_path_token1,
  [2987] = 2,
    ACTIONS(496), 1,
      aux_sym_command_name_token1,
    STATE(273), 1,
      sym_state_key,
  [2994] = 2,
    ACTIONS(348), 1,
      anon_sym_detect,
    ACTIONS(350), 1,
      anon_sym_,
  [3001] = 2,
    ACTIONS(565), 1,
      anon_sym_,
    STATE(165), 1,
      aux_sym_execute_command_repeat1,
  [3008] = 2,
    ACTIONS(271), 1,
      anon_sym_detect,
    ACTIONS(273), 1,
      anon_sym_,
  [3015] = 2,
    ACTIONS(359), 1,
      anon_sym_detect,
    ACTIONS(361), 1,
      anon_sym_,
  [3022] = 2,
    ACTIONS(568), 1,
      aux_sym_command_name_token1,
    ACTIONS(570), 1,
      aux_sym_container_token1,
  [3029] = 2,
    ACTIONS(572), 1,
      aux_sym_nbt_path_token1,
    STATE(179), 1,
      aux_sym_nbt_array_repeat1,
  [3036] = 2,
    ACTIONS(574), 1,
      aux_sym_nbt_path_token1,
    STATE(191), 1,
      aux_sym_nbt_object_repeat1,
  [3043] = 2,
    ACTIONS(576), 1,
      anon_sym_,
    STATE(159), 1,
      aux_sym_execute_command_repeat1,
  [3050] = 2,
    ACTIONS(578), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [3057] = 2,
    ACTIONS(582), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [3064] = 2,
    ACTIONS(586), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [3071] = 2,
    ACTIONS(590), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [3078] = 2,
    ACTIONS(594), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_object_repeat1,
  [3085] = 2,
    ACTIONS(597), 1,
      anon_sym_,
    ACTIONS(599), 1,
      anon_sym_detect,
  [3092] = 2,
    ACTIONS(524), 1,
      aux_sym_command_name_token1,
    STATE(216), 1,
      sym_selector_score_key,
  [3099] = 2,
    ACTIONS(601), 1,
      aux_sym_nbt_path_token1,
    STATE(190), 1,
      aux_sym_nbt_array_repeat1,
  [3106] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_item_state_repeat1,
  [3113] = 2,
    ACTIONS(605), 1,
      aux_sym_nbt_path_token1,
    STATE(160), 1,
      aux_sym_item_state_repeat1,
  [3120] = 2,
    ACTIONS(607), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(609), 1,
      anon_sym_COMMA,
  [3127] = 2,
    ACTIONS(611), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(613), 1,
      anon_sym_COMMA,
  [3134] = 2,
    ACTIONS(615), 1,
      aux_sym_command_name_token1,
    ACTIONS(617), 1,
      sym_number,
  [3141] = 2,
    ACTIONS(619), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_selector_nbt_repeat1,
  [3148] = 2,
    ACTIONS(622), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_selector_nbt_repeat1,
  [3155] = 2,
    ACTIONS(624), 1,
      aux_sym_nbt_path_token1,
    STATE(153), 1,
      aux_sym_selector_score_repeat1,
  [3162] = 2,
    ACTIONS(558), 1,
      anon_sym_,
    STATE(161), 1,
      aux_sym_execute_command_repeat1,
  [3169] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [3176] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    STATE(190), 1,
      aux_sym_nbt_array_repeat1,
  [3183] = 2,
    ACTIONS(633), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_object_repeat1,
  [3190] = 1,
    ACTIONS(635), 1,
      aux_sym_nbt_path_token1,
  [3194] = 1,
    ACTIONS(638), 1,
      anon_sym_,
  [3198] = 1,
    ACTIONS(640), 1,
      anon_sym_,
  [3202] = 1,
    ACTIONS(642), 1,
      anon_sym_EQ,
  [3206] = 1,
    ACTIONS(644), 1,
      aux_sym_nbt_path_token1,
  [3210] = 1,
    ACTIONS(646), 1,
      aux_sym_nbt_path_token1,
  [3214] = 1,
    ACTIONS(648), 1,
      aux_sym_nbt_path_token1,
  [3218] = 1,
    ACTIONS(650), 1,
      aux_sym_nbt_path_token1,
  [3222] = 1,
    ACTIONS(652), 1,
      aux_sym_nbt_path_token1,
  [3226] = 1,
    ACTIONS(654), 1,
      aux_sym_nbt_path_token1,
  [3230] = 1,
    ACTIONS(656), 1,
      aux_sym_nbt_path_token1,
  [3234] = 1,
    ACTIONS(658), 1,
      aux_sym_nbt_path_token1,
  [3238] = 1,
    ACTIONS(660), 1,
      aux_sym_nbt_path_token1,
  [3242] = 1,
    ACTIONS(662), 1,
      anon_sym_,
  [3246] = 1,
    ACTIONS(664), 1,
      aux_sym_nbt_path_token1,
  [3250] = 1,
    ACTIONS(666), 1,
      aux_sym_nbt_path_token1,
  [3254] = 1,
    ACTIONS(668), 1,
      aux_sym_nbt_path_token1,
  [3258] = 1,
    ACTIONS(671), 1,
      aux_sym_nbt_path_token1,
  [3262] = 1,
    ACTIONS(673), 1,
      aux_sym_nbt_path_token1,
  [3266] = 1,
    ACTIONS(675), 1,
      anon_sym_COLON,
  [3270] = 1,
    ACTIONS(677), 1,
      aux_sym_nbt_path_token1,
  [3274] = 1,
    ACTIONS(679), 1,
      aux_sym_nbt_path_token1,
  [3278] = 1,
    ACTIONS(681), 1,
      aux_sym_command_name_token1,
  [3282] = 1,
    ACTIONS(683), 1,
      aux_sym_nbt_path_token1,
  [3286] = 1,
    ACTIONS(685), 1,
      aux_sym_nbt_path_token1,
  [3290] = 1,
    ACTIONS(687), 1,
      anon_sym_COLON,
  [3294] = 1,
    ACTIONS(689), 1,
      aux_sym_nbt_path_token1,
  [3298] = 1,
    ACTIONS(691), 1,
      aux_sym_nbt_path_token1,
  [3302] = 1,
    ACTIONS(693), 1,
      aux_sym_nbt_path_token1,
  [3306] = 1,
    ACTIONS(541), 1,
      anon_sym_COLON,
  [3310] = 1,
    ACTIONS(539), 1,
      anon_sym_EQ,
  [3314] = 1,
    ACTIONS(695), 1,
      aux_sym_nbt_path_token2,
  [3318] = 1,
    ACTIONS(697), 1,
      aux_sym_nbt_path_token1,
  [3322] = 1,
    ACTIONS(699), 1,
      anon_sym_,
  [3326] = 1,
    ACTIONS(701), 1,
      aux_sym_nbt_path_token1,
  [3330] = 1,
    ACTIONS(703), 1,
      aux_sym_nbt_path_token1,
  [3334] = 1,
    ACTIONS(705), 1,
      aux_sym_nbt_path_token1,
  [3338] = 1,
    ACTIONS(707), 1,
      aux_sym_nbt_path_token1,
  [3342] = 1,
    ACTIONS(709), 1,
      aux_sym_nbt_path_token1,
  [3346] = 1,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
  [3350] = 1,
    ACTIONS(713), 1,
      anon_sym_,
  [3354] = 1,
    ACTIONS(715), 1,
      aux_sym_nbt_path_token1,
  [3358] = 1,
    ACTIONS(717), 1,
      aux_sym_nbt_path_token1,
  [3362] = 1,
    ACTIONS(719), 1,
      aux_sym_nbt_path_token1,
  [3366] = 1,
    ACTIONS(721), 1,
      aux_sym_nbt_path_token1,
  [3370] = 1,
    ACTIONS(723), 1,
      aux_sym_nbt_path_token1,
  [3374] = 1,
    ACTIONS(725), 1,
      aux_sym_nbt_path_token1,
  [3378] = 1,
    ACTIONS(727), 1,
      anon_sym_,
  [3382] = 1,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
  [3386] = 1,
    ACTIONS(731), 1,
      aux_sym_nbt_path_token1,
  [3390] = 1,
    ACTIONS(363), 1,
      aux_sym_nbt_path_token1,
  [3394] = 1,
    ACTIONS(733), 1,
      aux_sym_command_name_token1,
  [3398] = 1,
    ACTIONS(387), 1,
      aux_sym_nbt_path_token1,
  [3402] = 1,
    ACTIONS(735), 1,
      aux_sym_nbt_path_token1,
  [3406] = 1,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
  [3410] = 1,
    ACTIONS(206), 1,
      aux_sym_nbt_path_token1,
  [3414] = 1,
    ACTIONS(739), 1,
      anon_sym_,
  [3418] = 1,
    ACTIONS(741), 1,
      aux_sym_nbt_path_token1,
  [3422] = 1,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [3426] = 1,
    ACTIONS(186), 1,
      aux_sym_nbt_path_token1,
  [3430] = 1,
    ACTIONS(745), 1,
      anon_sym_,
  [3434] = 1,
    ACTIONS(379), 1,
      aux_sym_nbt_path_token1,
  [3438] = 1,
    ACTIONS(328), 1,
      aux_sym_nbt_path_token1,
  [3442] = 1,
    ACTIONS(748), 1,
      anon_sym_,
  [3446] = 1,
    ACTIONS(750), 1,
      anon_sym_,
  [3450] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [3454] = 1,
    ACTIONS(344), 1,
      aux_sym_nbt_path_token1,
  [3458] = 1,
    ACTIONS(305), 1,
      aux_sym_nbt_path_token1,
  [3462] = 1,
    ACTIONS(752), 1,
      aux_sym_nbt_path_token1,
  [3466] = 1,
    ACTIONS(609), 1,
      anon_sym_,
  [3470] = 1,
    ACTIONS(754), 1,
      aux_sym_nbt_path_token1,
  [3474] = 1,
    ACTIONS(756), 1,
      anon_sym_,
  [3478] = 1,
    ACTIONS(510), 1,
      sym_number,
  [3482] = 1,
    ACTIONS(758), 1,
      aux_sym_command_name_token1,
  [3486] = 1,
    ACTIONS(760), 1,
      aux_sym_command_name_token1,
  [3490] = 1,
    ACTIONS(762), 1,
      aux_sym_nbt_path_token1,
  [3494] = 1,
    ACTIONS(764), 1,
      aux_sym_nbt_path_token1,
  [3498] = 1,
    ACTIONS(275), 1,
      sym_number,
  [3502] = 1,
    ACTIONS(766), 1,
      anon_sym_,
  [3506] = 1,
    ACTIONS(768), 1,
      anon_sym_,
  [3510] = 1,
    ACTIONS(770), 1,
      anon_sym_,
  [3514] = 1,
    ACTIONS(772), 1,
      aux_sym_nbt_path_token1,
  [3518] = 1,
    ACTIONS(774), 1,
      anon_sym_EQ,
  [3522] = 1,
    ACTIONS(776), 1,
      aux_sym_nbt_path_token1,
  [3526] = 1,
    ACTIONS(778), 1,
      anon_sym_,
  [3530] = 1,
    ACTIONS(780), 1,
      anon_sym_,
  [3534] = 1,
    ACTIONS(782), 1,
      aux_sym_nbt_path_token1,
  [3538] = 1,
    ACTIONS(784), 1,
      aux_sym_nbt_path_token1,
  [3542] = 1,
    ACTIONS(786), 1,
      aux_sym_nbt_path_token1,
  [3546] = 1,
    ACTIONS(788), 1,
      aux_sym_nbt_path_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 256,
  [SMALL_STATE(6)] = 338,
  [SMALL_STATE(7)] = 420,
  [SMALL_STATE(8)] = 499,
  [SMALL_STATE(9)] = 564,
  [SMALL_STATE(10)] = 602,
  [SMALL_STATE(11)] = 635,
  [SMALL_STATE(12)] = 668,
  [SMALL_STATE(13)] = 701,
  [SMALL_STATE(14)] = 734,
  [SMALL_STATE(15)] = 764,
  [SMALL_STATE(16)] = 794,
  [SMALL_STATE(17)] = 824,
  [SMALL_STATE(18)] = 854,
  [SMALL_STATE(19)] = 884,
  [SMALL_STATE(20)] = 911,
  [SMALL_STATE(21)] = 938,
  [SMALL_STATE(22)] = 965,
  [SMALL_STATE(23)] = 993,
  [SMALL_STATE(24)] = 1021,
  [SMALL_STATE(25)] = 1040,
  [SMALL_STATE(26)] = 1061,
  [SMALL_STATE(27)] = 1092,
  [SMALL_STATE(28)] = 1111,
  [SMALL_STATE(29)] = 1130,
  [SMALL_STATE(30)] = 1151,
  [SMALL_STATE(31)] = 1170,
  [SMALL_STATE(32)] = 1191,
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1219,
  [SMALL_STATE(35)] = 1239,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1271,
  [SMALL_STATE(38)] = 1289,
  [SMALL_STATE(39)] = 1303,
  [SMALL_STATE(40)] = 1321,
  [SMALL_STATE(41)] = 1339,
  [SMALL_STATE(42)] = 1357,
  [SMALL_STATE(43)] = 1377,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1407,
  [SMALL_STATE(46)] = 1424,
  [SMALL_STATE(47)] = 1441,
  [SMALL_STATE(48)] = 1458,
  [SMALL_STATE(49)] = 1475,
  [SMALL_STATE(50)] = 1492,
  [SMALL_STATE(51)] = 1509,
  [SMALL_STATE(52)] = 1522,
  [SMALL_STATE(53)] = 1539,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1571,
  [SMALL_STATE(56)] = 1588,
  [SMALL_STATE(57)] = 1613,
  [SMALL_STATE(58)] = 1630,
  [SMALL_STATE(59)] = 1647,
  [SMALL_STATE(60)] = 1664,
  [SMALL_STATE(61)] = 1677,
  [SMALL_STATE(62)] = 1690,
  [SMALL_STATE(63)] = 1707,
  [SMALL_STATE(64)] = 1724,
  [SMALL_STATE(65)] = 1741,
  [SMALL_STATE(66)] = 1766,
  [SMALL_STATE(67)] = 1783,
  [SMALL_STATE(68)] = 1796,
  [SMALL_STATE(69)] = 1813,
  [SMALL_STATE(70)] = 1830,
  [SMALL_STATE(71)] = 1843,
  [SMALL_STATE(72)] = 1855,
  [SMALL_STATE(73)] = 1867,
  [SMALL_STATE(74)] = 1879,
  [SMALL_STATE(75)] = 1891,
  [SMALL_STATE(76)] = 1903,
  [SMALL_STATE(77)] = 1915,
  [SMALL_STATE(78)] = 1927,
  [SMALL_STATE(79)] = 1949,
  [SMALL_STATE(80)] = 1971,
  [SMALL_STATE(81)] = 1985,
  [SMALL_STATE(82)] = 1997,
  [SMALL_STATE(83)] = 2009,
  [SMALL_STATE(84)] = 2021,
  [SMALL_STATE(85)] = 2033,
  [SMALL_STATE(86)] = 2045,
  [SMALL_STATE(87)] = 2057,
  [SMALL_STATE(88)] = 2069,
  [SMALL_STATE(89)] = 2081,
  [SMALL_STATE(90)] = 2093,
  [SMALL_STATE(91)] = 2105,
  [SMALL_STATE(92)] = 2127,
  [SMALL_STATE(93)] = 2141,
  [SMALL_STATE(94)] = 2153,
  [SMALL_STATE(95)] = 2165,
  [SMALL_STATE(96)] = 2176,
  [SMALL_STATE(97)] = 2187,
  [SMALL_STATE(98)] = 2198,
  [SMALL_STATE(99)] = 2209,
  [SMALL_STATE(100)] = 2224,
  [SMALL_STATE(101)] = 2241,
  [SMALL_STATE(102)] = 2258,
  [SMALL_STATE(103)] = 2275,
  [SMALL_STATE(104)] = 2292,
  [SMALL_STATE(105)] = 2309,
  [SMALL_STATE(106)] = 2328,
  [SMALL_STATE(107)] = 2339,
  [SMALL_STATE(108)] = 2356,
  [SMALL_STATE(109)] = 2375,
  [SMALL_STATE(110)] = 2392,
  [SMALL_STATE(111)] = 2409,
  [SMALL_STATE(112)] = 2426,
  [SMALL_STATE(113)] = 2443,
  [SMALL_STATE(114)] = 2460,
  [SMALL_STATE(115)] = 2477,
  [SMALL_STATE(116)] = 2491,
  [SMALL_STATE(117)] = 2507,
  [SMALL_STATE(118)] = 2521,
  [SMALL_STATE(119)] = 2535,
  [SMALL_STATE(120)] = 2543,
  [SMALL_STATE(121)] = 2559,
  [SMALL_STATE(122)] = 2573,
  [SMALL_STATE(123)] = 2587,
  [SMALL_STATE(124)] = 2603,
  [SMALL_STATE(125)] = 2619,
  [SMALL_STATE(126)] = 2633,
  [SMALL_STATE(127)] = 2646,
  [SMALL_STATE(128)] = 2659,
  [SMALL_STATE(129)] = 2672,
  [SMALL_STATE(130)] = 2683,
  [SMALL_STATE(131)] = 2696,
  [SMALL_STATE(132)] = 2709,
  [SMALL_STATE(133)] = 2722,
  [SMALL_STATE(134)] = 2732,
  [SMALL_STATE(135)] = 2742,
  [SMALL_STATE(136)] = 2752,
  [SMALL_STATE(137)] = 2762,
  [SMALL_STATE(138)] = 2772,
  [SMALL_STATE(139)] = 2782,
  [SMALL_STATE(140)] = 2792,
  [SMALL_STATE(141)] = 2802,
  [SMALL_STATE(142)] = 2812,
  [SMALL_STATE(143)] = 2822,
  [SMALL_STATE(144)] = 2832,
  [SMALL_STATE(145)] = 2842,
  [SMALL_STATE(146)] = 2852,
  [SMALL_STATE(147)] = 2862,
  [SMALL_STATE(148)] = 2872,
  [SMALL_STATE(149)] = 2882,
  [SMALL_STATE(150)] = 2890,
  [SMALL_STATE(151)] = 2900,
  [SMALL_STATE(152)] = 2910,
  [SMALL_STATE(153)] = 2917,
  [SMALL_STATE(154)] = 2924,
  [SMALL_STATE(155)] = 2931,
  [SMALL_STATE(156)] = 2938,
  [SMALL_STATE(157)] = 2945,
  [SMALL_STATE(158)] = 2952,
  [SMALL_STATE(159)] = 2959,
  [SMALL_STATE(160)] = 2966,
  [SMALL_STATE(161)] = 2973,
  [SMALL_STATE(162)] = 2980,
  [SMALL_STATE(163)] = 2987,
  [SMALL_STATE(164)] = 2994,
  [SMALL_STATE(165)] = 3001,
  [SMALL_STATE(166)] = 3008,
  [SMALL_STATE(167)] = 3015,
  [SMALL_STATE(168)] = 3022,
  [SMALL_STATE(169)] = 3029,
  [SMALL_STATE(170)] = 3036,
  [SMALL_STATE(171)] = 3043,
  [SMALL_STATE(172)] = 3050,
  [SMALL_STATE(173)] = 3057,
  [SMALL_STATE(174)] = 3064,
  [SMALL_STATE(175)] = 3071,
  [SMALL_STATE(176)] = 3078,
  [SMALL_STATE(177)] = 3085,
  [SMALL_STATE(178)] = 3092,
  [SMALL_STATE(179)] = 3099,
  [SMALL_STATE(180)] = 3106,
  [SMALL_STATE(181)] = 3113,
  [SMALL_STATE(182)] = 3120,
  [SMALL_STATE(183)] = 3127,
  [SMALL_STATE(184)] = 3134,
  [SMALL_STATE(185)] = 3141,
  [SMALL_STATE(186)] = 3148,
  [SMALL_STATE(187)] = 3155,
  [SMALL_STATE(188)] = 3162,
  [SMALL_STATE(189)] = 3169,
  [SMALL_STATE(190)] = 3176,
  [SMALL_STATE(191)] = 3183,
  [SMALL_STATE(192)] = 3190,
  [SMALL_STATE(193)] = 3194,
  [SMALL_STATE(194)] = 3198,
  [SMALL_STATE(195)] = 3202,
  [SMALL_STATE(196)] = 3206,
  [SMALL_STATE(197)] = 3210,
  [SMALL_STATE(198)] = 3214,
  [SMALL_STATE(199)] = 3218,
  [SMALL_STATE(200)] = 3222,
  [SMALL_STATE(201)] = 3226,
  [SMALL_STATE(202)] = 3230,
  [SMALL_STATE(203)] = 3234,
  [SMALL_STATE(204)] = 3238,
  [SMALL_STATE(205)] = 3242,
  [SMALL_STATE(206)] = 3246,
  [SMALL_STATE(207)] = 3250,
  [SMALL_STATE(208)] = 3254,
  [SMALL_STATE(209)] = 3258,
  [SMALL_STATE(210)] = 3262,
  [SMALL_STATE(211)] = 3266,
  [SMALL_STATE(212)] = 3270,
  [SMALL_STATE(213)] = 3274,
  [SMALL_STATE(214)] = 3278,
  [SMALL_STATE(215)] = 3282,
  [SMALL_STATE(216)] = 3286,
  [SMALL_STATE(217)] = 3290,
  [SMALL_STATE(218)] = 3294,
  [SMALL_STATE(219)] = 3298,
  [SMALL_STATE(220)] = 3302,
  [SMALL_STATE(221)] = 3306,
  [SMALL_STATE(222)] = 3310,
  [SMALL_STATE(223)] = 3314,
  [SMALL_STATE(224)] = 3318,
  [SMALL_STATE(225)] = 3322,
  [SMALL_STATE(226)] = 3326,
  [SMALL_STATE(227)] = 3330,
  [SMALL_STATE(228)] = 3334,
  [SMALL_STATE(229)] = 3338,
  [SMALL_STATE(230)] = 3342,
  [SMALL_STATE(231)] = 3346,
  [SMALL_STATE(232)] = 3350,
  [SMALL_STATE(233)] = 3354,
  [SMALL_STATE(234)] = 3358,
  [SMALL_STATE(235)] = 3362,
  [SMALL_STATE(236)] = 3366,
  [SMALL_STATE(237)] = 3370,
  [SMALL_STATE(238)] = 3374,
  [SMALL_STATE(239)] = 3378,
  [SMALL_STATE(240)] = 3382,
  [SMALL_STATE(241)] = 3386,
  [SMALL_STATE(242)] = 3390,
  [SMALL_STATE(243)] = 3394,
  [SMALL_STATE(244)] = 3398,
  [SMALL_STATE(245)] = 3402,
  [SMALL_STATE(246)] = 3406,
  [SMALL_STATE(247)] = 3410,
  [SMALL_STATE(248)] = 3414,
  [SMALL_STATE(249)] = 3418,
  [SMALL_STATE(250)] = 3422,
  [SMALL_STATE(251)] = 3426,
  [SMALL_STATE(252)] = 3430,
  [SMALL_STATE(253)] = 3434,
  [SMALL_STATE(254)] = 3438,
  [SMALL_STATE(255)] = 3442,
  [SMALL_STATE(256)] = 3446,
  [SMALL_STATE(257)] = 3450,
  [SMALL_STATE(258)] = 3454,
  [SMALL_STATE(259)] = 3458,
  [SMALL_STATE(260)] = 3462,
  [SMALL_STATE(261)] = 3466,
  [SMALL_STATE(262)] = 3470,
  [SMALL_STATE(263)] = 3474,
  [SMALL_STATE(264)] = 3478,
  [SMALL_STATE(265)] = 3482,
  [SMALL_STATE(266)] = 3486,
  [SMALL_STATE(267)] = 3490,
  [SMALL_STATE(268)] = 3494,
  [SMALL_STATE(269)] = 3498,
  [SMALL_STATE(270)] = 3502,
  [SMALL_STATE(271)] = 3506,
  [SMALL_STATE(272)] = 3510,
  [SMALL_STATE(273)] = 3514,
  [SMALL_STATE(274)] = 3518,
  [SMALL_STATE(275)] = 3522,
  [SMALL_STATE(276)] = 3526,
  [SMALL_STATE(277)] = 3530,
  [SMALL_STATE(278)] = 3534,
  [SMALL_STATE(279)] = 3538,
  [SMALL_STATE(280)] = 3542,
  [SMALL_STATE(281)] = 3546,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(168),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(133),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(245),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(23),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(137),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(34),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(73),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(133),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(133),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(245),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(245),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(184),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(168),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(168),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(145),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(145),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(145),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(168),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(145),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(132),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(240),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(147),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(178),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(163),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(117),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(79),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(16),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [711] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(116),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
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
