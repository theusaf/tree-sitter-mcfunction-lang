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
#define STATE_COUNT 301
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
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
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
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
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 17},
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
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 77},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 77},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 77},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 77},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 298},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 77},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 77},
  [124] = {.lex_state = 77},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 77},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 77},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 297},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 294},
  [154] = {.lex_state = 77},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 297},
  [158] = {.lex_state = 299},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 77},
  [163] = {.lex_state = 296},
  [164] = {.lex_state = 297},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 77},
  [168] = {.lex_state = 295},
  [169] = {.lex_state = 295},
  [170] = {.lex_state = 295},
  [171] = {.lex_state = 77},
  [172] = {.lex_state = 294},
  [173] = {.lex_state = 294},
  [174] = {.lex_state = 294},
  [175] = {.lex_state = 294},
  [176] = {.lex_state = 77},
  [177] = {.lex_state = 77},
  [178] = {.lex_state = 294},
  [179] = {.lex_state = 295},
  [180] = {.lex_state = 294},
  [181] = {.lex_state = 77},
  [182] = {.lex_state = 294},
  [183] = {.lex_state = 294},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 295},
  [186] = {.lex_state = 77},
  [187] = {.lex_state = 77},
  [188] = {.lex_state = 297},
  [189] = {.lex_state = 77},
  [190] = {.lex_state = 294},
  [191] = {.lex_state = 295},
  [192] = {.lex_state = 295},
  [193] = {.lex_state = 295},
  [194] = {.lex_state = 294},
  [195] = {.lex_state = 294},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 294},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 294},
  [200] = {.lex_state = 294},
  [201] = {.lex_state = 294},
  [202] = {.lex_state = 294},
  [203] = {.lex_state = 294},
  [204] = {.lex_state = 77},
  [205] = {.lex_state = 77},
  [206] = {.lex_state = 294},
  [207] = {.lex_state = 77},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 294},
  [210] = {.lex_state = 77},
  [211] = {.lex_state = 294},
  [212] = {.lex_state = 294},
  [213] = {.lex_state = 294},
  [214] = {.lex_state = 294},
  [215] = {.lex_state = 294},
  [216] = {.lex_state = 77},
  [217] = {.lex_state = 294},
  [218] = {.lex_state = 294},
  [219] = {.lex_state = 294},
  [220] = {.lex_state = 77},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 77},
  [223] = {.lex_state = 77},
  [224] = {.lex_state = 294},
  [225] = {.lex_state = 77},
  [226] = {.lex_state = 294},
  [227] = {.lex_state = 294},
  [228] = {.lex_state = 294},
  [229] = {.lex_state = 294},
  [230] = {.lex_state = 294},
  [231] = {.lex_state = 77},
  [232] = {.lex_state = 294},
  [233] = {.lex_state = 77},
  [234] = {.lex_state = 77},
  [235] = {.lex_state = 294},
  [236] = {.lex_state = 294},
  [237] = {.lex_state = 77},
  [238] = {.lex_state = 77},
  [239] = {.lex_state = 77},
  [240] = {.lex_state = 294},
  [241] = {.lex_state = 294},
  [242] = {.lex_state = 294},
  [243] = {.lex_state = 294},
  [244] = {.lex_state = 294},
  [245] = {.lex_state = 294},
  [246] = {.lex_state = 294},
  [247] = {.lex_state = 77},
  [248] = {.lex_state = 77},
  [249] = {.lex_state = 294},
  [250] = {.lex_state = 294},
  [251] = {.lex_state = 294},
  [252] = {.lex_state = 77},
  [253] = {.lex_state = 77},
  [254] = {.lex_state = 77},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 77},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 77},
  [259] = {.lex_state = 77},
  [260] = {.lex_state = 294},
  [261] = {.lex_state = 294},
  [262] = {.lex_state = 294},
  [263] = {.lex_state = 294},
  [264] = {.lex_state = 294},
  [265] = {.lex_state = 294},
  [266] = {.lex_state = 77},
  [267] = {.lex_state = 294},
  [268] = {.lex_state = 294},
  [269] = {.lex_state = 294},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 294},
  [272] = {.lex_state = 77},
  [273] = {.lex_state = 294},
  [274] = {.lex_state = 77},
  [275] = {.lex_state = 294},
  [276] = {.lex_state = 294},
  [277] = {.lex_state = 294},
  [278] = {.lex_state = 294},
  [279] = {.lex_state = 77},
  [280] = {.lex_state = 294},
  [281] = {.lex_state = 294},
  [282] = {.lex_state = 294},
  [283] = {.lex_state = 294},
  [284] = {.lex_state = 77},
  [285] = {.lex_state = 77},
  [286] = {.lex_state = 294},
  [287] = {.lex_state = 294},
  [288] = {.lex_state = 77},
  [289] = {.lex_state = 77},
  [290] = {.lex_state = 77},
  [291] = {.lex_state = 294},
  [292] = {.lex_state = 294},
  [293] = {.lex_state = 77},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 77},
  [296] = {.lex_state = 77},
  [297] = {.lex_state = 294},
  [298] = {.lex_state = 294},
  [299] = {.lex_state = 294},
  [300] = {.lex_state = 294},
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
    [sym_root] = STATE(294),
    [sym_command] = STATE(14),
    [sym_execute_command] = STATE(101),
    [sym__legacy_execute] = STATE(101),
    [sym__line_separator] = STATE(14),
    [sym_identifier] = STATE(70),
    [sym_command_name] = STATE(42),
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
  [0] = 21,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      sym_nbt_identifier,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(270), 1,
      sym_selector,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [87] = 21,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
      anon_sym_run,
    ACTIONS(45), 1,
      sym_nbt_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(256), 1,
      sym_selector,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 11,
      sym__command_choices,
      sym_execute_keyword,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_container,
      sym_nbt_path,
      sym_nbt,
      sym_item,
      sym__blank_item_with_namespace,
      sym_path,
  [174] = 19,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
    ACTIONS(47), 1,
      anon_sym_run,
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 12,
      sym__command_choices,
      sym_execute_keyword,
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
  [256] = 19,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
      anon_sym_run,
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 12,
      sym__command_choices,
      sym_execute_keyword,
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
  [338] = 19,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(17), 1,
      anon_sym_run,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 12,
      sym__command_choices,
      sym_execute_keyword,
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
  [420] = 18,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      sym_namespace,
    ACTIONS(25), 1,
      sym_text,
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
    STATE(26), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
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
    STATE(274), 12,
      sym__command_choices,
      sym_execute_keyword,
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
  [499] = 19,
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
    ACTIONS(53), 1,
      anon_sym_execute,
    ACTIONS(55), 1,
      aux_sym_identifier_token1,
    ACTIONS(58), 1,
      sym_namespace,
    ACTIONS(60), 1,
      sym_namespaced_container,
    STATE(10), 1,
      sym_identifier,
    STATE(19), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym_tag,
      sym_text,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
    STATE(71), 11,
      sym__command_choices,
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
  [575] = 17,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
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
    ACTIONS(58), 1,
      sym_namespace,
    STATE(10), 1,
      sym_identifier,
    STATE(19), 1,
      sym_string,
    STATE(272), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(89), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(71), 11,
      sym__command_choices,
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
  [640] = 14,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(34), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(40), 1,
      aux_sym_container_repeat1,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    ACTIONS(67), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [688] = 11,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_item_state,
    STATE(46), 1,
      sym_item_nbt,
    STATE(49), 1,
      aux_sym_container_repeat1,
    STATE(58), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    ACTIONS(78), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [727] = 10,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_execute,
    ACTIONS(95), 1,
      aux_sym_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_QMARK,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(86), 2,
      sym_comment,
      anon_sym_LF,
    STATE(101), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [762] = 9,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [795] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(115), 2,
      sym_comment,
      anon_sym_LF,
    STATE(101), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [830] = 9,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [863] = 9,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [896] = 9,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [929] = 7,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(125), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [957] = 7,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(67), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [985] = 7,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(139), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1013] = 8,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1043] = 8,
    ACTIONS(143), 1,
      aux_sym_identifier_token1,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      aux_sym_selector_number_token3,
    STATE(215), 1,
      sym_selector_value,
    ACTIONS(147), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(211), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [1073] = 8,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1103] = 8,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1133] = 8,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(273), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(232), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1163] = 13,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(34), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(40), 1,
      aux_sym_container_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    STATE(113), 1,
      aux_sym_nbt_path_repeat3,
    STATE(162), 1,
      aux_sym_path_repeat1,
  [1203] = 4,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1223] = 4,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(166), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1243] = 4,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(166), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1263] = 2,
    ACTIONS(176), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1279] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(91), 1,
      sym_item_nbt,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1301] = 5,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_text,
    STATE(48), 1,
      sym_string,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1323] = 4,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1343] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(68), 1,
      sym_item_nbt,
    ACTIONS(197), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1365] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      sym_item_state,
    STATE(46), 1,
      sym_item_nbt,
    STATE(49), 1,
      aux_sym_container_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    STATE(154), 1,
      aux_sym_path_repeat1,
  [1396] = 2,
    ACTIONS(201), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1411] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_item_state,
    ACTIONS(197), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1430] = 2,
    ACTIONS(205), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1445] = 6,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(44), 1,
      aux_sym_command_repeat1,
    STATE(60), 1,
      aux_sym_command_repeat2,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1468] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_container_repeat1,
    ACTIONS(218), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1487] = 4,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_container_repeat1,
    ACTIONS(222), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1506] = 6,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_command_repeat1,
    STATE(65), 1,
      aux_sym_command_repeat2,
    ACTIONS(232), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1529] = 6,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(60), 1,
      aux_sym_command_repeat2,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1552] = 6,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_command_repeat2,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1575] = 4,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_selector_option_section,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1594] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_item_state,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1613] = 2,
    ACTIONS(249), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1628] = 2,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1643] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_container_repeat1,
    ACTIONS(253), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1662] = 5,
    ACTIONS(257), 1,
      anon_sym_,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_command_repeat2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1682] = 2,
    ACTIONS(266), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1696] = 4,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(273), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1714] = 4,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(275), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1732] = 2,
    ACTIONS(284), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1746] = 2,
    ACTIONS(288), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1760] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    ACTIONS(294), 1,
      anon_sym_detect,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(105), 2,
      sym_command,
      sym__legacy_execute,
  [1786] = 3,
    ACTIONS(300), 1,
      sym_number,
    ACTIONS(298), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1802] = 4,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(307), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1820] = 2,
    ACTIONS(311), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1834] = 5,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym_command_repeat2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1854] = 4,
    ACTIONS(315), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym_command_repeat2,
    ACTIONS(318), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [1872] = 4,
    ACTIONS(322), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(325), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [1890] = 2,
    ACTIONS(222), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1904] = 4,
    ACTIONS(67), 1,
      anon_sym_execute,
    ACTIONS(327), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1922] = 5,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym_command_repeat2,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1942] = 2,
    ACTIONS(332), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1956] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    ACTIONS(334), 1,
      anon_sym_detect,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(95), 2,
      sym_command,
      sym__legacy_execute,
  [1982] = 2,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1995] = 2,
    ACTIONS(338), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(336), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2008] = 2,
    ACTIONS(342), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2021] = 2,
    ACTIONS(325), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2034] = 2,
    ACTIONS(346), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2047] = 2,
    ACTIONS(350), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2060] = 2,
    ACTIONS(354), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2073] = 2,
    ACTIONS(273), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2086] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [2109] = 3,
    ACTIONS(358), 1,
      anon_sym_,
    ACTIONS(361), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2124] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(106), 2,
      sym_command,
      sym__legacy_execute,
  [2147] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(100), 2,
      sym_command,
      sym_execute_command,
  [2170] = 2,
    ACTIONS(369), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2183] = 8,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_nbt_identifier,
    ACTIONS(373), 1,
      aux_sym_identifier_token1,
    ACTIONS(375), 1,
      sym_number,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(229), 1,
      sym_nbt_object_key,
    STATE(241), 1,
      sym_selector_score_key,
  [2208] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(108), 2,
      sym_command,
      sym_execute_command,
  [2231] = 2,
    ACTIONS(381), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2244] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(97), 2,
      sym_command,
      sym_execute_command,
  [2267] = 2,
    ACTIONS(385), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2280] = 2,
    ACTIONS(298), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2293] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(109), 2,
      sym_command,
      sym__legacy_execute,
  [2316] = 8,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_nbt_identifier,
    ACTIONS(373), 1,
      aux_sym_identifier_token1,
    ACTIONS(375), 1,
      sym_number,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(228), 1,
      sym_selector_score_key,
    STATE(229), 1,
      sym_nbt_object_key,
  [2341] = 2,
    ACTIONS(391), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(389), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2354] = 3,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(67), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2369] = 2,
    ACTIONS(398), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(396), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2382] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
    STATE(103), 2,
      sym_command,
      sym__legacy_execute,
  [2405] = 2,
    ACTIONS(402), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(400), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2418] = 2,
    ACTIONS(406), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(404), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2431] = 2,
    ACTIONS(410), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2443] = 2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2455] = 2,
    ACTIONS(414), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2467] = 2,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2479] = 2,
    ACTIONS(418), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2491] = 2,
    ACTIONS(422), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2503] = 2,
    ACTIONS(426), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2515] = 2,
    ACTIONS(430), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(428), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2527] = 2,
    ACTIONS(434), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2539] = 2,
    ACTIONS(262), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2551] = 2,
    ACTIONS(438), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2563] = 2,
    ACTIONS(442), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2575] = 7,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_nbt_identifier,
    ACTIONS(373), 1,
      aux_sym_identifier_token1,
    ACTIONS(375), 1,
      sym_number,
    STATE(224), 1,
      sym_string,
    STATE(229), 1,
      sym_nbt_object_key,
    STATE(241), 1,
      sym_selector_score_key,
  [2597] = 2,
    ACTIONS(446), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2609] = 2,
    ACTIONS(450), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(448), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2621] = 4,
    STATE(260), 1,
      sym_selector_score_value,
    STATE(261), 1,
      sym_selector_number,
    ACTIONS(151), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(153), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2636] = 2,
    ACTIONS(452), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(454), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2647] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_text,
    ACTIONS(456), 1,
      sym_number,
    STATE(48), 1,
      sym_string,
    STATE(63), 1,
      sym_identifier,
  [2666] = 6,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
  [2685] = 6,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(113), 1,
      aux_sym_nbt_path_repeat3,
  [2704] = 5,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    ACTIONS(462), 1,
      sym_number,
    STATE(247), 1,
      sym_state_value,
    STATE(285), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2721] = 5,
    ACTIONS(464), 1,
      aux_sym_identifier_token1,
    ACTIONS(466), 1,
      sym_number,
    STATE(192), 1,
      sym_boolean,
    STATE(193), 1,
      sym_state_value,
    ACTIONS(468), 2,
      anon_sym_true,
      anon_sym_false,
  [2738] = 5,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(298), 1,
      sym_nbt_object_key,
    ACTIONS(375), 2,
      sym_nbt_identifier,
      sym_number,
  [2755] = 5,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(298), 1,
      sym_nbt_object_key,
    ACTIONS(375), 2,
      sym_nbt_identifier,
      sym_number,
  [2772] = 5,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(298), 1,
      sym_nbt_object_key,
    ACTIONS(375), 2,
      sym_nbt_identifier,
      sym_number,
  [2789] = 5,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_string,
    STATE(298), 1,
      sym_nbt_object_key,
    ACTIONS(375), 2,
      sym_nbt_identifier,
      sym_number,
  [2806] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_,
    STATE(34), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2825] = 5,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    ACTIONS(462), 1,
      sym_number,
    STATE(237), 1,
      sym_state_value,
    STATE(285), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2842] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_item_state,
    STATE(46), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2861] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      anon_sym_,
    STATE(34), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2880] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(225), 1,
      sym_coordinate,
    STATE(231), 1,
      sym_location,
  [2896] = 4,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_string,
    STATE(298), 1,
      sym_nbt_object_key,
    ACTIONS(375), 2,
      sym_nbt_identifier,
      sym_number,
  [2910] = 4,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      aux_sym_string_token1,
    ACTIONS(488), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2924] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(204), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2940] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(490), 1,
      sym_namespace,
    STATE(121), 1,
      sym_identifier,
    STATE(210), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2954] = 1,
    ACTIONS(492), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2962] = 4,
    ACTIONS(486), 1,
      aux_sym_string_token1,
    ACTIONS(488), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2976] = 4,
    ACTIONS(488), 1,
      anon_sym_BSLASH,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym_string_token1,
    STATE(131), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2990] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(207), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [3006] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
  [3022] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
  [3038] = 4,
    ACTIONS(488), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      aux_sym_string_token1,
    STATE(127), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3052] = 4,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      aux_sym_string_token1,
    ACTIONS(513), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3066] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(516), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(70), 1,
      sym_identifier,
  [3082] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(490), 1,
      sym_namespace,
    STATE(124), 1,
      sym_identifier,
    STATE(216), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [3096] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(225), 1,
      sym_coordinate,
    STATE(253), 1,
      sym_location,
  [3112] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(296), 1,
      sym_coordinate,
  [3125] = 3,
    ACTIONS(520), 1,
      aux_sym_identifier_token1,
    STATE(223), 1,
      sym_state_key,
    ACTIONS(518), 2,
      anon_sym_STAR,
      sym_number,
  [3136] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(77), 1,
      sym_coordinate,
  [3149] = 3,
    ACTIONS(520), 1,
      aux_sym_identifier_token1,
    STATE(221), 1,
      sym_state_key,
    ACTIONS(522), 2,
      anon_sym_STAR,
      sym_number,
  [3160] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(482), 1,
      sym_number,
    STATE(69), 1,
      sym_coordinate,
  [3173] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_,
    ACTIONS(524), 1,
      sym_text,
    STATE(48), 1,
      sym_string,
  [3186] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_text,
    STATE(48), 1,
      sym_string,
  [3196] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(526), 1,
      sym_nbt_identifier,
    STATE(288), 1,
      sym_selector,
  [3206] = 3,
    ACTIONS(528), 1,
      aux_sym_identifier_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym_state_key,
  [3216] = 3,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(532), 1,
      aux_sym_identifier_token1,
    STATE(35), 1,
      sym_identifier,
  [3226] = 3,
    ACTIONS(534), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_selector_option_section_repeat1,
  [3236] = 3,
    ACTIONS(528), 1,
      aux_sym_identifier_token1,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym_state_key,
  [3246] = 3,
    ACTIONS(541), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(190), 1,
      aux_sym_selector_score_repeat1,
  [3256] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(302), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [3266] = 2,
    ACTIONS(545), 1,
      aux_sym_string_token1,
    ACTIONS(543), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3274] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(456), 1,
      sym_number,
    STATE(63), 1,
      sym_identifier,
  [3284] = 3,
    ACTIONS(547), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      aux_sym_selector_option_section_repeat1,
  [3294] = 3,
    ACTIONS(551), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token2,
    STATE(199), 1,
      aux_sym_item_state_repeat1,
  [3304] = 3,
    ACTIONS(555), 1,
      aux_sym_identifier_token1,
    STATE(286), 1,
      sym_selector_key,
    STATE(287), 1,
      sym_selector_option,
  [3314] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(557), 1,
      sym_nbt_identifier,
    STATE(257), 1,
      sym_selector,
  [3324] = 3,
    ACTIONS(559), 1,
      aux_sym_identifier_token1,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_selector_score_key,
  [3334] = 3,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [3344] = 3,
    ACTIONS(563), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      anon_sym_COMMA,
  [3354] = 3,
    ACTIONS(547), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_selector_option_section_repeat1,
  [3364] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(571), 1,
      sym_namespace,
    STATE(75), 1,
      sym_identifier,
  [3374] = 2,
    ACTIONS(559), 1,
      aux_sym_identifier_token1,
    STATE(244), 1,
      sym_selector_score_key,
  [3381] = 2,
    ACTIONS(573), 1,
      anon_sym_,
    STATE(181), 1,
      aux_sym_execute_command_repeat1,
  [3388] = 2,
    ACTIONS(575), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(577), 1,
      anon_sym_COMMA,
  [3395] = 2,
    ACTIONS(579), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [3402] = 2,
    ACTIONS(583), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(585), 1,
      anon_sym_COMMA,
  [3409] = 2,
    ACTIONS(587), 1,
      anon_sym_,
    STATE(171), 1,
      aux_sym_execute_command_repeat1,
  [3416] = 2,
    ACTIONS(590), 1,
      aux_sym_nbt_path_token1,
    STATE(195), 1,
      aux_sym_nbt_array_repeat1,
  [3423] = 2,
    ACTIONS(592), 1,
      aux_sym_nbt_path_token1,
    STATE(173), 1,
      aux_sym_item_state_repeat1,
  [3430] = 2,
    ACTIONS(595), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_nbt_array_repeat1,
  [3437] = 2,
    ACTIONS(598), 1,
      aux_sym_nbt_path_token1,
    STATE(197), 1,
      aux_sym_nbt_object_repeat1,
  [3444] = 2,
    ACTIONS(600), 1,
      anon_sym_,
    STATE(186), 1,
      aux_sym_execute_command_repeat1,
  [3451] = 2,
    ACTIONS(602), 1,
      anon_sym_EQ,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [3458] = 2,
    ACTIONS(606), 1,
      aux_sym_nbt_path_token1,
    STATE(182), 1,
      aux_sym_selector_nbt_repeat1,
  [3465] = 2,
    ACTIONS(608), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [3472] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    STATE(180), 1,
      aux_sym_selector_score_repeat1,
  [3479] = 2,
    ACTIONS(615), 1,
      anon_sym_,
    STATE(171), 1,
      aux_sym_execute_command_repeat1,
  [3486] = 2,
    ACTIONS(617), 1,
      aux_sym_nbt_path_token1,
    STATE(182), 1,
      aux_sym_selector_nbt_repeat1,
  [3493] = 2,
    ACTIONS(620), 1,
      aux_sym_nbt_path_token1,
    STATE(199), 1,
      aux_sym_item_state_repeat1,
  [3500] = 2,
    ACTIONS(528), 1,
      aux_sym_identifier_token1,
    STATE(264), 1,
      sym_state_key,
  [3507] = 2,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      aux_sym_nbt_path_token1,
  [3514] = 2,
    ACTIONS(573), 1,
      anon_sym_,
    STATE(171), 1,
      aux_sym_execute_command_repeat1,
  [3521] = 2,
    ACTIONS(622), 1,
      anon_sym_,
    STATE(186), 1,
      aux_sym_execute_command_repeat1,
  [3528] = 2,
    ACTIONS(624), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
  [3535] = 2,
    ACTIONS(628), 1,
      anon_sym_,
    STATE(181), 1,
      aux_sym_execute_command_repeat1,
  [3542] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    STATE(180), 1,
      aux_sym_selector_score_repeat1,
  [3549] = 2,
    ACTIONS(632), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(634), 1,
      anon_sym_COMMA,
  [3556] = 2,
    ACTIONS(636), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [3563] = 2,
    ACTIONS(640), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [3570] = 2,
    ACTIONS(644), 1,
      aux_sym_nbt_path_token1,
    STATE(202), 1,
      aux_sym_nbt_array_repeat1,
  [3577] = 2,
    ACTIONS(646), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_nbt_array_repeat1,
  [3584] = 2,
    ACTIONS(532), 1,
      aux_sym_identifier_token1,
    STATE(74), 1,
      sym_identifier,
  [3591] = 2,
    ACTIONS(648), 1,
      aux_sym_nbt_path_token1,
    STATE(201), 1,
      aux_sym_nbt_object_repeat1,
  [3598] = 2,
    ACTIONS(532), 1,
      aux_sym_identifier_token1,
    STATE(123), 1,
      sym_identifier,
  [3605] = 2,
    ACTIONS(650), 1,
      aux_sym_nbt_path_token1,
    STATE(173), 1,
      aux_sym_item_state_repeat1,
  [3612] = 2,
    ACTIONS(652), 1,
      aux_sym_nbt_path_token1,
    STATE(203), 1,
      aux_sym_nbt_object_repeat1,
  [3619] = 2,
    ACTIONS(654), 1,
      aux_sym_nbt_path_token1,
    STATE(201), 1,
      aux_sym_nbt_object_repeat1,
  [3626] = 2,
    ACTIONS(657), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_nbt_array_repeat1,
  [3633] = 2,
    ACTIONS(659), 1,
      aux_sym_nbt_path_token1,
    STATE(201), 1,
      aux_sym_nbt_object_repeat1,
  [3640] = 1,
    ACTIONS(661), 1,
      anon_sym_,
  [3644] = 1,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [3648] = 1,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
  [3652] = 1,
    ACTIONS(665), 1,
      anon_sym_,
  [3656] = 1,
    ACTIONS(553), 1,
      aux_sym_nbt_path_token2,
  [3660] = 1,
    ACTIONS(667), 1,
      aux_sym_nbt_path_token1,
  [3664] = 1,
    ACTIONS(478), 1,
      anon_sym_,
  [3668] = 1,
    ACTIONS(669), 1,
      aux_sym_nbt_path_token1,
  [3672] = 1,
    ACTIONS(671), 1,
      aux_sym_nbt_path_token1,
  [3676] = 1,
    ACTIONS(674), 1,
      aux_sym_nbt_path_token1,
  [3680] = 1,
    ACTIONS(676), 1,
      aux_sym_nbt_path_token1,
  [3684] = 1,
    ACTIONS(678), 1,
      aux_sym_nbt_path_token1,
  [3688] = 1,
    ACTIONS(480), 1,
      anon_sym_,
  [3692] = 1,
    ACTIONS(680), 1,
      aux_sym_nbt_path_token1,
  [3696] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3700] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3704] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3708] = 1,
    ACTIONS(688), 1,
      anon_sym_EQ,
  [3712] = 1,
    ACTIONS(690), 1,
      anon_sym_,
  [3716] = 1,
    ACTIONS(692), 1,
      anon_sym_EQ,
  [3720] = 1,
    ACTIONS(694), 1,
      aux_sym_nbt_path_token1,
  [3724] = 1,
    ACTIONS(696), 1,
      anon_sym_,
  [3728] = 1,
    ACTIONS(698), 1,
      aux_sym_nbt_path_token1,
  [3732] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3736] = 1,
    ACTIONS(703), 1,
      aux_sym_nbt_path_token1,
  [3740] = 1,
    ACTIONS(705), 1,
      aux_sym_nbt_path_token1,
  [3744] = 1,
    ACTIONS(707), 1,
      aux_sym_nbt_path_token1,
  [3748] = 1,
    ACTIONS(710), 1,
      anon_sym_,
  [3752] = 1,
    ACTIONS(712), 1,
      aux_sym_nbt_path_token1,
  [3756] = 1,
    ACTIONS(714), 1,
      anon_sym_EQ,
  [3760] = 1,
    ACTIONS(716), 1,
      anon_sym_,
  [3764] = 1,
    ACTIONS(718), 1,
      aux_sym_nbt_path_token1,
  [3768] = 1,
    ACTIONS(720), 1,
      aux_sym_nbt_path_token1,
  [3772] = 1,
    ACTIONS(722), 1,
      anon_sym_,
  [3776] = 1,
    ACTIONS(724), 1,
      anon_sym_EQ,
  [3780] = 1,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [3784] = 1,
    ACTIONS(728), 1,
      aux_sym_nbt_path_token1,
  [3788] = 1,
    ACTIONS(730), 1,
      aux_sym_nbt_path_token1,
  [3792] = 1,
    ACTIONS(732), 1,
      aux_sym_nbt_path_token1,
  [3796] = 1,
    ACTIONS(734), 1,
      aux_sym_nbt_path_token1,
  [3800] = 1,
    ACTIONS(736), 1,
      aux_sym_nbt_path_token1,
  [3804] = 1,
    ACTIONS(738), 1,
      aux_sym_nbt_path_token1,
  [3808] = 1,
    ACTIONS(740), 1,
      aux_sym_nbt_path_token1,
  [3812] = 1,
    ACTIONS(742), 1,
      anon_sym_,
  [3816] = 1,
    ACTIONS(744), 1,
      anon_sym_,
  [3820] = 1,
    ACTIONS(746), 1,
      aux_sym_nbt_path_token1,
  [3824] = 1,
    ACTIONS(748), 1,
      aux_sym_nbt_path_token1,
  [3828] = 1,
    ACTIONS(750), 1,
      aux_sym_nbt_path_token1,
  [3832] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [3836] = 1,
    ACTIONS(752), 1,
      anon_sym_,
  [3840] = 1,
    ACTIONS(754), 1,
      anon_sym_,
  [3844] = 1,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
  [3848] = 1,
    ACTIONS(758), 1,
      anon_sym_,
  [3852] = 1,
    ACTIONS(761), 1,
      anon_sym_,
  [3856] = 1,
    ACTIONS(763), 1,
      anon_sym_,
  [3860] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
  [3864] = 1,
    ACTIONS(767), 1,
      aux_sym_nbt_path_token1,
  [3868] = 1,
    ACTIONS(769), 1,
      aux_sym_nbt_path_token1,
  [3872] = 1,
    ACTIONS(771), 1,
      aux_sym_nbt_path_token1,
  [3876] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3880] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3884] = 1,
    ACTIONS(777), 1,
      aux_sym_nbt_path_token1,
  [3888] = 1,
    ACTIONS(779), 1,
      anon_sym_COLON,
  [3892] = 1,
    ACTIONS(781), 1,
      aux_sym_nbt_path_token1,
  [3896] = 1,
    ACTIONS(783), 1,
      aux_sym_nbt_path_token1,
  [3900] = 1,
    ACTIONS(785), 1,
      aux_sym_nbt_path_token1,
  [3904] = 1,
    ACTIONS(787), 1,
      anon_sym_,
  [3908] = 1,
    ACTIONS(383), 1,
      aux_sym_nbt_path_token1,
  [3912] = 1,
    ACTIONS(790), 1,
      anon_sym_,
  [3916] = 1,
    ACTIONS(389), 1,
      aux_sym_nbt_path_token1,
  [3920] = 1,
    ACTIONS(792), 1,
      anon_sym_,
  [3924] = 1,
    ACTIONS(247), 1,
      aux_sym_nbt_path_token1,
  [3928] = 1,
    ACTIONS(794), 1,
      aux_sym_nbt_path_token1,
  [3932] = 1,
    ACTIONS(796), 1,
      aux_sym_nbt_path_token1,
  [3936] = 1,
    ACTIONS(199), 1,
      aux_sym_nbt_path_token1,
  [3940] = 1,
    ACTIONS(300), 1,
      sym_number,
  [3944] = 1,
    ACTIONS(404), 1,
      aux_sym_nbt_path_token1,
  [3948] = 1,
    ACTIONS(282), 1,
      aux_sym_nbt_path_token1,
  [3952] = 1,
    ACTIONS(344), 1,
      aux_sym_nbt_path_token1,
  [3956] = 1,
    ACTIONS(309), 1,
      aux_sym_nbt_path_token1,
  [3960] = 1,
    ACTIONS(777), 1,
      anon_sym_EQ,
  [3964] = 1,
    ACTIONS(638), 1,
      anon_sym_,
  [3968] = 1,
    ACTIONS(798), 1,
      aux_sym_nbt_path_token1,
  [3972] = 1,
    ACTIONS(800), 1,
      aux_sym_nbt_path_token1,
  [3976] = 1,
    ACTIONS(802), 1,
      anon_sym_,
  [3980] = 1,
    ACTIONS(804), 1,
      anon_sym_,
  [3984] = 1,
    ACTIONS(806), 1,
      anon_sym_,
  [3988] = 1,
    ACTIONS(808), 1,
      aux_sym_nbt_path_token1,
  [3992] = 1,
    ACTIONS(810), 1,
      aux_sym_nbt_path_token1,
  [3996] = 1,
    ACTIONS(812), 1,
      anon_sym_,
  [4000] = 1,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
  [4004] = 1,
    ACTIONS(816), 1,
      anon_sym_,
  [4008] = 1,
    ACTIONS(818), 1,
      anon_sym_,
  [4012] = 1,
    ACTIONS(820), 1,
      aux_sym_nbt_path_token1,
  [4016] = 1,
    ACTIONS(822), 1,
      aux_sym_nbt_path_token1,
  [4020] = 1,
    ACTIONS(824), 1,
      aux_sym_nbt_path_token1,
  [4024] = 1,
    ACTIONS(826), 1,
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
  [SMALL_STATE(9)] = 575,
  [SMALL_STATE(10)] = 640,
  [SMALL_STATE(11)] = 688,
  [SMALL_STATE(12)] = 727,
  [SMALL_STATE(13)] = 762,
  [SMALL_STATE(14)] = 795,
  [SMALL_STATE(15)] = 830,
  [SMALL_STATE(16)] = 863,
  [SMALL_STATE(17)] = 896,
  [SMALL_STATE(18)] = 929,
  [SMALL_STATE(19)] = 957,
  [SMALL_STATE(20)] = 985,
  [SMALL_STATE(21)] = 1013,
  [SMALL_STATE(22)] = 1043,
  [SMALL_STATE(23)] = 1073,
  [SMALL_STATE(24)] = 1103,
  [SMALL_STATE(25)] = 1133,
  [SMALL_STATE(26)] = 1163,
  [SMALL_STATE(27)] = 1203,
  [SMALL_STATE(28)] = 1223,
  [SMALL_STATE(29)] = 1243,
  [SMALL_STATE(30)] = 1263,
  [SMALL_STATE(31)] = 1279,
  [SMALL_STATE(32)] = 1301,
  [SMALL_STATE(33)] = 1323,
  [SMALL_STATE(34)] = 1343,
  [SMALL_STATE(35)] = 1365,
  [SMALL_STATE(36)] = 1396,
  [SMALL_STATE(37)] = 1411,
  [SMALL_STATE(38)] = 1430,
  [SMALL_STATE(39)] = 1445,
  [SMALL_STATE(40)] = 1468,
  [SMALL_STATE(41)] = 1487,
  [SMALL_STATE(42)] = 1506,
  [SMALL_STATE(43)] = 1529,
  [SMALL_STATE(44)] = 1552,
  [SMALL_STATE(45)] = 1575,
  [SMALL_STATE(46)] = 1594,
  [SMALL_STATE(47)] = 1613,
  [SMALL_STATE(48)] = 1628,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1662,
  [SMALL_STATE(51)] = 1682,
  [SMALL_STATE(52)] = 1696,
  [SMALL_STATE(53)] = 1714,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1746,
  [SMALL_STATE(56)] = 1760,
  [SMALL_STATE(57)] = 1786,
  [SMALL_STATE(58)] = 1802,
  [SMALL_STATE(59)] = 1820,
  [SMALL_STATE(60)] = 1834,
  [SMALL_STATE(61)] = 1854,
  [SMALL_STATE(62)] = 1872,
  [SMALL_STATE(63)] = 1890,
  [SMALL_STATE(64)] = 1904,
  [SMALL_STATE(65)] = 1922,
  [SMALL_STATE(66)] = 1942,
  [SMALL_STATE(67)] = 1956,
  [SMALL_STATE(68)] = 1982,
  [SMALL_STATE(69)] = 1995,
  [SMALL_STATE(70)] = 2008,
  [SMALL_STATE(71)] = 2021,
  [SMALL_STATE(72)] = 2034,
  [SMALL_STATE(73)] = 2047,
  [SMALL_STATE(74)] = 2060,
  [SMALL_STATE(75)] = 2073,
  [SMALL_STATE(76)] = 2086,
  [SMALL_STATE(77)] = 2109,
  [SMALL_STATE(78)] = 2124,
  [SMALL_STATE(79)] = 2147,
  [SMALL_STATE(80)] = 2170,
  [SMALL_STATE(81)] = 2183,
  [SMALL_STATE(82)] = 2208,
  [SMALL_STATE(83)] = 2231,
  [SMALL_STATE(84)] = 2244,
  [SMALL_STATE(85)] = 2267,
  [SMALL_STATE(86)] = 2280,
  [SMALL_STATE(87)] = 2293,
  [SMALL_STATE(88)] = 2316,
  [SMALL_STATE(89)] = 2341,
  [SMALL_STATE(90)] = 2354,
  [SMALL_STATE(91)] = 2369,
  [SMALL_STATE(92)] = 2382,
  [SMALL_STATE(93)] = 2405,
  [SMALL_STATE(94)] = 2418,
  [SMALL_STATE(95)] = 2431,
  [SMALL_STATE(96)] = 2443,
  [SMALL_STATE(97)] = 2455,
  [SMALL_STATE(98)] = 2467,
  [SMALL_STATE(99)] = 2479,
  [SMALL_STATE(100)] = 2491,
  [SMALL_STATE(101)] = 2503,
  [SMALL_STATE(102)] = 2515,
  [SMALL_STATE(103)] = 2527,
  [SMALL_STATE(104)] = 2539,
  [SMALL_STATE(105)] = 2551,
  [SMALL_STATE(106)] = 2563,
  [SMALL_STATE(107)] = 2575,
  [SMALL_STATE(108)] = 2597,
  [SMALL_STATE(109)] = 2609,
  [SMALL_STATE(110)] = 2621,
  [SMALL_STATE(111)] = 2636,
  [SMALL_STATE(112)] = 2647,
  [SMALL_STATE(113)] = 2666,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2704,
  [SMALL_STATE(116)] = 2721,
  [SMALL_STATE(117)] = 2738,
  [SMALL_STATE(118)] = 2755,
  [SMALL_STATE(119)] = 2772,
  [SMALL_STATE(120)] = 2789,
  [SMALL_STATE(121)] = 2806,
  [SMALL_STATE(122)] = 2825,
  [SMALL_STATE(123)] = 2842,
  [SMALL_STATE(124)] = 2861,
  [SMALL_STATE(125)] = 2880,
  [SMALL_STATE(126)] = 2896,
  [SMALL_STATE(127)] = 2910,
  [SMALL_STATE(128)] = 2924,
  [SMALL_STATE(129)] = 2940,
  [SMALL_STATE(130)] = 2954,
  [SMALL_STATE(131)] = 2962,
  [SMALL_STATE(132)] = 2976,
  [SMALL_STATE(133)] = 2990,
  [SMALL_STATE(134)] = 3006,
  [SMALL_STATE(135)] = 3022,
  [SMALL_STATE(136)] = 3038,
  [SMALL_STATE(137)] = 3052,
  [SMALL_STATE(138)] = 3066,
  [SMALL_STATE(139)] = 3082,
  [SMALL_STATE(140)] = 3096,
  [SMALL_STATE(141)] = 3112,
  [SMALL_STATE(142)] = 3125,
  [SMALL_STATE(143)] = 3136,
  [SMALL_STATE(144)] = 3149,
  [SMALL_STATE(145)] = 3160,
  [SMALL_STATE(146)] = 3173,
  [SMALL_STATE(147)] = 3186,
  [SMALL_STATE(148)] = 3196,
  [SMALL_STATE(149)] = 3206,
  [SMALL_STATE(150)] = 3216,
  [SMALL_STATE(151)] = 3226,
  [SMALL_STATE(152)] = 3236,
  [SMALL_STATE(153)] = 3246,
  [SMALL_STATE(154)] = 3256,
  [SMALL_STATE(155)] = 3266,
  [SMALL_STATE(156)] = 3274,
  [SMALL_STATE(157)] = 3284,
  [SMALL_STATE(158)] = 3294,
  [SMALL_STATE(159)] = 3304,
  [SMALL_STATE(160)] = 3314,
  [SMALL_STATE(161)] = 3324,
  [SMALL_STATE(162)] = 3334,
  [SMALL_STATE(163)] = 3344,
  [SMALL_STATE(164)] = 3354,
  [SMALL_STATE(165)] = 3364,
  [SMALL_STATE(166)] = 3374,
  [SMALL_STATE(167)] = 3381,
  [SMALL_STATE(168)] = 3388,
  [SMALL_STATE(169)] = 3395,
  [SMALL_STATE(170)] = 3402,
  [SMALL_STATE(171)] = 3409,
  [SMALL_STATE(172)] = 3416,
  [SMALL_STATE(173)] = 3423,
  [SMALL_STATE(174)] = 3430,
  [SMALL_STATE(175)] = 3437,
  [SMALL_STATE(176)] = 3444,
  [SMALL_STATE(177)] = 3451,
  [SMALL_STATE(178)] = 3458,
  [SMALL_STATE(179)] = 3465,
  [SMALL_STATE(180)] = 3472,
  [SMALL_STATE(181)] = 3479,
  [SMALL_STATE(182)] = 3486,
  [SMALL_STATE(183)] = 3493,
  [SMALL_STATE(184)] = 3500,
  [SMALL_STATE(185)] = 3507,
  [SMALL_STATE(186)] = 3514,
  [SMALL_STATE(187)] = 3521,
  [SMALL_STATE(188)] = 3528,
  [SMALL_STATE(189)] = 3535,
  [SMALL_STATE(190)] = 3542,
  [SMALL_STATE(191)] = 3549,
  [SMALL_STATE(192)] = 3556,
  [SMALL_STATE(193)] = 3563,
  [SMALL_STATE(194)] = 3570,
  [SMALL_STATE(195)] = 3577,
  [SMALL_STATE(196)] = 3584,
  [SMALL_STATE(197)] = 3591,
  [SMALL_STATE(198)] = 3598,
  [SMALL_STATE(199)] = 3605,
  [SMALL_STATE(200)] = 3612,
  [SMALL_STATE(201)] = 3619,
  [SMALL_STATE(202)] = 3626,
  [SMALL_STATE(203)] = 3633,
  [SMALL_STATE(204)] = 3640,
  [SMALL_STATE(205)] = 3644,
  [SMALL_STATE(206)] = 3648,
  [SMALL_STATE(207)] = 3652,
  [SMALL_STATE(208)] = 3656,
  [SMALL_STATE(209)] = 3660,
  [SMALL_STATE(210)] = 3664,
  [SMALL_STATE(211)] = 3668,
  [SMALL_STATE(212)] = 3672,
  [SMALL_STATE(213)] = 3676,
  [SMALL_STATE(214)] = 3680,
  [SMALL_STATE(215)] = 3684,
  [SMALL_STATE(216)] = 3688,
  [SMALL_STATE(217)] = 3692,
  [SMALL_STATE(218)] = 3696,
  [SMALL_STATE(219)] = 3700,
  [SMALL_STATE(220)] = 3704,
  [SMALL_STATE(221)] = 3708,
  [SMALL_STATE(222)] = 3712,
  [SMALL_STATE(223)] = 3716,
  [SMALL_STATE(224)] = 3720,
  [SMALL_STATE(225)] = 3724,
  [SMALL_STATE(226)] = 3728,
  [SMALL_STATE(227)] = 3732,
  [SMALL_STATE(228)] = 3736,
  [SMALL_STATE(229)] = 3740,
  [SMALL_STATE(230)] = 3744,
  [SMALL_STATE(231)] = 3748,
  [SMALL_STATE(232)] = 3752,
  [SMALL_STATE(233)] = 3756,
  [SMALL_STATE(234)] = 3760,
  [SMALL_STATE(235)] = 3764,
  [SMALL_STATE(236)] = 3768,
  [SMALL_STATE(237)] = 3772,
  [SMALL_STATE(238)] = 3776,
  [SMALL_STATE(239)] = 3780,
  [SMALL_STATE(240)] = 3784,
  [SMALL_STATE(241)] = 3788,
  [SMALL_STATE(242)] = 3792,
  [SMALL_STATE(243)] = 3796,
  [SMALL_STATE(244)] = 3800,
  [SMALL_STATE(245)] = 3804,
  [SMALL_STATE(246)] = 3808,
  [SMALL_STATE(247)] = 3812,
  [SMALL_STATE(248)] = 3816,
  [SMALL_STATE(249)] = 3820,
  [SMALL_STATE(250)] = 3824,
  [SMALL_STATE(251)] = 3828,
  [SMALL_STATE(252)] = 3832,
  [SMALL_STATE(253)] = 3836,
  [SMALL_STATE(254)] = 3840,
  [SMALL_STATE(255)] = 3844,
  [SMALL_STATE(256)] = 3848,
  [SMALL_STATE(257)] = 3852,
  [SMALL_STATE(258)] = 3856,
  [SMALL_STATE(259)] = 3860,
  [SMALL_STATE(260)] = 3864,
  [SMALL_STATE(261)] = 3868,
  [SMALL_STATE(262)] = 3872,
  [SMALL_STATE(263)] = 3876,
  [SMALL_STATE(264)] = 3880,
  [SMALL_STATE(265)] = 3884,
  [SMALL_STATE(266)] = 3888,
  [SMALL_STATE(267)] = 3892,
  [SMALL_STATE(268)] = 3896,
  [SMALL_STATE(269)] = 3900,
  [SMALL_STATE(270)] = 3904,
  [SMALL_STATE(271)] = 3908,
  [SMALL_STATE(272)] = 3912,
  [SMALL_STATE(273)] = 3916,
  [SMALL_STATE(274)] = 3920,
  [SMALL_STATE(275)] = 3924,
  [SMALL_STATE(276)] = 3928,
  [SMALL_STATE(277)] = 3932,
  [SMALL_STATE(278)] = 3936,
  [SMALL_STATE(279)] = 3940,
  [SMALL_STATE(280)] = 3944,
  [SMALL_STATE(281)] = 3948,
  [SMALL_STATE(282)] = 3952,
  [SMALL_STATE(283)] = 3956,
  [SMALL_STATE(284)] = 3960,
  [SMALL_STATE(285)] = 3964,
  [SMALL_STATE(286)] = 3968,
  [SMALL_STATE(287)] = 3972,
  [SMALL_STATE(288)] = 3976,
  [SMALL_STATE(289)] = 3980,
  [SMALL_STATE(290)] = 3984,
  [SMALL_STATE(291)] = 3988,
  [SMALL_STATE(292)] = 3992,
  [SMALL_STATE(293)] = 3996,
  [SMALL_STATE(294)] = 4000,
  [SMALL_STATE(295)] = 4004,
  [SMALL_STATE(296)] = 4008,
  [SMALL_STATE(297)] = 4012,
  [SMALL_STATE(298)] = 4016,
  [SMALL_STATE(299)] = 4020,
  [SMALL_STATE(300)] = 4024,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(165),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(134),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(176),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(30),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(70),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(147),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(235),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(147),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(235),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(147),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(235),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(96),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(156),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(98),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(104),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 4), SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(165),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(165),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(165),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(61),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(145),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(137),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(255),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(159),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(184),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(21),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(166),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(107),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(126),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(22),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(140),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(128),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [814] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
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
