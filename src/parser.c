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
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 18

enum {
  sym_comment = 1,
  sym_tag = 2,
  anon_sym_SLASH = 3,
  anon_sym_ = 4,
  anon_sym_LF = 5,
  anon_sym_execute = 6,
  anon_sym_run = 7,
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
  sym__line_separator = 64,
  sym_identifier = 65,
  sym_command_name = 66,
  sym_wildcard = 67,
  sym_boolean = 68,
  sym_coordinate = 69,
  sym_rotation = 70,
  sym_location = 71,
  sym_string = 72,
  sym__escape_sequence = 73,
  sym_container = 74,
  sym_nbt_path = 75,
  sym_selector = 76,
  sym_selector_option_section = 77,
  sym_selector_option = 78,
  sym_selector_key = 79,
  sym_selector_value = 80,
  sym_selector_nbt = 81,
  sym_selector_score = 82,
  sym_selector_score_key = 83,
  sym_selector_score_value = 84,
  sym_selector_number = 85,
  sym_nbt = 86,
  sym_nbt_object = 87,
  sym_nbt_array = 88,
  sym_nbt_object_key = 89,
  sym_nbt_object_value = 90,
  sym_nbt_number = 91,
  sym_item = 92,
  sym__blank_item_with_namespace = 93,
  sym_item_nbt = 94,
  sym_item_state = 95,
  sym_state_key = 96,
  sym_state_value = 97,
  sym_path = 98,
  aux_sym_root_repeat1 = 99,
  aux_sym_command_repeat1 = 100,
  aux_sym_command_repeat2 = 101,
  aux_sym_execute_command_repeat1 = 102,
  aux_sym_string_repeat1 = 103,
  aux_sym_container_repeat1 = 104,
  aux_sym_nbt_path_repeat1 = 105,
  aux_sym_nbt_path_repeat2 = 106,
  aux_sym_nbt_path_repeat3 = 107,
  aux_sym_selector_option_section_repeat1 = 108,
  aux_sym_selector_nbt_repeat1 = 109,
  aux_sym_selector_score_repeat1 = 110,
  aux_sym_nbt_object_repeat1 = 111,
  aux_sym_nbt_array_repeat1 = 112,
  aux_sym_item_state_repeat1 = 113,
  aux_sym_path_repeat1 = 114,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = " ",
  [anon_sym_LF] = "\n",
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
  [sym__line_separator] = "_line_separator",
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
  [sym_comment] = sym_comment,
  [sym_tag] = sym_tag,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym__line_separator] = sym__line_separator,
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
  [anon_sym_LF] = {
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
  [sym__line_separator] = {
    .visible = false,
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
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '_') ADVANCE(237);
      if (lookahead == '}') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == '}') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '{') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '{') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(320);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(74);
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
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(85);
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
      if (lookahead == 'g') ADVANCE(105);
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
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(111);
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
      if (lookahead == 's') ADVANCE(102);
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
      if (lookahead == 't') ADVANCE(92);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '^') ADVANCE(283);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_namespace);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == ',') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_nbt_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
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
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 77},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 77},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 77},
  [31] = {.lex_state = 77},
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
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 7},
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
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 77},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 77},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 77},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 77},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 77},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 77},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 77},
  [124] = {.lex_state = 298},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 77},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 77},
  [146] = {.lex_state = 77},
  [147] = {.lex_state = 77},
  [148] = {.lex_state = 77},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 297},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 294},
  [155] = {.lex_state = 77},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 297},
  [159] = {.lex_state = 299},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 296},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 297},
  [167] = {.lex_state = 77},
  [168] = {.lex_state = 77},
  [169] = {.lex_state = 295},
  [170] = {.lex_state = 295},
  [171] = {.lex_state = 295},
  [172] = {.lex_state = 77},
  [173] = {.lex_state = 294},
  [174] = {.lex_state = 294},
  [175] = {.lex_state = 294},
  [176] = {.lex_state = 294},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 77},
  [179] = {.lex_state = 294},
  [180] = {.lex_state = 295},
  [181] = {.lex_state = 294},
  [182] = {.lex_state = 77},
  [183] = {.lex_state = 294},
  [184] = {.lex_state = 294},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 295},
  [187] = {.lex_state = 77},
  [188] = {.lex_state = 77},
  [189] = {.lex_state = 297},
  [190] = {.lex_state = 77},
  [191] = {.lex_state = 294},
  [192] = {.lex_state = 295},
  [193] = {.lex_state = 295},
  [194] = {.lex_state = 295},
  [195] = {.lex_state = 294},
  [196] = {.lex_state = 294},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 294},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 294},
  [201] = {.lex_state = 294},
  [202] = {.lex_state = 294},
  [203] = {.lex_state = 294},
  [204] = {.lex_state = 294},
  [205] = {.lex_state = 77},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 294},
  [208] = {.lex_state = 77},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 294},
  [211] = {.lex_state = 77},
  [212] = {.lex_state = 294},
  [213] = {.lex_state = 294},
  [214] = {.lex_state = 294},
  [215] = {.lex_state = 294},
  [216] = {.lex_state = 294},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 294},
  [219] = {.lex_state = 294},
  [220] = {.lex_state = 294},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 77},
  [223] = {.lex_state = 77},
  [224] = {.lex_state = 77},
  [225] = {.lex_state = 294},
  [226] = {.lex_state = 77},
  [227] = {.lex_state = 294},
  [228] = {.lex_state = 294},
  [229] = {.lex_state = 294},
  [230] = {.lex_state = 294},
  [231] = {.lex_state = 294},
  [232] = {.lex_state = 77},
  [233] = {.lex_state = 294},
  [234] = {.lex_state = 77},
  [235] = {.lex_state = 77},
  [236] = {.lex_state = 294},
  [237] = {.lex_state = 294},
  [238] = {.lex_state = 77},
  [239] = {.lex_state = 77},
  [240] = {.lex_state = 77},
  [241] = {.lex_state = 294},
  [242] = {.lex_state = 294},
  [243] = {.lex_state = 294},
  [244] = {.lex_state = 294},
  [245] = {.lex_state = 294},
  [246] = {.lex_state = 294},
  [247] = {.lex_state = 77},
  [248] = {.lex_state = 77},
  [249] = {.lex_state = 77},
  [250] = {.lex_state = 294},
  [251] = {.lex_state = 294},
  [252] = {.lex_state = 294},
  [253] = {.lex_state = 77},
  [254] = {.lex_state = 77},
  [255] = {.lex_state = 294},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 77},
  [259] = {.lex_state = 77},
  [260] = {.lex_state = 77},
  [261] = {.lex_state = 294},
  [262] = {.lex_state = 294},
  [263] = {.lex_state = 294},
  [264] = {.lex_state = 294},
  [265] = {.lex_state = 294},
  [266] = {.lex_state = 294},
  [267] = {.lex_state = 77},
  [268] = {.lex_state = 294},
  [269] = {.lex_state = 294},
  [270] = {.lex_state = 294},
  [271] = {.lex_state = 77},
  [272] = {.lex_state = 294},
  [273] = {.lex_state = 77},
  [274] = {.lex_state = 294},
  [275] = {.lex_state = 77},
  [276] = {.lex_state = 294},
  [277] = {.lex_state = 294},
  [278] = {.lex_state = 294},
  [279] = {.lex_state = 294},
  [280] = {.lex_state = 77},
  [281] = {.lex_state = 294},
  [282] = {.lex_state = 294},
  [283] = {.lex_state = 294},
  [284] = {.lex_state = 294},
  [285] = {.lex_state = 77},
  [286] = {.lex_state = 77},
  [287] = {.lex_state = 294},
  [288] = {.lex_state = 294},
  [289] = {.lex_state = 77},
  [290] = {.lex_state = 77},
  [291] = {.lex_state = 77},
  [292] = {.lex_state = 294},
  [293] = {.lex_state = 294},
  [294] = {.lex_state = 77},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 77},
  [297] = {.lex_state = 77},
  [298] = {.lex_state = 294},
  [299] = {.lex_state = 294},
  [300] = {.lex_state = 294},
  [301] = {.lex_state = 294},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym_command] = STATE(14),
    [sym_execute_command] = STATE(99),
    [sym__legacy_execute] = STATE(99),
    [sym__line_separator] = STATE(14),
    [sym_identifier] = STATE(78),
    [sym_command_name] = STATE(44),
    [aux_sym_root_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_execute] = ACTIONS(9),
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
    ACTIONS(55), 1,
      anon_sym_execute,
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
    STATE(70), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
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
      anon_sym_LF,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [759] = 10,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_execute,
    ACTIONS(97), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      anon_sym_QMARK,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_comment,
      anon_sym_LF,
    STATE(99), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [794] = 9,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [827] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_command_name,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(117), 2,
      sym_comment,
      anon_sym_LF,
    STATE(99), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [862] = 9,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [895] = 9,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [928] = 9,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [961] = 7,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(127), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [989] = 8,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [1019] = 8,
    ACTIONS(135), 1,
      aux_sym_identifier_token1,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      aux_sym_selector_number_token3,
    STATE(216), 1,
      sym_selector_value,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(212), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [1049] = 7,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1077] = 8,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [1107] = 8,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [1137] = 13,
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
  [1177] = 8,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym_nbt_object_value,
    ACTIONS(105), 2,
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
  [1207] = 7,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1235] = 5,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1257] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1277] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1297] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1317] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1337] = 5,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1359] = 5,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1381] = 2,
    ACTIONS(199), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1397] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1416] = 10,
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
  [1447] = 2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1462] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1481] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1500] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(60), 1,
      aux_sym_command_repeat1,
    STATE(62), 1,
      aux_sym_command_repeat2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1523] = 2,
    ACTIONS(165), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1538] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_command_repeat1,
    STATE(62), 1,
      aux_sym_command_repeat2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1561] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(227), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_command_repeat2,
    STATE(60), 1,
      aux_sym_command_repeat1,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1584] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_command_repeat1,
    STATE(67), 1,
      aux_sym_command_repeat2,
    ACTIONS(237), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1607] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1626] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1645] = 2,
    ACTIONS(245), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1660] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1679] = 2,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1694] = 2,
    ACTIONS(259), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1708] = 2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1722] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1740] = 3,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1756] = 2,
    ACTIONS(276), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(274), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1770] = 2,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(278), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1784] = 5,
    ACTIONS(284), 1,
      anon_sym_,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1804] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1822] = 8,
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
  [1848] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1866] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1884] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1902] = 5,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1922] = 4,
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
      anon_sym_LF,
      anon_sym_QMARK,
  [1940] = 2,
    ACTIONS(330), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1954] = 2,
    ACTIONS(334), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1968] = 8,
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
  [1994] = 5,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [2014] = 8,
    ACTIONS(107), 1,
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
  [2039] = 7,
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
  [2062] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2075] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2088] = 7,
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
  [2111] = 2,
    ACTIONS(360), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2124] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(362), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2137] = 3,
    ACTIONS(368), 1,
      anon_sym_,
    ACTIONS(371), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2152] = 2,
    ACTIONS(375), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2165] = 7,
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
  [2188] = 2,
    ACTIONS(379), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2201] = 2,
    ACTIONS(383), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2214] = 3,
    ACTIONS(385), 1,
      anon_sym_,
    ACTIONS(69), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2229] = 2,
    ACTIONS(316), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2242] = 2,
    ACTIONS(390), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(388), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2255] = 2,
    ACTIONS(161), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2268] = 7,
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
  [2291] = 2,
    ACTIONS(394), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(392), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2304] = 2,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(321), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2317] = 2,
    ACTIONS(270), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2330] = 7,
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
  [2353] = 8,
    ACTIONS(107), 1,
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
  [2378] = 2,
    ACTIONS(400), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2391] = 2,
    ACTIONS(404), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2404] = 2,
    ACTIONS(408), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(406), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2417] = 7,
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
  [2440] = 7,
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
  [2463] = 2,
    ACTIONS(412), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(410), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2476] = 2,
    ACTIONS(230), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2488] = 7,
    ACTIONS(107), 1,
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
  [2510] = 2,
    ACTIONS(416), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2522] = 2,
    ACTIONS(420), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2534] = 2,
    ACTIONS(424), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2546] = 2,
    ACTIONS(428), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2558] = 2,
    ACTIONS(432), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2570] = 2,
    ACTIONS(436), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2582] = 2,
    ACTIONS(440), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2594] = 2,
    ACTIONS(444), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2606] = 2,
    ACTIONS(448), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2618] = 2,
    ACTIONS(452), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(450), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2630] = 2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2642] = 2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2654] = 2,
    ACTIONS(456), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2666] = 5,
    ACTIONS(107), 1,
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
  [2683] = 6,
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
  [2702] = 5,
    ACTIONS(107), 1,
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
  [2719] = 5,
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
  [2736] = 5,
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
  [2753] = 5,
    ACTIONS(107), 1,
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
  [2770] = 5,
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
  [2787] = 4,
    STATE(261), 1,
      sym_selector_score_value,
    STATE(262), 1,
      sym_selector_number,
    ACTIONS(143), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(145), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2802] = 6,
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
  [2821] = 5,
    ACTIONS(107), 1,
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
  [2838] = 6,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_nbt_path_repeat3,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
  [2857] = 6,
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
  [2876] = 6,
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
  [2895] = 2,
    ACTIONS(482), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(484), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2906] = 6,
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
  [2925] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(488), 1,
      sym_namespace,
    STATE(119), 1,
      sym_identifier,
    STATE(211), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2939] = 4,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string,
    STATE(299), 1,
      sym_nbt_object_key,
    ACTIONS(342), 2,
      sym_nbt_identifier,
      sym_number,
  [2953] = 1,
    ACTIONS(490), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2961] = 4,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      aux_sym_string_token1,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2975] = 5,
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
  [2991] = 5,
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
  [3007] = 4,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      aux_sym_string_token1,
    ACTIONS(507), 1,
      anon_sym_BSLASH,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3021] = 5,
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
  [3037] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(488), 1,
      sym_namespace,
    STATE(122), 1,
      sym_identifier,
    STATE(217), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [3051] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_string_token1,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3065] = 5,
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
  [3081] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(512), 1,
      aux_sym_string_token1,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    STATE(132), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3095] = 5,
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
  [3111] = 5,
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
  [3127] = 4,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      aux_sym_string_token1,
    STATE(135), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3141] = 5,
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
  [3157] = 3,
    ACTIONS(526), 1,
      aux_sym_identifier_token1,
    STATE(224), 1,
      sym_state_key,
    ACTIONS(524), 2,
      anon_sym_STAR,
      sym_number,
  [3168] = 3,
    ACTIONS(526), 1,
      aux_sym_identifier_token1,
    STATE(222), 1,
      sym_state_key,
    ACTIONS(528), 2,
      anon_sym_STAR,
      sym_number,
  [3179] = 4,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(530), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3192] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(75), 1,
      sym_coordinate,
  [3205] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(76), 1,
      sym_coordinate,
  [3218] = 4,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(498), 1,
      sym_number,
    STATE(297), 1,
      sym_coordinate,
  [3231] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_,
    STATE(63), 1,
      aux_sym_path_repeat1,
  [3241] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(532), 1,
      sym_namespace,
    STATE(86), 1,
      sym_identifier,
  [3251] = 3,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_state_key,
  [3261] = 3,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_identifier,
  [3271] = 3,
    ACTIONS(540), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [3281] = 3,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_state_key,
  [3291] = 3,
    ACTIONS(547), 1,
      aux_sym_nbt_path_token1,
    STATE(179), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(191), 1,
      aux_sym_selector_score_repeat1,
  [3301] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_,
    STATE(63), 1,
      aux_sym_path_repeat1,
  [3311] = 2,
    ACTIONS(551), 1,
      aux_sym_string_token1,
    ACTIONS(549), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3319] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(486), 1,
      sym_number,
    STATE(51), 1,
      sym_identifier,
  [3329] = 3,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_selector_option_section_repeat1,
  [3339] = 3,
    ACTIONS(557), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token2,
    STATE(200), 1,
      aux_sym_item_state_repeat1,
  [3349] = 3,
    ACTIONS(561), 1,
      aux_sym_identifier_token1,
    STATE(287), 1,
      sym_selector_key,
    STATE(288), 1,
      sym_selector_option,
  [3359] = 3,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(563), 1,
      sym_nbt_identifier,
    STATE(258), 1,
      sym_selector,
  [3369] = 3,
    ACTIONS(565), 1,
      aux_sym_identifier_token1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_selector_score_key,
  [3379] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3389] = 3,
    ACTIONS(569), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [3399] = 3,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(575), 1,
      sym_nbt_identifier,
    STATE(289), 1,
      sym_selector,
  [3409] = 3,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [3419] = 2,
    ACTIONS(579), 1,
      anon_sym_,
    STATE(187), 1,
      aux_sym_execute_command_repeat1,
  [3426] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    STATE(182), 1,
      aux_sym_execute_command_repeat1,
  [3433] = 2,
    ACTIONS(583), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(585), 1,
      anon_sym_COMMA,
  [3440] = 2,
    ACTIONS(587), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(589), 1,
      anon_sym_COMMA,
  [3447] = 2,
    ACTIONS(591), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(593), 1,
      anon_sym_COMMA,
  [3454] = 2,
    ACTIONS(595), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3461] = 2,
    ACTIONS(598), 1,
      aux_sym_nbt_path_token1,
    STATE(196), 1,
      aux_sym_nbt_array_repeat1,
  [3468] = 2,
    ACTIONS(600), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_item_state_repeat1,
  [3475] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    STATE(198), 1,
      aux_sym_nbt_object_repeat1,
  [3482] = 2,
    ACTIONS(605), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3489] = 2,
    ACTIONS(565), 1,
      aux_sym_identifier_token1,
    STATE(245), 1,
      sym_selector_score_key,
  [3496] = 2,
    ACTIONS(608), 1,
      anon_sym_EQ,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [3503] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_selector_nbt_repeat1,
  [3510] = 2,
    ACTIONS(614), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [3517] = 2,
    ACTIONS(618), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
  [3524] = 2,
    ACTIONS(621), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3531] = 2,
    ACTIONS(623), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_selector_nbt_repeat1,
  [3538] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    STATE(200), 1,
      aux_sym_item_state_repeat1,
  [3545] = 2,
    ACTIONS(534), 1,
      aux_sym_identifier_token1,
    STATE(265), 1,
      sym_state_key,
  [3552] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym_nbt_path_token1,
  [3559] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    STATE(172), 1,
      aux_sym_execute_command_repeat1,
  [3566] = 2,
    ACTIONS(628), 1,
      anon_sym_,
    STATE(187), 1,
      aux_sym_execute_command_repeat1,
  [3573] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
  [3580] = 2,
    ACTIONS(634), 1,
      anon_sym_,
    STATE(182), 1,
      aux_sym_execute_command_repeat1,
  [3587] = 2,
    ACTIONS(636), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
  [3594] = 2,
    ACTIONS(638), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(640), 1,
      anon_sym_COMMA,
  [3601] = 2,
    ACTIONS(642), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [3608] = 2,
    ACTIONS(646), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [3615] = 2,
    ACTIONS(650), 1,
      aux_sym_nbt_path_token1,
    STATE(203), 1,
      aux_sym_nbt_array_repeat1,
  [3622] = 2,
    ACTIONS(652), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3629] = 2,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_identifier,
  [3636] = 2,
    ACTIONS(654), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3643] = 2,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_identifier,
  [3650] = 2,
    ACTIONS(656), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_item_state_repeat1,
  [3657] = 2,
    ACTIONS(658), 1,
      aux_sym_nbt_path_token1,
    STATE(204), 1,
      aux_sym_nbt_object_repeat1,
  [3664] = 2,
    ACTIONS(660), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3671] = 2,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3678] = 2,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_object_repeat1,
  [3685] = 1,
    ACTIONS(667), 1,
      anon_sym_,
  [3689] = 1,
    ACTIONS(608), 1,
      anon_sym_EQ,
  [3693] = 1,
    ACTIONS(669), 1,
      aux_sym_nbt_path_token1,
  [3697] = 1,
    ACTIONS(671), 1,
      anon_sym_,
  [3701] = 1,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token2,
  [3705] = 1,
    ACTIONS(673), 1,
      aux_sym_nbt_path_token1,
  [3709] = 1,
    ACTIONS(474), 1,
      anon_sym_,
  [3713] = 1,
    ACTIONS(675), 1,
      aux_sym_nbt_path_token1,
  [3717] = 1,
    ACTIONS(677), 1,
      aux_sym_nbt_path_token1,
  [3721] = 1,
    ACTIONS(680), 1,
      aux_sym_nbt_path_token1,
  [3725] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3729] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3733] = 1,
    ACTIONS(480), 1,
      anon_sym_,
  [3737] = 1,
    ACTIONS(686), 1,
      aux_sym_nbt_path_token1,
  [3741] = 1,
    ACTIONS(688), 1,
      aux_sym_nbt_path_token1,
  [3745] = 1,
    ACTIONS(690), 1,
      aux_sym_nbt_path_token1,
  [3749] = 1,
    ACTIONS(692), 1,
      anon_sym_,
  [3753] = 1,
    ACTIONS(694), 1,
      anon_sym_EQ,
  [3757] = 1,
    ACTIONS(696), 1,
      anon_sym_,
  [3761] = 1,
    ACTIONS(698), 1,
      anon_sym_EQ,
  [3765] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3769] = 1,
    ACTIONS(702), 1,
      anon_sym_,
  [3773] = 1,
    ACTIONS(704), 1,
      aux_sym_nbt_path_token1,
  [3777] = 1,
    ACTIONS(706), 1,
      aux_sym_nbt_path_token1,
  [3781] = 1,
    ACTIONS(709), 1,
      aux_sym_nbt_path_token1,
  [3785] = 1,
    ACTIONS(711), 1,
      aux_sym_nbt_path_token1,
  [3789] = 1,
    ACTIONS(713), 1,
      aux_sym_nbt_path_token1,
  [3793] = 1,
    ACTIONS(716), 1,
      anon_sym_,
  [3797] = 1,
    ACTIONS(718), 1,
      aux_sym_nbt_path_token1,
  [3801] = 1,
    ACTIONS(720), 1,
      anon_sym_EQ,
  [3805] = 1,
    ACTIONS(722), 1,
      anon_sym_,
  [3809] = 1,
    ACTIONS(724), 1,
      aux_sym_nbt_path_token1,
  [3813] = 1,
    ACTIONS(726), 1,
      aux_sym_nbt_path_token1,
  [3817] = 1,
    ACTIONS(728), 1,
      anon_sym_,
  [3821] = 1,
    ACTIONS(730), 1,
      anon_sym_EQ,
  [3825] = 1,
    ACTIONS(732), 1,
      anon_sym_COLON,
  [3829] = 1,
    ACTIONS(734), 1,
      aux_sym_nbt_path_token1,
  [3833] = 1,
    ACTIONS(736), 1,
      aux_sym_nbt_path_token1,
  [3837] = 1,
    ACTIONS(738), 1,
      aux_sym_nbt_path_token1,
  [3841] = 1,
    ACTIONS(740), 1,
      aux_sym_nbt_path_token1,
  [3845] = 1,
    ACTIONS(742), 1,
      aux_sym_nbt_path_token1,
  [3849] = 1,
    ACTIONS(744), 1,
      aux_sym_nbt_path_token1,
  [3853] = 1,
    ACTIONS(746), 1,
      anon_sym_,
  [3857] = 1,
    ACTIONS(748), 1,
      anon_sym_,
  [3861] = 1,
    ACTIONS(750), 1,
      anon_sym_,
  [3865] = 1,
    ACTIONS(752), 1,
      aux_sym_nbt_path_token1,
  [3869] = 1,
    ACTIONS(754), 1,
      aux_sym_nbt_path_token1,
  [3873] = 1,
    ACTIONS(756), 1,
      aux_sym_nbt_path_token1,
  [3877] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [3881] = 1,
    ACTIONS(758), 1,
      anon_sym_,
  [3885] = 1,
    ACTIONS(760), 1,
      aux_sym_nbt_path_token1,
  [3889] = 1,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
  [3893] = 1,
    ACTIONS(764), 1,
      anon_sym_,
  [3897] = 1,
    ACTIONS(767), 1,
      anon_sym_,
  [3901] = 1,
    ACTIONS(769), 1,
      anon_sym_,
  [3905] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
  [3909] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3913] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3917] = 1,
    ACTIONS(777), 1,
      aux_sym_nbt_path_token1,
  [3921] = 1,
    ACTIONS(779), 1,
      aux_sym_nbt_path_token1,
  [3925] = 1,
    ACTIONS(781), 1,
      aux_sym_nbt_path_token1,
  [3929] = 1,
    ACTIONS(783), 1,
      aux_sym_nbt_path_token1,
  [3933] = 1,
    ACTIONS(785), 1,
      anon_sym_COLON,
  [3937] = 1,
    ACTIONS(787), 1,
      aux_sym_nbt_path_token1,
  [3941] = 1,
    ACTIONS(789), 1,
      aux_sym_nbt_path_token1,
  [3945] = 1,
    ACTIONS(791), 1,
      aux_sym_nbt_path_token1,
  [3949] = 1,
    ACTIONS(793), 1,
      anon_sym_,
  [3953] = 1,
    ACTIONS(388), 1,
      aux_sym_nbt_path_token1,
  [3957] = 1,
    ACTIONS(796), 1,
      anon_sym_,
  [3961] = 1,
    ACTIONS(346), 1,
      aux_sym_nbt_path_token1,
  [3965] = 1,
    ACTIONS(798), 1,
      anon_sym_,
  [3969] = 1,
    ACTIONS(253), 1,
      aux_sym_nbt_path_token1,
  [3973] = 1,
    ACTIONS(800), 1,
      aux_sym_nbt_path_token1,
  [3977] = 1,
    ACTIONS(802), 1,
      aux_sym_nbt_path_token1,
  [3981] = 1,
    ACTIONS(208), 1,
      aux_sym_nbt_path_token1,
  [3985] = 1,
    ACTIONS(272), 1,
      sym_number,
  [3989] = 1,
    ACTIONS(358), 1,
      aux_sym_nbt_path_token1,
  [3993] = 1,
    ACTIONS(278), 1,
      aux_sym_nbt_path_token1,
  [3997] = 1,
    ACTIONS(392), 1,
      aux_sym_nbt_path_token1,
  [4001] = 1,
    ACTIONS(328), 1,
      aux_sym_nbt_path_token1,
  [4005] = 1,
    ACTIONS(783), 1,
      anon_sym_EQ,
  [4009] = 1,
    ACTIONS(644), 1,
      anon_sym_,
  [4013] = 1,
    ACTIONS(804), 1,
      aux_sym_nbt_path_token1,
  [4017] = 1,
    ACTIONS(806), 1,
      aux_sym_nbt_path_token1,
  [4021] = 1,
    ACTIONS(808), 1,
      anon_sym_,
  [4025] = 1,
    ACTIONS(810), 1,
      anon_sym_,
  [4029] = 1,
    ACTIONS(812), 1,
      anon_sym_,
  [4033] = 1,
    ACTIONS(814), 1,
      aux_sym_nbt_path_token1,
  [4037] = 1,
    ACTIONS(816), 1,
      aux_sym_nbt_path_token1,
  [4041] = 1,
    ACTIONS(818), 1,
      anon_sym_,
  [4045] = 1,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
  [4049] = 1,
    ACTIONS(822), 1,
      anon_sym_,
  [4053] = 1,
    ACTIONS(824), 1,
      anon_sym_,
  [4057] = 1,
    ACTIONS(826), 1,
      aux_sym_nbt_path_token1,
  [4061] = 1,
    ACTIONS(828), 1,
      aux_sym_nbt_path_token1,
  [4065] = 1,
    ACTIONS(830), 1,
      aux_sym_nbt_path_token1,
  [4069] = 1,
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
  [SMALL_STATE(13)] = 794,
  [SMALL_STATE(14)] = 827,
  [SMALL_STATE(15)] = 862,
  [SMALL_STATE(16)] = 895,
  [SMALL_STATE(17)] = 928,
  [SMALL_STATE(18)] = 961,
  [SMALL_STATE(19)] = 989,
  [SMALL_STATE(20)] = 1019,
  [SMALL_STATE(21)] = 1049,
  [SMALL_STATE(22)] = 1077,
  [SMALL_STATE(23)] = 1107,
  [SMALL_STATE(24)] = 1137,
  [SMALL_STATE(25)] = 1177,
  [SMALL_STATE(26)] = 1207,
  [SMALL_STATE(27)] = 1235,
  [SMALL_STATE(28)] = 1257,
  [SMALL_STATE(29)] = 1277,
  [SMALL_STATE(30)] = 1297,
  [SMALL_STATE(31)] = 1317,
  [SMALL_STATE(32)] = 1337,
  [SMALL_STATE(33)] = 1359,
  [SMALL_STATE(34)] = 1381,
  [SMALL_STATE(35)] = 1397,
  [SMALL_STATE(36)] = 1416,
  [SMALL_STATE(37)] = 1447,
  [SMALL_STATE(38)] = 1462,
  [SMALL_STATE(39)] = 1481,
  [SMALL_STATE(40)] = 1500,
  [SMALL_STATE(41)] = 1523,
  [SMALL_STATE(42)] = 1538,
  [SMALL_STATE(43)] = 1561,
  [SMALL_STATE(44)] = 1584,
  [SMALL_STATE(45)] = 1607,
  [SMALL_STATE(46)] = 1626,
  [SMALL_STATE(47)] = 1645,
  [SMALL_STATE(48)] = 1660,
  [SMALL_STATE(49)] = 1679,
  [SMALL_STATE(50)] = 1694,
  [SMALL_STATE(51)] = 1708,
  [SMALL_STATE(52)] = 1722,
  [SMALL_STATE(53)] = 1740,
  [SMALL_STATE(54)] = 1756,
  [SMALL_STATE(55)] = 1770,
  [SMALL_STATE(56)] = 1784,
  [SMALL_STATE(57)] = 1804,
  [SMALL_STATE(58)] = 1822,
  [SMALL_STATE(59)] = 1848,
  [SMALL_STATE(60)] = 1866,
  [SMALL_STATE(61)] = 1884,
  [SMALL_STATE(62)] = 1902,
  [SMALL_STATE(63)] = 1922,
  [SMALL_STATE(64)] = 1940,
  [SMALL_STATE(65)] = 1954,
  [SMALL_STATE(66)] = 1968,
  [SMALL_STATE(67)] = 1994,
  [SMALL_STATE(68)] = 2014,
  [SMALL_STATE(69)] = 2039,
  [SMALL_STATE(70)] = 2062,
  [SMALL_STATE(71)] = 2075,
  [SMALL_STATE(72)] = 2088,
  [SMALL_STATE(73)] = 2111,
  [SMALL_STATE(74)] = 2124,
  [SMALL_STATE(75)] = 2137,
  [SMALL_STATE(76)] = 2152,
  [SMALL_STATE(77)] = 2165,
  [SMALL_STATE(78)] = 2188,
  [SMALL_STATE(79)] = 2201,
  [SMALL_STATE(80)] = 2214,
  [SMALL_STATE(81)] = 2229,
  [SMALL_STATE(82)] = 2242,
  [SMALL_STATE(83)] = 2255,
  [SMALL_STATE(84)] = 2268,
  [SMALL_STATE(85)] = 2291,
  [SMALL_STATE(86)] = 2304,
  [SMALL_STATE(87)] = 2317,
  [SMALL_STATE(88)] = 2330,
  [SMALL_STATE(89)] = 2353,
  [SMALL_STATE(90)] = 2378,
  [SMALL_STATE(91)] = 2391,
  [SMALL_STATE(92)] = 2404,
  [SMALL_STATE(93)] = 2417,
  [SMALL_STATE(94)] = 2440,
  [SMALL_STATE(95)] = 2463,
  [SMALL_STATE(96)] = 2476,
  [SMALL_STATE(97)] = 2488,
  [SMALL_STATE(98)] = 2510,
  [SMALL_STATE(99)] = 2522,
  [SMALL_STATE(100)] = 2534,
  [SMALL_STATE(101)] = 2546,
  [SMALL_STATE(102)] = 2558,
  [SMALL_STATE(103)] = 2570,
  [SMALL_STATE(104)] = 2582,
  [SMALL_STATE(105)] = 2594,
  [SMALL_STATE(106)] = 2606,
  [SMALL_STATE(107)] = 2618,
  [SMALL_STATE(108)] = 2630,
  [SMALL_STATE(109)] = 2642,
  [SMALL_STATE(110)] = 2654,
  [SMALL_STATE(111)] = 2666,
  [SMALL_STATE(112)] = 2683,
  [SMALL_STATE(113)] = 2702,
  [SMALL_STATE(114)] = 2719,
  [SMALL_STATE(115)] = 2736,
  [SMALL_STATE(116)] = 2753,
  [SMALL_STATE(117)] = 2770,
  [SMALL_STATE(118)] = 2787,
  [SMALL_STATE(119)] = 2802,
  [SMALL_STATE(120)] = 2821,
  [SMALL_STATE(121)] = 2838,
  [SMALL_STATE(122)] = 2857,
  [SMALL_STATE(123)] = 2876,
  [SMALL_STATE(124)] = 2895,
  [SMALL_STATE(125)] = 2906,
  [SMALL_STATE(126)] = 2925,
  [SMALL_STATE(127)] = 2939,
  [SMALL_STATE(128)] = 2953,
  [SMALL_STATE(129)] = 2961,
  [SMALL_STATE(130)] = 2975,
  [SMALL_STATE(131)] = 2991,
  [SMALL_STATE(132)] = 3007,
  [SMALL_STATE(133)] = 3021,
  [SMALL_STATE(134)] = 3037,
  [SMALL_STATE(135)] = 3051,
  [SMALL_STATE(136)] = 3065,
  [SMALL_STATE(137)] = 3081,
  [SMALL_STATE(138)] = 3095,
  [SMALL_STATE(139)] = 3111,
  [SMALL_STATE(140)] = 3127,
  [SMALL_STATE(141)] = 3141,
  [SMALL_STATE(142)] = 3157,
  [SMALL_STATE(143)] = 3168,
  [SMALL_STATE(144)] = 3179,
  [SMALL_STATE(145)] = 3192,
  [SMALL_STATE(146)] = 3205,
  [SMALL_STATE(147)] = 3218,
  [SMALL_STATE(148)] = 3231,
  [SMALL_STATE(149)] = 3241,
  [SMALL_STATE(150)] = 3251,
  [SMALL_STATE(151)] = 3261,
  [SMALL_STATE(152)] = 3271,
  [SMALL_STATE(153)] = 3281,
  [SMALL_STATE(154)] = 3291,
  [SMALL_STATE(155)] = 3301,
  [SMALL_STATE(156)] = 3311,
  [SMALL_STATE(157)] = 3319,
  [SMALL_STATE(158)] = 3329,
  [SMALL_STATE(159)] = 3339,
  [SMALL_STATE(160)] = 3349,
  [SMALL_STATE(161)] = 3359,
  [SMALL_STATE(162)] = 3369,
  [SMALL_STATE(163)] = 3379,
  [SMALL_STATE(164)] = 3389,
  [SMALL_STATE(165)] = 3399,
  [SMALL_STATE(166)] = 3409,
  [SMALL_STATE(167)] = 3419,
  [SMALL_STATE(168)] = 3426,
  [SMALL_STATE(169)] = 3433,
  [SMALL_STATE(170)] = 3440,
  [SMALL_STATE(171)] = 3447,
  [SMALL_STATE(172)] = 3454,
  [SMALL_STATE(173)] = 3461,
  [SMALL_STATE(174)] = 3468,
  [SMALL_STATE(175)] = 3475,
  [SMALL_STATE(176)] = 3482,
  [SMALL_STATE(177)] = 3489,
  [SMALL_STATE(178)] = 3496,
  [SMALL_STATE(179)] = 3503,
  [SMALL_STATE(180)] = 3510,
  [SMALL_STATE(181)] = 3517,
  [SMALL_STATE(182)] = 3524,
  [SMALL_STATE(183)] = 3531,
  [SMALL_STATE(184)] = 3538,
  [SMALL_STATE(185)] = 3545,
  [SMALL_STATE(186)] = 3552,
  [SMALL_STATE(187)] = 3559,
  [SMALL_STATE(188)] = 3566,
  [SMALL_STATE(189)] = 3573,
  [SMALL_STATE(190)] = 3580,
  [SMALL_STATE(191)] = 3587,
  [SMALL_STATE(192)] = 3594,
  [SMALL_STATE(193)] = 3601,
  [SMALL_STATE(194)] = 3608,
  [SMALL_STATE(195)] = 3615,
  [SMALL_STATE(196)] = 3622,
  [SMALL_STATE(197)] = 3629,
  [SMALL_STATE(198)] = 3636,
  [SMALL_STATE(199)] = 3643,
  [SMALL_STATE(200)] = 3650,
  [SMALL_STATE(201)] = 3657,
  [SMALL_STATE(202)] = 3664,
  [SMALL_STATE(203)] = 3671,
  [SMALL_STATE(204)] = 3678,
  [SMALL_STATE(205)] = 3685,
  [SMALL_STATE(206)] = 3689,
  [SMALL_STATE(207)] = 3693,
  [SMALL_STATE(208)] = 3697,
  [SMALL_STATE(209)] = 3701,
  [SMALL_STATE(210)] = 3705,
  [SMALL_STATE(211)] = 3709,
  [SMALL_STATE(212)] = 3713,
  [SMALL_STATE(213)] = 3717,
  [SMALL_STATE(214)] = 3721,
  [SMALL_STATE(215)] = 3725,
  [SMALL_STATE(216)] = 3729,
  [SMALL_STATE(217)] = 3733,
  [SMALL_STATE(218)] = 3737,
  [SMALL_STATE(219)] = 3741,
  [SMALL_STATE(220)] = 3745,
  [SMALL_STATE(221)] = 3749,
  [SMALL_STATE(222)] = 3753,
  [SMALL_STATE(223)] = 3757,
  [SMALL_STATE(224)] = 3761,
  [SMALL_STATE(225)] = 3765,
  [SMALL_STATE(226)] = 3769,
  [SMALL_STATE(227)] = 3773,
  [SMALL_STATE(228)] = 3777,
  [SMALL_STATE(229)] = 3781,
  [SMALL_STATE(230)] = 3785,
  [SMALL_STATE(231)] = 3789,
  [SMALL_STATE(232)] = 3793,
  [SMALL_STATE(233)] = 3797,
  [SMALL_STATE(234)] = 3801,
  [SMALL_STATE(235)] = 3805,
  [SMALL_STATE(236)] = 3809,
  [SMALL_STATE(237)] = 3813,
  [SMALL_STATE(238)] = 3817,
  [SMALL_STATE(239)] = 3821,
  [SMALL_STATE(240)] = 3825,
  [SMALL_STATE(241)] = 3829,
  [SMALL_STATE(242)] = 3833,
  [SMALL_STATE(243)] = 3837,
  [SMALL_STATE(244)] = 3841,
  [SMALL_STATE(245)] = 3845,
  [SMALL_STATE(246)] = 3849,
  [SMALL_STATE(247)] = 3853,
  [SMALL_STATE(248)] = 3857,
  [SMALL_STATE(249)] = 3861,
  [SMALL_STATE(250)] = 3865,
  [SMALL_STATE(251)] = 3869,
  [SMALL_STATE(252)] = 3873,
  [SMALL_STATE(253)] = 3877,
  [SMALL_STATE(254)] = 3881,
  [SMALL_STATE(255)] = 3885,
  [SMALL_STATE(256)] = 3889,
  [SMALL_STATE(257)] = 3893,
  [SMALL_STATE(258)] = 3897,
  [SMALL_STATE(259)] = 3901,
  [SMALL_STATE(260)] = 3905,
  [SMALL_STATE(261)] = 3909,
  [SMALL_STATE(262)] = 3913,
  [SMALL_STATE(263)] = 3917,
  [SMALL_STATE(264)] = 3921,
  [SMALL_STATE(265)] = 3925,
  [SMALL_STATE(266)] = 3929,
  [SMALL_STATE(267)] = 3933,
  [SMALL_STATE(268)] = 3937,
  [SMALL_STATE(269)] = 3941,
  [SMALL_STATE(270)] = 3945,
  [SMALL_STATE(271)] = 3949,
  [SMALL_STATE(272)] = 3953,
  [SMALL_STATE(273)] = 3957,
  [SMALL_STATE(274)] = 3961,
  [SMALL_STATE(275)] = 3965,
  [SMALL_STATE(276)] = 3969,
  [SMALL_STATE(277)] = 3973,
  [SMALL_STATE(278)] = 3977,
  [SMALL_STATE(279)] = 3981,
  [SMALL_STATE(280)] = 3985,
  [SMALL_STATE(281)] = 3989,
  [SMALL_STATE(282)] = 3993,
  [SMALL_STATE(283)] = 3997,
  [SMALL_STATE(284)] = 4001,
  [SMALL_STATE(285)] = 4005,
  [SMALL_STATE(286)] = 4009,
  [SMALL_STATE(287)] = 4013,
  [SMALL_STATE(288)] = 4017,
  [SMALL_STATE(289)] = 4021,
  [SMALL_STATE(290)] = 4025,
  [SMALL_STATE(291)] = 4029,
  [SMALL_STATE(292)] = 4033,
  [SMALL_STATE(293)] = 4037,
  [SMALL_STATE(294)] = 4041,
  [SMALL_STATE(295)] = 4045,
  [SMALL_STATE(296)] = 4049,
  [SMALL_STATE(297)] = 4053,
  [SMALL_STATE(298)] = 4057,
  [SMALL_STATE(299)] = 4061,
  [SMALL_STATE(300)] = 4065,
  [SMALL_STATE(301)] = 4069,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(12),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(131),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(167),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(34),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(163),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(236),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
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
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(96),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(108),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(109),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
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
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 4), SHIFT(104),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
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
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(185),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(19),
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
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(127),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(20),
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
