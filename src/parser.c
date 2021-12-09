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
#define STATE_COUNT 285
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
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
  aux_sym_identifier_token1 = 23,
  sym_namespace = 24,
  sym_text = 25,
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
  sym_namespaced_container = 56,
  sym_root = 57,
  sym_command = 58,
  sym__command_choices = 59,
  sym_execute_command = 60,
  sym__legacy_execute = 61,
  sym_execute_keyword = 62,
  sym_identifier = 63,
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
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_namespace] = "namespace",
  [sym_text] = "text",
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
  [sym__legacy_execute] = "execute_command",
  [sym_execute_keyword] = "execute_keyword",
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
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_namespace] = sym_namespace,
  [sym_text] = sym_text,
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
  [sym__legacy_execute] = sym_execute_command,
  [sym_execute_keyword] = sym_execute_keyword,
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
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == ',') ADVANCE(300);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(275);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '}') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '_') ADVANCE(254);
      if (lookahead == '}') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '{') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(308);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
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
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(266);
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
      if (lookahead == 'g') ADVANCE(155);
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
      if (lookahead == 'n') ADVANCE(161);
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
      if (lookahead == 's') ADVANCE(152);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == '^') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '~') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
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
      if (lookahead == ' ') ADVANCE(282);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__legacy_execute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_namespace);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == ',') ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == ',') ADVANCE(300);
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_nbt_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 78},
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
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 8},
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
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 77},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 286},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 77},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 77},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 77},
  [116] = {.lex_state = 77},
  [117] = {.lex_state = 77},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 77},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 77},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 287},
  [143] = {.lex_state = 285},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 77},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 282},
  [150] = {.lex_state = 285},
  [151] = {.lex_state = 284},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 77},
  [158] = {.lex_state = 77},
  [159] = {.lex_state = 282},
  [160] = {.lex_state = 282},
  [161] = {.lex_state = 282},
  [162] = {.lex_state = 282},
  [163] = {.lex_state = 282},
  [164] = {.lex_state = 77},
  [165] = {.lex_state = 77},
  [166] = {.lex_state = 283},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 77},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 282},
  [174] = {.lex_state = 285},
  [175] = {.lex_state = 282},
  [176] = {.lex_state = 77},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 283},
  [179] = {.lex_state = 283},
  [180] = {.lex_state = 283},
  [181] = {.lex_state = 283},
  [182] = {.lex_state = 282},
  [183] = {.lex_state = 282},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 282},
  [186] = {.lex_state = 282},
  [187] = {.lex_state = 77},
  [188] = {.lex_state = 282},
  [189] = {.lex_state = 282},
  [190] = {.lex_state = 283},
  [191] = {.lex_state = 283},
  [192] = {.lex_state = 283},
  [193] = {.lex_state = 282},
  [194] = {.lex_state = 282},
  [195] = {.lex_state = 282},
  [196] = {.lex_state = 282},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 282},
  [199] = {.lex_state = 77},
  [200] = {.lex_state = 282},
  [201] = {.lex_state = 282},
  [202] = {.lex_state = 282},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 282},
  [205] = {.lex_state = 282},
  [206] = {.lex_state = 282},
  [207] = {.lex_state = 77},
  [208] = {.lex_state = 282},
  [209] = {.lex_state = 282},
  [210] = {.lex_state = 282},
  [211] = {.lex_state = 282},
  [212] = {.lex_state = 282},
  [213] = {.lex_state = 282},
  [214] = {.lex_state = 282},
  [215] = {.lex_state = 77},
  [216] = {.lex_state = 282},
  [217] = {.lex_state = 282},
  [218] = {.lex_state = 78},
  [219] = {.lex_state = 282},
  [220] = {.lex_state = 282},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 282},
  [223] = {.lex_state = 282},
  [224] = {.lex_state = 77},
  [225] = {.lex_state = 77},
  [226] = {.lex_state = 282},
  [227] = {.lex_state = 77},
  [228] = {.lex_state = 77},
  [229] = {.lex_state = 282},
  [230] = {.lex_state = 282},
  [231] = {.lex_state = 282},
  [232] = {.lex_state = 282},
  [233] = {.lex_state = 77},
  [234] = {.lex_state = 282},
  [235] = {.lex_state = 77},
  [236] = {.lex_state = 282},
  [237] = {.lex_state = 282},
  [238] = {.lex_state = 282},
  [239] = {.lex_state = 282},
  [240] = {.lex_state = 282},
  [241] = {.lex_state = 282},
  [242] = {.lex_state = 282},
  [243] = {.lex_state = 77},
  [244] = {.lex_state = 282},
  [245] = {.lex_state = 282},
  [246] = {.lex_state = 282},
  [247] = {.lex_state = 282},
  [248] = {.lex_state = 282},
  [249] = {.lex_state = 282},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 77},
  [252] = {.lex_state = 282},
  [253] = {.lex_state = 77},
  [254] = {.lex_state = 282},
  [255] = {.lex_state = 282},
  [256] = {.lex_state = 282},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 282},
  [259] = {.lex_state = 282},
  [260] = {.lex_state = 77},
  [261] = {.lex_state = 77},
  [262] = {.lex_state = 282},
  [263] = {.lex_state = 282},
  [264] = {.lex_state = 77},
  [265] = {.lex_state = 282},
  [266] = {.lex_state = 77},
  [267] = {.lex_state = 77},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 77},
  [270] = {.lex_state = 282},
  [271] = {.lex_state = 282},
  [272] = {.lex_state = 77},
  [273] = {.lex_state = 77},
  [274] = {.lex_state = 77},
  [275] = {.lex_state = 77},
  [276] = {.lex_state = 282},
  [277] = {.lex_state = 77},
  [278] = {.lex_state = 282},
  [279] = {.lex_state = 282},
  [280] = {.lex_state = 77},
  [281] = {.lex_state = 77},
  [282] = {.lex_state = 282},
  [283] = {.lex_state = 282},
  [284] = {.lex_state = 282},
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
    [sym_root] = STATE(203),
    [sym_command] = STATE(25),
    [sym_execute_command] = STATE(102),
    [sym__legacy_execute] = STATE(25),
    [sym_command_name] = STATE(64),
    [aux_sym_root_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(17), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(21), 1,
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
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(257), 1,
      sym_selector,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 11,
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
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(257), 1,
      sym_selector,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 11,
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
    ACTIONS(21), 1,
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
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 12,
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
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 12,
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
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(21), 1,
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
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 12,
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
    STATE(23), 1,
      sym_identifier,
    STATE(100), 1,
      sym_string,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
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
    STATE(269), 12,
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
    ACTIONS(21), 1,
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
    ACTIONS(49), 1,
      sym_namespace,
    ACTIONS(51), 1,
      sym_text,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(260), 1,
      sym_coordinate,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(93), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(90), 11,
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
  [564] = 13,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(26), 1,
      sym_item_state,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    STATE(40), 1,
      sym_item_nbt,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    ACTIONS(58), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [608] = 11,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(38), 1,
      sym_item_nbt,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    ACTIONS(69), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [646] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [679] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [712] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [745] = 9,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [778] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [808] = 8,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    ACTIONS(95), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      aux_sym_selector_number_token3,
    STATE(202), 1,
      sym_selector_value,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(226), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [838] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [868] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [898] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(249), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(214), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [928] = 7,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(107), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [955] = 7,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(58), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [982] = 7,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(115), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1009] = 12,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_item_state,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    STATE(40), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(103), 1,
      aux_sym_nbt_path_repeat3,
    STATE(140), 1,
      aux_sym_path_repeat1,
  [1046] = 8,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_execute,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(64), 1,
      sym_command_name,
    STATE(102), 1,
      sym_execute_command,
    ACTIONS(127), 2,
      sym_comment,
      sym__line_separator,
    STATE(24), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [1074] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_command_name,
    STATE(102), 1,
      sym_execute_command,
    ACTIONS(141), 2,
      sym_comment,
      sym__line_separator,
    STATE(24), 3,
      sym_command,
      sym__legacy_execute,
      aux_sym_root_repeat1,
  [1102] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(84), 1,
      sym_item_nbt,
    ACTIONS(145), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1123] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(83), 1,
      sym_item_nbt,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1144] = 2,
    ACTIONS(153), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1159] = 5,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
    ACTIONS(157), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1180] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(139), 1,
      aux_sym_path_repeat1,
  [1211] = 4,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(163), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1230] = 4,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1249] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(163), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1268] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1287] = 4,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_container_repeat1,
    ACTIONS(187), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1305] = 2,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1319] = 4,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_container_repeat1,
    ACTIONS(198), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1337] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_item_state,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1355] = 5,
    ACTIONS(202), 1,
      anon_sym_,
    STATE(60), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(204), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1375] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_item_state,
    ACTIONS(145), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1393] = 2,
    ACTIONS(208), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1407] = 2,
    ACTIONS(170), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1421] = 5,
    ACTIONS(212), 1,
      anon_sym_,
    STATE(55), 1,
      aux_sym__legacy_execute_repeat1,
    STATE(165), 1,
      aux_sym_execute_command_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1441] = 2,
    ACTIONS(218), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1455] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_selector_option_section,
    ACTIONS(222), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1473] = 4,
    ACTIONS(228), 1,
      anon_sym_,
    STATE(72), 1,
      aux_sym_command_repeat1,
    ACTIONS(231), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1490] = 2,
    ACTIONS(187), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1503] = 4,
    ACTIONS(233), 1,
      anon_sym_,
    STATE(70), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1520] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_command_repeat1,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1537] = 4,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(247), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1554] = 4,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1571] = 4,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(261), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1588] = 2,
    ACTIONS(265), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1601] = 4,
    ACTIONS(269), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(267), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1618] = 4,
    ACTIONS(276), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(278), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1635] = 4,
    ACTIONS(282), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_command_repeat1,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1652] = 2,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1665] = 3,
    ACTIONS(295), 1,
      sym_number,
    ACTIONS(293), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1680] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_command_repeat1,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1697] = 4,
    ACTIONS(276), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1714] = 2,
    ACTIONS(303), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1727] = 4,
    ACTIONS(58), 1,
      anon_sym_execute,
    ACTIONS(305), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1744] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(310), 1,
      aux_sym_identifier_token1,
    ACTIONS(312), 1,
      sym_number,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_string,
    STATE(212), 1,
      sym_nbt_object_key,
    STATE(217), 1,
      sym_selector_score_key,
  [1769] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym_command_repeat1,
    ACTIONS(231), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1786] = 4,
    ACTIONS(316), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_command_repeat1,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1803] = 2,
    ACTIONS(321), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1816] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(310), 1,
      aux_sym_identifier_token1,
    ACTIONS(312), 1,
      sym_number,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_string,
    STATE(211), 1,
      sym_selector_score_key,
    STATE(212), 1,
      sym_nbt_object_key,
  [1841] = 4,
    ACTIONS(325), 1,
      anon_sym_,
    STATE(74), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(204), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1858] = 4,
    ACTIONS(238), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym_command_repeat1,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1875] = 4,
    ACTIONS(328), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(278), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1892] = 4,
    ACTIONS(331), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_command_repeat1,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1909] = 4,
    ACTIONS(331), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_command_repeat1,
    ACTIONS(299), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1926] = 2,
    ACTIONS(336), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(334), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1939] = 4,
    ACTIONS(233), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__legacy_execute_repeat1,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1956] = 2,
    ACTIONS(340), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1968] = 2,
    ACTIONS(293), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(291), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1980] = 2,
    ACTIONS(344), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1992] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2004] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2016] = 2,
    ACTIONS(356), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2028] = 2,
    ACTIONS(360), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2040] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2052] = 2,
    ACTIONS(368), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2064] = 2,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2076] = 2,
    ACTIONS(372), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2088] = 2,
    ACTIONS(376), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2100] = 2,
    ACTIONS(380), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(378), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2112] = 2,
    ACTIONS(384), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(382), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2124] = 3,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(58), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2138] = 2,
    ACTIONS(285), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2150] = 2,
    ACTIONS(391), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2162] = 3,
    ACTIONS(395), 1,
      anon_sym_,
    ACTIONS(398), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2176] = 2,
    ACTIONS(402), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2188] = 7,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym__legacy_execute_token1,
    ACTIONS(310), 1,
      aux_sym_identifier_token1,
    ACTIONS(312), 1,
      sym_number,
    STATE(208), 1,
      sym_string,
    STATE(212), 1,
      sym_nbt_object_key,
    STATE(217), 1,
      sym_selector_score_key,
  [2210] = 2,
    ACTIONS(254), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2222] = 2,
    ACTIONS(406), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2234] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_nbt_object_key,
    STATE(208), 1,
      sym_string,
    ACTIONS(312), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2251] = 2,
    ACTIONS(410), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(412), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2262] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_nbt_object_key,
    STATE(208), 1,
      sym_string,
    ACTIONS(312), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2279] = 6,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
    STATE(103), 1,
      aux_sym_nbt_path_repeat3,
  [2298] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_execute,
    STATE(64), 1,
      sym_command_name,
    STATE(115), 2,
      sym_command,
      sym_execute_command,
  [2315] = 2,
    ACTIONS(422), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(420), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2326] = 6,
    ACTIONS(105), 1,
      anon_sym_,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(31), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      aux_sym_nbt_path_repeat2,
  [2345] = 4,
    STATE(229), 1,
      sym_selector_score_value,
    STATE(230), 1,
      sym_selector_number,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(103), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2360] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_nbt_object_key,
    STATE(208), 1,
      sym_string,
    ACTIONS(312), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2377] = 2,
    ACTIONS(430), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(428), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2388] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_execute,
    STATE(64), 1,
      sym_command_name,
    STATE(109), 2,
      sym_command,
      sym_execute_command,
  [2405] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_execute,
    STATE(64), 1,
      sym_command_name,
    STATE(106), 2,
      sym_command,
      sym_execute_command,
  [2422] = 2,
    ACTIONS(434), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(432), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2433] = 5,
    ACTIONS(436), 1,
      aux_sym_identifier_token1,
    ACTIONS(438), 1,
      sym_number,
    STATE(191), 1,
      sym_boolean,
    STATE(192), 1,
      sym_state_value,
    ACTIONS(440), 2,
      anon_sym_true,
      anon_sym_false,
  [2450] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(79), 2,
      sym_command,
      sym__legacy_execute,
  [2467] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(75), 2,
      sym_command,
      sym__legacy_execute,
  [2484] = 5,
    ACTIONS(446), 1,
      aux_sym_identifier_token1,
    ACTIONS(448), 1,
      sym_number,
    STATE(207), 1,
      sym_state_value,
    STATE(266), 1,
      sym_boolean,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
  [2501] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_nbt_object_key,
    STATE(208), 1,
      sym_string,
    ACTIONS(312), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2518] = 2,
    ACTIONS(454), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(452), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2529] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(87), 2,
      sym_command,
      sym__legacy_execute,
  [2546] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_item_state,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2562] = 4,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      aux_sym_string_token1,
    ACTIONS(460), 1,
      anon_sym_BSLASH,
    STATE(123), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2576] = 4,
    ACTIONS(460), 1,
      anon_sym_BSLASH,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      aux_sym_string_token1,
    STATE(126), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2590] = 1,
    ACTIONS(466), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2598] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_nbt_object_key,
    STATE(208), 1,
      sym_string,
    ACTIONS(312), 2,
      aux_sym__legacy_execute_token1,
      sym_number,
  [2612] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(177), 1,
      sym_location,
    STATE(199), 1,
      sym_coordinate,
  [2628] = 4,
    ACTIONS(460), 1,
      anon_sym_BSLASH,
    ACTIONS(464), 1,
      aux_sym_string_token1,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    STATE(126), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2642] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2658] = 4,
    ACTIONS(460), 1,
      anon_sym_BSLASH,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      aux_sym_string_token1,
    STATE(119), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2672] = 4,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    ACTIONS(478), 1,
      aux_sym_string_token1,
    ACTIONS(481), 1,
      anon_sym_BSLASH,
    STATE(126), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2686] = 5,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(235), 1,
      sym_location,
    STATE(280), 1,
      sym_coordinate,
  [2702] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(233), 1,
      sym_coordinate,
  [2715] = 4,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(484), 1,
      sym_namespace,
    STATE(124), 1,
      sym_identifier,
    STATE(251), 1,
      sym_item,
  [2728] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(486), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
  [2741] = 4,
    ACTIONS(488), 1,
      sym_number,
    ACTIONS(490), 1,
      anon_sym_TILDE,
    ACTIONS(492), 1,
      anon_sym_CARET,
    STATE(167), 1,
      sym_coordinate,
  [2754] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(261), 1,
      sym_coordinate,
  [2767] = 3,
    ACTIONS(496), 1,
      aux_sym_identifier_token1,
    STATE(227), 1,
      sym_state_key,
    ACTIONS(494), 2,
      anon_sym_STAR,
      sym_number,
  [2778] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(92), 1,
      sym_coordinate,
  [2791] = 4,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      sym_number,
    STATE(96), 1,
      sym_coordinate,
  [2804] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(498), 1,
      anon_sym_execute,
    STATE(71), 1,
      sym_command_name,
  [2814] = 3,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(500), 1,
      sym_namespace,
    STATE(95), 1,
      sym_identifier,
  [2824] = 3,
    ACTIONS(502), 1,
      aux_sym_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_selector_score_key,
  [2834] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(242), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [2844] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [2854] = 3,
    ACTIONS(506), 1,
      aux_sym_identifier_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      sym_state_key,
  [2864] = 3,
    ACTIONS(510), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(512), 1,
      aux_sym_nbt_path_token2,
    STATE(193), 1,
      aux_sym_item_state_repeat1,
  [2874] = 3,
    ACTIONS(514), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [2884] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
  [2894] = 3,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(518), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_identifier,
  [2904] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(520), 1,
      anon_sym_execute,
    STATE(69), 1,
      sym_command_name,
  [2914] = 2,
    ACTIONS(524), 1,
      aux_sym_string_token1,
    ACTIONS(522), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2922] = 3,
    ACTIONS(291), 1,
      anon_sym_detect,
    ACTIONS(293), 1,
      anon_sym_,
    ACTIONS(526), 1,
      sym_number,
  [2932] = 3,
    ACTIONS(528), 1,
      aux_sym_nbt_path_token1,
    STATE(188), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(189), 1,
      aux_sym_selector_score_repeat1,
  [2942] = 3,
    ACTIONS(530), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2952] = 3,
    ACTIONS(535), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    ACTIONS(539), 1,
      anon_sym_COMMA,
  [2962] = 3,
    ACTIONS(514), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2972] = 3,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(543), 1,
      sym_number,
    STATE(47), 1,
      sym_identifier,
  [2982] = 3,
    ACTIONS(506), 1,
      aux_sym_identifier_token1,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      sym_state_key,
  [2992] = 3,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(547), 1,
      aux_sym__legacy_execute_token1,
    STATE(274), 1,
      sym_selector,
  [3002] = 3,
    ACTIONS(549), 1,
      aux_sym_identifier_token1,
    STATE(254), 1,
      sym_selector_option,
    STATE(255), 1,
      sym_selector_key,
  [3012] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(551), 1,
      anon_sym_execute,
    STATE(69), 1,
      sym_command_name,
  [3022] = 2,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3029] = 2,
    ACTIONS(557), 1,
      aux_sym_nbt_path_token1,
    STATE(159), 1,
      aux_sym_selector_score_repeat1,
  [3036] = 2,
    ACTIONS(560), 1,
      aux_sym_nbt_path_token1,
    STATE(195), 1,
      aux_sym_nbt_object_repeat1,
  [3043] = 2,
    ACTIONS(562), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_array_repeat1,
  [3050] = 2,
    ACTIONS(564), 1,
      aux_sym_nbt_path_token1,
    STATE(160), 1,
      aux_sym_nbt_object_repeat1,
  [3057] = 2,
    ACTIONS(566), 1,
      aux_sym_nbt_path_token1,
    STATE(161), 1,
      aux_sym_nbt_array_repeat1,
  [3064] = 2,
    ACTIONS(568), 1,
      anon_sym_,
    STATE(168), 1,
      aux_sym_execute_command_repeat1,
  [3071] = 2,
    ACTIONS(570), 1,
      anon_sym_,
    STATE(168), 1,
      aux_sym_execute_command_repeat1,
  [3078] = 2,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      aux_sym_nbt_path_token1,
  [3085] = 2,
    ACTIONS(404), 1,
      anon_sym_detect,
    ACTIONS(406), 1,
      anon_sym_,
  [3092] = 2,
    ACTIONS(572), 1,
      anon_sym_,
    STATE(168), 1,
      aux_sym_execute_command_repeat1,
  [3099] = 2,
    ACTIONS(291), 1,
      anon_sym_detect,
    ACTIONS(293), 1,
      anon_sym_,
  [3106] = 2,
    ACTIONS(506), 1,
      aux_sym_identifier_token1,
    STATE(282), 1,
      sym_state_key,
  [3113] = 2,
    ACTIONS(518), 1,
      aux_sym_identifier_token1,
    STATE(117), 1,
      sym_identifier,
  [3120] = 2,
    ACTIONS(370), 1,
      anon_sym_detect,
    ACTIONS(372), 1,
      anon_sym_,
  [3127] = 2,
    ACTIONS(575), 1,
      aux_sym_nbt_path_token1,
    STATE(182), 1,
      aux_sym_nbt_array_repeat1,
  [3134] = 2,
    ACTIONS(577), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
  [3141] = 2,
    ACTIONS(581), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_nbt_object_repeat1,
  [3148] = 2,
    ACTIONS(583), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [3155] = 2,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      anon_sym_detect,
  [3162] = 2,
    ACTIONS(589), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(591), 1,
      anon_sym_COMMA,
  [3169] = 2,
    ACTIONS(593), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(595), 1,
      anon_sym_COMMA,
  [3176] = 2,
    ACTIONS(597), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(599), 1,
      anon_sym_COMMA,
  [3183] = 2,
    ACTIONS(601), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(603), 1,
      anon_sym_COMMA,
  [3190] = 2,
    ACTIONS(605), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_array_repeat1,
  [3197] = 2,
    ACTIONS(607), 1,
      aux_sym_nbt_path_token1,
    STATE(195), 1,
      aux_sym_nbt_object_repeat1,
  [3204] = 2,
    ACTIONS(518), 1,
      aux_sym_identifier_token1,
    STATE(77), 1,
      sym_identifier,
  [3211] = 2,
    ACTIONS(609), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_item_state_repeat1,
  [3218] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    STATE(193), 1,
      aux_sym_item_state_repeat1,
  [3225] = 2,
    ACTIONS(568), 1,
      anon_sym_,
    STATE(165), 1,
      aux_sym_execute_command_repeat1,
  [3232] = 2,
    ACTIONS(614), 1,
      aux_sym_nbt_path_token1,
    STATE(196), 1,
      aux_sym_selector_nbt_repeat1,
  [3239] = 2,
    ACTIONS(616), 1,
      aux_sym_nbt_path_token1,
    STATE(159), 1,
      aux_sym_selector_score_repeat1,
  [3246] = 2,
    ACTIONS(618), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(620), 1,
      anon_sym_COMMA,
  [3253] = 2,
    ACTIONS(622), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [3260] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [3267] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_item_state_repeat1,
  [3274] = 2,
    ACTIONS(632), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_array_repeat1,
  [3281] = 2,
    ACTIONS(635), 1,
      aux_sym_nbt_path_token1,
    STATE(195), 1,
      aux_sym_nbt_object_repeat1,
  [3288] = 2,
    ACTIONS(638), 1,
      aux_sym_nbt_path_token1,
    STATE(196), 1,
      aux_sym_selector_nbt_repeat1,
  [3295] = 2,
    ACTIONS(502), 1,
      aux_sym_identifier_token1,
    STATE(220), 1,
      sym_selector_score_key,
  [3302] = 1,
    ACTIONS(641), 1,
      aux_sym_nbt_path_token1,
  [3306] = 1,
    ACTIONS(643), 1,
      anon_sym_,
  [3310] = 1,
    ACTIONS(645), 1,
      aux_sym_nbt_path_token1,
  [3314] = 1,
    ACTIONS(647), 1,
      aux_sym_nbt_path_token1,
  [3318] = 1,
    ACTIONS(649), 1,
      aux_sym_nbt_path_token1,
  [3322] = 1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [3326] = 1,
    ACTIONS(653), 1,
      aux_sym_nbt_path_token1,
  [3330] = 1,
    ACTIONS(655), 1,
      aux_sym_nbt_path_token1,
  [3334] = 1,
    ACTIONS(657), 1,
      aux_sym_nbt_path_token1,
  [3338] = 1,
    ACTIONS(659), 1,
      anon_sym_,
  [3342] = 1,
    ACTIONS(661), 1,
      aux_sym_nbt_path_token1,
  [3346] = 1,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
  [3350] = 1,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
  [3354] = 1,
    ACTIONS(668), 1,
      aux_sym_nbt_path_token1,
  [3358] = 1,
    ACTIONS(670), 1,
      aux_sym_nbt_path_token1,
  [3362] = 1,
    ACTIONS(672), 1,
      aux_sym_nbt_path_token1,
  [3366] = 1,
    ACTIONS(674), 1,
      aux_sym_nbt_path_token1,
  [3370] = 1,
    ACTIONS(676), 1,
      anon_sym_COLON,
  [3374] = 1,
    ACTIONS(678), 1,
      aux_sym_nbt_path_token1,
  [3378] = 1,
    ACTIONS(680), 1,
      aux_sym_nbt_path_token1,
  [3382] = 1,
    ACTIONS(512), 1,
      aux_sym_nbt_path_token2,
  [3386] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3390] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3394] = 1,
    ACTIONS(686), 1,
      anon_sym_COLON,
  [3398] = 1,
    ACTIONS(688), 1,
      aux_sym_nbt_path_token1,
  [3402] = 1,
    ACTIONS(690), 1,
      aux_sym_nbt_path_token1,
  [3406] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3410] = 1,
    ACTIONS(553), 1,
      anon_sym_EQ,
  [3414] = 1,
    ACTIONS(692), 1,
      aux_sym_nbt_path_token1,
  [3418] = 1,
    ACTIONS(694), 1,
      anon_sym_EQ,
  [3422] = 1,
    ACTIONS(696), 1,
      anon_sym_,
  [3426] = 1,
    ACTIONS(698), 1,
      aux_sym_nbt_path_token1,
  [3430] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3434] = 1,
    ACTIONS(702), 1,
      aux_sym_nbt_path_token1,
  [3438] = 1,
    ACTIONS(704), 1,
      aux_sym_nbt_path_token1,
  [3442] = 1,
    ACTIONS(706), 1,
      anon_sym_,
  [3446] = 1,
    ACTIONS(708), 1,
      aux_sym_nbt_path_token1,
  [3450] = 1,
    ACTIONS(710), 1,
      anon_sym_,
  [3454] = 1,
    ACTIONS(712), 1,
      aux_sym_nbt_path_token1,
  [3458] = 1,
    ACTIONS(714), 1,
      aux_sym_nbt_path_token1,
  [3462] = 1,
    ACTIONS(716), 1,
      aux_sym_nbt_path_token1,
  [3466] = 1,
    ACTIONS(718), 1,
      aux_sym_nbt_path_token1,
  [3470] = 1,
    ACTIONS(720), 1,
      aux_sym_nbt_path_token1,
  [3474] = 1,
    ACTIONS(722), 1,
      aux_sym_nbt_path_token1,
  [3478] = 1,
    ACTIONS(725), 1,
      aux_sym_nbt_path_token1,
  [3482] = 1,
    ACTIONS(727), 1,
      anon_sym_,
  [3486] = 1,
    ACTIONS(729), 1,
      aux_sym_nbt_path_token1,
  [3490] = 1,
    ACTIONS(731), 1,
      aux_sym_nbt_path_token1,
  [3494] = 1,
    ACTIONS(382), 1,
      aux_sym_nbt_path_token1,
  [3498] = 1,
    ACTIONS(733), 1,
      aux_sym_nbt_path_token1,
  [3502] = 1,
    ACTIONS(735), 1,
      aux_sym_nbt_path_token1,
  [3506] = 1,
    ACTIONS(400), 1,
      aux_sym_nbt_path_token1,
  [3510] = 1,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
  [3514] = 1,
    ACTIONS(739), 1,
      anon_sym_,
  [3518] = 1,
    ACTIONS(216), 1,
      aux_sym_nbt_path_token1,
  [3522] = 1,
    ACTIONS(741), 1,
      anon_sym_,
  [3526] = 1,
    ACTIONS(743), 1,
      aux_sym_nbt_path_token1,
  [3530] = 1,
    ACTIONS(745), 1,
      aux_sym_nbt_path_token1,
  [3534] = 1,
    ACTIONS(192), 1,
      aux_sym_nbt_path_token1,
  [3538] = 1,
    ACTIONS(747), 1,
      anon_sym_,
  [3542] = 1,
    ACTIONS(358), 1,
      aux_sym_nbt_path_token1,
  [3546] = 1,
    ACTIONS(334), 1,
      aux_sym_nbt_path_token1,
  [3550] = 1,
    ACTIONS(750), 1,
      anon_sym_,
  [3554] = 1,
    ACTIONS(752), 1,
      anon_sym_,
  [3558] = 1,
    ACTIONS(354), 1,
      aux_sym_nbt_path_token1,
  [3562] = 1,
    ACTIONS(287), 1,
      aux_sym_nbt_path_token1,
  [3566] = 1,
    ACTIONS(754), 1,
      anon_sym_EQ,
  [3570] = 1,
    ACTIONS(756), 1,
      aux_sym_nbt_path_token1,
  [3574] = 1,
    ACTIONS(624), 1,
      anon_sym_,
  [3578] = 1,
    ACTIONS(758), 1,
      anon_sym_EQ,
  [3582] = 1,
    ACTIONS(526), 1,
      sym_number,
  [3586] = 1,
    ACTIONS(760), 1,
      anon_sym_,
  [3590] = 1,
    ACTIONS(762), 1,
      aux_sym_nbt_path_token1,
  [3594] = 1,
    ACTIONS(764), 1,
      aux_sym_nbt_path_token1,
  [3598] = 1,
    ACTIONS(295), 1,
      sym_number,
  [3602] = 1,
    ACTIONS(766), 1,
      anon_sym_,
  [3606] = 1,
    ACTIONS(768), 1,
      anon_sym_,
  [3610] = 1,
    ACTIONS(770), 1,
      anon_sym_,
  [3614] = 1,
    ACTIONS(772), 1,
      aux_sym_nbt_path_token1,
  [3618] = 1,
    ACTIONS(774), 1,
      anon_sym_EQ,
  [3622] = 1,
    ACTIONS(754), 1,
      aux_sym_nbt_path_token1,
  [3626] = 1,
    ACTIONS(776), 1,
      aux_sym_nbt_path_token1,
  [3630] = 1,
    ACTIONS(778), 1,
      anon_sym_,
  [3634] = 1,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
  [3638] = 1,
    ACTIONS(782), 1,
      aux_sym_nbt_path_token1,
  [3642] = 1,
    ACTIONS(784), 1,
      aux_sym_nbt_path_token1,
  [3646] = 1,
    ACTIONS(786), 1,
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
  [SMALL_STATE(10)] = 608,
  [SMALL_STATE(11)] = 646,
  [SMALL_STATE(12)] = 679,
  [SMALL_STATE(13)] = 712,
  [SMALL_STATE(14)] = 745,
  [SMALL_STATE(15)] = 778,
  [SMALL_STATE(16)] = 808,
  [SMALL_STATE(17)] = 838,
  [SMALL_STATE(18)] = 868,
  [SMALL_STATE(19)] = 898,
  [SMALL_STATE(20)] = 928,
  [SMALL_STATE(21)] = 955,
  [SMALL_STATE(22)] = 982,
  [SMALL_STATE(23)] = 1009,
  [SMALL_STATE(24)] = 1046,
  [SMALL_STATE(25)] = 1074,
  [SMALL_STATE(26)] = 1102,
  [SMALL_STATE(27)] = 1123,
  [SMALL_STATE(28)] = 1144,
  [SMALL_STATE(29)] = 1159,
  [SMALL_STATE(30)] = 1180,
  [SMALL_STATE(31)] = 1211,
  [SMALL_STATE(32)] = 1230,
  [SMALL_STATE(33)] = 1249,
  [SMALL_STATE(34)] = 1268,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1305,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1337,
  [SMALL_STATE(39)] = 1355,
  [SMALL_STATE(40)] = 1375,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1421,
  [SMALL_STATE(44)] = 1441,
  [SMALL_STATE(45)] = 1455,
  [SMALL_STATE(46)] = 1473,
  [SMALL_STATE(47)] = 1490,
  [SMALL_STATE(48)] = 1503,
  [SMALL_STATE(49)] = 1520,
  [SMALL_STATE(50)] = 1537,
  [SMALL_STATE(51)] = 1554,
  [SMALL_STATE(52)] = 1571,
  [SMALL_STATE(53)] = 1588,
  [SMALL_STATE(54)] = 1601,
  [SMALL_STATE(55)] = 1618,
  [SMALL_STATE(56)] = 1635,
  [SMALL_STATE(57)] = 1652,
  [SMALL_STATE(58)] = 1665,
  [SMALL_STATE(59)] = 1680,
  [SMALL_STATE(60)] = 1697,
  [SMALL_STATE(61)] = 1714,
  [SMALL_STATE(62)] = 1727,
  [SMALL_STATE(63)] = 1744,
  [SMALL_STATE(64)] = 1769,
  [SMALL_STATE(65)] = 1786,
  [SMALL_STATE(66)] = 1803,
  [SMALL_STATE(67)] = 1816,
  [SMALL_STATE(68)] = 1841,
  [SMALL_STATE(69)] = 1858,
  [SMALL_STATE(70)] = 1875,
  [SMALL_STATE(71)] = 1892,
  [SMALL_STATE(72)] = 1909,
  [SMALL_STATE(73)] = 1926,
  [SMALL_STATE(74)] = 1939,
  [SMALL_STATE(75)] = 1956,
  [SMALL_STATE(76)] = 1968,
  [SMALL_STATE(77)] = 1980,
  [SMALL_STATE(78)] = 1992,
  [SMALL_STATE(79)] = 2004,
  [SMALL_STATE(80)] = 2016,
  [SMALL_STATE(81)] = 2028,
  [SMALL_STATE(82)] = 2040,
  [SMALL_STATE(83)] = 2052,
  [SMALL_STATE(84)] = 2064,
  [SMALL_STATE(85)] = 2076,
  [SMALL_STATE(86)] = 2088,
  [SMALL_STATE(87)] = 2100,
  [SMALL_STATE(88)] = 2112,
  [SMALL_STATE(89)] = 2124,
  [SMALL_STATE(90)] = 2138,
  [SMALL_STATE(91)] = 2150,
  [SMALL_STATE(92)] = 2162,
  [SMALL_STATE(93)] = 2176,
  [SMALL_STATE(94)] = 2188,
  [SMALL_STATE(95)] = 2210,
  [SMALL_STATE(96)] = 2222,
  [SMALL_STATE(97)] = 2234,
  [SMALL_STATE(98)] = 2251,
  [SMALL_STATE(99)] = 2262,
  [SMALL_STATE(100)] = 2279,
  [SMALL_STATE(101)] = 2298,
  [SMALL_STATE(102)] = 2315,
  [SMALL_STATE(103)] = 2326,
  [SMALL_STATE(104)] = 2345,
  [SMALL_STATE(105)] = 2360,
  [SMALL_STATE(106)] = 2377,
  [SMALL_STATE(107)] = 2388,
  [SMALL_STATE(108)] = 2405,
  [SMALL_STATE(109)] = 2422,
  [SMALL_STATE(110)] = 2433,
  [SMALL_STATE(111)] = 2450,
  [SMALL_STATE(112)] = 2467,
  [SMALL_STATE(113)] = 2484,
  [SMALL_STATE(114)] = 2501,
  [SMALL_STATE(115)] = 2518,
  [SMALL_STATE(116)] = 2529,
  [SMALL_STATE(117)] = 2546,
  [SMALL_STATE(118)] = 2562,
  [SMALL_STATE(119)] = 2576,
  [SMALL_STATE(120)] = 2590,
  [SMALL_STATE(121)] = 2598,
  [SMALL_STATE(122)] = 2612,
  [SMALL_STATE(123)] = 2628,
  [SMALL_STATE(124)] = 2642,
  [SMALL_STATE(125)] = 2658,
  [SMALL_STATE(126)] = 2672,
  [SMALL_STATE(127)] = 2686,
  [SMALL_STATE(128)] = 2702,
  [SMALL_STATE(129)] = 2715,
  [SMALL_STATE(130)] = 2728,
  [SMALL_STATE(131)] = 2741,
  [SMALL_STATE(132)] = 2754,
  [SMALL_STATE(133)] = 2767,
  [SMALL_STATE(134)] = 2778,
  [SMALL_STATE(135)] = 2791,
  [SMALL_STATE(136)] = 2804,
  [SMALL_STATE(137)] = 2814,
  [SMALL_STATE(138)] = 2824,
  [SMALL_STATE(139)] = 2834,
  [SMALL_STATE(140)] = 2844,
  [SMALL_STATE(141)] = 2854,
  [SMALL_STATE(142)] = 2864,
  [SMALL_STATE(143)] = 2874,
  [SMALL_STATE(144)] = 2884,
  [SMALL_STATE(145)] = 2894,
  [SMALL_STATE(146)] = 2904,
  [SMALL_STATE(147)] = 2914,
  [SMALL_STATE(148)] = 2922,
  [SMALL_STATE(149)] = 2932,
  [SMALL_STATE(150)] = 2942,
  [SMALL_STATE(151)] = 2952,
  [SMALL_STATE(152)] = 2962,
  [SMALL_STATE(153)] = 2972,
  [SMALL_STATE(154)] = 2982,
  [SMALL_STATE(155)] = 2992,
  [SMALL_STATE(156)] = 3002,
  [SMALL_STATE(157)] = 3012,
  [SMALL_STATE(158)] = 3022,
  [SMALL_STATE(159)] = 3029,
  [SMALL_STATE(160)] = 3036,
  [SMALL_STATE(161)] = 3043,
  [SMALL_STATE(162)] = 3050,
  [SMALL_STATE(163)] = 3057,
  [SMALL_STATE(164)] = 3064,
  [SMALL_STATE(165)] = 3071,
  [SMALL_STATE(166)] = 3078,
  [SMALL_STATE(167)] = 3085,
  [SMALL_STATE(168)] = 3092,
  [SMALL_STATE(169)] = 3099,
  [SMALL_STATE(170)] = 3106,
  [SMALL_STATE(171)] = 3113,
  [SMALL_STATE(172)] = 3120,
  [SMALL_STATE(173)] = 3127,
  [SMALL_STATE(174)] = 3134,
  [SMALL_STATE(175)] = 3141,
  [SMALL_STATE(176)] = 3148,
  [SMALL_STATE(177)] = 3155,
  [SMALL_STATE(178)] = 3162,
  [SMALL_STATE(179)] = 3169,
  [SMALL_STATE(180)] = 3176,
  [SMALL_STATE(181)] = 3183,
  [SMALL_STATE(182)] = 3190,
  [SMALL_STATE(183)] = 3197,
  [SMALL_STATE(184)] = 3204,
  [SMALL_STATE(185)] = 3211,
  [SMALL_STATE(186)] = 3218,
  [SMALL_STATE(187)] = 3225,
  [SMALL_STATE(188)] = 3232,
  [SMALL_STATE(189)] = 3239,
  [SMALL_STATE(190)] = 3246,
  [SMALL_STATE(191)] = 3253,
  [SMALL_STATE(192)] = 3260,
  [SMALL_STATE(193)] = 3267,
  [SMALL_STATE(194)] = 3274,
  [SMALL_STATE(195)] = 3281,
  [SMALL_STATE(196)] = 3288,
  [SMALL_STATE(197)] = 3295,
  [SMALL_STATE(198)] = 3302,
  [SMALL_STATE(199)] = 3306,
  [SMALL_STATE(200)] = 3310,
  [SMALL_STATE(201)] = 3314,
  [SMALL_STATE(202)] = 3318,
  [SMALL_STATE(203)] = 3322,
  [SMALL_STATE(204)] = 3326,
  [SMALL_STATE(205)] = 3330,
  [SMALL_STATE(206)] = 3334,
  [SMALL_STATE(207)] = 3338,
  [SMALL_STATE(208)] = 3342,
  [SMALL_STATE(209)] = 3346,
  [SMALL_STATE(210)] = 3350,
  [SMALL_STATE(211)] = 3354,
  [SMALL_STATE(212)] = 3358,
  [SMALL_STATE(213)] = 3362,
  [SMALL_STATE(214)] = 3366,
  [SMALL_STATE(215)] = 3370,
  [SMALL_STATE(216)] = 3374,
  [SMALL_STATE(217)] = 3378,
  [SMALL_STATE(218)] = 3382,
  [SMALL_STATE(219)] = 3386,
  [SMALL_STATE(220)] = 3390,
  [SMALL_STATE(221)] = 3394,
  [SMALL_STATE(222)] = 3398,
  [SMALL_STATE(223)] = 3402,
  [SMALL_STATE(224)] = 3406,
  [SMALL_STATE(225)] = 3410,
  [SMALL_STATE(226)] = 3414,
  [SMALL_STATE(227)] = 3418,
  [SMALL_STATE(228)] = 3422,
  [SMALL_STATE(229)] = 3426,
  [SMALL_STATE(230)] = 3430,
  [SMALL_STATE(231)] = 3434,
  [SMALL_STATE(232)] = 3438,
  [SMALL_STATE(233)] = 3442,
  [SMALL_STATE(234)] = 3446,
  [SMALL_STATE(235)] = 3450,
  [SMALL_STATE(236)] = 3454,
  [SMALL_STATE(237)] = 3458,
  [SMALL_STATE(238)] = 3462,
  [SMALL_STATE(239)] = 3466,
  [SMALL_STATE(240)] = 3470,
  [SMALL_STATE(241)] = 3474,
  [SMALL_STATE(242)] = 3478,
  [SMALL_STATE(243)] = 3482,
  [SMALL_STATE(244)] = 3486,
  [SMALL_STATE(245)] = 3490,
  [SMALL_STATE(246)] = 3494,
  [SMALL_STATE(247)] = 3498,
  [SMALL_STATE(248)] = 3502,
  [SMALL_STATE(249)] = 3506,
  [SMALL_STATE(250)] = 3510,
  [SMALL_STATE(251)] = 3514,
  [SMALL_STATE(252)] = 3518,
  [SMALL_STATE(253)] = 3522,
  [SMALL_STATE(254)] = 3526,
  [SMALL_STATE(255)] = 3530,
  [SMALL_STATE(256)] = 3534,
  [SMALL_STATE(257)] = 3538,
  [SMALL_STATE(258)] = 3542,
  [SMALL_STATE(259)] = 3546,
  [SMALL_STATE(260)] = 3550,
  [SMALL_STATE(261)] = 3554,
  [SMALL_STATE(262)] = 3558,
  [SMALL_STATE(263)] = 3562,
  [SMALL_STATE(264)] = 3566,
  [SMALL_STATE(265)] = 3570,
  [SMALL_STATE(266)] = 3574,
  [SMALL_STATE(267)] = 3578,
  [SMALL_STATE(268)] = 3582,
  [SMALL_STATE(269)] = 3586,
  [SMALL_STATE(270)] = 3590,
  [SMALL_STATE(271)] = 3594,
  [SMALL_STATE(272)] = 3598,
  [SMALL_STATE(273)] = 3602,
  [SMALL_STATE(274)] = 3606,
  [SMALL_STATE(275)] = 3610,
  [SMALL_STATE(276)] = 3614,
  [SMALL_STATE(277)] = 3618,
  [SMALL_STATE(278)] = 3622,
  [SMALL_STATE(279)] = 3626,
  [SMALL_STATE(280)] = 3630,
  [SMALL_STATE(281)] = 3634,
  [SMALL_STATE(282)] = 3638,
  [SMALL_STATE(283)] = 3642,
  [SMALL_STATE(284)] = 3646,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(137),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(137),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(144),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(244),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(24),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(157),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(39),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(82),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(144),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(144),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(244),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(244),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(153),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 2), SHIFT(155),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(137),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(137),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(137),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 2), SHIFT_REPEAT(155),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(8),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 1), SHIFT(155),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__legacy_execute, 3), SHIFT(155),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 12),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__legacy_execute_repeat1, 14),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(135),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(250),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(156),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(197),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(170),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(15),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(121),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(94),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(122),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
