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
#define STATE_COUNT 299
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
  sym_nbt_path = 73,
  sym_selector = 74,
  sym_selector_option_section = 75,
  sym_selector_option = 76,
  sym_selector_key = 77,
  sym_selector_value = 78,
  sym_selector_nbt = 79,
  sym_selector_score = 80,
  sym_selector_score_key = 81,
  sym_selector_score_value = 82,
  sym_selector_number = 83,
  sym_nbt = 84,
  sym_nbt_object = 85,
  sym_nbt_array = 86,
  sym_nbt_object_key = 87,
  sym_nbt_object_value = 88,
  sym_nbt_number = 89,
  sym_container = 90,
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
  aux_sym_nbt_path_repeat1 = 103,
  aux_sym_nbt_path_repeat2 = 104,
  aux_sym_nbt_path_repeat3 = 105,
  aux_sym_selector_option_section_repeat1 = 106,
  aux_sym_selector_nbt_repeat1 = 107,
  aux_sym_selector_score_repeat1 = 108,
  aux_sym_nbt_object_repeat1 = 109,
  aux_sym_nbt_array_repeat1 = 110,
  aux_sym_container_repeat1 = 111,
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
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_execute_command_repeat1] = "execute_command_repeat1",
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
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_execute_command_repeat1] = aux_sym_execute_command_repeat1,
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
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(94);
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
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
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
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(277);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(94);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
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
      if (lookahead == 'e') ADVANCE(88);
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
      if (lookahead == 'e') ADVANCE(87);
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
      if (lookahead == 't') ADVANCE(93);
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
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
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
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
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
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
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
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
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
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 77},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 77},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 12},
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
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 77},
  [69] = {.lex_state = 77},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 77},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 7},
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
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 77},
  [121] = {.lex_state = 297},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 77},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 77},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 296},
  [151] = {.lex_state = 293},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 298},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 295},
  [158] = {.lex_state = 77},
  [159] = {.lex_state = 296},
  [160] = {.lex_state = 296},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 294},
  [166] = {.lex_state = 294},
  [167] = {.lex_state = 77},
  [168] = {.lex_state = 293},
  [169] = {.lex_state = 293},
  [170] = {.lex_state = 293},
  [171] = {.lex_state = 293},
  [172] = {.lex_state = 77},
  [173] = {.lex_state = 77},
  [174] = {.lex_state = 77},
  [175] = {.lex_state = 293},
  [176] = {.lex_state = 293},
  [177] = {.lex_state = 293},
  [178] = {.lex_state = 294},
  [179] = {.lex_state = 294},
  [180] = {.lex_state = 293},
  [181] = {.lex_state = 77},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 294},
  [184] = {.lex_state = 77},
  [185] = {.lex_state = 77},
  [186] = {.lex_state = 296},
  [187] = {.lex_state = 293},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 293},
  [190] = {.lex_state = 294},
  [191] = {.lex_state = 293},
  [192] = {.lex_state = 77},
  [193] = {.lex_state = 294},
  [194] = {.lex_state = 293},
  [195] = {.lex_state = 293},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 293},
  [198] = {.lex_state = 294},
  [199] = {.lex_state = 293},
  [200] = {.lex_state = 293},
  [201] = {.lex_state = 293},
  [202] = {.lex_state = 77},
  [203] = {.lex_state = 77},
  [204] = {.lex_state = 77},
  [205] = {.lex_state = 293},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 293},
  [208] = {.lex_state = 293},
  [209] = {.lex_state = 293},
  [210] = {.lex_state = 293},
  [211] = {.lex_state = 293},
  [212] = {.lex_state = 293},
  [213] = {.lex_state = 77},
  [214] = {.lex_state = 293},
  [215] = {.lex_state = 293},
  [216] = {.lex_state = 77},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 77},
  [219] = {.lex_state = 293},
  [220] = {.lex_state = 77},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 77},
  [223] = {.lex_state = 293},
  [224] = {.lex_state = 293},
  [225] = {.lex_state = 293},
  [226] = {.lex_state = 293},
  [227] = {.lex_state = 293},
  [228] = {.lex_state = 77},
  [229] = {.lex_state = 77},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 293},
  [232] = {.lex_state = 293},
  [233] = {.lex_state = 77},
  [234] = {.lex_state = 293},
  [235] = {.lex_state = 77},
  [236] = {.lex_state = 293},
  [237] = {.lex_state = 77},
  [238] = {.lex_state = 293},
  [239] = {.lex_state = 293},
  [240] = {.lex_state = 77},
  [241] = {.lex_state = 293},
  [242] = {.lex_state = 293},
  [243] = {.lex_state = 77},
  [244] = {.lex_state = 77},
  [245] = {.lex_state = 77},
  [246] = {.lex_state = 77},
  [247] = {.lex_state = 293},
  [248] = {.lex_state = 293},
  [249] = {.lex_state = 293},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 293},
  [252] = {.lex_state = 293},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 77},
  [255] = {.lex_state = 77},
  [256] = {.lex_state = 77},
  [257] = {.lex_state = 293},
  [258] = {.lex_state = 293},
  [259] = {.lex_state = 293},
  [260] = {.lex_state = 293},
  [261] = {.lex_state = 293},
  [262] = {.lex_state = 293},
  [263] = {.lex_state = 293},
  [264] = {.lex_state = 77},
  [265] = {.lex_state = 293},
  [266] = {.lex_state = 293},
  [267] = {.lex_state = 293},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 293},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 293},
  [272] = {.lex_state = 77},
  [273] = {.lex_state = 293},
  [274] = {.lex_state = 293},
  [275] = {.lex_state = 293},
  [276] = {.lex_state = 293},
  [277] = {.lex_state = 77},
  [278] = {.lex_state = 293},
  [279] = {.lex_state = 293},
  [280] = {.lex_state = 293},
  [281] = {.lex_state = 293},
  [282] = {.lex_state = 77},
  [283] = {.lex_state = 77},
  [284] = {.lex_state = 293},
  [285] = {.lex_state = 293},
  [286] = {.lex_state = 77},
  [287] = {.lex_state = 77},
  [288] = {.lex_state = 77},
  [289] = {.lex_state = 293},
  [290] = {.lex_state = 293},
  [291] = {.lex_state = 293},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 77},
  [294] = {.lex_state = 77},
  [295] = {.lex_state = 77},
  [296] = {.lex_state = 293},
  [297] = {.lex_state = 293},
  [298] = {.lex_state = 293},
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
    [sym_root] = STATE(292),
    [sym_command] = STATE(17),
    [sym_execute_command] = STATE(96),
    [sym__legacy_execute] = STATE(96),
    [sym__line_separator] = STATE(17),
    [sym_identifier] = STATE(76),
    [sym_command_name] = STATE(35),
    [aux_sym_root_repeat1] = STATE(17),
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
    STATE(254), 1,
      sym_selector,
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 11,
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
    STATE(268), 1,
      sym_selector,
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 11,
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
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 12,
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
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 12,
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
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 12,
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
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 2,
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
    STATE(272), 12,
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
    STATE(18), 1,
      sym_string,
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym_tag,
      sym_text,
    STATE(71), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
    STATE(70), 11,
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
    STATE(18), 1,
      sym_string,
    STATE(270), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(71), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(70), 11,
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
  [640] = 13,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      sym_item_state,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
    STATE(44), 1,
      sym_item_nbt,
    STATE(49), 1,
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
  [685] = 11,
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
    STATE(39), 1,
      sym_item_nbt,
    STATE(47), 1,
      aux_sym_container_repeat1,
    STATE(59), 1,
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
  [724] = 9,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [757] = 9,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [790] = 9,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [823] = 10,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(108), 1,
      anon_sym_execute,
    ACTIONS(111), 1,
      aux_sym_identifier_token1,
    ACTIONS(114), 1,
      anon_sym_QMARK,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(102), 2,
      sym_comment,
      anon_sym_LF,
    STATE(96), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(15), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [858] = 9,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [891] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(121), 2,
      sym_comment,
      anon_sym_LF,
    STATE(96), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(15), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [926] = 7,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
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
  [954] = 7,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
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
  [982] = 8,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1012] = 8,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1042] = 8,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1072] = 7,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(137), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1100] = 8,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_nbt_object_value,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(262), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1130] = 8,
    ACTIONS(141), 1,
      aux_sym_identifier_token1,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      aux_sym_selector_number_token3,
    STATE(211), 1,
      sym_selector_value,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(207), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [1160] = 12,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      sym_item_state,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
    STATE(44), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(109), 1,
      aux_sym_nbt_path_repeat3,
    STATE(158), 1,
      aux_sym_path_repeat1,
  [1197] = 4,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(157), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1217] = 4,
    ACTIONS(166), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1237] = 2,
    ACTIONS(171), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1253] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(80), 1,
      sym_item_nbt,
    ACTIONS(175), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1275] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(87), 1,
      sym_item_nbt,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1297] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(157), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1317] = 4,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(186), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1337] = 5,
    ACTIONS(35), 1,
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
  [1359] = 6,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_command_repeat1,
    STATE(53), 1,
      aux_sym_command_repeat2,
    ACTIONS(204), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1382] = 4,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_selector_option_section,
    ACTIONS(208), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1401] = 2,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1416] = 6,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(218), 1,
      anon_sym_LF,
    STATE(55), 1,
      aux_sym_command_repeat2,
    STATE(65), 1,
      aux_sym_command_repeat1,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1439] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_item_state,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1458] = 4,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_container_repeat1,
    ACTIONS(225), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(223), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1477] = 2,
    ACTIONS(164), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1492] = 6,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_command_repeat1,
    STATE(54), 1,
      aux_sym_command_repeat2,
    ACTIONS(235), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1515] = 6,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_command_repeat2,
    STATE(65), 1,
      aux_sym_command_repeat1,
    ACTIONS(235), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1538] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_item_state,
    ACTIONS(175), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1557] = 2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1572] = 2,
    ACTIONS(243), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1587] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_container_repeat1,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1606] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      sym_item_state,
    STATE(39), 1,
      sym_item_nbt,
    STATE(47), 1,
      aux_sym_container_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    STATE(148), 1,
      aux_sym_path_repeat1,
  [1637] = 4,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1655] = 2,
    ACTIONS(258), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1669] = 4,
    ACTIONS(262), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [1687] = 4,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(267), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1705] = 5,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(235), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1725] = 5,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1745] = 5,
    ACTIONS(274), 1,
      anon_sym_,
    ACTIONS(278), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(281), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [1765] = 2,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1779] = 3,
    ACTIONS(291), 1,
      sym_number,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1795] = 2,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACE,
  [1809] = 4,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      aux_sym_path_repeat1,
    ACTIONS(302), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1827] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    ACTIONS(308), 1,
      anon_sym_detect,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(108), 2,
      sym_command,
      sym__legacy_execute,
  [1853] = 8,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    ACTIONS(310), 1,
      anon_sym_detect,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(101), 2,
      sym_command,
      sym__legacy_execute,
  [1879] = 2,
    ACTIONS(225), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1893] = 2,
    ACTIONS(314), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1907] = 4,
    ACTIONS(67), 1,
      anon_sym_execute,
    ACTIONS(316), 1,
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
  [1925] = 4,
    ACTIONS(321), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_command_repeat1,
    ACTIONS(324), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [1943] = 2,
    ACTIONS(328), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [1957] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    ACTIONS(332), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(107), 2,
      sym_command,
      sym_execute_command,
  [1980] = 2,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [1993] = 2,
    ACTIONS(336), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(334), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2006] = 2,
    ACTIONS(324), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2019] = 2,
    ACTIONS(340), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2032] = 3,
    ACTIONS(344), 1,
      anon_sym_,
    ACTIONS(347), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2047] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(94), 2,
      sym_command,
      sym__legacy_execute,
  [2070] = 2,
    ACTIONS(351), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(349), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2083] = 8,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_nbt_identifier,
    ACTIONS(355), 1,
      aux_sym_identifier_token1,
    ACTIONS(357), 1,
      sym_number,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(239), 1,
      sym_selector_score_key,
    STATE(290), 1,
      sym_string,
  [2108] = 2,
    ACTIONS(363), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(361), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2121] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    ACTIONS(332), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(99), 2,
      sym_command,
      sym_execute_command,
  [2144] = 2,
    ACTIONS(367), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(365), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2157] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    ACTIONS(332), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(97), 2,
      sym_command,
      sym_execute_command,
  [2180] = 2,
    ACTIONS(179), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2193] = 2,
    ACTIONS(371), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(369), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2206] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 2,
      sym_command,
      sym__legacy_execute,
  [2229] = 2,
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
  [2242] = 2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2255] = 8,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_nbt_identifier,
    ACTIONS(355), 1,
      aux_sym_identifier_token1,
    ACTIONS(357), 1,
      sym_number,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_selector_score_key,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(290), 1,
      sym_string,
  [2280] = 3,
    ACTIONS(379), 1,
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
  [2295] = 2,
    ACTIONS(384), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(382), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2308] = 2,
    ACTIONS(388), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(386), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2321] = 2,
    ACTIONS(392), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(390), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2334] = 2,
    ACTIONS(396), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(394), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_QMARK,
  [2347] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(105), 2,
      sym_command,
      sym__legacy_execute,
  [2370] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_execute,
    STATE(35), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
    STATE(106), 2,
      sym_command,
      sym__legacy_execute,
  [2393] = 2,
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
  [2406] = 2,
    ACTIONS(404), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(402), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2418] = 7,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_nbt_identifier,
    ACTIONS(355), 1,
      aux_sym_identifier_token1,
    ACTIONS(357), 1,
      sym_number,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(239), 1,
      sym_selector_score_key,
    STATE(290), 1,
      sym_string,
  [2440] = 2,
    ACTIONS(408), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2452] = 2,
    ACTIONS(412), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(410), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2464] = 2,
    ACTIONS(416), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2476] = 2,
    ACTIONS(420), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2488] = 2,
    ACTIONS(424), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2500] = 2,
    ACTIONS(428), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2512] = 2,
    ACTIONS(221), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2524] = 2,
    ACTIONS(281), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2536] = 2,
    ACTIONS(235), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2548] = 2,
    ACTIONS(432), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2560] = 2,
    ACTIONS(436), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2572] = 2,
    ACTIONS(440), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2584] = 2,
    ACTIONS(444), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
      anon_sym_QMARK,
  [2596] = 6,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_,
    ACTIONS(446), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
  [2615] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_,
    STATE(30), 1,
      sym_item_state,
    STATE(44), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2634] = 5,
    ACTIONS(450), 1,
      aux_sym_identifier_token1,
    ACTIONS(452), 1,
      sym_number,
    STATE(245), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2651] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_string,
    STATE(296), 1,
      sym_nbt_object_key,
    ACTIONS(357), 2,
      sym_nbt_identifier,
      sym_number,
  [2668] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_string,
    STATE(296), 1,
      sym_nbt_object_key,
    ACTIONS(357), 2,
      sym_nbt_identifier,
      sym_number,
  [2685] = 6,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(32), 1,
      aux_sym_nbt_path_repeat2,
    STATE(109), 1,
      aux_sym_nbt_path_repeat3,
  [2704] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_string,
    STATE(296), 1,
      sym_nbt_object_key,
    ACTIONS(357), 2,
      sym_nbt_identifier,
      sym_number,
  [2721] = 5,
    ACTIONS(450), 1,
      aux_sym_identifier_token1,
    ACTIONS(452), 1,
      sym_number,
    STATE(235), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2738] = 4,
    STATE(258), 1,
      sym_selector_score_value,
    STATE(259), 1,
      sym_selector_number,
    ACTIONS(149), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(151), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2753] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_string,
    STATE(296), 1,
      sym_nbt_object_key,
    ACTIONS(357), 2,
      sym_nbt_identifier,
      sym_number,
  [2770] = 5,
    ACTIONS(462), 1,
      aux_sym_identifier_token1,
    ACTIONS(464), 1,
      sym_number,
    STATE(193), 1,
      sym_boolean,
    STATE(198), 1,
      sym_state_value,
    ACTIONS(466), 2,
      anon_sym_true,
      anon_sym_false,
  [2787] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_item_state,
    STATE(39), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2806] = 2,
    ACTIONS(468), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(470), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2817] = 6,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_,
    STATE(30), 1,
      sym_item_state,
    STATE(44), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2836] = 4,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(290), 1,
      sym_string,
    STATE(296), 1,
      sym_nbt_object_key,
    ACTIONS(357), 2,
      sym_nbt_identifier,
      sym_number,
  [2850] = 4,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      aux_sym_string_token1,
    ACTIONS(478), 1,
      anon_sym_BSLASH,
    STATE(135), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2864] = 4,
    ACTIONS(478), 1,
      anon_sym_BSLASH,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      aux_sym_string_token1,
    STATE(136), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2878] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(484), 1,
      sym_namespace,
    STATE(110), 1,
      sym_identifier,
    STATE(213), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2892] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(486), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
  [2908] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(484), 1,
      sym_namespace,
    STATE(122), 1,
      sym_identifier,
    STATE(206), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2922] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(204), 1,
      sym_location,
    STATE(222), 1,
      sym_coordinate,
  [2938] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(222), 1,
      sym_coordinate,
    STATE(240), 1,
      sym_location,
  [2954] = 1,
    ACTIONS(490), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2962] = 4,
    ACTIONS(478), 1,
      anon_sym_BSLASH,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      aux_sym_string_token1,
    STATE(124), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2976] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(222), 1,
      sym_coordinate,
    STATE(229), 1,
      sym_location,
  [2992] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(496), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
  [3008] = 4,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_string_token1,
    ACTIONS(503), 1,
      anon_sym_BSLASH,
    STATE(135), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3022] = 4,
    ACTIONS(476), 1,
      aux_sym_string_token1,
    ACTIONS(478), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(135), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3036] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(508), 1,
      anon_sym_execute,
    STATE(42), 1,
      sym_command_name,
    STATE(76), 1,
      sym_identifier,
  [3052] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(218), 1,
      sym_location,
    STATE(222), 1,
      sym_coordinate,
  [3068] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(72), 1,
      sym_coordinate,
  [3081] = 3,
    ACTIONS(512), 1,
      aux_sym_identifier_token1,
    STATE(221), 1,
      sym_state_key,
    ACTIONS(510), 2,
      anon_sym_STAR,
      sym_number,
  [3092] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(93), 1,
      sym_coordinate,
  [3105] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(488), 1,
      sym_number,
    STATE(295), 1,
      sym_coordinate,
  [3118] = 3,
    ACTIONS(512), 1,
      aux_sym_identifier_token1,
    STATE(217), 1,
      sym_state_key,
    ACTIONS(514), 2,
      anon_sym_STAR,
      sym_number,
  [3129] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(516), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3142] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(518), 1,
      sym_nbt_identifier,
    STATE(255), 1,
      sym_selector,
  [3152] = 3,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(520), 1,
      aux_sym_identifier_token1,
    STATE(48), 1,
      sym_identifier,
  [3162] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(522), 1,
      sym_number,
    STATE(62), 1,
      sym_identifier,
  [3172] = 3,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(297), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [3182] = 2,
    ACTIONS(526), 1,
      aux_sym_string_token1,
    ACTIONS(524), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3190] = 3,
    ACTIONS(528), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_selector_option_section_repeat1,
  [3200] = 3,
    ACTIONS(532), 1,
      aux_sym_nbt_path_token1,
    STATE(187), 1,
      aux_sym_selector_score_repeat1,
    STATE(200), 1,
      aux_sym_selector_nbt_repeat1,
  [3210] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 1,
      sym_text,
    STATE(41), 1,
      sym_string,
  [3220] = 3,
    ACTIONS(534), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(536), 1,
      aux_sym_nbt_path_token2,
    STATE(201), 1,
      aux_sym_item_state_repeat1,
  [3230] = 3,
    ACTIONS(538), 1,
      aux_sym_identifier_token1,
    STATE(284), 1,
      sym_selector_key,
    STATE(285), 1,
      sym_selector_option,
  [3240] = 3,
    ACTIONS(540), 1,
      aux_sym_identifier_token1,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_state_key,
  [3250] = 3,
    ACTIONS(544), 1,
      aux_sym_identifier_token1,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_selector_score_key,
  [3260] = 3,
    ACTIONS(548), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    ACTIONS(552), 1,
      anon_sym_COMMA,
  [3270] = 3,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_path_repeat1,
  [3280] = 3,
    ACTIONS(554), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_selector_option_section_repeat1,
  [3290] = 3,
    ACTIONS(528), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_selector_option_section_repeat1,
  [3300] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(561), 1,
      sym_namespace,
    STATE(68), 1,
      sym_identifier,
  [3310] = 3,
    ACTIONS(540), 1,
      aux_sym_identifier_token1,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_state_key,
  [3320] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(565), 1,
      sym_nbt_identifier,
    STATE(286), 1,
      sym_selector,
  [3330] = 2,
    ACTIONS(544), 1,
      aux_sym_identifier_token1,
    STATE(242), 1,
      sym_selector_score_key,
  [3337] = 2,
    ACTIONS(567), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [3344] = 2,
    ACTIONS(571), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [3351] = 2,
    ACTIONS(575), 1,
      anon_sym_,
    STATE(167), 1,
      aux_sym_execute_command_repeat1,
  [3358] = 2,
    ACTIONS(578), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_array_repeat1,
  [3365] = 2,
    ACTIONS(580), 1,
      aux_sym_nbt_path_token1,
    STATE(201), 1,
      aux_sym_item_state_repeat1,
  [3372] = 2,
    ACTIONS(582), 1,
      aux_sym_nbt_path_token1,
    STATE(191), 1,
      aux_sym_nbt_object_repeat1,
  [3379] = 2,
    ACTIONS(584), 1,
      aux_sym_nbt_path_token1,
    STATE(171), 1,
      aux_sym_item_state_repeat1,
  [3386] = 2,
    ACTIONS(587), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3393] = 2,
    ACTIONS(589), 1,
      anon_sym_,
    STATE(181), 1,
      aux_sym_execute_command_repeat1,
  [3400] = 2,
    ACTIONS(591), 1,
      anon_sym_EQ,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [3407] = 2,
    ACTIONS(595), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_object_repeat1,
  [3414] = 2,
    ACTIONS(597), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3421] = 2,
    ACTIONS(600), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_selector_score_repeat1,
  [3428] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(605), 1,
      anon_sym_COMMA,
  [3435] = 2,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      aux_sym_nbt_path_token1,
  [3442] = 2,
    ACTIONS(607), 1,
      aux_sym_nbt_path_token1,
    STATE(180), 1,
      aux_sym_selector_nbt_repeat1,
  [3449] = 2,
    ACTIONS(610), 1,
      anon_sym_,
    STATE(167), 1,
      aux_sym_execute_command_repeat1,
  [3456] = 2,
    ACTIONS(540), 1,
      aux_sym_identifier_token1,
    STATE(252), 1,
      sym_state_key,
  [3463] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [3470] = 2,
    ACTIONS(589), 1,
      anon_sym_,
    STATE(167), 1,
      aux_sym_execute_command_repeat1,
  [3477] = 2,
    ACTIONS(616), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3484] = 2,
    ACTIONS(618), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
  [3491] = 2,
    ACTIONS(622), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_selector_score_repeat1,
  [3498] = 2,
    ACTIONS(520), 1,
      aux_sym_identifier_token1,
    STATE(69), 1,
      sym_identifier,
  [3505] = 2,
    ACTIONS(624), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_object_repeat1,
  [3512] = 2,
    ACTIONS(627), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(629), 1,
      anon_sym_COMMA,
  [3519] = 2,
    ACTIONS(631), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_object_repeat1,
  [3526] = 2,
    ACTIONS(633), 1,
      anon_sym_,
    STATE(181), 1,
      aux_sym_execute_command_repeat1,
  [3533] = 2,
    ACTIONS(635), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(637), 1,
      anon_sym_COMMA,
  [3540] = 2,
    ACTIONS(639), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3547] = 2,
    ACTIONS(641), 1,
      aux_sym_nbt_path_token1,
    STATE(199), 1,
      aux_sym_nbt_array_repeat1,
  [3554] = 2,
    ACTIONS(520), 1,
      aux_sym_identifier_token1,
    STATE(120), 1,
      sym_identifier,
  [3561] = 2,
    ACTIONS(643), 1,
      aux_sym_nbt_path_token1,
    STATE(175), 1,
      aux_sym_nbt_object_repeat1,
  [3568] = 2,
    ACTIONS(645), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(647), 1,
      anon_sym_COMMA,
  [3575] = 2,
    ACTIONS(649), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3582] = 2,
    ACTIONS(651), 1,
      aux_sym_nbt_path_token1,
    STATE(180), 1,
      aux_sym_selector_nbt_repeat1,
  [3589] = 2,
    ACTIONS(653), 1,
      aux_sym_nbt_path_token1,
    STATE(171), 1,
      aux_sym_item_state_repeat1,
  [3596] = 1,
    ACTIONS(655), 1,
      anon_sym_EQ,
  [3600] = 1,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [3604] = 1,
    ACTIONS(657), 1,
      anon_sym_,
  [3608] = 1,
    ACTIONS(659), 1,
      aux_sym_nbt_path_token1,
  [3612] = 1,
    ACTIONS(472), 1,
      anon_sym_,
  [3616] = 1,
    ACTIONS(661), 1,
      aux_sym_nbt_path_token1,
  [3620] = 1,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
  [3624] = 1,
    ACTIONS(666), 1,
      aux_sym_nbt_path_token1,
  [3628] = 1,
    ACTIONS(668), 1,
      aux_sym_nbt_path_token1,
  [3632] = 1,
    ACTIONS(670), 1,
      aux_sym_nbt_path_token1,
  [3636] = 1,
    ACTIONS(672), 1,
      aux_sym_nbt_path_token1,
  [3640] = 1,
    ACTIONS(448), 1,
      anon_sym_,
  [3644] = 1,
    ACTIONS(674), 1,
      aux_sym_nbt_path_token1,
  [3648] = 1,
    ACTIONS(676), 1,
      aux_sym_nbt_path_token1,
  [3652] = 1,
    ACTIONS(678), 1,
      anon_sym_,
  [3656] = 1,
    ACTIONS(680), 1,
      anon_sym_EQ,
  [3660] = 1,
    ACTIONS(682), 1,
      anon_sym_,
  [3664] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3668] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3672] = 1,
    ACTIONS(688), 1,
      anon_sym_EQ,
  [3676] = 1,
    ACTIONS(690), 1,
      anon_sym_,
  [3680] = 1,
    ACTIONS(692), 1,
      aux_sym_nbt_path_token1,
  [3684] = 1,
    ACTIONS(695), 1,
      aux_sym_nbt_path_token1,
  [3688] = 1,
    ACTIONS(697), 1,
      aux_sym_nbt_path_token1,
  [3692] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3696] = 1,
    ACTIONS(702), 1,
      aux_sym_nbt_path_token1,
  [3700] = 1,
    ACTIONS(704), 1,
      anon_sym_,
  [3704] = 1,
    ACTIONS(706), 1,
      anon_sym_,
  [3708] = 1,
    ACTIONS(536), 1,
      aux_sym_nbt_path_token2,
  [3712] = 1,
    ACTIONS(708), 1,
      aux_sym_nbt_path_token1,
  [3716] = 1,
    ACTIONS(710), 1,
      aux_sym_nbt_path_token1,
  [3720] = 1,
    ACTIONS(712), 1,
      anon_sym_EQ,
  [3724] = 1,
    ACTIONS(714), 1,
      aux_sym_nbt_path_token1,
  [3728] = 1,
    ACTIONS(716), 1,
      anon_sym_,
  [3732] = 1,
    ACTIONS(718), 1,
      aux_sym_nbt_path_token1,
  [3736] = 1,
    ACTIONS(720), 1,
      anon_sym_COLON,
  [3740] = 1,
    ACTIONS(722), 1,
      aux_sym_nbt_path_token1,
  [3744] = 1,
    ACTIONS(724), 1,
      aux_sym_nbt_path_token1,
  [3748] = 1,
    ACTIONS(726), 1,
      anon_sym_,
  [3752] = 1,
    ACTIONS(728), 1,
      aux_sym_nbt_path_token1,
  [3756] = 1,
    ACTIONS(730), 1,
      aux_sym_nbt_path_token1,
  [3760] = 1,
    ACTIONS(732), 1,
      anon_sym_,
  [3764] = 1,
    ACTIONS(734), 1,
      anon_sym_,
  [3768] = 1,
    ACTIONS(736), 1,
      anon_sym_,
  [3772] = 1,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
  [3776] = 1,
    ACTIONS(740), 1,
      aux_sym_nbt_path_token1,
  [3780] = 1,
    ACTIONS(742), 1,
      aux_sym_nbt_path_token1,
  [3784] = 1,
    ACTIONS(744), 1,
      aux_sym_nbt_path_token1,
  [3788] = 1,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [3792] = 1,
    ACTIONS(746), 1,
      aux_sym_nbt_path_token1,
  [3796] = 1,
    ACTIONS(748), 1,
      aux_sym_nbt_path_token1,
  [3800] = 1,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
  [3804] = 1,
    ACTIONS(752), 1,
      anon_sym_,
  [3808] = 1,
    ACTIONS(755), 1,
      anon_sym_,
  [3812] = 1,
    ACTIONS(757), 1,
      anon_sym_,
  [3816] = 1,
    ACTIONS(759), 1,
      aux_sym_nbt_path_token1,
  [3820] = 1,
    ACTIONS(761), 1,
      aux_sym_nbt_path_token1,
  [3824] = 1,
    ACTIONS(763), 1,
      aux_sym_nbt_path_token1,
  [3828] = 1,
    ACTIONS(765), 1,
      aux_sym_nbt_path_token1,
  [3832] = 1,
    ACTIONS(767), 1,
      aux_sym_nbt_path_token1,
  [3836] = 1,
    ACTIONS(769), 1,
      aux_sym_nbt_path_token1,
  [3840] = 1,
    ACTIONS(771), 1,
      aux_sym_nbt_path_token1,
  [3844] = 1,
    ACTIONS(773), 1,
      anon_sym_COLON,
  [3848] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3852] = 1,
    ACTIONS(777), 1,
      aux_sym_nbt_path_token1,
  [3856] = 1,
    ACTIONS(779), 1,
      aux_sym_nbt_path_token1,
  [3860] = 1,
    ACTIONS(781), 1,
      anon_sym_,
  [3864] = 1,
    ACTIONS(386), 1,
      aux_sym_nbt_path_token1,
  [3868] = 1,
    ACTIONS(784), 1,
      anon_sym_,
  [3872] = 1,
    ACTIONS(338), 1,
      aux_sym_nbt_path_token1,
  [3876] = 1,
    ACTIONS(786), 1,
      anon_sym_,
  [3880] = 1,
    ACTIONS(241), 1,
      aux_sym_nbt_path_token1,
  [3884] = 1,
    ACTIONS(788), 1,
      aux_sym_nbt_path_token1,
  [3888] = 1,
    ACTIONS(790), 1,
      aux_sym_nbt_path_token1,
  [3892] = 1,
    ACTIONS(212), 1,
      aux_sym_nbt_path_token1,
  [3896] = 1,
    ACTIONS(291), 1,
      sym_number,
  [3900] = 1,
    ACTIONS(369), 1,
      aux_sym_nbt_path_token1,
  [3904] = 1,
    ACTIONS(256), 1,
      aux_sym_nbt_path_token1,
  [3908] = 1,
    ACTIONS(390), 1,
      aux_sym_nbt_path_token1,
  [3912] = 1,
    ACTIONS(312), 1,
      aux_sym_nbt_path_token1,
  [3916] = 1,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [3920] = 1,
    ACTIONS(637), 1,
      anon_sym_,
  [3924] = 1,
    ACTIONS(792), 1,
      aux_sym_nbt_path_token1,
  [3928] = 1,
    ACTIONS(794), 1,
      aux_sym_nbt_path_token1,
  [3932] = 1,
    ACTIONS(796), 1,
      anon_sym_,
  [3936] = 1,
    ACTIONS(798), 1,
      anon_sym_,
  [3940] = 1,
    ACTIONS(800), 1,
      anon_sym_,
  [3944] = 1,
    ACTIONS(802), 1,
      aux_sym_nbt_path_token1,
  [3948] = 1,
    ACTIONS(804), 1,
      aux_sym_nbt_path_token1,
  [3952] = 1,
    ACTIONS(806), 1,
      aux_sym_nbt_path_token1,
  [3956] = 1,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [3960] = 1,
    ACTIONS(810), 1,
      anon_sym_,
  [3964] = 1,
    ACTIONS(812), 1,
      anon_sym_,
  [3968] = 1,
    ACTIONS(814), 1,
      anon_sym_,
  [3972] = 1,
    ACTIONS(816), 1,
      aux_sym_nbt_path_token1,
  [3976] = 1,
    ACTIONS(818), 1,
      aux_sym_nbt_path_token1,
  [3980] = 1,
    ACTIONS(820), 1,
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
  [SMALL_STATE(11)] = 685,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 757,
  [SMALL_STATE(14)] = 790,
  [SMALL_STATE(15)] = 823,
  [SMALL_STATE(16)] = 858,
  [SMALL_STATE(17)] = 891,
  [SMALL_STATE(18)] = 926,
  [SMALL_STATE(19)] = 954,
  [SMALL_STATE(20)] = 982,
  [SMALL_STATE(21)] = 1012,
  [SMALL_STATE(22)] = 1042,
  [SMALL_STATE(23)] = 1072,
  [SMALL_STATE(24)] = 1100,
  [SMALL_STATE(25)] = 1130,
  [SMALL_STATE(26)] = 1160,
  [SMALL_STATE(27)] = 1197,
  [SMALL_STATE(28)] = 1217,
  [SMALL_STATE(29)] = 1237,
  [SMALL_STATE(30)] = 1253,
  [SMALL_STATE(31)] = 1275,
  [SMALL_STATE(32)] = 1297,
  [SMALL_STATE(33)] = 1317,
  [SMALL_STATE(34)] = 1337,
  [SMALL_STATE(35)] = 1359,
  [SMALL_STATE(36)] = 1382,
  [SMALL_STATE(37)] = 1401,
  [SMALL_STATE(38)] = 1416,
  [SMALL_STATE(39)] = 1439,
  [SMALL_STATE(40)] = 1458,
  [SMALL_STATE(41)] = 1477,
  [SMALL_STATE(42)] = 1492,
  [SMALL_STATE(43)] = 1515,
  [SMALL_STATE(44)] = 1538,
  [SMALL_STATE(45)] = 1557,
  [SMALL_STATE(46)] = 1572,
  [SMALL_STATE(47)] = 1587,
  [SMALL_STATE(48)] = 1606,
  [SMALL_STATE(49)] = 1637,
  [SMALL_STATE(50)] = 1655,
  [SMALL_STATE(51)] = 1669,
  [SMALL_STATE(52)] = 1687,
  [SMALL_STATE(53)] = 1705,
  [SMALL_STATE(54)] = 1725,
  [SMALL_STATE(55)] = 1745,
  [SMALL_STATE(56)] = 1765,
  [SMALL_STATE(57)] = 1779,
  [SMALL_STATE(58)] = 1795,
  [SMALL_STATE(59)] = 1809,
  [SMALL_STATE(60)] = 1827,
  [SMALL_STATE(61)] = 1853,
  [SMALL_STATE(62)] = 1879,
  [SMALL_STATE(63)] = 1893,
  [SMALL_STATE(64)] = 1907,
  [SMALL_STATE(65)] = 1925,
  [SMALL_STATE(66)] = 1943,
  [SMALL_STATE(67)] = 1957,
  [SMALL_STATE(68)] = 1980,
  [SMALL_STATE(69)] = 1993,
  [SMALL_STATE(70)] = 2006,
  [SMALL_STATE(71)] = 2019,
  [SMALL_STATE(72)] = 2032,
  [SMALL_STATE(73)] = 2047,
  [SMALL_STATE(74)] = 2070,
  [SMALL_STATE(75)] = 2083,
  [SMALL_STATE(76)] = 2108,
  [SMALL_STATE(77)] = 2121,
  [SMALL_STATE(78)] = 2144,
  [SMALL_STATE(79)] = 2157,
  [SMALL_STATE(80)] = 2180,
  [SMALL_STATE(81)] = 2193,
  [SMALL_STATE(82)] = 2206,
  [SMALL_STATE(83)] = 2229,
  [SMALL_STATE(84)] = 2242,
  [SMALL_STATE(85)] = 2255,
  [SMALL_STATE(86)] = 2280,
  [SMALL_STATE(87)] = 2295,
  [SMALL_STATE(88)] = 2308,
  [SMALL_STATE(89)] = 2321,
  [SMALL_STATE(90)] = 2334,
  [SMALL_STATE(91)] = 2347,
  [SMALL_STATE(92)] = 2370,
  [SMALL_STATE(93)] = 2393,
  [SMALL_STATE(94)] = 2406,
  [SMALL_STATE(95)] = 2418,
  [SMALL_STATE(96)] = 2440,
  [SMALL_STATE(97)] = 2452,
  [SMALL_STATE(98)] = 2464,
  [SMALL_STATE(99)] = 2476,
  [SMALL_STATE(100)] = 2488,
  [SMALL_STATE(101)] = 2500,
  [SMALL_STATE(102)] = 2512,
  [SMALL_STATE(103)] = 2524,
  [SMALL_STATE(104)] = 2536,
  [SMALL_STATE(105)] = 2548,
  [SMALL_STATE(106)] = 2560,
  [SMALL_STATE(107)] = 2572,
  [SMALL_STATE(108)] = 2584,
  [SMALL_STATE(109)] = 2596,
  [SMALL_STATE(110)] = 2615,
  [SMALL_STATE(111)] = 2634,
  [SMALL_STATE(112)] = 2651,
  [SMALL_STATE(113)] = 2668,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2704,
  [SMALL_STATE(116)] = 2721,
  [SMALL_STATE(117)] = 2738,
  [SMALL_STATE(118)] = 2753,
  [SMALL_STATE(119)] = 2770,
  [SMALL_STATE(120)] = 2787,
  [SMALL_STATE(121)] = 2806,
  [SMALL_STATE(122)] = 2817,
  [SMALL_STATE(123)] = 2836,
  [SMALL_STATE(124)] = 2850,
  [SMALL_STATE(125)] = 2864,
  [SMALL_STATE(126)] = 2878,
  [SMALL_STATE(127)] = 2892,
  [SMALL_STATE(128)] = 2908,
  [SMALL_STATE(129)] = 2922,
  [SMALL_STATE(130)] = 2938,
  [SMALL_STATE(131)] = 2954,
  [SMALL_STATE(132)] = 2962,
  [SMALL_STATE(133)] = 2976,
  [SMALL_STATE(134)] = 2992,
  [SMALL_STATE(135)] = 3008,
  [SMALL_STATE(136)] = 3022,
  [SMALL_STATE(137)] = 3036,
  [SMALL_STATE(138)] = 3052,
  [SMALL_STATE(139)] = 3068,
  [SMALL_STATE(140)] = 3081,
  [SMALL_STATE(141)] = 3092,
  [SMALL_STATE(142)] = 3105,
  [SMALL_STATE(143)] = 3118,
  [SMALL_STATE(144)] = 3129,
  [SMALL_STATE(145)] = 3142,
  [SMALL_STATE(146)] = 3152,
  [SMALL_STATE(147)] = 3162,
  [SMALL_STATE(148)] = 3172,
  [SMALL_STATE(149)] = 3182,
  [SMALL_STATE(150)] = 3190,
  [SMALL_STATE(151)] = 3200,
  [SMALL_STATE(152)] = 3210,
  [SMALL_STATE(153)] = 3220,
  [SMALL_STATE(154)] = 3230,
  [SMALL_STATE(155)] = 3240,
  [SMALL_STATE(156)] = 3250,
  [SMALL_STATE(157)] = 3260,
  [SMALL_STATE(158)] = 3270,
  [SMALL_STATE(159)] = 3280,
  [SMALL_STATE(160)] = 3290,
  [SMALL_STATE(161)] = 3300,
  [SMALL_STATE(162)] = 3310,
  [SMALL_STATE(163)] = 3320,
  [SMALL_STATE(164)] = 3330,
  [SMALL_STATE(165)] = 3337,
  [SMALL_STATE(166)] = 3344,
  [SMALL_STATE(167)] = 3351,
  [SMALL_STATE(168)] = 3358,
  [SMALL_STATE(169)] = 3365,
  [SMALL_STATE(170)] = 3372,
  [SMALL_STATE(171)] = 3379,
  [SMALL_STATE(172)] = 3386,
  [SMALL_STATE(173)] = 3393,
  [SMALL_STATE(174)] = 3400,
  [SMALL_STATE(175)] = 3407,
  [SMALL_STATE(176)] = 3414,
  [SMALL_STATE(177)] = 3421,
  [SMALL_STATE(178)] = 3428,
  [SMALL_STATE(179)] = 3435,
  [SMALL_STATE(180)] = 3442,
  [SMALL_STATE(181)] = 3449,
  [SMALL_STATE(182)] = 3456,
  [SMALL_STATE(183)] = 3463,
  [SMALL_STATE(184)] = 3470,
  [SMALL_STATE(185)] = 3477,
  [SMALL_STATE(186)] = 3484,
  [SMALL_STATE(187)] = 3491,
  [SMALL_STATE(188)] = 3498,
  [SMALL_STATE(189)] = 3505,
  [SMALL_STATE(190)] = 3512,
  [SMALL_STATE(191)] = 3519,
  [SMALL_STATE(192)] = 3526,
  [SMALL_STATE(193)] = 3533,
  [SMALL_STATE(194)] = 3540,
  [SMALL_STATE(195)] = 3547,
  [SMALL_STATE(196)] = 3554,
  [SMALL_STATE(197)] = 3561,
  [SMALL_STATE(198)] = 3568,
  [SMALL_STATE(199)] = 3575,
  [SMALL_STATE(200)] = 3582,
  [SMALL_STATE(201)] = 3589,
  [SMALL_STATE(202)] = 3596,
  [SMALL_STATE(203)] = 3600,
  [SMALL_STATE(204)] = 3604,
  [SMALL_STATE(205)] = 3608,
  [SMALL_STATE(206)] = 3612,
  [SMALL_STATE(207)] = 3616,
  [SMALL_STATE(208)] = 3620,
  [SMALL_STATE(209)] = 3624,
  [SMALL_STATE(210)] = 3628,
  [SMALL_STATE(211)] = 3632,
  [SMALL_STATE(212)] = 3636,
  [SMALL_STATE(213)] = 3640,
  [SMALL_STATE(214)] = 3644,
  [SMALL_STATE(215)] = 3648,
  [SMALL_STATE(216)] = 3652,
  [SMALL_STATE(217)] = 3656,
  [SMALL_STATE(218)] = 3660,
  [SMALL_STATE(219)] = 3664,
  [SMALL_STATE(220)] = 3668,
  [SMALL_STATE(221)] = 3672,
  [SMALL_STATE(222)] = 3676,
  [SMALL_STATE(223)] = 3680,
  [SMALL_STATE(224)] = 3684,
  [SMALL_STATE(225)] = 3688,
  [SMALL_STATE(226)] = 3692,
  [SMALL_STATE(227)] = 3696,
  [SMALL_STATE(228)] = 3700,
  [SMALL_STATE(229)] = 3704,
  [SMALL_STATE(230)] = 3708,
  [SMALL_STATE(231)] = 3712,
  [SMALL_STATE(232)] = 3716,
  [SMALL_STATE(233)] = 3720,
  [SMALL_STATE(234)] = 3724,
  [SMALL_STATE(235)] = 3728,
  [SMALL_STATE(236)] = 3732,
  [SMALL_STATE(237)] = 3736,
  [SMALL_STATE(238)] = 3740,
  [SMALL_STATE(239)] = 3744,
  [SMALL_STATE(240)] = 3748,
  [SMALL_STATE(241)] = 3752,
  [SMALL_STATE(242)] = 3756,
  [SMALL_STATE(243)] = 3760,
  [SMALL_STATE(244)] = 3764,
  [SMALL_STATE(245)] = 3768,
  [SMALL_STATE(246)] = 3772,
  [SMALL_STATE(247)] = 3776,
  [SMALL_STATE(248)] = 3780,
  [SMALL_STATE(249)] = 3784,
  [SMALL_STATE(250)] = 3788,
  [SMALL_STATE(251)] = 3792,
  [SMALL_STATE(252)] = 3796,
  [SMALL_STATE(253)] = 3800,
  [SMALL_STATE(254)] = 3804,
  [SMALL_STATE(255)] = 3808,
  [SMALL_STATE(256)] = 3812,
  [SMALL_STATE(257)] = 3816,
  [SMALL_STATE(258)] = 3820,
  [SMALL_STATE(259)] = 3824,
  [SMALL_STATE(260)] = 3828,
  [SMALL_STATE(261)] = 3832,
  [SMALL_STATE(262)] = 3836,
  [SMALL_STATE(263)] = 3840,
  [SMALL_STATE(264)] = 3844,
  [SMALL_STATE(265)] = 3848,
  [SMALL_STATE(266)] = 3852,
  [SMALL_STATE(267)] = 3856,
  [SMALL_STATE(268)] = 3860,
  [SMALL_STATE(269)] = 3864,
  [SMALL_STATE(270)] = 3868,
  [SMALL_STATE(271)] = 3872,
  [SMALL_STATE(272)] = 3876,
  [SMALL_STATE(273)] = 3880,
  [SMALL_STATE(274)] = 3884,
  [SMALL_STATE(275)] = 3888,
  [SMALL_STATE(276)] = 3892,
  [SMALL_STATE(277)] = 3896,
  [SMALL_STATE(278)] = 3900,
  [SMALL_STATE(279)] = 3904,
  [SMALL_STATE(280)] = 3908,
  [SMALL_STATE(281)] = 3912,
  [SMALL_STATE(282)] = 3916,
  [SMALL_STATE(283)] = 3920,
  [SMALL_STATE(284)] = 3924,
  [SMALL_STATE(285)] = 3928,
  [SMALL_STATE(286)] = 3932,
  [SMALL_STATE(287)] = 3936,
  [SMALL_STATE(288)] = 3940,
  [SMALL_STATE(289)] = 3944,
  [SMALL_STATE(290)] = 3948,
  [SMALL_STATE(291)] = 3952,
  [SMALL_STATE(292)] = 3956,
  [SMALL_STATE(293)] = 3960,
  [SMALL_STATE(294)] = 3964,
  [SMALL_STATE(295)] = 3968,
  [SMALL_STATE(296)] = 3972,
  [SMALL_STATE(297)] = 3976,
  [SMALL_STATE(298)] = 3980,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(161),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(161),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(134),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(172),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(152),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(232),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(152),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(152),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(232),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(232),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(104),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(147),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(102),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(161),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(51),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(161),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 4), SHIFT(100),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(161),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(29),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(141),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(135),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(253),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(154),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(182),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(21),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(164),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(95),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(123),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(25),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(130),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(138),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [808] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
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
