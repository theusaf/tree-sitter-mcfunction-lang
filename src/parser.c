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
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 18

enum {
  sym_tag = 1,
  sym_comment = 2,
  anon_sym_SLASH = 3,
  anon_sym_ = 4,
  anon_sym_execute = 5,
  anon_sym_run = 6,
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
  sym_nbt_identifier = 22,
  aux_sym_identifier_token1 = 23,
  sym_namespace = 24,
  sym_text = 25,
  anon_sym_QMARK = 26,
  sym_number = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_TILDE = 30,
  anon_sym_CARET = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_string_token1 = 33,
  anon_sym_BSLASH = 34,
  anon_sym_DOT = 35,
  anon_sym_LBRACK = 36,
  aux_sym_nbt_path_token1 = 37,
  aux_sym_nbt_path_token2 = 38,
  anon_sym_RBRACK = 39,
  anon_sym_AT = 40,
  anon_sym_p = 41,
  anon_sym_a = 42,
  anon_sym_r = 43,
  anon_sym_s = 44,
  anon_sym_e = 45,
  anon_sym_COMMA = 46,
  anon_sym_LBRACE = 47,
  anon_sym_COLON = 48,
  anon_sym_RBRACE = 49,
  aux_sym_selector_number_token1 = 50,
  aux_sym_selector_number_token2 = 51,
  aux_sym_selector_number_token3 = 52,
  anon_sym_l = 53,
  anon_sym_d = 54,
  anon_sym_f = 55,
  anon_sym_b = 56,
  sym_namespaced_container = 57,
  sym_root = 58,
  sym_command = 59,
  sym__command_choices = 60,
  sym_execute_command = 61,
  sym__legacy_execute = 62,
  sym_execute_keyword = 63,
  sym_identifier = 64,
  sym_command_name = 65,
  sym_wildcard = 66,
  sym_boolean = 67,
  sym_coordinate = 68,
  sym_rotation = 69,
  sym_location = 70,
  sym_string = 71,
  sym__escape_sequence = 72,
  sym_container = 73,
  sym_nbt_path = 74,
  sym_selector = 75,
  sym_selector_option_section = 76,
  sym_selector_option = 77,
  sym_selector_key = 78,
  sym_selector_value = 79,
  sym_selector_nbt = 80,
  sym_selector_score = 81,
  sym_selector_score_key = 82,
  sym_selector_score_value = 83,
  sym_selector_number = 84,
  sym_nbt = 85,
  sym_nbt_object = 86,
  sym_nbt_array = 87,
  sym_nbt_object_key = 88,
  sym_nbt_object_value = 89,
  sym_nbt_number = 90,
  sym_item = 91,
  sym__blank_item_with_namespace = 92,
  sym_item_nbt = 93,
  sym_item_state = 94,
  sym_state_key = 95,
  sym_state_value = 96,
  sym_path = 97,
  aux_sym_root_repeat1 = 98,
  aux_sym_command_repeat1 = 99,
  aux_sym_command_repeat2 = 100,
  aux_sym_execute_command_repeat1 = 101,
  aux_sym_string_repeat1 = 102,
  aux_sym_container_repeat1 = 103,
  aux_sym_nbt_path_repeat1 = 104,
  aux_sym_nbt_path_repeat2 = 105,
  aux_sym_nbt_path_repeat3 = 106,
  aux_sym_selector_option_section_repeat1 = 107,
  aux_sym_selector_nbt_repeat1 = 108,
  aux_sym_selector_score_repeat1 = 109,
  aux_sym_nbt_object_repeat1 = 110,
  aux_sym_nbt_array_repeat1 = 111,
  aux_sym_item_state_repeat1 = 112,
  aux_sym_path_repeat1 = 113,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_tag] = "tag",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
  [anon_sym_execute] = "command_name",
  [anon_sym_run] = "execute_keyword",
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
  [sym_nbt_identifier] = "nbt_identifier",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_namespace] = "namespace",
  [sym_text] = "text",
  [anon_sym_QMARK] = "\?",
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
  [sym_namespaced_container] = "namespaced_container",
  [sym_root] = "root",
  [sym_command] = "command",
  [sym__command_choices] = "_command_choices",
  [sym_execute_command] = "execute_command",
  [sym__legacy_execute] = "command",
  [sym_execute_keyword] = "execute_keyword",
  [sym_identifier] = "identifier",
  [sym_command_name] = "command_name",
  [sym_wildcard] = "wildcard",
  [sym_boolean] = "boolean",
  [sym_coordinate] = "coordinate",
  [sym_rotation] = "rotation",
  [sym_location] = "location",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_container] = "container",
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
  [sym_item] = "item",
  [sym__blank_item_with_namespace] = "item",
  [sym_item_nbt] = "item_nbt",
  [sym_item_state] = "item_state",
  [sym_state_key] = "state_key",
  [sym_state_value] = "state_value",
  [sym_path] = "path",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_execute_command_repeat1] = "execute_command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_container_repeat1] = "container_repeat1",
  [aux_sym_nbt_path_repeat1] = "nbt_path_repeat1",
  [aux_sym_nbt_path_repeat2] = "nbt_path_repeat2",
  [aux_sym_nbt_path_repeat3] = "nbt_path_repeat3",
  [aux_sym_selector_option_section_repeat1] = "selector_option_section_repeat1",
  [aux_sym_selector_nbt_repeat1] = "selector_nbt_repeat1",
  [aux_sym_selector_score_repeat1] = "selector_score_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
  [aux_sym_item_state_repeat1] = "item_state_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_tag] = sym_tag,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_execute] = sym_command_name,
  [anon_sym_run] = sym_execute_keyword,
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
  [sym_nbt_identifier] = sym_nbt_identifier,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_namespace] = sym_namespace,
  [sym_text] = sym_text,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_namespaced_container] = sym_namespaced_container,
  [sym_root] = sym_root,
  [sym_command] = sym_command,
  [sym__command_choices] = sym__command_choices,
  [sym_execute_command] = sym_execute_command,
  [sym__legacy_execute] = sym_command,
  [sym_execute_keyword] = sym_execute_keyword,
  [sym_identifier] = sym_identifier,
  [sym_command_name] = sym_command_name,
  [sym_wildcard] = sym_wildcard,
  [sym_boolean] = sym_boolean,
  [sym_coordinate] = sym_coordinate,
  [sym_rotation] = sym_rotation,
  [sym_location] = sym_location,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_container] = sym_container,
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
  [sym_item] = sym_item,
  [sym__blank_item_with_namespace] = sym_item,
  [sym_item_nbt] = sym_item_nbt,
  [sym_item_state] = sym_item_state,
  [sym_state_key] = sym_state_key,
  [sym_state_value] = sym_state_value,
  [sym_path] = sym_path,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_execute_command_repeat1] = aux_sym_execute_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
  [aux_sym_nbt_path_repeat1] = aux_sym_nbt_path_repeat1,
  [aux_sym_nbt_path_repeat2] = aux_sym_nbt_path_repeat2,
  [aux_sym_nbt_path_repeat3] = aux_sym_nbt_path_repeat3,
  [aux_sym_selector_option_section_repeat1] = aux_sym_selector_option_section_repeat1,
  [aux_sym_selector_nbt_repeat1] = aux_sym_selector_nbt_repeat1,
  [aux_sym_selector_score_repeat1] = aux_sym_selector_score_repeat1,
  [aux_sym_nbt_object_repeat1] = aux_sym_nbt_object_repeat1,
  [aux_sym_nbt_array_repeat1] = aux_sym_nbt_array_repeat1,
  [aux_sym_item_state_repeat1] = aux_sym_item_state_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_nbt_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
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
  [sym_container] = {
    .visible = true,
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
  [aux_sym_command_repeat2] = {
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
  [aux_sym_container_repeat1] = {
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(319);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'x') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_namespace);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
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
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
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
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
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
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == ',') ADVANCE(311);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_nbt_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 76},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 76},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 76},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 76},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 76},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 76},
  [122] = {.lex_state = 76},
  [123] = {.lex_state = 76},
  [124] = {.lex_state = 297},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 76},
  [131] = {.lex_state = 76},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 76},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 76},
  [139] = {.lex_state = 76},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 76},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 76},
  [146] = {.lex_state = 76},
  [147] = {.lex_state = 76},
  [148] = {.lex_state = 76},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 296},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 293},
  [155] = {.lex_state = 76},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 296},
  [159] = {.lex_state = 298},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 295},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 296},
  [167] = {.lex_state = 76},
  [168] = {.lex_state = 76},
  [169] = {.lex_state = 294},
  [170] = {.lex_state = 294},
  [171] = {.lex_state = 294},
  [172] = {.lex_state = 76},
  [173] = {.lex_state = 293},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 293},
  [176] = {.lex_state = 293},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 76},
  [179] = {.lex_state = 293},
  [180] = {.lex_state = 294},
  [181] = {.lex_state = 293},
  [182] = {.lex_state = 76},
  [183] = {.lex_state = 293},
  [184] = {.lex_state = 293},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 294},
  [187] = {.lex_state = 76},
  [188] = {.lex_state = 76},
  [189] = {.lex_state = 296},
  [190] = {.lex_state = 76},
  [191] = {.lex_state = 293},
  [192] = {.lex_state = 294},
  [193] = {.lex_state = 294},
  [194] = {.lex_state = 294},
  [195] = {.lex_state = 293},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 293},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 293},
  [201] = {.lex_state = 293},
  [202] = {.lex_state = 293},
  [203] = {.lex_state = 293},
  [204] = {.lex_state = 293},
  [205] = {.lex_state = 76},
  [206] = {.lex_state = 76},
  [207] = {.lex_state = 293},
  [208] = {.lex_state = 76},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 293},
  [211] = {.lex_state = 76},
  [212] = {.lex_state = 293},
  [213] = {.lex_state = 293},
  [214] = {.lex_state = 293},
  [215] = {.lex_state = 293},
  [216] = {.lex_state = 293},
  [217] = {.lex_state = 76},
  [218] = {.lex_state = 293},
  [219] = {.lex_state = 293},
  [220] = {.lex_state = 293},
  [221] = {.lex_state = 76},
  [222] = {.lex_state = 76},
  [223] = {.lex_state = 76},
  [224] = {.lex_state = 76},
  [225] = {.lex_state = 293},
  [226] = {.lex_state = 76},
  [227] = {.lex_state = 293},
  [228] = {.lex_state = 293},
  [229] = {.lex_state = 293},
  [230] = {.lex_state = 293},
  [231] = {.lex_state = 293},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 293},
  [234] = {.lex_state = 76},
  [235] = {.lex_state = 76},
  [236] = {.lex_state = 293},
  [237] = {.lex_state = 293},
  [238] = {.lex_state = 76},
  [239] = {.lex_state = 76},
  [240] = {.lex_state = 76},
  [241] = {.lex_state = 293},
  [242] = {.lex_state = 293},
  [243] = {.lex_state = 293},
  [244] = {.lex_state = 293},
  [245] = {.lex_state = 293},
  [246] = {.lex_state = 293},
  [247] = {.lex_state = 76},
  [248] = {.lex_state = 76},
  [249] = {.lex_state = 76},
  [250] = {.lex_state = 293},
  [251] = {.lex_state = 293},
  [252] = {.lex_state = 293},
  [253] = {.lex_state = 76},
  [254] = {.lex_state = 76},
  [255] = {.lex_state = 293},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 76},
  [258] = {.lex_state = 76},
  [259] = {.lex_state = 76},
  [260] = {.lex_state = 76},
  [261] = {.lex_state = 293},
  [262] = {.lex_state = 293},
  [263] = {.lex_state = 293},
  [264] = {.lex_state = 293},
  [265] = {.lex_state = 293},
  [266] = {.lex_state = 293},
  [267] = {.lex_state = 76},
  [268] = {.lex_state = 293},
  [269] = {.lex_state = 293},
  [270] = {.lex_state = 293},
  [271] = {.lex_state = 76},
  [272] = {.lex_state = 293},
  [273] = {.lex_state = 76},
  [274] = {.lex_state = 293},
  [275] = {.lex_state = 76},
  [276] = {.lex_state = 293},
  [277] = {.lex_state = 293},
  [278] = {.lex_state = 293},
  [279] = {.lex_state = 293},
  [280] = {.lex_state = 76},
  [281] = {.lex_state = 293},
  [282] = {.lex_state = 293},
  [283] = {.lex_state = 293},
  [284] = {.lex_state = 293},
  [285] = {.lex_state = 76},
  [286] = {.lex_state = 76},
  [287] = {.lex_state = 293},
  [288] = {.lex_state = 293},
  [289] = {.lex_state = 76},
  [290] = {.lex_state = 76},
  [291] = {.lex_state = 76},
  [292] = {.lex_state = 293},
  [293] = {.lex_state = 293},
  [294] = {.lex_state = 76},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 76},
  [297] = {.lex_state = 76},
  [298] = {.lex_state = 293},
  [299] = {.lex_state = 293},
  [300] = {.lex_state = 293},
  [301] = {.lex_state = 293},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_root] = STATE(295),
    [sym_command] = STATE(20),
    [sym_execute_command] = STATE(99),
    [sym__legacy_execute] = STATE(99),
    [sym_identifier] = STATE(78),
    [sym_command_name] = STATE(44),
    [aux_sym_root_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      sym_nbt_identifier,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(271), 1,
      sym_selector,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [91] = 22,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_nbt_identifier,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(257), 1,
      sym_selector,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 12,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [182] = 20,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_run,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 13,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [268] = 20,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 13,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [354] = 20,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 13,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [440] = 19,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_identifier,
    STATE(123), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
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
    STATE(275), 13,
      sym__command_choices,
      sym_execute_keyword,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [523] = 20,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      sym_namespace,
    ACTIONS(62), 1,
      sym_namespaced_container,
    STATE(10), 1,
      sym_identifier,
    STATE(26), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      sym_tag,
      sym_text,
    ACTIONS(55), 2,
      sym_comment,
      anon_sym_execute,
    STATE(70), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
    STATE(81), 12,
      sym__command_choices,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [603] = 18,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(60), 1,
      sym_namespace,
    STATE(10), 1,
      sym_identifier,
    STATE(26), 1,
      sym_string,
    STATE(273), 1,
      sym_coordinate,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(62), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(70), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(81), 12,
      sym__command_choices,
      sym_wildcard,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_selector,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [672] = 14,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      sym_item_state,
    STATE(45), 1,
      aux_sym_container_repeat1,
    STATE(46), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
    STATE(59), 1,
      aux_sym_path_repeat1,
    ACTIONS(69), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [720] = 11,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_item_state,
    STATE(38), 1,
      aux_sym_container_repeat1,
    STATE(39), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
    STATE(57), 1,
      aux_sym_path_repeat1,
    ACTIONS(80), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [759] = 9,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [792] = 9,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [825] = 9,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [858] = 9,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [891] = 7,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(106), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [919] = 10,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_execute,
    ACTIONS(125), 1,
      aux_sym_identifier_token1,
    ACTIONS(128), 1,
      anon_sym_QMARK,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(116), 2,
      sym_comment,
      sym__line_separator,
    STATE(17), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(99), 2,
      sym_execute_command,
      sym__legacy_execute,
  [953] = 8,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [983] = 8,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym_selector_number_token3,
    STATE(216), 1,
      sym_selector_value,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(212), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [1013] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_comment,
      sym__line_separator,
    STATE(17), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(99), 2,
      sym_execute_command,
      sym__legacy_execute,
  [1047] = 7,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1075] = 8,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1105] = 8,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1135] = 13,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      sym_item_state,
    STATE(45), 1,
      aux_sym_container_repeat1,
    STATE(46), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
    STATE(121), 1,
      aux_sym_nbt_path_repeat3,
    STATE(148), 1,
      aux_sym_path_repeat1,
  [1175] = 8,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym_nbt_object_value,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(274), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(233), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1205] = 7,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(69), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1233] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_nbt_object,
    STATE(71), 1,
      sym_item_nbt,
    ACTIONS(161), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1255] = 4,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1275] = 4,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(172), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1295] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1315] = 4,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1335] = 5,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_nbt_object,
    STATE(83), 1,
      sym_item_nbt,
    ACTIONS(189), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1357] = 5,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
    ACTIONS(193), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1379] = 2,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1395] = 4,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_container_repeat1,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1414] = 10,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_item_state,
    STATE(38), 1,
      aux_sym_container_repeat1,
    STATE(39), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
    STATE(155), 1,
      aux_sym_path_repeat1,
  [1445] = 2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1460] = 4,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_container_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1479] = 4,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_item_state,
    ACTIONS(161), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1498] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(222), 1,
      sym__line_separator,
    STATE(60), 1,
      aux_sym_command_repeat1,
    STATE(62), 1,
      aux_sym_command_repeat2,
    ACTIONS(220), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1521] = 2,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1536] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(222), 1,
      sym__line_separator,
    STATE(43), 1,
      aux_sym_command_repeat1,
    STATE(62), 1,
      aux_sym_command_repeat2,
    ACTIONS(220), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1559] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(229), 1,
      sym__line_separator,
    STATE(56), 1,
      aux_sym_command_repeat2,
    STATE(60), 1,
      aux_sym_command_repeat1,
    ACTIONS(227), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1582] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(236), 1,
      sym__line_separator,
    STATE(40), 1,
      aux_sym_command_repeat1,
    STATE(67), 1,
      aux_sym_command_repeat2,
    ACTIONS(234), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1605] = 4,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_container_repeat1,
    ACTIONS(241), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1624] = 4,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_item_state,
    ACTIONS(189), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1643] = 2,
    ACTIONS(245), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1658] = 4,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_selector_option_section,
    ACTIONS(249), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1677] = 2,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1692] = 2,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1706] = 2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1720] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [1738] = 3,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1754] = 2,
    ACTIONS(276), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(274), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1768] = 2,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(278), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1782] = 5,
    ACTIONS(284), 1,
      anon_sym_,
    ACTIONS(288), 1,
      sym__line_separator,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(286), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1802] = 4,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      aux_sym_path_repeat1,
    ACTIONS(296), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1820] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    ACTIONS(302), 1,
      anon_sym_detect,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [1846] = 4,
    ACTIONS(306), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      aux_sym_path_repeat1,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1864] = 4,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(60), 1,
      aux_sym_command_repeat1,
    ACTIONS(316), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(311), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [1882] = 4,
    ACTIONS(69), 1,
      anon_sym_execute,
    ACTIONS(318), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1900] = 5,
    ACTIONS(229), 1,
      sym__line_separator,
    ACTIONS(284), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(227), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1920] = 4,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      aux_sym_path_repeat1,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [1938] = 2,
    ACTIONS(330), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1952] = 2,
    ACTIONS(334), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1966] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    ACTIONS(336), 1,
      anon_sym_detect,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(106), 2,
      sym_command,
      sym__legacy_execute,
  [1992] = 5,
    ACTIONS(222), 1,
      sym__line_separator,
    ACTIONS(284), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(220), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [2012] = 8,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_nbt_identifier,
    ACTIONS(340), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      sym_number,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(242), 1,
      sym_selector_score_key,
  [2037] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(105), 2,
      sym_command,
      sym__legacy_execute,
  [2060] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2073] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2086] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(110), 2,
      sym_command,
      sym_execute_command,
  [2109] = 2,
    ACTIONS(360), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2122] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(362), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2135] = 3,
    ACTIONS(368), 1,
      anon_sym_,
    ACTIONS(371), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2150] = 2,
    ACTIONS(375), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2163] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(103), 2,
      sym_command,
      sym__legacy_execute,
  [2186] = 2,
    ACTIONS(379), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2199] = 2,
    ACTIONS(383), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2212] = 3,
    ACTIONS(385), 1,
      anon_sym_,
    ACTIONS(69), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2227] = 2,
    ACTIONS(316), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2240] = 2,
    ACTIONS(390), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(388), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2253] = 2,
    ACTIONS(161), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2266] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(101), 2,
      sym_command,
      sym__legacy_execute,
  [2289] = 2,
    ACTIONS(394), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(392), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2302] = 2,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(321), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2315] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2328] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(98), 2,
      sym_command,
      sym__legacy_execute,
  [2351] = 8,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_nbt_identifier,
    ACTIONS(340), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      sym_number,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(229), 1,
      sym_selector_score_key,
    STATE(230), 1,
      sym_nbt_object_key,
  [2376] = 2,
    ACTIONS(400), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2389] = 2,
    ACTIONS(404), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2402] = 2,
    ACTIONS(408), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(406), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2415] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(100), 2,
      sym_command,
      sym_execute_command,
  [2438] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    STATE(107), 2,
      sym_command,
      sym_execute_command,
  [2461] = 2,
    ACTIONS(412), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(410), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
  [2474] = 2,
    ACTIONS(227), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2486] = 7,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_nbt_identifier,
    ACTIONS(340), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      sym_number,
    STATE(225), 1,
      sym_string,
    STATE(230), 1,
      sym_nbt_object_key,
    STATE(242), 1,
      sym_selector_score_key,
  [2508] = 2,
    ACTIONS(416), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2520] = 2,
    ACTIONS(420), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2532] = 2,
    ACTIONS(424), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2544] = 2,
    ACTIONS(428), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2556] = 2,
    ACTIONS(432), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2568] = 2,
    ACTIONS(436), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2580] = 2,
    ACTIONS(440), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2592] = 2,
    ACTIONS(444), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2604] = 2,
    ACTIONS(448), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2616] = 2,
    ACTIONS(452), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(450), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2628] = 2,
    ACTIONS(286), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2640] = 2,
    ACTIONS(220), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2652] = 2,
    ACTIONS(456), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
  [2664] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2681] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_item_state,
    STATE(39), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
  [2700] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2717] = 5,
    ACTIONS(462), 1,
      aux_sym_identifier_token1,
    ACTIONS(464), 1,
      sym_number,
    STATE(238), 1,
      sym_state_value,
    STATE(286), 1,
      sym_boolean,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
  [2734] = 5,
    ACTIONS(466), 1,
      aux_sym_identifier_token1,
    ACTIONS(468), 1,
      sym_number,
    STATE(193), 1,
      sym_boolean,
    STATE(194), 1,
      sym_state_value,
    ACTIONS(470), 2,
      anon_sym_true,
      anon_sym_false,
  [2751] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2768] = 5,
    ACTIONS(462), 1,
      aux_sym_identifier_token1,
    ACTIONS(464), 1,
      sym_number,
    STATE(248), 1,
      sym_state_value,
    STATE(286), 1,
      sym_boolean,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
  [2785] = 4,
    STATE(261), 1,
      sym_selector_score_value,
    STATE(262), 1,
      sym_selector_number,
    ACTIONS(139), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(141), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2800] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 1,
      anon_sym_,
    STATE(32), 1,
      sym_item_state,
    STATE(46), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
  [2819] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2836] = 6,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
  [2855] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      anon_sym_,
    STATE(32), 1,
      sym_item_state,
    STATE(46), 1,
      sym_item_nbt,
    STATE(50), 1,
      sym_nbt_object,
  [2874] = 6,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(121), 1,
      aux_sym_nbt_path_repeat3,
  [2893] = 2,
    ACTIONS(482), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(484), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2904] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_text,
    ACTIONS(486), 1,
      sym_number,
    STATE(41), 1,
      sym_string,
    STATE(51), 1,
      sym_identifier,
  [2923] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(488), 1,
      sym_namespace,
    STATE(119), 1,
      sym_identifier,
    STATE(211), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2937] = 4,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2951] = 1,
    ACTIONS(490), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2959] = 4,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      aux_sym_string_token1,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2973] = 5,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(226), 1,
      sym_coordinate,
    STATE(232), 1,
      sym_location,
  [2989] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
  [3005] = 4,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      aux_sym_string_token1,
    ACTIONS(507), 1,
      anon_sym_BSLASH,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3019] = 5,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(208), 1,
      sym_location,
    STATE(226), 1,
      sym_coordinate,
  [3035] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(488), 1,
      sym_namespace,
    STATE(122), 1,
      sym_identifier,
    STATE(217), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [3049] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_string_token1,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3063] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(514), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
  [3079] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(512), 1,
      aux_sym_string_token1,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3093] = 5,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(205), 1,
      sym_location,
    STATE(226), 1,
      sym_coordinate,
  [3109] = 5,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(226), 1,
      sym_coordinate,
    STATE(254), 1,
      sym_location,
  [3125] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      aux_sym_string_token1,
    STATE(135), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3139] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(522), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
  [3155] = 3,
    ACTIONS(526), 1,
      aux_sym_identifier_token1,
    STATE(224), 1,
      sym_state_key,
    ACTIONS(524), 2,
      anon_sym_STAR,
      sym_number,
  [3166] = 3,
    ACTIONS(526), 1,
      aux_sym_identifier_token1,
    STATE(222), 1,
      sym_state_key,
    ACTIONS(528), 2,
      anon_sym_STAR,
      sym_number,
  [3177] = 4,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(530), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3190] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(75), 1,
      sym_coordinate,
  [3203] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(76), 1,
      sym_coordinate,
  [3216] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(297), 1,
      sym_coordinate,
  [3229] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_,
    STATE(63), 1,
      aux_sym_path_repeat1,
  [3239] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(532), 1,
      sym_namespace,
    STATE(86), 1,
      sym_identifier,
  [3249] = 3,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_state_key,
  [3259] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_identifier,
  [3269] = 3,
    ACTIONS(540), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [3279] = 3,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_state_key,
  [3289] = 3,
    ACTIONS(547), 1,
      aux_sym_nbt_path_token1,
    STATE(179), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(191), 1,
      aux_sym_selector_score_repeat1,
  [3299] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_,
    STATE(63), 1,
      aux_sym_path_repeat1,
  [3309] = 2,
    ACTIONS(551), 1,
      aux_sym_string_token1,
    ACTIONS(549), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3317] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(486), 1,
      sym_number,
    STATE(51), 1,
      sym_identifier,
  [3327] = 3,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_selector_option_section_repeat1,
  [3337] = 3,
    ACTIONS(557), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token2,
    STATE(200), 1,
      aux_sym_item_state_repeat1,
  [3347] = 3,
    ACTIONS(561), 1,
      aux_sym_identifier_token1,
    STATE(287), 1,
      sym_selector_key,
    STATE(288), 1,
      sym_selector_option,
  [3357] = 3,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(563), 1,
      sym_nbt_identifier,
    STATE(258), 1,
      sym_selector,
  [3367] = 3,
    ACTIONS(565), 1,
      aux_sym_identifier_token1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_selector_score_key,
  [3377] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3387] = 3,
    ACTIONS(569), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [3397] = 3,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(575), 1,
      sym_nbt_identifier,
    STATE(289), 1,
      sym_selector,
  [3407] = 3,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [3417] = 2,
    ACTIONS(579), 1,
      anon_sym_,
    STATE(187), 1,
      aux_sym_execute_command_repeat1,
  [3424] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    STATE(182), 1,
      aux_sym_execute_command_repeat1,
  [3431] = 2,
    ACTIONS(583), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(585), 1,
      anon_sym_COMMA,
  [3438] = 2,
    ACTIONS(587), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(589), 1,
      anon_sym_COMMA,
  [3445] = 2,
    ACTIONS(591), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(593), 1,
      anon_sym_COMMA,
  [3452] = 2,
    ACTIONS(595), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3459] = 2,
    ACTIONS(598), 1,
      aux_sym_nbt_path_token1,
    STATE(196), 1,
      aux_sym_nbt_array_repeat1,
  [3466] = 2,
    ACTIONS(600), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_item_state_repeat1,
  [3473] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    STATE(198), 1,
      aux_sym_nbt_object_repeat1,
  [3480] = 2,
    ACTIONS(605), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3487] = 2,
    ACTIONS(565), 1,
      aux_sym_identifier_token1,
    STATE(245), 1,
      sym_selector_score_key,
  [3494] = 2,
    ACTIONS(608), 1,
      anon_sym_EQ,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [3501] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_selector_nbt_repeat1,
  [3508] = 2,
    ACTIONS(614), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [3515] = 2,
    ACTIONS(618), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
  [3522] = 2,
    ACTIONS(621), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3529] = 2,
    ACTIONS(623), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_selector_nbt_repeat1,
  [3536] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    STATE(200), 1,
      aux_sym_item_state_repeat1,
  [3543] = 2,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    STATE(265), 1,
      sym_state_key,
  [3550] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym_nbt_path_token1,
  [3557] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3564] = 2,
    ACTIONS(628), 1,
      anon_sym_,
    STATE(187), 1,
      aux_sym_execute_command_repeat1,
  [3571] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
  [3578] = 2,
    ACTIONS(634), 1,
      anon_sym_,
    STATE(182), 1,
      aux_sym_execute_command_repeat1,
  [3585] = 2,
    ACTIONS(636), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
  [3592] = 2,
    ACTIONS(638), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(640), 1,
      anon_sym_COMMA,
  [3599] = 2,
    ACTIONS(642), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [3606] = 2,
    ACTIONS(646), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [3613] = 2,
    ACTIONS(650), 1,
      aux_sym_nbt_path_token1,
    STATE(203), 1,
      aux_sym_nbt_array_repeat1,
  [3620] = 2,
    ACTIONS(652), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3627] = 2,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_identifier,
  [3634] = 2,
    ACTIONS(654), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3641] = 2,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_identifier,
  [3648] = 2,
    ACTIONS(656), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_item_state_repeat1,
  [3655] = 2,
    ACTIONS(658), 1,
      aux_sym_nbt_path_token1,
    STATE(204), 1,
      aux_sym_nbt_object_repeat1,
  [3662] = 2,
    ACTIONS(660), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3669] = 2,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3676] = 2,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3683] = 1,
    ACTIONS(667), 1,
      anon_sym_,
  [3687] = 1,
    ACTIONS(608), 1,
      anon_sym_EQ,
  [3691] = 1,
    ACTIONS(669), 1,
      aux_sym_nbt_path_token1,
  [3695] = 1,
    ACTIONS(671), 1,
      anon_sym_,
  [3699] = 1,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token2,
  [3703] = 1,
    ACTIONS(673), 1,
      aux_sym_nbt_path_token1,
  [3707] = 1,
    ACTIONS(474), 1,
      anon_sym_,
  [3711] = 1,
    ACTIONS(675), 1,
      aux_sym_nbt_path_token1,
  [3715] = 1,
    ACTIONS(677), 1,
      aux_sym_nbt_path_token1,
  [3719] = 1,
    ACTIONS(680), 1,
      aux_sym_nbt_path_token1,
  [3723] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3727] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3731] = 1,
    ACTIONS(480), 1,
      anon_sym_,
  [3735] = 1,
    ACTIONS(686), 1,
      aux_sym_nbt_path_token1,
  [3739] = 1,
    ACTIONS(688), 1,
      aux_sym_nbt_path_token1,
  [3743] = 1,
    ACTIONS(690), 1,
      aux_sym_nbt_path_token1,
  [3747] = 1,
    ACTIONS(692), 1,
      anon_sym_,
  [3751] = 1,
    ACTIONS(694), 1,
      anon_sym_EQ,
  [3755] = 1,
    ACTIONS(696), 1,
      anon_sym_,
  [3759] = 1,
    ACTIONS(698), 1,
      anon_sym_EQ,
  [3763] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3767] = 1,
    ACTIONS(702), 1,
      anon_sym_,
  [3771] = 1,
    ACTIONS(704), 1,
      aux_sym_nbt_path_token1,
  [3775] = 1,
    ACTIONS(706), 1,
      aux_sym_nbt_path_token1,
  [3779] = 1,
    ACTIONS(709), 1,
      aux_sym_nbt_path_token1,
  [3783] = 1,
    ACTIONS(711), 1,
      aux_sym_nbt_path_token1,
  [3787] = 1,
    ACTIONS(713), 1,
      aux_sym_nbt_path_token1,
  [3791] = 1,
    ACTIONS(716), 1,
      anon_sym_,
  [3795] = 1,
    ACTIONS(718), 1,
      aux_sym_nbt_path_token1,
  [3799] = 1,
    ACTIONS(720), 1,
      anon_sym_EQ,
  [3803] = 1,
    ACTIONS(722), 1,
      anon_sym_,
  [3807] = 1,
    ACTIONS(724), 1,
      aux_sym_nbt_path_token1,
  [3811] = 1,
    ACTIONS(726), 1,
      aux_sym_nbt_path_token1,
  [3815] = 1,
    ACTIONS(728), 1,
      anon_sym_,
  [3819] = 1,
    ACTIONS(730), 1,
      anon_sym_EQ,
  [3823] = 1,
    ACTIONS(732), 1,
      anon_sym_COLON,
  [3827] = 1,
    ACTIONS(734), 1,
      aux_sym_nbt_path_token1,
  [3831] = 1,
    ACTIONS(736), 1,
      aux_sym_nbt_path_token1,
  [3835] = 1,
    ACTIONS(738), 1,
      aux_sym_nbt_path_token1,
  [3839] = 1,
    ACTIONS(740), 1,
      aux_sym_nbt_path_token1,
  [3843] = 1,
    ACTIONS(742), 1,
      aux_sym_nbt_path_token1,
  [3847] = 1,
    ACTIONS(744), 1,
      aux_sym_nbt_path_token1,
  [3851] = 1,
    ACTIONS(746), 1,
      anon_sym_,
  [3855] = 1,
    ACTIONS(748), 1,
      anon_sym_,
  [3859] = 1,
    ACTIONS(750), 1,
      anon_sym_,
  [3863] = 1,
    ACTIONS(752), 1,
      aux_sym_nbt_path_token1,
  [3867] = 1,
    ACTIONS(754), 1,
      aux_sym_nbt_path_token1,
  [3871] = 1,
    ACTIONS(756), 1,
      aux_sym_nbt_path_token1,
  [3875] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [3879] = 1,
    ACTIONS(758), 1,
      anon_sym_,
  [3883] = 1,
    ACTIONS(760), 1,
      aux_sym_nbt_path_token1,
  [3887] = 1,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
  [3891] = 1,
    ACTIONS(764), 1,
      anon_sym_,
  [3895] = 1,
    ACTIONS(767), 1,
      anon_sym_,
  [3899] = 1,
    ACTIONS(769), 1,
      anon_sym_,
  [3903] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
  [3907] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3911] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3915] = 1,
    ACTIONS(777), 1,
      aux_sym_nbt_path_token1,
  [3919] = 1,
    ACTIONS(779), 1,
      aux_sym_nbt_path_token1,
  [3923] = 1,
    ACTIONS(781), 1,
      aux_sym_nbt_path_token1,
  [3927] = 1,
    ACTIONS(783), 1,
      aux_sym_nbt_path_token1,
  [3931] = 1,
    ACTIONS(785), 1,
      anon_sym_COLON,
  [3935] = 1,
    ACTIONS(787), 1,
      aux_sym_nbt_path_token1,
  [3939] = 1,
    ACTIONS(789), 1,
      aux_sym_nbt_path_token1,
  [3943] = 1,
    ACTIONS(791), 1,
      aux_sym_nbt_path_token1,
  [3947] = 1,
    ACTIONS(793), 1,
      anon_sym_,
  [3951] = 1,
    ACTIONS(388), 1,
      aux_sym_nbt_path_token1,
  [3955] = 1,
    ACTIONS(796), 1,
      anon_sym_,
  [3959] = 1,
    ACTIONS(346), 1,
      aux_sym_nbt_path_token1,
  [3963] = 1,
    ACTIONS(798), 1,
      anon_sym_,
  [3967] = 1,
    ACTIONS(253), 1,
      aux_sym_nbt_path_token1,
  [3971] = 1,
    ACTIONS(800), 1,
      aux_sym_nbt_path_token1,
  [3975] = 1,
    ACTIONS(802), 1,
      aux_sym_nbt_path_token1,
  [3979] = 1,
    ACTIONS(208), 1,
      aux_sym_nbt_path_token1,
  [3983] = 1,
    ACTIONS(272), 1,
      sym_number,
  [3987] = 1,
    ACTIONS(358), 1,
      aux_sym_nbt_path_token1,
  [3991] = 1,
    ACTIONS(278), 1,
      aux_sym_nbt_path_token1,
  [3995] = 1,
    ACTIONS(392), 1,
      aux_sym_nbt_path_token1,
  [3999] = 1,
    ACTIONS(328), 1,
      aux_sym_nbt_path_token1,
  [4003] = 1,
    ACTIONS(783), 1,
      anon_sym_EQ,
  [4007] = 1,
    ACTIONS(644), 1,
      anon_sym_,
  [4011] = 1,
    ACTIONS(804), 1,
      aux_sym_nbt_path_token1,
  [4015] = 1,
    ACTIONS(806), 1,
      aux_sym_nbt_path_token1,
  [4019] = 1,
    ACTIONS(808), 1,
      anon_sym_,
  [4023] = 1,
    ACTIONS(810), 1,
      anon_sym_,
  [4027] = 1,
    ACTIONS(812), 1,
      anon_sym_,
  [4031] = 1,
    ACTIONS(814), 1,
      aux_sym_nbt_path_token1,
  [4035] = 1,
    ACTIONS(816), 1,
      aux_sym_nbt_path_token1,
  [4039] = 1,
    ACTIONS(818), 1,
      anon_sym_,
  [4043] = 1,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
  [4047] = 1,
    ACTIONS(822), 1,
      anon_sym_,
  [4051] = 1,
    ACTIONS(824), 1,
      anon_sym_,
  [4055] = 1,
    ACTIONS(826), 1,
      aux_sym_nbt_path_token1,
  [4059] = 1,
    ACTIONS(828), 1,
      aux_sym_nbt_path_token1,
  [4063] = 1,
    ACTIONS(830), 1,
      aux_sym_nbt_path_token1,
  [4067] = 1,
    ACTIONS(832), 1,
      aux_sym_nbt_path_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 268,
  [SMALL_STATE(6)] = 354,
  [SMALL_STATE(7)] = 440,
  [SMALL_STATE(8)] = 523,
  [SMALL_STATE(9)] = 603,
  [SMALL_STATE(10)] = 672,
  [SMALL_STATE(11)] = 720,
  [SMALL_STATE(12)] = 759,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 825,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 891,
  [SMALL_STATE(17)] = 919,
  [SMALL_STATE(18)] = 953,
  [SMALL_STATE(19)] = 983,
  [SMALL_STATE(20)] = 1013,
  [SMALL_STATE(21)] = 1047,
  [SMALL_STATE(22)] = 1075,
  [SMALL_STATE(23)] = 1105,
  [SMALL_STATE(24)] = 1135,
  [SMALL_STATE(25)] = 1175,
  [SMALL_STATE(26)] = 1205,
  [SMALL_STATE(27)] = 1233,
  [SMALL_STATE(28)] = 1255,
  [SMALL_STATE(29)] = 1275,
  [SMALL_STATE(30)] = 1295,
  [SMALL_STATE(31)] = 1315,
  [SMALL_STATE(32)] = 1335,
  [SMALL_STATE(33)] = 1357,
  [SMALL_STATE(34)] = 1379,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1414,
  [SMALL_STATE(37)] = 1445,
  [SMALL_STATE(38)] = 1460,
  [SMALL_STATE(39)] = 1479,
  [SMALL_STATE(40)] = 1498,
  [SMALL_STATE(41)] = 1521,
  [SMALL_STATE(42)] = 1536,
  [SMALL_STATE(43)] = 1559,
  [SMALL_STATE(44)] = 1582,
  [SMALL_STATE(45)] = 1605,
  [SMALL_STATE(46)] = 1624,
  [SMALL_STATE(47)] = 1643,
  [SMALL_STATE(48)] = 1658,
  [SMALL_STATE(49)] = 1677,
  [SMALL_STATE(50)] = 1692,
  [SMALL_STATE(51)] = 1706,
  [SMALL_STATE(52)] = 1720,
  [SMALL_STATE(53)] = 1738,
  [SMALL_STATE(54)] = 1754,
  [SMALL_STATE(55)] = 1768,
  [SMALL_STATE(56)] = 1782,
  [SMALL_STATE(57)] = 1802,
  [SMALL_STATE(58)] = 1820,
  [SMALL_STATE(59)] = 1846,
  [SMALL_STATE(60)] = 1864,
  [SMALL_STATE(61)] = 1882,
  [SMALL_STATE(62)] = 1900,
  [SMALL_STATE(63)] = 1920,
  [SMALL_STATE(64)] = 1938,
  [SMALL_STATE(65)] = 1952,
  [SMALL_STATE(66)] = 1966,
  [SMALL_STATE(67)] = 1992,
  [SMALL_STATE(68)] = 2012,
  [SMALL_STATE(69)] = 2037,
  [SMALL_STATE(70)] = 2060,
  [SMALL_STATE(71)] = 2073,
  [SMALL_STATE(72)] = 2086,
  [SMALL_STATE(73)] = 2109,
  [SMALL_STATE(74)] = 2122,
  [SMALL_STATE(75)] = 2135,
  [SMALL_STATE(76)] = 2150,
  [SMALL_STATE(77)] = 2163,
  [SMALL_STATE(78)] = 2186,
  [SMALL_STATE(79)] = 2199,
  [SMALL_STATE(80)] = 2212,
  [SMALL_STATE(81)] = 2227,
  [SMALL_STATE(82)] = 2240,
  [SMALL_STATE(83)] = 2253,
  [SMALL_STATE(84)] = 2266,
  [SMALL_STATE(85)] = 2289,
  [SMALL_STATE(86)] = 2302,
  [SMALL_STATE(87)] = 2315,
  [SMALL_STATE(88)] = 2328,
  [SMALL_STATE(89)] = 2351,
  [SMALL_STATE(90)] = 2376,
  [SMALL_STATE(91)] = 2389,
  [SMALL_STATE(92)] = 2402,
  [SMALL_STATE(93)] = 2415,
  [SMALL_STATE(94)] = 2438,
  [SMALL_STATE(95)] = 2461,
  [SMALL_STATE(96)] = 2474,
  [SMALL_STATE(97)] = 2486,
  [SMALL_STATE(98)] = 2508,
  [SMALL_STATE(99)] = 2520,
  [SMALL_STATE(100)] = 2532,
  [SMALL_STATE(101)] = 2544,
  [SMALL_STATE(102)] = 2556,
  [SMALL_STATE(103)] = 2568,
  [SMALL_STATE(104)] = 2580,
  [SMALL_STATE(105)] = 2592,
  [SMALL_STATE(106)] = 2604,
  [SMALL_STATE(107)] = 2616,
  [SMALL_STATE(108)] = 2628,
  [SMALL_STATE(109)] = 2640,
  [SMALL_STATE(110)] = 2652,
  [SMALL_STATE(111)] = 2664,
  [SMALL_STATE(112)] = 2681,
  [SMALL_STATE(113)] = 2700,
  [SMALL_STATE(114)] = 2717,
  [SMALL_STATE(115)] = 2734,
  [SMALL_STATE(116)] = 2751,
  [SMALL_STATE(117)] = 2768,
  [SMALL_STATE(118)] = 2785,
  [SMALL_STATE(119)] = 2800,
  [SMALL_STATE(120)] = 2819,
  [SMALL_STATE(121)] = 2836,
  [SMALL_STATE(122)] = 2855,
  [SMALL_STATE(123)] = 2874,
  [SMALL_STATE(124)] = 2893,
  [SMALL_STATE(125)] = 2904,
  [SMALL_STATE(126)] = 2923,
  [SMALL_STATE(127)] = 2937,
  [SMALL_STATE(128)] = 2951,
  [SMALL_STATE(129)] = 2959,
  [SMALL_STATE(130)] = 2973,
  [SMALL_STATE(131)] = 2989,
  [SMALL_STATE(132)] = 3005,
  [SMALL_STATE(133)] = 3019,
  [SMALL_STATE(134)] = 3035,
  [SMALL_STATE(135)] = 3049,
  [SMALL_STATE(136)] = 3063,
  [SMALL_STATE(137)] = 3079,
  [SMALL_STATE(138)] = 3093,
  [SMALL_STATE(139)] = 3109,
  [SMALL_STATE(140)] = 3125,
  [SMALL_STATE(141)] = 3139,
  [SMALL_STATE(142)] = 3155,
  [SMALL_STATE(143)] = 3166,
  [SMALL_STATE(144)] = 3177,
  [SMALL_STATE(145)] = 3190,
  [SMALL_STATE(146)] = 3203,
  [SMALL_STATE(147)] = 3216,
  [SMALL_STATE(148)] = 3229,
  [SMALL_STATE(149)] = 3239,
  [SMALL_STATE(150)] = 3249,
  [SMALL_STATE(151)] = 3259,
  [SMALL_STATE(152)] = 3269,
  [SMALL_STATE(153)] = 3279,
  [SMALL_STATE(154)] = 3289,
  [SMALL_STATE(155)] = 3299,
  [SMALL_STATE(156)] = 3309,
  [SMALL_STATE(157)] = 3317,
  [SMALL_STATE(158)] = 3327,
  [SMALL_STATE(159)] = 3337,
  [SMALL_STATE(160)] = 3347,
  [SMALL_STATE(161)] = 3357,
  [SMALL_STATE(162)] = 3367,
  [SMALL_STATE(163)] = 3377,
  [SMALL_STATE(164)] = 3387,
  [SMALL_STATE(165)] = 3397,
  [SMALL_STATE(166)] = 3407,
  [SMALL_STATE(167)] = 3417,
  [SMALL_STATE(168)] = 3424,
  [SMALL_STATE(169)] = 3431,
  [SMALL_STATE(170)] = 3438,
  [SMALL_STATE(171)] = 3445,
  [SMALL_STATE(172)] = 3452,
  [SMALL_STATE(173)] = 3459,
  [SMALL_STATE(174)] = 3466,
  [SMALL_STATE(175)] = 3473,
  [SMALL_STATE(176)] = 3480,
  [SMALL_STATE(177)] = 3487,
  [SMALL_STATE(178)] = 3494,
  [SMALL_STATE(179)] = 3501,
  [SMALL_STATE(180)] = 3508,
  [SMALL_STATE(181)] = 3515,
  [SMALL_STATE(182)] = 3522,
  [SMALL_STATE(183)] = 3529,
  [SMALL_STATE(184)] = 3536,
  [SMALL_STATE(185)] = 3543,
  [SMALL_STATE(186)] = 3550,
  [SMALL_STATE(187)] = 3557,
  [SMALL_STATE(188)] = 3564,
  [SMALL_STATE(189)] = 3571,
  [SMALL_STATE(190)] = 3578,
  [SMALL_STATE(191)] = 3585,
  [SMALL_STATE(192)] = 3592,
  [SMALL_STATE(193)] = 3599,
  [SMALL_STATE(194)] = 3606,
  [SMALL_STATE(195)] = 3613,
  [SMALL_STATE(196)] = 3620,
  [SMALL_STATE(197)] = 3627,
  [SMALL_STATE(198)] = 3634,
  [SMALL_STATE(199)] = 3641,
  [SMALL_STATE(200)] = 3648,
  [SMALL_STATE(201)] = 3655,
  [SMALL_STATE(202)] = 3662,
  [SMALL_STATE(203)] = 3669,
  [SMALL_STATE(204)] = 3676,
  [SMALL_STATE(205)] = 3683,
  [SMALL_STATE(206)] = 3687,
  [SMALL_STATE(207)] = 3691,
  [SMALL_STATE(208)] = 3695,
  [SMALL_STATE(209)] = 3699,
  [SMALL_STATE(210)] = 3703,
  [SMALL_STATE(211)] = 3707,
  [SMALL_STATE(212)] = 3711,
  [SMALL_STATE(213)] = 3715,
  [SMALL_STATE(214)] = 3719,
  [SMALL_STATE(215)] = 3723,
  [SMALL_STATE(216)] = 3727,
  [SMALL_STATE(217)] = 3731,
  [SMALL_STATE(218)] = 3735,
  [SMALL_STATE(219)] = 3739,
  [SMALL_STATE(220)] = 3743,
  [SMALL_STATE(221)] = 3747,
  [SMALL_STATE(222)] = 3751,
  [SMALL_STATE(223)] = 3755,
  [SMALL_STATE(224)] = 3759,
  [SMALL_STATE(225)] = 3763,
  [SMALL_STATE(226)] = 3767,
  [SMALL_STATE(227)] = 3771,
  [SMALL_STATE(228)] = 3775,
  [SMALL_STATE(229)] = 3779,
  [SMALL_STATE(230)] = 3783,
  [SMALL_STATE(231)] = 3787,
  [SMALL_STATE(232)] = 3791,
  [SMALL_STATE(233)] = 3795,
  [SMALL_STATE(234)] = 3799,
  [SMALL_STATE(235)] = 3803,
  [SMALL_STATE(236)] = 3807,
  [SMALL_STATE(237)] = 3811,
  [SMALL_STATE(238)] = 3815,
  [SMALL_STATE(239)] = 3819,
  [SMALL_STATE(240)] = 3823,
  [SMALL_STATE(241)] = 3827,
  [SMALL_STATE(242)] = 3831,
  [SMALL_STATE(243)] = 3835,
  [SMALL_STATE(244)] = 3839,
  [SMALL_STATE(245)] = 3843,
  [SMALL_STATE(246)] = 3847,
  [SMALL_STATE(247)] = 3851,
  [SMALL_STATE(248)] = 3855,
  [SMALL_STATE(249)] = 3859,
  [SMALL_STATE(250)] = 3863,
  [SMALL_STATE(251)] = 3867,
  [SMALL_STATE(252)] = 3871,
  [SMALL_STATE(253)] = 3875,
  [SMALL_STATE(254)] = 3879,
  [SMALL_STATE(255)] = 3883,
  [SMALL_STATE(256)] = 3887,
  [SMALL_STATE(257)] = 3891,
  [SMALL_STATE(258)] = 3895,
  [SMALL_STATE(259)] = 3899,
  [SMALL_STATE(260)] = 3903,
  [SMALL_STATE(261)] = 3907,
  [SMALL_STATE(262)] = 3911,
  [SMALL_STATE(263)] = 3915,
  [SMALL_STATE(264)] = 3919,
  [SMALL_STATE(265)] = 3923,
  [SMALL_STATE(266)] = 3927,
  [SMALL_STATE(267)] = 3931,
  [SMALL_STATE(268)] = 3935,
  [SMALL_STATE(269)] = 3939,
  [SMALL_STATE(270)] = 3943,
  [SMALL_STATE(271)] = 3947,
  [SMALL_STATE(272)] = 3951,
  [SMALL_STATE(273)] = 3955,
  [SMALL_STATE(274)] = 3959,
  [SMALL_STATE(275)] = 3963,
  [SMALL_STATE(276)] = 3967,
  [SMALL_STATE(277)] = 3971,
  [SMALL_STATE(278)] = 3975,
  [SMALL_STATE(279)] = 3979,
  [SMALL_STATE(280)] = 3983,
  [SMALL_STATE(281)] = 3987,
  [SMALL_STATE(282)] = 3991,
  [SMALL_STATE(283)] = 3995,
  [SMALL_STATE(284)] = 3999,
  [SMALL_STATE(285)] = 4003,
  [SMALL_STATE(286)] = 4007,
  [SMALL_STATE(287)] = 4011,
  [SMALL_STATE(288)] = 4015,
  [SMALL_STATE(289)] = 4019,
  [SMALL_STATE(290)] = 4023,
  [SMALL_STATE(291)] = 4027,
  [SMALL_STATE(292)] = 4031,
  [SMALL_STATE(293)] = 4035,
  [SMALL_STATE(294)] = 4039,
  [SMALL_STATE(295)] = 4043,
  [SMALL_STATE(296)] = 4047,
  [SMALL_STATE(297)] = 4051,
  [SMALL_STATE(298)] = 4055,
  [SMALL_STATE(299)] = 4059,
  [SMALL_STATE(300)] = 4063,
  [SMALL_STATE(301)] = 4067,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(149),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(149),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(163),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(236),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(17),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(131),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(167),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(34),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(78),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(163),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(236),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(236),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(163),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(157),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(96),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(108),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(109),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(52),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 4), SHIFT(104),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(149),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(149),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(34),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(149),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(146),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(132),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(256),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(160),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(185),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(177),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(97),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(127),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(19),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(139),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(138),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [820] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
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
