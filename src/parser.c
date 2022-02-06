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
#define STATE_COUNT 290
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 18

enum {
  sym_comment = 1,
  sym_tag = 2,
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
  aux_sym_string_repeat1 = 99,
  aux_sym_nbt_path_repeat1 = 100,
  aux_sym_nbt_path_repeat2 = 101,
  aux_sym_nbt_path_repeat3 = 102,
  aux_sym_selector_option_section_repeat1 = 103,
  aux_sym_selector_nbt_repeat1 = 104,
  aux_sym_selector_score_repeat1 = 105,
  aux_sym_nbt_object_repeat1 = 106,
  aux_sym_nbt_array_repeat1 = 107,
  aux_sym_container_repeat1 = 108,
  aux_sym_item_state_repeat1 = 109,
  aux_sym_path_repeat1 = 110,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '}') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '@') ADVANCE(293);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == '}') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '{') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '{') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
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
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(84);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(274);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
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
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
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
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
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
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_namespace);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == ',') ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
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
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(46);
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
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_b);
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
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 76},
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
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 17},
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
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 7},
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
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 76},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 76},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 76},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 76},
  [112] = {.lex_state = 289},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 76},
  [119] = {.lex_state = 76},
  [120] = {.lex_state = 76},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 76},
  [127] = {.lex_state = 76},
  [128] = {.lex_state = 76},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 76},
  [131] = {.lex_state = 76},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 76},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 76},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 288},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 287},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 76},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 290},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 288},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 288},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 76},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 285},
  [158] = {.lex_state = 285},
  [159] = {.lex_state = 285},
  [160] = {.lex_state = 285},
  [161] = {.lex_state = 285},
  [162] = {.lex_state = 76},
  [163] = {.lex_state = 76},
  [164] = {.lex_state = 76},
  [165] = {.lex_state = 286},
  [166] = {.lex_state = 76},
  [167] = {.lex_state = 286},
  [168] = {.lex_state = 286},
  [169] = {.lex_state = 285},
  [170] = {.lex_state = 285},
  [171] = {.lex_state = 286},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 76},
  [175] = {.lex_state = 285},
  [176] = {.lex_state = 285},
  [177] = {.lex_state = 288},
  [178] = {.lex_state = 285},
  [179] = {.lex_state = 285},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 285},
  [182] = {.lex_state = 285},
  [183] = {.lex_state = 76},
  [184] = {.lex_state = 285},
  [185] = {.lex_state = 285},
  [186] = {.lex_state = 76},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 285},
  [189] = {.lex_state = 285},
  [190] = {.lex_state = 286},
  [191] = {.lex_state = 286},
  [192] = {.lex_state = 286},
  [193] = {.lex_state = 285},
  [194] = {.lex_state = 285},
  [195] = {.lex_state = 285},
  [196] = {.lex_state = 285},
  [197] = {.lex_state = 285},
  [198] = {.lex_state = 76},
  [199] = {.lex_state = 76},
  [200] = {.lex_state = 285},
  [201] = {.lex_state = 285},
  [202] = {.lex_state = 285},
  [203] = {.lex_state = 285},
  [204] = {.lex_state = 285},
  [205] = {.lex_state = 285},
  [206] = {.lex_state = 76},
  [207] = {.lex_state = 76},
  [208] = {.lex_state = 76},
  [209] = {.lex_state = 285},
  [210] = {.lex_state = 76},
  [211] = {.lex_state = 76},
  [212] = {.lex_state = 76},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 285},
  [215] = {.lex_state = 285},
  [216] = {.lex_state = 285},
  [217] = {.lex_state = 285},
  [218] = {.lex_state = 285},
  [219] = {.lex_state = 76},
  [220] = {.lex_state = 285},
  [221] = {.lex_state = 76},
  [222] = {.lex_state = 76},
  [223] = {.lex_state = 285},
  [224] = {.lex_state = 76},
  [225] = {.lex_state = 76},
  [226] = {.lex_state = 76},
  [227] = {.lex_state = 76},
  [228] = {.lex_state = 76},
  [229] = {.lex_state = 285},
  [230] = {.lex_state = 285},
  [231] = {.lex_state = 76},
  [232] = {.lex_state = 285},
  [233] = {.lex_state = 285},
  [234] = {.lex_state = 285},
  [235] = {.lex_state = 285},
  [236] = {.lex_state = 76},
  [237] = {.lex_state = 285},
  [238] = {.lex_state = 285},
  [239] = {.lex_state = 285},
  [240] = {.lex_state = 285},
  [241] = {.lex_state = 76},
  [242] = {.lex_state = 76},
  [243] = {.lex_state = 76},
  [244] = {.lex_state = 285},
  [245] = {.lex_state = 76},
  [246] = {.lex_state = 76},
  [247] = {.lex_state = 76},
  [248] = {.lex_state = 76},
  [249] = {.lex_state = 285},
  [250] = {.lex_state = 285},
  [251] = {.lex_state = 285},
  [252] = {.lex_state = 285},
  [253] = {.lex_state = 76},
  [254] = {.lex_state = 285},
  [255] = {.lex_state = 285},
  [256] = {.lex_state = 285},
  [257] = {.lex_state = 285},
  [258] = {.lex_state = 285},
  [259] = {.lex_state = 285},
  [260] = {.lex_state = 285},
  [261] = {.lex_state = 76},
  [262] = {.lex_state = 285},
  [263] = {.lex_state = 76},
  [264] = {.lex_state = 285},
  [265] = {.lex_state = 76},
  [266] = {.lex_state = 285},
  [267] = {.lex_state = 285},
  [268] = {.lex_state = 285},
  [269] = {.lex_state = 285},
  [270] = {.lex_state = 285},
  [271] = {.lex_state = 285},
  [272] = {.lex_state = 285},
  [273] = {.lex_state = 76},
  [274] = {.lex_state = 76},
  [275] = {.lex_state = 285},
  [276] = {.lex_state = 76},
  [277] = {.lex_state = 76},
  [278] = {.lex_state = 76},
  [279] = {.lex_state = 76},
  [280] = {.lex_state = 285},
  [281] = {.lex_state = 76},
  [282] = {.lex_state = 76},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 76},
  [285] = {.lex_state = 285},
  [286] = {.lex_state = 285},
  [287] = {.lex_state = 76},
  [288] = {.lex_state = 285},
  [289] = {.lex_state = 285},
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
    [sym_root] = STATE(283),
    [sym_command] = STATE(24),
    [sym_execute_command] = STATE(103),
    [sym__legacy_execute] = STATE(103),
    [sym_identifier] = STATE(79),
    [sym_command_name] = STATE(47),
    [aux_sym_root_repeat1] = STATE(24),
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
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(19), 1,
      sym_nbt_identifier,
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(261), 1,
      sym_selector,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 11,
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
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(43), 1,
      sym_nbt_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(246), 1,
      sym_selector,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 11,
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
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 12,
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
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_run,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 12,
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
    ACTIONS(15), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 12,
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
    ACTIONS(21), 1,
      sym_namespace,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_identifier,
    STATE(110), 1,
      sym_string,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(17), 11,
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
    STATE(265), 12,
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
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_namespace,
    ACTIONS(51), 1,
      sym_text,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(263), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(72), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(65), 11,
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
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_nbt_path_repeat3,
    STATE(26), 1,
      sym_item_state,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(36), 1,
      sym_item_nbt,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(59), 1,
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
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(39), 1,
      aux_sym_container_repeat1,
    STATE(59), 1,
      sym_nbt_object,
    STATE(60), 1,
      aux_sym_path_repeat1,
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
    STATE(200), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
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
    STATE(200), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
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
    STATE(200), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
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
    STATE(200), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
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
    STATE(200), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [808] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [838] = 8,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(252), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
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
    STATE(209), 1,
      sym_nbt_object_value,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(201), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [898] = 8,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    ACTIONS(95), 1,
      sym_number,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      aux_sym_selector_number_token3,
    STATE(194), 1,
      sym_selector_value,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(197), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [928] = 12,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_item_state,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(36), 1,
      sym_item_nbt,
    STATE(59), 1,
      sym_nbt_object,
    STATE(93), 1,
      aux_sym_nbt_path_repeat3,
    STATE(146), 1,
      aux_sym_path_repeat1,
  [965] = 7,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(58), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [992] = 7,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(111), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1019] = 7,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(121), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1046] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(127), 2,
      sym_comment,
      sym__line_separator,
    STATE(25), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(103), 2,
      sym_execute_command,
      sym__legacy_execute,
  [1077] = 9,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    ACTIONS(137), 1,
      anon_sym_execute,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    ACTIONS(131), 2,
      sym_comment,
      sym__line_separator,
    STATE(25), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(103), 2,
      sym_execute_command,
      sym__legacy_execute,
  [1108] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_nbt_object,
    STATE(83), 1,
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
  [1129] = 5,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_text,
    STATE(43), 1,
      sym_string,
    ACTIONS(149), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1150] = 4,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(155), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1169] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_nbt_object,
    STATE(67), 1,
      sym_item_nbt,
    ACTIONS(162), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1190] = 2,
    ACTIONS(166), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1205] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(39), 1,
      aux_sym_container_repeat1,
    STATE(59), 1,
      sym_nbt_object,
    STATE(139), 1,
      aux_sym_path_repeat1,
  [1236] = 4,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(155), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1255] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1274] = 4,
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
  [1293] = 2,
    ACTIONS(187), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1307] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
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
  [1325] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_item_state,
    ACTIONS(162), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1343] = 4,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_selector_option_section,
    ACTIONS(191), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1361] = 4,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_container_repeat1,
    ACTIONS(197), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1379] = 2,
    ACTIONS(201), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1393] = 2,
    ACTIONS(205), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1407] = 4,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_container_repeat1,
    ACTIONS(209), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1425] = 2,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1439] = 4,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(219), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1456] = 2,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1469] = 4,
    ACTIONS(227), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_command_repeat1,
    ACTIONS(229), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1486] = 4,
    ACTIONS(227), 1,
      anon_sym_,
    STATE(55), 1,
      aux_sym_command_repeat1,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1503] = 4,
    ACTIONS(237), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_command_repeat1,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1520] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym_nbt_identifier,
    ACTIONS(244), 1,
      aux_sym_identifier_token1,
    ACTIONS(246), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(218), 1,
      sym_nbt_object_key,
    STATE(230), 1,
      sym_selector_score_key,
  [1545] = 4,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1562] = 8,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym_nbt_identifier,
    ACTIONS(244), 1,
      aux_sym_identifier_token1,
    ACTIONS(246), 1,
      sym_number,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(217), 1,
      sym_selector_score_key,
    STATE(218), 1,
      sym_nbt_object_key,
  [1587] = 4,
    ACTIONS(58), 1,
      anon_sym_execute,
    ACTIONS(259), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1604] = 4,
    ACTIONS(227), 1,
      anon_sym_,
    STATE(46), 1,
      aux_sym_command_repeat1,
    ACTIONS(264), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1621] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    ACTIONS(270), 1,
      anon_sym_detect,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(109), 2,
      sym_command,
      sym__legacy_execute,
  [1644] = 4,
    ACTIONS(227), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_command_repeat1,
    ACTIONS(264), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1661] = 2,
    ACTIONS(274), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1674] = 2,
    ACTIONS(278), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1687] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    ACTIONS(280), 1,
      anon_sym_detect,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [1710] = 2,
    ACTIONS(284), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1723] = 4,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(291), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1740] = 2,
    ACTIONS(209), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1753] = 3,
    ACTIONS(297), 1,
      sym_number,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1768] = 2,
    ACTIONS(301), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(299), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1781] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(97), 2,
      sym_command,
      sym__legacy_execute,
  [1801] = 2,
    ACTIONS(240), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1813] = 2,
    ACTIONS(305), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1825] = 2,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1837] = 2,
    ACTIONS(313), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(311), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1849] = 7,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym_nbt_identifier,
    ACTIONS(244), 1,
      aux_sym_identifier_token1,
    ACTIONS(246), 1,
      sym_number,
    STATE(202), 1,
      sym_string,
    STATE(218), 1,
      sym_nbt_object_key,
    STATE(230), 1,
      sym_selector_score_key,
  [1871] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(317), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(105), 2,
      sym_command,
      sym_execute_command,
  [1891] = 2,
    ACTIONS(321), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1903] = 2,
    ACTIONS(325), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1915] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(317), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(98), 2,
      sym_command,
      sym_execute_command,
  [1935] = 2,
    ACTIONS(329), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1947] = 2,
    ACTIONS(295), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1959] = 3,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(336), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1973] = 2,
    ACTIONS(340), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1985] = 2,
    ACTIONS(344), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1997] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2009] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(317), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(107), 2,
      sym_command,
      sym_execute_command,
  [2029] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2041] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(95), 2,
      sym_command,
      sym__legacy_execute,
  [2061] = 2,
    ACTIONS(162), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2073] = 3,
    ACTIONS(354), 1,
      anon_sym_,
    ACTIONS(58), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2087] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(104), 2,
      sym_command,
      sym__legacy_execute,
  [2107] = 2,
    ACTIONS(359), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2119] = 2,
    ACTIONS(363), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(361), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2131] = 2,
    ACTIONS(255), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2143] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_execute,
    STATE(47), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
    STATE(111), 2,
      sym_command,
      sym__legacy_execute,
  [2163] = 5,
    ACTIONS(365), 1,
      aux_sym_identifier_token1,
    ACTIONS(367), 1,
      sym_number,
    STATE(190), 1,
      sym_state_value,
    STATE(191), 1,
      sym_boolean,
    ACTIONS(369), 2,
      anon_sym_true,
      anon_sym_false,
  [2180] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(246), 2,
      sym_nbt_identifier,
      sym_number,
  [2197] = 5,
    ACTIONS(373), 1,
      aux_sym_identifier_token1,
    ACTIONS(375), 1,
      sym_number,
    STATE(226), 1,
      sym_state_value,
    STATE(274), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2214] = 6,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
  [2233] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(59), 1,
      sym_nbt_object,
  [2252] = 2,
    ACTIONS(381), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(379), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2263] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(246), 2,
      sym_nbt_identifier,
      sym_number,
  [2280] = 2,
    ACTIONS(387), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(385), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2291] = 2,
    ACTIONS(391), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2302] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(246), 2,
      sym_nbt_identifier,
      sym_number,
  [2319] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_,
    STATE(26), 1,
      sym_item_state,
    STATE(36), 1,
      sym_item_nbt,
    STATE(59), 1,
      sym_nbt_object,
  [2338] = 4,
    STATE(249), 1,
      sym_selector_score_value,
    STATE(250), 1,
      sym_selector_number,
    ACTIONS(101), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(103), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2353] = 2,
    ACTIONS(399), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2364] = 2,
    ACTIONS(403), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(401), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2375] = 2,
    ACTIONS(407), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(405), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2386] = 2,
    ACTIONS(411), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(409), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2397] = 5,
    ACTIONS(373), 1,
      aux_sym_identifier_token1,
    ACTIONS(375), 1,
      sym_number,
    STATE(236), 1,
      sym_state_value,
    STATE(274), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2414] = 2,
    ACTIONS(415), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(413), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2425] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_,
    STATE(26), 1,
      sym_item_state,
    STATE(36), 1,
      sym_item_nbt,
    STATE(59), 1,
      sym_nbt_object,
  [2444] = 2,
    ACTIONS(421), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2455] = 6,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(93), 1,
      aux_sym_nbt_path_repeat3,
  [2474] = 2,
    ACTIONS(425), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2485] = 2,
    ACTIONS(427), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(429), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2496] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(246), 2,
      sym_nbt_identifier,
      sym_number,
  [2513] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(433), 1,
      sym_namespace,
    STATE(100), 1,
      sym_identifier,
    STATE(198), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2527] = 4,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      aux_sym_string_token1,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    STATE(123), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2541] = 1,
    ACTIONS(441), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2549] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_string,
    STATE(205), 1,
      sym_nbt_object_key,
    ACTIONS(246), 2,
      sym_nbt_identifier,
      sym_number,
  [2563] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(208), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2579] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(221), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2595] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(210), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2611] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      aux_sym_string_token1,
    STATE(124), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2625] = 4,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      aux_sym_string_token1,
    STATE(115), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2639] = 4,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym_string_token1,
    ACTIONS(458), 1,
      anon_sym_BSLASH,
    STATE(123), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2653] = 4,
    ACTIONS(437), 1,
      aux_sym_string_token1,
    ACTIONS(439), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(123), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2667] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(433), 1,
      sym_namespace,
    STATE(108), 1,
      sym_identifier,
    STATE(199), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2681] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(224), 1,
      sym_location,
    STATE(225), 1,
      sym_coordinate,
  [2697] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(463), 1,
      anon_sym_execute,
    STATE(53), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
  [2710] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(465), 1,
      anon_sym_execute,
    STATE(53), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
  [2723] = 3,
    ACTIONS(469), 1,
      aux_sym_identifier_token1,
    STATE(207), 1,
      sym_state_key,
    ACTIONS(467), 2,
      anon_sym_STAR,
      sym_number,
  [2734] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(219), 1,
      sym_coordinate,
  [2747] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(471), 1,
      anon_sym_execute,
    STATE(53), 1,
      sym_command_name,
    STATE(79), 1,
      sym_identifier,
  [2760] = 4,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(473), 1,
      sym_text,
    STATE(43), 1,
      sym_string,
  [2773] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(76), 1,
      sym_coordinate,
  [2786] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(443), 1,
      sym_number,
    STATE(68), 1,
      sym_coordinate,
  [2799] = 3,
    ACTIONS(469), 1,
      aux_sym_identifier_token1,
    STATE(212), 1,
      sym_state_key,
    ACTIONS(475), 2,
      anon_sym_STAR,
      sym_number,
  [2810] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      sym_nbt_identifier,
    STATE(247), 1,
      sym_selector,
  [2820] = 3,
    ACTIONS(479), 1,
      aux_sym_identifier_token1,
    STATE(275), 1,
      sym_selector_option,
    STATE(280), 1,
      sym_selector_key,
  [2830] = 2,
    ACTIONS(483), 1,
      aux_sym_string_token1,
    ACTIONS(481), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [2838] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(286), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_path_repeat1,
  [2848] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(485), 1,
      sym_namespace,
    STATE(88), 1,
      sym_identifier,
  [2858] = 3,
    ACTIONS(487), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_selector_option_section_repeat1,
  [2868] = 3,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      sym_text,
    STATE(43), 1,
      sym_string,
  [2878] = 3,
    ACTIONS(491), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    ACTIONS(495), 1,
      anon_sym_COMMA,
  [2888] = 3,
    ACTIONS(497), 1,
      aux_sym_identifier_token1,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_selector_score_key,
  [2898] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(501), 1,
      sym_number,
    STATE(61), 1,
      sym_identifier,
  [2908] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(214), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_path_repeat1,
  [2918] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(503), 1,
      sym_nbt_identifier,
    STATE(277), 1,
      sym_selector,
  [2928] = 3,
    ACTIONS(505), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(507), 1,
      aux_sym_nbt_path_token2,
    STATE(182), 1,
      aux_sym_item_state_repeat1,
  [2938] = 3,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(509), 1,
      aux_sym_identifier_token1,
    STATE(31), 1,
      sym_identifier,
  [2948] = 3,
    ACTIONS(511), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2958] = 3,
    ACTIONS(516), 1,
      aux_sym_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_state_key,
  [2968] = 3,
    ACTIONS(520), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
    STATE(184), 1,
      aux_sym_selector_nbt_repeat1,
  [2978] = 3,
    ACTIONS(487), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_selector_option_section_repeat1,
  [2988] = 3,
    ACTIONS(516), 1,
      aux_sym_identifier_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_state_key,
  [2998] = 2,
    ACTIONS(526), 1,
      anon_sym_,
    STATE(163), 1,
      aux_sym_execute_command_repeat1,
  [3005] = 2,
    ACTIONS(528), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [3012] = 2,
    ACTIONS(532), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_nbt_object_repeat1,
  [3019] = 2,
    ACTIONS(534), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_array_repeat1,
  [3026] = 2,
    ACTIONS(536), 1,
      aux_sym_nbt_path_token1,
    STATE(159), 1,
      aux_sym_item_state_repeat1,
  [3033] = 2,
    ACTIONS(539), 1,
      aux_sym_nbt_path_token1,
    STATE(157), 1,
      aux_sym_nbt_object_repeat1,
  [3040] = 2,
    ACTIONS(541), 1,
      aux_sym_nbt_path_token1,
    STATE(158), 1,
      aux_sym_nbt_array_repeat1,
  [3047] = 2,
    ACTIONS(543), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [3054] = 2,
    ACTIONS(545), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym_execute_command_repeat1,
  [3061] = 2,
    ACTIONS(547), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym_execute_command_repeat1,
  [3068] = 2,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      aux_sym_nbt_path_token1,
  [3075] = 2,
    ACTIONS(549), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym_execute_command_repeat1,
  [3082] = 2,
    ACTIONS(552), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(554), 1,
      anon_sym_COMMA,
  [3089] = 2,
    ACTIONS(556), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(558), 1,
      anon_sym_COMMA,
  [3096] = 2,
    ACTIONS(560), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_nbt_array_repeat1,
  [3103] = 2,
    ACTIONS(562), 1,
      aux_sym_nbt_path_token1,
    STATE(179), 1,
      aux_sym_nbt_object_repeat1,
  [3110] = 2,
    ACTIONS(564), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(566), 1,
      anon_sym_COMMA,
  [3117] = 2,
    ACTIONS(497), 1,
      aux_sym_identifier_token1,
    STATE(233), 1,
      sym_selector_score_key,
  [3124] = 2,
    ACTIONS(516), 1,
      aux_sym_identifier_token1,
    STATE(255), 1,
      sym_state_key,
  [3131] = 2,
    ACTIONS(568), 1,
      anon_sym_EQ,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [3138] = 2,
    ACTIONS(572), 1,
      aux_sym_nbt_path_token1,
    STATE(175), 1,
      aux_sym_selector_score_repeat1,
  [3145] = 2,
    ACTIONS(575), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_array_repeat1,
  [3152] = 2,
    ACTIONS(577), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
  [3159] = 2,
    ACTIONS(581), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_nbt_repeat1,
  [3166] = 2,
    ACTIONS(584), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_nbt_object_repeat1,
  [3173] = 2,
    ACTIONS(509), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_identifier,
  [3180] = 2,
    ACTIONS(586), 1,
      aux_sym_nbt_path_token1,
    STATE(175), 1,
      aux_sym_selector_score_repeat1,
  [3187] = 2,
    ACTIONS(588), 1,
      aux_sym_nbt_path_token1,
    STATE(159), 1,
      aux_sym_item_state_repeat1,
  [3194] = 2,
    ACTIONS(590), 1,
      anon_sym_,
    STATE(163), 1,
      aux_sym_execute_command_repeat1,
  [3201] = 2,
    ACTIONS(592), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_nbt_repeat1,
  [3208] = 2,
    ACTIONS(594), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_nbt_object_repeat1,
  [3215] = 2,
    ACTIONS(545), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [3222] = 2,
    ACTIONS(509), 1,
      aux_sym_identifier_token1,
    STATE(94), 1,
      sym_identifier,
  [3229] = 2,
    ACTIONS(597), 1,
      aux_sym_nbt_path_token1,
    STATE(182), 1,
      aux_sym_item_state_repeat1,
  [3236] = 2,
    ACTIONS(599), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_nbt_array_repeat1,
  [3243] = 2,
    ACTIONS(602), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(604), 1,
      anon_sym_COMMA,
  [3250] = 2,
    ACTIONS(606), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(608), 1,
      anon_sym_COMMA,
  [3257] = 2,
    ACTIONS(610), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
  [3264] = 1,
    ACTIONS(614), 1,
      aux_sym_nbt_path_token1,
  [3268] = 1,
    ACTIONS(616), 1,
      aux_sym_nbt_path_token1,
  [3272] = 1,
    ACTIONS(618), 1,
      aux_sym_nbt_path_token1,
  [3276] = 1,
    ACTIONS(620), 1,
      aux_sym_nbt_path_token1,
  [3280] = 1,
    ACTIONS(623), 1,
      aux_sym_nbt_path_token1,
  [3284] = 1,
    ACTIONS(395), 1,
      anon_sym_,
  [3288] = 1,
    ACTIONS(417), 1,
      anon_sym_,
  [3292] = 1,
    ACTIONS(625), 1,
      aux_sym_nbt_path_token1,
  [3296] = 1,
    ACTIONS(627), 1,
      aux_sym_nbt_path_token1,
  [3300] = 1,
    ACTIONS(629), 1,
      aux_sym_nbt_path_token1,
  [3304] = 1,
    ACTIONS(631), 1,
      aux_sym_nbt_path_token1,
  [3308] = 1,
    ACTIONS(633), 1,
      aux_sym_nbt_path_token1,
  [3312] = 1,
    ACTIONS(635), 1,
      aux_sym_nbt_path_token1,
  [3316] = 1,
    ACTIONS(637), 1,
      anon_sym_,
  [3320] = 1,
    ACTIONS(639), 1,
      anon_sym_EQ,
  [3324] = 1,
    ACTIONS(641), 1,
      anon_sym_,
  [3328] = 1,
    ACTIONS(643), 1,
      aux_sym_nbt_path_token1,
  [3332] = 1,
    ACTIONS(645), 1,
      anon_sym_,
  [3336] = 1,
    ACTIONS(647), 1,
      anon_sym_,
  [3340] = 1,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [3344] = 1,
    ACTIONS(507), 1,
      aux_sym_nbt_path_token2,
  [3348] = 1,
    ACTIONS(651), 1,
      aux_sym_nbt_path_token1,
  [3352] = 1,
    ACTIONS(653), 1,
      aux_sym_nbt_path_token1,
  [3356] = 1,
    ACTIONS(655), 1,
      aux_sym_nbt_path_token1,
  [3360] = 1,
    ACTIONS(658), 1,
      aux_sym_nbt_path_token1,
  [3364] = 1,
    ACTIONS(660), 1,
      aux_sym_nbt_path_token1,
  [3368] = 1,
    ACTIONS(662), 1,
      anon_sym_,
  [3372] = 1,
    ACTIONS(664), 1,
      aux_sym_nbt_path_token1,
  [3376] = 1,
    ACTIONS(666), 1,
      anon_sym_,
  [3380] = 1,
    ACTIONS(668), 1,
      anon_sym_,
  [3384] = 1,
    ACTIONS(670), 1,
      aux_sym_nbt_path_token1,
  [3388] = 1,
    ACTIONS(672), 1,
      anon_sym_,
  [3392] = 1,
    ACTIONS(674), 1,
      anon_sym_,
  [3396] = 1,
    ACTIONS(676), 1,
      anon_sym_,
  [3400] = 1,
    ACTIONS(678), 1,
      anon_sym_,
  [3404] = 1,
    ACTIONS(680), 1,
      anon_sym_COLON,
  [3408] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3412] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3416] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3420] = 1,
    ACTIONS(688), 1,
      aux_sym_nbt_path_token1,
  [3424] = 1,
    ACTIONS(690), 1,
      aux_sym_nbt_path_token1,
  [3428] = 1,
    ACTIONS(692), 1,
      aux_sym_nbt_path_token1,
  [3432] = 1,
    ACTIONS(694), 1,
      aux_sym_nbt_path_token1,
  [3436] = 1,
    ACTIONS(696), 1,
      anon_sym_,
  [3440] = 1,
    ACTIONS(698), 1,
      aux_sym_nbt_path_token1,
  [3444] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3448] = 1,
    ACTIONS(702), 1,
      aux_sym_nbt_path_token1,
  [3452] = 1,
    ACTIONS(704), 1,
      aux_sym_nbt_path_token1,
  [3456] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [3460] = 1,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [3464] = 1,
    ACTIONS(706), 1,
      anon_sym_EQ,
  [3468] = 1,
    ACTIONS(708), 1,
      aux_sym_nbt_path_token1,
  [3472] = 1,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
  [3476] = 1,
    ACTIONS(712), 1,
      anon_sym_,
  [3480] = 1,
    ACTIONS(715), 1,
      anon_sym_,
  [3484] = 1,
    ACTIONS(717), 1,
      anon_sym_,
  [3488] = 1,
    ACTIONS(719), 1,
      aux_sym_nbt_path_token1,
  [3492] = 1,
    ACTIONS(721), 1,
      aux_sym_nbt_path_token1,
  [3496] = 1,
    ACTIONS(723), 1,
      aux_sym_nbt_path_token1,
  [3500] = 1,
    ACTIONS(725), 1,
      aux_sym_nbt_path_token1,
  [3504] = 1,
    ACTIONS(727), 1,
      anon_sym_EQ,
  [3508] = 1,
    ACTIONS(729), 1,
      aux_sym_nbt_path_token1,
  [3512] = 1,
    ACTIONS(731), 1,
      aux_sym_nbt_path_token1,
  [3516] = 1,
    ACTIONS(733), 1,
      aux_sym_nbt_path_token1,
  [3520] = 1,
    ACTIONS(735), 1,
      aux_sym_nbt_path_token1,
  [3524] = 1,
    ACTIONS(737), 1,
      aux_sym_nbt_path_token1,
  [3528] = 1,
    ACTIONS(739), 1,
      aux_sym_nbt_path_token1,
  [3532] = 1,
    ACTIONS(327), 1,
      aux_sym_nbt_path_token1,
  [3536] = 1,
    ACTIONS(741), 1,
      anon_sym_,
  [3540] = 1,
    ACTIONS(323), 1,
      aux_sym_nbt_path_token1,
  [3544] = 1,
    ACTIONS(744), 1,
      anon_sym_,
  [3548] = 1,
    ACTIONS(203), 1,
      aux_sym_nbt_path_token1,
  [3552] = 1,
    ACTIONS(746), 1,
      anon_sym_,
  [3556] = 1,
    ACTIONS(748), 1,
      aux_sym_nbt_path_token1,
  [3560] = 1,
    ACTIONS(199), 1,
      aux_sym_nbt_path_token1,
  [3564] = 1,
    ACTIONS(750), 1,
      aux_sym_nbt_path_token1,
  [3568] = 1,
    ACTIONS(303), 1,
      aux_sym_nbt_path_token1,
  [3572] = 1,
    ACTIONS(299), 1,
      aux_sym_nbt_path_token1,
  [3576] = 1,
    ACTIONS(342), 1,
      aux_sym_nbt_path_token1,
  [3580] = 1,
    ACTIONS(272), 1,
      aux_sym_nbt_path_token1,
  [3584] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [3588] = 1,
    ACTIONS(608), 1,
      anon_sym_,
  [3592] = 1,
    ACTIONS(754), 1,
      aux_sym_nbt_path_token1,
  [3596] = 1,
    ACTIONS(297), 1,
      sym_number,
  [3600] = 1,
    ACTIONS(756), 1,
      anon_sym_,
  [3604] = 1,
    ACTIONS(758), 1,
      anon_sym_,
  [3608] = 1,
    ACTIONS(760), 1,
      anon_sym_,
  [3612] = 1,
    ACTIONS(762), 1,
      aux_sym_nbt_path_token1,
  [3616] = 1,
    ACTIONS(764), 1,
      anon_sym_,
  [3620] = 1,
    ACTIONS(766), 1,
      anon_sym_COLON,
  [3624] = 1,
    ACTIONS(768), 1,
      ts_builtin_sym_end,
  [3628] = 1,
    ACTIONS(770), 1,
      anon_sym_,
  [3632] = 1,
    ACTIONS(752), 1,
      aux_sym_nbt_path_token1,
  [3636] = 1,
    ACTIONS(772), 1,
      aux_sym_nbt_path_token1,
  [3640] = 1,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
  [3644] = 1,
    ACTIONS(776), 1,
      aux_sym_nbt_path_token1,
  [3648] = 1,
    ACTIONS(778), 1,
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
  [SMALL_STATE(21)] = 965,
  [SMALL_STATE(22)] = 992,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1046,
  [SMALL_STATE(25)] = 1077,
  [SMALL_STATE(26)] = 1108,
  [SMALL_STATE(27)] = 1129,
  [SMALL_STATE(28)] = 1150,
  [SMALL_STATE(29)] = 1169,
  [SMALL_STATE(30)] = 1190,
  [SMALL_STATE(31)] = 1205,
  [SMALL_STATE(32)] = 1236,
  [SMALL_STATE(33)] = 1255,
  [SMALL_STATE(34)] = 1274,
  [SMALL_STATE(35)] = 1293,
  [SMALL_STATE(36)] = 1307,
  [SMALL_STATE(37)] = 1325,
  [SMALL_STATE(38)] = 1343,
  [SMALL_STATE(39)] = 1361,
  [SMALL_STATE(40)] = 1379,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1425,
  [SMALL_STATE(44)] = 1439,
  [SMALL_STATE(45)] = 1456,
  [SMALL_STATE(46)] = 1469,
  [SMALL_STATE(47)] = 1486,
  [SMALL_STATE(48)] = 1503,
  [SMALL_STATE(49)] = 1520,
  [SMALL_STATE(50)] = 1545,
  [SMALL_STATE(51)] = 1562,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1604,
  [SMALL_STATE(54)] = 1621,
  [SMALL_STATE(55)] = 1644,
  [SMALL_STATE(56)] = 1661,
  [SMALL_STATE(57)] = 1674,
  [SMALL_STATE(58)] = 1687,
  [SMALL_STATE(59)] = 1710,
  [SMALL_STATE(60)] = 1723,
  [SMALL_STATE(61)] = 1740,
  [SMALL_STATE(62)] = 1753,
  [SMALL_STATE(63)] = 1768,
  [SMALL_STATE(64)] = 1781,
  [SMALL_STATE(65)] = 1801,
  [SMALL_STATE(66)] = 1813,
  [SMALL_STATE(67)] = 1825,
  [SMALL_STATE(68)] = 1837,
  [SMALL_STATE(69)] = 1849,
  [SMALL_STATE(70)] = 1871,
  [SMALL_STATE(71)] = 1891,
  [SMALL_STATE(72)] = 1903,
  [SMALL_STATE(73)] = 1915,
  [SMALL_STATE(74)] = 1935,
  [SMALL_STATE(75)] = 1947,
  [SMALL_STATE(76)] = 1959,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1985,
  [SMALL_STATE(79)] = 1997,
  [SMALL_STATE(80)] = 2009,
  [SMALL_STATE(81)] = 2029,
  [SMALL_STATE(82)] = 2041,
  [SMALL_STATE(83)] = 2061,
  [SMALL_STATE(84)] = 2073,
  [SMALL_STATE(85)] = 2087,
  [SMALL_STATE(86)] = 2107,
  [SMALL_STATE(87)] = 2119,
  [SMALL_STATE(88)] = 2131,
  [SMALL_STATE(89)] = 2143,
  [SMALL_STATE(90)] = 2163,
  [SMALL_STATE(91)] = 2180,
  [SMALL_STATE(92)] = 2197,
  [SMALL_STATE(93)] = 2214,
  [SMALL_STATE(94)] = 2233,
  [SMALL_STATE(95)] = 2252,
  [SMALL_STATE(96)] = 2263,
  [SMALL_STATE(97)] = 2280,
  [SMALL_STATE(98)] = 2291,
  [SMALL_STATE(99)] = 2302,
  [SMALL_STATE(100)] = 2319,
  [SMALL_STATE(101)] = 2338,
  [SMALL_STATE(102)] = 2353,
  [SMALL_STATE(103)] = 2364,
  [SMALL_STATE(104)] = 2375,
  [SMALL_STATE(105)] = 2386,
  [SMALL_STATE(106)] = 2397,
  [SMALL_STATE(107)] = 2414,
  [SMALL_STATE(108)] = 2425,
  [SMALL_STATE(109)] = 2444,
  [SMALL_STATE(110)] = 2455,
  [SMALL_STATE(111)] = 2474,
  [SMALL_STATE(112)] = 2485,
  [SMALL_STATE(113)] = 2496,
  [SMALL_STATE(114)] = 2513,
  [SMALL_STATE(115)] = 2527,
  [SMALL_STATE(116)] = 2541,
  [SMALL_STATE(117)] = 2549,
  [SMALL_STATE(118)] = 2563,
  [SMALL_STATE(119)] = 2579,
  [SMALL_STATE(120)] = 2595,
  [SMALL_STATE(121)] = 2611,
  [SMALL_STATE(122)] = 2625,
  [SMALL_STATE(123)] = 2639,
  [SMALL_STATE(124)] = 2653,
  [SMALL_STATE(125)] = 2667,
  [SMALL_STATE(126)] = 2681,
  [SMALL_STATE(127)] = 2697,
  [SMALL_STATE(128)] = 2710,
  [SMALL_STATE(129)] = 2723,
  [SMALL_STATE(130)] = 2734,
  [SMALL_STATE(131)] = 2747,
  [SMALL_STATE(132)] = 2760,
  [SMALL_STATE(133)] = 2773,
  [SMALL_STATE(134)] = 2786,
  [SMALL_STATE(135)] = 2799,
  [SMALL_STATE(136)] = 2810,
  [SMALL_STATE(137)] = 2820,
  [SMALL_STATE(138)] = 2830,
  [SMALL_STATE(139)] = 2838,
  [SMALL_STATE(140)] = 2848,
  [SMALL_STATE(141)] = 2858,
  [SMALL_STATE(142)] = 2868,
  [SMALL_STATE(143)] = 2878,
  [SMALL_STATE(144)] = 2888,
  [SMALL_STATE(145)] = 2898,
  [SMALL_STATE(146)] = 2908,
  [SMALL_STATE(147)] = 2918,
  [SMALL_STATE(148)] = 2928,
  [SMALL_STATE(149)] = 2938,
  [SMALL_STATE(150)] = 2948,
  [SMALL_STATE(151)] = 2958,
  [SMALL_STATE(152)] = 2968,
  [SMALL_STATE(153)] = 2978,
  [SMALL_STATE(154)] = 2988,
  [SMALL_STATE(155)] = 2998,
  [SMALL_STATE(156)] = 3005,
  [SMALL_STATE(157)] = 3012,
  [SMALL_STATE(158)] = 3019,
  [SMALL_STATE(159)] = 3026,
  [SMALL_STATE(160)] = 3033,
  [SMALL_STATE(161)] = 3040,
  [SMALL_STATE(162)] = 3047,
  [SMALL_STATE(163)] = 3054,
  [SMALL_STATE(164)] = 3061,
  [SMALL_STATE(165)] = 3068,
  [SMALL_STATE(166)] = 3075,
  [SMALL_STATE(167)] = 3082,
  [SMALL_STATE(168)] = 3089,
  [SMALL_STATE(169)] = 3096,
  [SMALL_STATE(170)] = 3103,
  [SMALL_STATE(171)] = 3110,
  [SMALL_STATE(172)] = 3117,
  [SMALL_STATE(173)] = 3124,
  [SMALL_STATE(174)] = 3131,
  [SMALL_STATE(175)] = 3138,
  [SMALL_STATE(176)] = 3145,
  [SMALL_STATE(177)] = 3152,
  [SMALL_STATE(178)] = 3159,
  [SMALL_STATE(179)] = 3166,
  [SMALL_STATE(180)] = 3173,
  [SMALL_STATE(181)] = 3180,
  [SMALL_STATE(182)] = 3187,
  [SMALL_STATE(183)] = 3194,
  [SMALL_STATE(184)] = 3201,
  [SMALL_STATE(185)] = 3208,
  [SMALL_STATE(186)] = 3215,
  [SMALL_STATE(187)] = 3222,
  [SMALL_STATE(188)] = 3229,
  [SMALL_STATE(189)] = 3236,
  [SMALL_STATE(190)] = 3243,
  [SMALL_STATE(191)] = 3250,
  [SMALL_STATE(192)] = 3257,
  [SMALL_STATE(193)] = 3264,
  [SMALL_STATE(194)] = 3268,
  [SMALL_STATE(195)] = 3272,
  [SMALL_STATE(196)] = 3276,
  [SMALL_STATE(197)] = 3280,
  [SMALL_STATE(198)] = 3284,
  [SMALL_STATE(199)] = 3288,
  [SMALL_STATE(200)] = 3292,
  [SMALL_STATE(201)] = 3296,
  [SMALL_STATE(202)] = 3300,
  [SMALL_STATE(203)] = 3304,
  [SMALL_STATE(204)] = 3308,
  [SMALL_STATE(205)] = 3312,
  [SMALL_STATE(206)] = 3316,
  [SMALL_STATE(207)] = 3320,
  [SMALL_STATE(208)] = 3324,
  [SMALL_STATE(209)] = 3328,
  [SMALL_STATE(210)] = 3332,
  [SMALL_STATE(211)] = 3336,
  [SMALL_STATE(212)] = 3340,
  [SMALL_STATE(213)] = 3344,
  [SMALL_STATE(214)] = 3348,
  [SMALL_STATE(215)] = 3352,
  [SMALL_STATE(216)] = 3356,
  [SMALL_STATE(217)] = 3360,
  [SMALL_STATE(218)] = 3364,
  [SMALL_STATE(219)] = 3368,
  [SMALL_STATE(220)] = 3372,
  [SMALL_STATE(221)] = 3376,
  [SMALL_STATE(222)] = 3380,
  [SMALL_STATE(223)] = 3384,
  [SMALL_STATE(224)] = 3388,
  [SMALL_STATE(225)] = 3392,
  [SMALL_STATE(226)] = 3396,
  [SMALL_STATE(227)] = 3400,
  [SMALL_STATE(228)] = 3404,
  [SMALL_STATE(229)] = 3408,
  [SMALL_STATE(230)] = 3412,
  [SMALL_STATE(231)] = 3416,
  [SMALL_STATE(232)] = 3420,
  [SMALL_STATE(233)] = 3424,
  [SMALL_STATE(234)] = 3428,
  [SMALL_STATE(235)] = 3432,
  [SMALL_STATE(236)] = 3436,
  [SMALL_STATE(237)] = 3440,
  [SMALL_STATE(238)] = 3444,
  [SMALL_STATE(239)] = 3448,
  [SMALL_STATE(240)] = 3452,
  [SMALL_STATE(241)] = 3456,
  [SMALL_STATE(242)] = 3460,
  [SMALL_STATE(243)] = 3464,
  [SMALL_STATE(244)] = 3468,
  [SMALL_STATE(245)] = 3472,
  [SMALL_STATE(246)] = 3476,
  [SMALL_STATE(247)] = 3480,
  [SMALL_STATE(248)] = 3484,
  [SMALL_STATE(249)] = 3488,
  [SMALL_STATE(250)] = 3492,
  [SMALL_STATE(251)] = 3496,
  [SMALL_STATE(252)] = 3500,
  [SMALL_STATE(253)] = 3504,
  [SMALL_STATE(254)] = 3508,
  [SMALL_STATE(255)] = 3512,
  [SMALL_STATE(256)] = 3516,
  [SMALL_STATE(257)] = 3520,
  [SMALL_STATE(258)] = 3524,
  [SMALL_STATE(259)] = 3528,
  [SMALL_STATE(260)] = 3532,
  [SMALL_STATE(261)] = 3536,
  [SMALL_STATE(262)] = 3540,
  [SMALL_STATE(263)] = 3544,
  [SMALL_STATE(264)] = 3548,
  [SMALL_STATE(265)] = 3552,
  [SMALL_STATE(266)] = 3556,
  [SMALL_STATE(267)] = 3560,
  [SMALL_STATE(268)] = 3564,
  [SMALL_STATE(269)] = 3568,
  [SMALL_STATE(270)] = 3572,
  [SMALL_STATE(271)] = 3576,
  [SMALL_STATE(272)] = 3580,
  [SMALL_STATE(273)] = 3584,
  [SMALL_STATE(274)] = 3588,
  [SMALL_STATE(275)] = 3592,
  [SMALL_STATE(276)] = 3596,
  [SMALL_STATE(277)] = 3600,
  [SMALL_STATE(278)] = 3604,
  [SMALL_STATE(279)] = 3608,
  [SMALL_STATE(280)] = 3612,
  [SMALL_STATE(281)] = 3616,
  [SMALL_STATE(282)] = 3620,
  [SMALL_STATE(283)] = 3624,
  [SMALL_STATE(284)] = 3628,
  [SMALL_STATE(285)] = 3632,
  [SMALL_STATE(286)] = 3636,
  [SMALL_STATE(287)] = 3640,
  [SMALL_STATE(288)] = 3644,
  [SMALL_STATE(289)] = 3648,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(140),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(140),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(142),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(235),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(25),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(127),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(183),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(235),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(142),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(142),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(235),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(145),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(140),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(140),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(30),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(140),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(134),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(245),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(137),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(173),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(172),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(69),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(117),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(15),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(118),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(126),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [768] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
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
