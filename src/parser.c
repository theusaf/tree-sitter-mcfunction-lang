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
#define STATE_COUNT 295
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
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
  aux_sym_command_repeat2 = 98,
  aux_sym_execute_command_repeat1 = 99,
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
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == '}') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '}') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '{') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '{') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(318);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
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
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(276);
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
      if (lookahead == 'g') ADVANCE(104);
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
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(110);
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
      if (lookahead == 's') ADVANCE(101);
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
      if (lookahead == 't') ADVANCE(91);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__line_separator);
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
      if (lookahead == 'd') ADVANCE(123);
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
      if (lookahead == 'd') ADVANCE(108);
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
      if (lookahead == 'd') ADVANCE(120);
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
      if (lookahead == 'e') ADVANCE(273);
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
      if (lookahead == 'e') ADVANCE(277);
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
      if (lookahead == 'e') ADVANCE(125);
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
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
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
      if (lookahead == 'g') ADVANCE(105);
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
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
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
      if (lookahead == 'n') ADVANCE(89);
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
      if (lookahead == 'n') ADVANCE(111);
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
      if (lookahead == 's') ADVANCE(102);
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
      if (lookahead == 'd') ADVANCE(124);
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
      if (lookahead == 'd') ADVANCE(109);
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
      if (lookahead == 'd') ADVANCE(121);
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
      if (lookahead == 'e') ADVANCE(274);
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
      if (lookahead == 'e') ADVANCE(278);
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
      if (lookahead == 'e') ADVANCE(126);
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
      if (lookahead == 'e') ADVANCE(85);
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
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(97);
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
      if (lookahead == 'g') ADVANCE(106);
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
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(115);
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
      if (lookahead == 'n') ADVANCE(90);
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
      if (lookahead == 'n') ADVANCE(112);
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
      if (lookahead == 's') ADVANCE(103);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(279);
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
      if (lookahead == 'e') ADVANCE(86);
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
      if (lookahead == 't') ADVANCE(92);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == ',') ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_nbt_path_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_nbt_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_namespaced_container);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
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
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
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
  [52] = {.lex_state = 7},
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
  [64] = {.lex_state = 7},
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
  [75] = {.lex_state = 77},
  [76] = {.lex_state = 7},
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
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 77},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 77},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 296},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 77},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 77},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 77},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 77},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 77},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 292},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 295},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 294},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 77},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 295},
  [155] = {.lex_state = 295},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 77},
  [159] = {.lex_state = 297},
  [160] = {.lex_state = 292},
  [161] = {.lex_state = 292},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 292},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 293},
  [166] = {.lex_state = 77},
  [167] = {.lex_state = 77},
  [168] = {.lex_state = 292},
  [169] = {.lex_state = 292},
  [170] = {.lex_state = 292},
  [171] = {.lex_state = 77},
  [172] = {.lex_state = 292},
  [173] = {.lex_state = 292},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 292},
  [176] = {.lex_state = 77},
  [177] = {.lex_state = 293},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 292},
  [180] = {.lex_state = 293},
  [181] = {.lex_state = 292},
  [182] = {.lex_state = 295},
  [183] = {.lex_state = 292},
  [184] = {.lex_state = 77},
  [185] = {.lex_state = 293},
  [186] = {.lex_state = 77},
  [187] = {.lex_state = 292},
  [188] = {.lex_state = 292},
  [189] = {.lex_state = 77},
  [190] = {.lex_state = 77},
  [191] = {.lex_state = 292},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 292},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 293},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 293},
  [198] = {.lex_state = 77},
  [199] = {.lex_state = 292},
  [200] = {.lex_state = 292},
  [201] = {.lex_state = 292},
  [202] = {.lex_state = 292},
  [203] = {.lex_state = 292},
  [204] = {.lex_state = 77},
  [205] = {.lex_state = 292},
  [206] = {.lex_state = 292},
  [207] = {.lex_state = 77},
  [208] = {.lex_state = 292},
  [209] = {.lex_state = 292},
  [210] = {.lex_state = 77},
  [211] = {.lex_state = 77},
  [212] = {.lex_state = 77},
  [213] = {.lex_state = 292},
  [214] = {.lex_state = 77},
  [215] = {.lex_state = 292},
  [216] = {.lex_state = 77},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 77},
  [219] = {.lex_state = 77},
  [220] = {.lex_state = 292},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 292},
  [223] = {.lex_state = 292},
  [224] = {.lex_state = 77},
  [225] = {.lex_state = 77},
  [226] = {.lex_state = 77},
  [227] = {.lex_state = 292},
  [228] = {.lex_state = 77},
  [229] = {.lex_state = 77},
  [230] = {.lex_state = 292},
  [231] = {.lex_state = 77},
  [232] = {.lex_state = 77},
  [233] = {.lex_state = 77},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 292},
  [236] = {.lex_state = 292},
  [237] = {.lex_state = 292},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 77},
  [240] = {.lex_state = 77},
  [241] = {.lex_state = 77},
  [242] = {.lex_state = 292},
  [243] = {.lex_state = 292},
  [244] = {.lex_state = 292},
  [245] = {.lex_state = 292},
  [246] = {.lex_state = 77},
  [247] = {.lex_state = 77},
  [248] = {.lex_state = 292},
  [249] = {.lex_state = 292},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 292},
  [252] = {.lex_state = 77},
  [253] = {.lex_state = 292},
  [254] = {.lex_state = 292},
  [255] = {.lex_state = 292},
  [256] = {.lex_state = 292},
  [257] = {.lex_state = 292},
  [258] = {.lex_state = 292},
  [259] = {.lex_state = 292},
  [260] = {.lex_state = 77},
  [261] = {.lex_state = 292},
  [262] = {.lex_state = 292},
  [263] = {.lex_state = 292},
  [264] = {.lex_state = 77},
  [265] = {.lex_state = 292},
  [266] = {.lex_state = 77},
  [267] = {.lex_state = 292},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 292},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 77},
  [272] = {.lex_state = 292},
  [273] = {.lex_state = 292},
  [274] = {.lex_state = 292},
  [275] = {.lex_state = 292},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 292},
  [278] = {.lex_state = 77},
  [279] = {.lex_state = 77},
  [280] = {.lex_state = 292},
  [281] = {.lex_state = 292},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 292},
  [284] = {.lex_state = 292},
  [285] = {.lex_state = 292},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 77},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 292},
  [290] = {.lex_state = 77},
  [291] = {.lex_state = 77},
  [292] = {.lex_state = 77},
  [293] = {.lex_state = 292},
  [294] = {.lex_state = 292},
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
    [sym_root] = STATE(286),
    [sym_command] = STATE(21),
    [sym_execute_command] = STATE(96),
    [sym__legacy_execute] = STATE(96),
    [sym_identifier] = STATE(84),
    [sym_command_name] = STATE(39),
    [aux_sym_root_repeat1] = STATE(21),
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
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    STATE(225), 1,
      sym_selector,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 11,
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
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(218), 1,
      sym_selector,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 11,
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
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 12,
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
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 12,
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
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 12,
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
    STATE(26), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(228), 12,
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
    ACTIONS(51), 1,
      anon_sym_execute,
    ACTIONS(53), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym_namespace,
    ACTIONS(58), 1,
      sym_namespaced_container,
    STATE(10), 1,
      sym_identifier,
    STATE(22), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 2,
      sym_tag,
      sym_text,
    STATE(90), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
    STATE(89), 11,
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
  [574] = 17,
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
      sym_text,
    ACTIONS(56), 1,
      sym_namespace,
    STATE(10), 1,
      sym_identifier,
    STATE(22), 1,
      sym_string,
    STATE(224), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(58), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(90), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(89), 11,
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
  [639] = 13,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [683] = 11,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(44), 1,
      aux_sym_container_repeat1,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(76), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [721] = 9,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(284), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [754] = 9,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [787] = 9,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [820] = 9,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [853] = 8,
    ACTIONS(100), 1,
      aux_sym_identifier_token1,
    ACTIONS(102), 1,
      sym_number,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      aux_sym_selector_number_token3,
    STATE(199), 1,
      sym_selector_value,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(200), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [883] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [913] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(284), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [943] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [973] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(267), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(285), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1003] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(114), 2,
      sym_comment,
      sym__line_separator,
    STATE(23), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(96), 2,
      sym_execute_command,
      sym__legacy_execute,
  [1034] = 7,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1061] = 9,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(126), 1,
      anon_sym_execute,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(120), 2,
      sym_comment,
      sym__line_separator,
    STATE(23), 2,
      sym_command,
      aux_sym_root_repeat1,
    STATE(96), 2,
      sym_execute_command,
      sym__legacy_execute,
  [1092] = 7,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(134), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1119] = 7,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(144), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1146] = 12,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
    STATE(114), 1,
      aux_sym_nbt_path_repeat3,
    STATE(158), 1,
      aux_sym_path_repeat1,
  [1183] = 4,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(152), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1202] = 4,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1221] = 4,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(152), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1240] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_nbt_object,
    STATE(78), 1,
      sym_item_nbt,
    ACTIONS(169), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1261] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1280] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(44), 1,
      aux_sym_container_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    STATE(151), 1,
      aux_sym_path_repeat1,
  [1311] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_nbt_object,
    STATE(91), 1,
      sym_item_nbt,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1332] = 5,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
    ACTIONS(184), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1353] = 2,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1368] = 2,
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
  [1382] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_item_state,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1400] = 4,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(38), 1,
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
  [1418] = 5,
    ACTIONS(205), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_command_repeat1,
    STATE(57), 1,
      aux_sym_command_repeat2,
    ACTIONS(207), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1438] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_item_state,
    ACTIONS(169), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1456] = 2,
    ACTIONS(211), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1470] = 2,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1484] = 5,
    ACTIONS(205), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_command_repeat1,
    STATE(68), 1,
      aux_sym_command_repeat2,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1504] = 4,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_container_repeat1,
    ACTIONS(219), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1522] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_selector_option_section,
    ACTIONS(223), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1540] = 2,
    ACTIONS(229), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1554] = 5,
    ACTIONS(205), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_command_repeat2,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1574] = 5,
    ACTIONS(205), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym_command_repeat1,
    STATE(68), 1,
      aux_sym_command_repeat2,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1594] = 2,
    ACTIONS(198), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_DOT,
  [1607] = 4,
    ACTIONS(237), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_command_repeat2,
    ACTIONS(239), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1624] = 4,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1641] = 8,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_nbt_identifier,
    ACTIONS(250), 1,
      aux_sym_identifier_token1,
    ACTIONS(252), 1,
      sym_number,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_nbt_object_key,
    STATE(235), 1,
      sym_selector_score_key,
    STATE(283), 1,
      sym_string,
  [1666] = 4,
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
  [1683] = 2,
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
  [1696] = 2,
    ACTIONS(269), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACE,
  [1709] = 2,
    ACTIONS(273), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(271), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1722] = 4,
    ACTIONS(237), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_command_repeat2,
    ACTIONS(215), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1739] = 4,
    ACTIONS(277), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_command_repeat2,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(275), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1756] = 4,
    ACTIONS(284), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(287), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      sym__line_separator,
  [1773] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    ACTIONS(293), 1,
      anon_sym_detect,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [1796] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    ACTIONS(295), 1,
      anon_sym_detect,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(111), 2,
      sym_command,
      sym__legacy_execute,
  [1819] = 4,
    ACTIONS(299), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym_command_repeat1,
    ACTIONS(302), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1836] = 2,
    ACTIONS(306), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1849] = 8,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_nbt_identifier,
    ACTIONS(250), 1,
      aux_sym_identifier_token1,
    ACTIONS(252), 1,
      sym_number,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_selector_score_key,
    STATE(223), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
  [1874] = 3,
    ACTIONS(314), 1,
      sym_number,
    ACTIONS(312), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(310), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1889] = 2,
    ACTIONS(318), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_LBRACK,
  [1902] = 4,
    ACTIONS(65), 1,
      anon_sym_execute,
    ACTIONS(320), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1919] = 4,
    ACTIONS(237), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_command_repeat2,
    ACTIONS(233), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1936] = 2,
    ACTIONS(325), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1948] = 3,
    ACTIONS(327), 1,
      anon_sym_,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [1962] = 2,
    ACTIONS(332), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(330), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1974] = 2,
    ACTIONS(336), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(334), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1986] = 2,
    ACTIONS(340), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [1998] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(344), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(117), 2,
      sym_command,
      sym_execute_command,
  [2018] = 2,
    ACTIONS(246), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2030] = 7,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_nbt_identifier,
    ACTIONS(250), 1,
      aux_sym_identifier_token1,
    ACTIONS(252), 1,
      sym_number,
    STATE(223), 1,
      sym_nbt_object_key,
    STATE(235), 1,
      sym_selector_score_key,
    STATE(283), 1,
      sym_string,
  [2052] = 2,
    ACTIONS(348), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2064] = 2,
    ACTIONS(180), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2076] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2088] = 2,
    ACTIONS(312), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(310), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2100] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(104), 2,
      sym_command,
      sym__legacy_execute,
  [2120] = 2,
    ACTIONS(356), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2132] = 2,
    ACTIONS(360), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2144] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2156] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(115), 2,
      sym_command,
      sym__legacy_execute,
  [2176] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(344), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(103), 2,
      sym_command,
      sym_execute_command,
  [2196] = 2,
    ACTIONS(368), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2208] = 3,
    ACTIONS(372), 1,
      anon_sym_,
    ACTIONS(375), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(370), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2222] = 2,
    ACTIONS(302), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2234] = 2,
    ACTIONS(379), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2246] = 2,
    ACTIONS(383), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(381), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
  [2258] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(109), 2,
      sym_command,
      sym__legacy_execute,
  [2278] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(291), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(112), 2,
      sym_command,
      sym__legacy_execute,
  [2298] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(344), 1,
      anon_sym_execute,
    STATE(39), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
    STATE(98), 2,
      sym_command,
      sym_execute_command,
  [2318] = 5,
    ACTIONS(385), 1,
      aux_sym_identifier_token1,
    ACTIONS(387), 1,
      sym_number,
    STATE(231), 1,
      sym_state_value,
    STATE(279), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2335] = 2,
    ACTIONS(391), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2346] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_,
    STATE(30), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2365] = 2,
    ACTIONS(397), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(395), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2376] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
    ACTIONS(252), 2,
      sym_nbt_identifier,
      sym_number,
  [2393] = 5,
    ACTIONS(401), 1,
      aux_sym_identifier_token1,
    ACTIONS(403), 1,
      sym_number,
    STATE(196), 1,
      sym_boolean,
    STATE(197), 1,
      sym_state_value,
    ACTIONS(405), 2,
      anon_sym_true,
      anon_sym_false,
  [2410] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_item_state,
    STATE(37), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2429] = 2,
    ACTIONS(409), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2440] = 2,
    ACTIONS(413), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2451] = 2,
    ACTIONS(417), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2462] = 6,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    STATE(114), 1,
      aux_sym_nbt_path_repeat3,
  [2481] = 4,
    STATE(254), 1,
      sym_selector_score_value,
    STATE(255), 1,
      sym_selector_number,
    ACTIONS(108), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(110), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2496] = 5,
    ACTIONS(385), 1,
      aux_sym_identifier_token1,
    ACTIONS(387), 1,
      sym_number,
    STATE(241), 1,
      sym_state_value,
    STATE(279), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2513] = 2,
    ACTIONS(419), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(421), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2524] = 2,
    ACTIONS(425), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2535] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(427), 1,
      anon_sym_,
    STATE(30), 1,
      sym_item_state,
    STATE(40), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2554] = 2,
    ACTIONS(431), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2565] = 2,
    ACTIONS(435), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2576] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
    ACTIONS(252), 2,
      sym_nbt_identifier,
      sym_number,
  [2593] = 6,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
  [2612] = 2,
    ACTIONS(443), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(441), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2623] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
    ACTIONS(252), 2,
      sym_nbt_identifier,
      sym_number,
  [2640] = 2,
    ACTIONS(449), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(447), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      sym__line_separator,
  [2651] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
    ACTIONS(252), 2,
      sym_nbt_identifier,
      sym_number,
  [2668] = 4,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym_string_token1,
    ACTIONS(457), 1,
      anon_sym_BSLASH,
    STATE(124), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2682] = 4,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      sym_nbt_object_key,
    STATE(283), 1,
      sym_string,
    ACTIONS(252), 2,
      sym_nbt_identifier,
      sym_number,
  [2696] = 1,
    ACTIONS(459), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2704] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(461), 1,
      sym_namespace,
    STATE(110), 1,
      sym_identifier,
    STATE(204), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2718] = 4,
    ACTIONS(457), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      aux_sym_string_token1,
    STATE(119), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2732] = 4,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    ACTIONS(472), 1,
      anon_sym_BSLASH,
    STATE(124), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2746] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(219), 1,
      sym_location,
    STATE(291), 1,
      sym_coordinate,
  [2762] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(290), 1,
      sym_location,
    STATE(291), 1,
      sym_coordinate,
  [2778] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(210), 1,
      sym_location,
    STATE(291), 1,
      sym_coordinate,
  [2794] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(461), 1,
      sym_namespace,
    STATE(97), 1,
      sym_identifier,
    STATE(198), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2808] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(287), 1,
      sym_location,
    STATE(291), 1,
      sym_coordinate,
  [2824] = 4,
    ACTIONS(455), 1,
      aux_sym_string_token1,
    ACTIONS(457), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(124), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2838] = 4,
    ACTIONS(457), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    STATE(130), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2852] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(271), 1,
      sym_coordinate,
  [2865] = 3,
    ACTIONS(485), 1,
      aux_sym_identifier_token1,
    STATE(217), 1,
      sym_state_key,
    ACTIONS(483), 2,
      anon_sym_STAR,
      sym_number,
  [2876] = 4,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_,
    ACTIONS(487), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
  [2889] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(489), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
  [2902] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(491), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
  [2915] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(88), 1,
      sym_coordinate,
  [2928] = 3,
    ACTIONS(485), 1,
      aux_sym_identifier_token1,
    STATE(212), 1,
      sym_state_key,
    ACTIONS(493), 2,
      anon_sym_STAR,
      sym_number,
  [2939] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(495), 1,
      anon_sym_execute,
    STATE(43), 1,
      sym_command_name,
    STATE(84), 1,
      sym_identifier,
  [2952] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      sym_number,
    STATE(69), 1,
      sym_coordinate,
  [2965] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(497), 1,
      sym_number,
    STATE(49), 1,
      sym_identifier,
  [2975] = 3,
    ACTIONS(499), 1,
      aux_sym_nbt_path_token1,
    STATE(181), 1,
      aux_sym_selector_score_repeat1,
    STATE(183), 1,
      aux_sym_selector_nbt_repeat1,
  [2985] = 3,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(501), 1,
      aux_sym_identifier_token1,
    STATE(32), 1,
      sym_identifier,
  [2995] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(503), 1,
      sym_nbt_identifier,
    STATE(214), 1,
      sym_selector,
  [3005] = 3,
    ACTIONS(505), 1,
      aux_sym_identifier_token1,
    STATE(251), 1,
      sym_selector_key,
    STATE(253), 1,
      sym_selector_option,
  [3015] = 3,
    ACTIONS(507), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_selector_option_section_repeat1,
  [3025] = 3,
    ACTIONS(511), 1,
      aux_sym_identifier_token1,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_selector_score_key,
  [3035] = 3,
    ACTIONS(515), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    ACTIONS(519), 1,
      anon_sym_COMMA,
  [3045] = 3,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym_text,
    STATE(42), 1,
      sym_string,
  [3055] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(521), 1,
      sym_namespace,
    STATE(75), 1,
      sym_identifier,
  [3065] = 3,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [3075] = 2,
    ACTIONS(525), 1,
      aux_sym_string_token1,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3083] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(527), 1,
      sym_nbt_identifier,
    STATE(266), 1,
      sym_selector,
  [3093] = 3,
    ACTIONS(507), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_selector_option_section_repeat1,
  [3103] = 3,
    ACTIONS(531), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_selector_option_section_repeat1,
  [3113] = 3,
    ACTIONS(536), 1,
      aux_sym_identifier_token1,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym_state_key,
  [3123] = 3,
    ACTIONS(536), 1,
      aux_sym_identifier_token1,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym_state_key,
  [3133] = 3,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(282), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [3143] = 3,
    ACTIONS(542), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(544), 1,
      aux_sym_nbt_path_token2,
    STATE(188), 1,
      aux_sym_item_state_repeat1,
  [3153] = 2,
    ACTIONS(546), 1,
      aux_sym_nbt_path_token1,
    STATE(160), 1,
      aux_sym_item_state_repeat1,
  [3160] = 2,
    ACTIONS(549), 1,
      aux_sym_nbt_path_token1,
    STATE(191), 1,
      aux_sym_nbt_array_repeat1,
  [3167] = 2,
    ACTIONS(501), 1,
      aux_sym_identifier_token1,
    STATE(77), 1,
      sym_identifier,
  [3174] = 2,
    ACTIONS(551), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_object_repeat1,
  [3181] = 2,
    ACTIONS(511), 1,
      aux_sym_identifier_token1,
    STATE(238), 1,
      sym_selector_score_key,
  [3188] = 2,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      aux_sym_nbt_path_token1,
  [3195] = 2,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3202] = 2,
    ACTIONS(557), 1,
      anon_sym_,
    STATE(186), 1,
      aux_sym_execute_command_repeat1,
  [3209] = 2,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token1,
    STATE(172), 1,
      aux_sym_nbt_array_repeat1,
  [3216] = 2,
    ACTIONS(561), 1,
      aux_sym_nbt_path_token1,
    STATE(163), 1,
      aux_sym_nbt_object_repeat1,
  [3223] = 2,
    ACTIONS(563), 1,
      aux_sym_nbt_path_token1,
    STATE(188), 1,
      aux_sym_item_state_repeat1,
  [3230] = 2,
    ACTIONS(565), 1,
      anon_sym_,
    STATE(186), 1,
      aux_sym_execute_command_repeat1,
  [3237] = 2,
    ACTIONS(567), 1,
      aux_sym_nbt_path_token1,
    STATE(172), 1,
      aux_sym_nbt_array_repeat1,
  [3244] = 2,
    ACTIONS(570), 1,
      aux_sym_nbt_path_token1,
    STATE(173), 1,
      aux_sym_selector_score_repeat1,
  [3251] = 2,
    ACTIONS(573), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(575), 1,
      anon_sym_COMMA,
  [3258] = 2,
    ACTIONS(577), 1,
      aux_sym_nbt_path_token1,
    STATE(175), 1,
      aux_sym_selector_nbt_repeat1,
  [3265] = 2,
    ACTIONS(580), 1,
      anon_sym_,
    STATE(190), 1,
      aux_sym_execute_command_repeat1,
  [3272] = 2,
    ACTIONS(582), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [3279] = 2,
    ACTIONS(536), 1,
      aux_sym_identifier_token1,
    STATE(242), 1,
      sym_state_key,
  [3286] = 2,
    ACTIONS(586), 1,
      aux_sym_nbt_path_token1,
    STATE(168), 1,
      aux_sym_nbt_array_repeat1,
  [3293] = 2,
    ACTIONS(588), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(590), 1,
      anon_sym_COMMA,
  [3300] = 2,
    ACTIONS(592), 1,
      aux_sym_nbt_path_token1,
    STATE(173), 1,
      aux_sym_selector_score_repeat1,
  [3307] = 2,
    ACTIONS(594), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [3314] = 2,
    ACTIONS(598), 1,
      aux_sym_nbt_path_token1,
    STATE(175), 1,
      aux_sym_selector_nbt_repeat1,
  [3321] = 2,
    ACTIONS(600), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3328] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(605), 1,
      anon_sym_COMMA,
  [3335] = 2,
    ACTIONS(607), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3342] = 2,
    ACTIONS(609), 1,
      aux_sym_nbt_path_token1,
    STATE(193), 1,
      aux_sym_nbt_object_repeat1,
  [3349] = 2,
    ACTIONS(611), 1,
      aux_sym_nbt_path_token1,
    STATE(160), 1,
      aux_sym_item_state_repeat1,
  [3356] = 2,
    ACTIONS(613), 1,
      anon_sym_,
    STATE(190), 1,
      aux_sym_execute_command_repeat1,
  [3363] = 2,
    ACTIONS(557), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3370] = 2,
    ACTIONS(615), 1,
      aux_sym_nbt_path_token1,
    STATE(172), 1,
      aux_sym_nbt_array_repeat1,
  [3377] = 2,
    ACTIONS(501), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_identifier,
  [3384] = 2,
    ACTIONS(617), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_object_repeat1,
  [3391] = 2,
    ACTIONS(619), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_object_repeat1,
  [3398] = 2,
    ACTIONS(622), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [3405] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [3412] = 2,
    ACTIONS(630), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [3419] = 1,
    ACTIONS(393), 1,
      anon_sym_,
  [3423] = 1,
    ACTIONS(634), 1,
      aux_sym_nbt_path_token1,
  [3427] = 1,
    ACTIONS(636), 1,
      aux_sym_nbt_path_token1,
  [3431] = 1,
    ACTIONS(638), 1,
      aux_sym_nbt_path_token1,
  [3435] = 1,
    ACTIONS(641), 1,
      aux_sym_nbt_path_token1,
  [3439] = 1,
    ACTIONS(643), 1,
      aux_sym_nbt_path_token1,
  [3443] = 1,
    ACTIONS(427), 1,
      anon_sym_,
  [3447] = 1,
    ACTIONS(645), 1,
      aux_sym_nbt_path_token1,
  [3451] = 1,
    ACTIONS(647), 1,
      aux_sym_nbt_path_token1,
  [3455] = 1,
    ACTIONS(649), 1,
      anon_sym_,
  [3459] = 1,
    ACTIONS(651), 1,
      aux_sym_nbt_path_token1,
  [3463] = 1,
    ACTIONS(653), 1,
      aux_sym_nbt_path_token1,
  [3467] = 1,
    ACTIONS(655), 1,
      anon_sym_,
  [3471] = 1,
    ACTIONS(657), 1,
      anon_sym_,
  [3475] = 1,
    ACTIONS(659), 1,
      anon_sym_EQ,
  [3479] = 1,
    ACTIONS(661), 1,
      aux_sym_nbt_path_token1,
  [3483] = 1,
    ACTIONS(663), 1,
      anon_sym_,
  [3487] = 1,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
  [3491] = 1,
    ACTIONS(668), 1,
      anon_sym_,
  [3495] = 1,
    ACTIONS(670), 1,
      anon_sym_EQ,
  [3499] = 1,
    ACTIONS(672), 1,
      anon_sym_,
  [3503] = 1,
    ACTIONS(675), 1,
      anon_sym_,
  [3507] = 1,
    ACTIONS(677), 1,
      aux_sym_nbt_path_token1,
  [3511] = 1,
    ACTIONS(679), 1,
      aux_sym_nbt_path_token1,
  [3515] = 1,
    ACTIONS(682), 1,
      aux_sym_nbt_path_token1,
  [3519] = 1,
    ACTIONS(684), 1,
      aux_sym_nbt_path_token1,
  [3523] = 1,
    ACTIONS(686), 1,
      anon_sym_,
  [3527] = 1,
    ACTIONS(688), 1,
      anon_sym_,
  [3531] = 1,
    ACTIONS(691), 1,
      anon_sym_EQ,
  [3535] = 1,
    ACTIONS(693), 1,
      aux_sym_nbt_path_token1,
  [3539] = 1,
    ACTIONS(695), 1,
      anon_sym_,
  [3543] = 1,
    ACTIONS(697), 1,
      anon_sym_EQ,
  [3547] = 1,
    ACTIONS(699), 1,
      aux_sym_nbt_path_token1,
  [3551] = 1,
    ACTIONS(701), 1,
      anon_sym_,
  [3555] = 1,
    ACTIONS(703), 1,
      anon_sym_,
  [3559] = 1,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [3563] = 1,
    ACTIONS(707), 1,
      aux_sym_nbt_path_token1,
  [3567] = 1,
    ACTIONS(709), 1,
      aux_sym_nbt_path_token1,
  [3571] = 1,
    ACTIONS(711), 1,
      aux_sym_nbt_path_token1,
  [3575] = 1,
    ACTIONS(713), 1,
      aux_sym_nbt_path_token1,
  [3579] = 1,
    ACTIONS(715), 1,
      aux_sym_nbt_path_token1,
  [3583] = 1,
    ACTIONS(717), 1,
      anon_sym_,
  [3587] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
  [3591] = 1,
    ACTIONS(721), 1,
      anon_sym_,
  [3595] = 1,
    ACTIONS(723), 1,
      aux_sym_nbt_path_token1,
  [3599] = 1,
    ACTIONS(725), 1,
      aux_sym_nbt_path_token1,
  [3603] = 1,
    ACTIONS(727), 1,
      aux_sym_nbt_path_token1,
  [3607] = 1,
    ACTIONS(729), 1,
      aux_sym_nbt_path_token1,
  [3611] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3615] = 1,
    ACTIONS(553), 1,
      anon_sym_EQ,
  [3619] = 1,
    ACTIONS(731), 1,
      aux_sym_nbt_path_token1,
  [3623] = 1,
    ACTIONS(733), 1,
      aux_sym_nbt_path_token1,
  [3627] = 1,
    ACTIONS(735), 1,
      anon_sym_COLON,
  [3631] = 1,
    ACTIONS(737), 1,
      aux_sym_nbt_path_token1,
  [3635] = 1,
    ACTIONS(314), 1,
      sym_number,
  [3639] = 1,
    ACTIONS(739), 1,
      aux_sym_nbt_path_token1,
  [3643] = 1,
    ACTIONS(741), 1,
      aux_sym_nbt_path_token1,
  [3647] = 1,
    ACTIONS(743), 1,
      aux_sym_nbt_path_token1,
  [3651] = 1,
    ACTIONS(745), 1,
      aux_sym_nbt_path_token1,
  [3655] = 1,
    ACTIONS(747), 1,
      aux_sym_nbt_path_token1,
  [3659] = 1,
    ACTIONS(749), 1,
      aux_sym_nbt_path_token1,
  [3663] = 1,
    ACTIONS(751), 1,
      aux_sym_nbt_path_token1,
  [3667] = 1,
    ACTIONS(753), 1,
      anon_sym_,
  [3671] = 1,
    ACTIONS(755), 1,
      aux_sym_nbt_path_token1,
  [3675] = 1,
    ACTIONS(757), 1,
      aux_sym_nbt_path_token1,
  [3679] = 1,
    ACTIONS(759), 1,
      aux_sym_nbt_path_token1,
  [3683] = 1,
    ACTIONS(761), 1,
      anon_sym_,
  [3687] = 1,
    ACTIONS(334), 1,
      aux_sym_nbt_path_token1,
  [3691] = 1,
    ACTIONS(763), 1,
      anon_sym_,
  [3695] = 1,
    ACTIONS(377), 1,
      aux_sym_nbt_path_token1,
  [3699] = 1,
    ACTIONS(765), 1,
      anon_sym_,
  [3703] = 1,
    ACTIONS(227), 1,
      aux_sym_nbt_path_token1,
  [3707] = 1,
    ACTIONS(767), 1,
      anon_sym_,
  [3711] = 1,
    ACTIONS(769), 1,
      anon_sym_,
  [3715] = 1,
    ACTIONS(209), 1,
      aux_sym_nbt_path_token1,
  [3719] = 1,
    ACTIONS(771), 1,
      aux_sym_nbt_path_token1,
  [3723] = 1,
    ACTIONS(330), 1,
      aux_sym_nbt_path_token1,
  [3727] = 1,
    ACTIONS(316), 1,
      aux_sym_nbt_path_token1,
  [3731] = 1,
    ACTIONS(350), 1,
      aux_sym_nbt_path_token1,
  [3735] = 1,
    ACTIONS(271), 1,
      aux_sym_nbt_path_token1,
  [3739] = 1,
    ACTIONS(733), 1,
      anon_sym_EQ,
  [3743] = 1,
    ACTIONS(628), 1,
      anon_sym_,
  [3747] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3751] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3755] = 1,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
  [3759] = 1,
    ACTIONS(779), 1,
      aux_sym_nbt_path_token1,
  [3763] = 1,
    ACTIONS(781), 1,
      aux_sym_nbt_path_token1,
  [3767] = 1,
    ACTIONS(783), 1,
      aux_sym_nbt_path_token1,
  [3771] = 1,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
  [3775] = 1,
    ACTIONS(787), 1,
      anon_sym_,
  [3779] = 1,
    ACTIONS(544), 1,
      aux_sym_nbt_path_token2,
  [3783] = 1,
    ACTIONS(789), 1,
      aux_sym_nbt_path_token1,
  [3787] = 1,
    ACTIONS(791), 1,
      anon_sym_,
  [3791] = 1,
    ACTIONS(793), 1,
      anon_sym_,
  [3795] = 1,
    ACTIONS(795), 1,
      anon_sym_,
  [3799] = 1,
    ACTIONS(797), 1,
      aux_sym_nbt_path_token1,
  [3803] = 1,
    ACTIONS(799), 1,
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
  [SMALL_STATE(9)] = 574,
  [SMALL_STATE(10)] = 639,
  [SMALL_STATE(11)] = 683,
  [SMALL_STATE(12)] = 721,
  [SMALL_STATE(13)] = 754,
  [SMALL_STATE(14)] = 787,
  [SMALL_STATE(15)] = 820,
  [SMALL_STATE(16)] = 853,
  [SMALL_STATE(17)] = 883,
  [SMALL_STATE(18)] = 913,
  [SMALL_STATE(19)] = 943,
  [SMALL_STATE(20)] = 973,
  [SMALL_STATE(21)] = 1003,
  [SMALL_STATE(22)] = 1034,
  [SMALL_STATE(23)] = 1061,
  [SMALL_STATE(24)] = 1092,
  [SMALL_STATE(25)] = 1119,
  [SMALL_STATE(26)] = 1146,
  [SMALL_STATE(27)] = 1183,
  [SMALL_STATE(28)] = 1202,
  [SMALL_STATE(29)] = 1221,
  [SMALL_STATE(30)] = 1240,
  [SMALL_STATE(31)] = 1261,
  [SMALL_STATE(32)] = 1280,
  [SMALL_STATE(33)] = 1311,
  [SMALL_STATE(34)] = 1332,
  [SMALL_STATE(35)] = 1353,
  [SMALL_STATE(36)] = 1368,
  [SMALL_STATE(37)] = 1382,
  [SMALL_STATE(38)] = 1400,
  [SMALL_STATE(39)] = 1418,
  [SMALL_STATE(40)] = 1438,
  [SMALL_STATE(41)] = 1456,
  [SMALL_STATE(42)] = 1470,
  [SMALL_STATE(43)] = 1484,
  [SMALL_STATE(44)] = 1504,
  [SMALL_STATE(45)] = 1522,
  [SMALL_STATE(46)] = 1540,
  [SMALL_STATE(47)] = 1554,
  [SMALL_STATE(48)] = 1574,
  [SMALL_STATE(49)] = 1594,
  [SMALL_STATE(50)] = 1607,
  [SMALL_STATE(51)] = 1624,
  [SMALL_STATE(52)] = 1641,
  [SMALL_STATE(53)] = 1666,
  [SMALL_STATE(54)] = 1683,
  [SMALL_STATE(55)] = 1696,
  [SMALL_STATE(56)] = 1709,
  [SMALL_STATE(57)] = 1722,
  [SMALL_STATE(58)] = 1739,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1773,
  [SMALL_STATE(61)] = 1796,
  [SMALL_STATE(62)] = 1819,
  [SMALL_STATE(63)] = 1836,
  [SMALL_STATE(64)] = 1849,
  [SMALL_STATE(65)] = 1874,
  [SMALL_STATE(66)] = 1889,
  [SMALL_STATE(67)] = 1902,
  [SMALL_STATE(68)] = 1919,
  [SMALL_STATE(69)] = 1936,
  [SMALL_STATE(70)] = 1948,
  [SMALL_STATE(71)] = 1962,
  [SMALL_STATE(72)] = 1974,
  [SMALL_STATE(73)] = 1986,
  [SMALL_STATE(74)] = 1998,
  [SMALL_STATE(75)] = 2018,
  [SMALL_STATE(76)] = 2030,
  [SMALL_STATE(77)] = 2052,
  [SMALL_STATE(78)] = 2064,
  [SMALL_STATE(79)] = 2076,
  [SMALL_STATE(80)] = 2088,
  [SMALL_STATE(81)] = 2100,
  [SMALL_STATE(82)] = 2120,
  [SMALL_STATE(83)] = 2132,
  [SMALL_STATE(84)] = 2144,
  [SMALL_STATE(85)] = 2156,
  [SMALL_STATE(86)] = 2176,
  [SMALL_STATE(87)] = 2196,
  [SMALL_STATE(88)] = 2208,
  [SMALL_STATE(89)] = 2222,
  [SMALL_STATE(90)] = 2234,
  [SMALL_STATE(91)] = 2246,
  [SMALL_STATE(92)] = 2258,
  [SMALL_STATE(93)] = 2278,
  [SMALL_STATE(94)] = 2298,
  [SMALL_STATE(95)] = 2318,
  [SMALL_STATE(96)] = 2335,
  [SMALL_STATE(97)] = 2346,
  [SMALL_STATE(98)] = 2365,
  [SMALL_STATE(99)] = 2376,
  [SMALL_STATE(100)] = 2393,
  [SMALL_STATE(101)] = 2410,
  [SMALL_STATE(102)] = 2429,
  [SMALL_STATE(103)] = 2440,
  [SMALL_STATE(104)] = 2451,
  [SMALL_STATE(105)] = 2462,
  [SMALL_STATE(106)] = 2481,
  [SMALL_STATE(107)] = 2496,
  [SMALL_STATE(108)] = 2513,
  [SMALL_STATE(109)] = 2524,
  [SMALL_STATE(110)] = 2535,
  [SMALL_STATE(111)] = 2554,
  [SMALL_STATE(112)] = 2565,
  [SMALL_STATE(113)] = 2576,
  [SMALL_STATE(114)] = 2593,
  [SMALL_STATE(115)] = 2612,
  [SMALL_STATE(116)] = 2623,
  [SMALL_STATE(117)] = 2640,
  [SMALL_STATE(118)] = 2651,
  [SMALL_STATE(119)] = 2668,
  [SMALL_STATE(120)] = 2682,
  [SMALL_STATE(121)] = 2696,
  [SMALL_STATE(122)] = 2704,
  [SMALL_STATE(123)] = 2718,
  [SMALL_STATE(124)] = 2732,
  [SMALL_STATE(125)] = 2746,
  [SMALL_STATE(126)] = 2762,
  [SMALL_STATE(127)] = 2778,
  [SMALL_STATE(128)] = 2794,
  [SMALL_STATE(129)] = 2808,
  [SMALL_STATE(130)] = 2824,
  [SMALL_STATE(131)] = 2838,
  [SMALL_STATE(132)] = 2852,
  [SMALL_STATE(133)] = 2865,
  [SMALL_STATE(134)] = 2876,
  [SMALL_STATE(135)] = 2889,
  [SMALL_STATE(136)] = 2902,
  [SMALL_STATE(137)] = 2915,
  [SMALL_STATE(138)] = 2928,
  [SMALL_STATE(139)] = 2939,
  [SMALL_STATE(140)] = 2952,
  [SMALL_STATE(141)] = 2965,
  [SMALL_STATE(142)] = 2975,
  [SMALL_STATE(143)] = 2985,
  [SMALL_STATE(144)] = 2995,
  [SMALL_STATE(145)] = 3005,
  [SMALL_STATE(146)] = 3015,
  [SMALL_STATE(147)] = 3025,
  [SMALL_STATE(148)] = 3035,
  [SMALL_STATE(149)] = 3045,
  [SMALL_STATE(150)] = 3055,
  [SMALL_STATE(151)] = 3065,
  [SMALL_STATE(152)] = 3075,
  [SMALL_STATE(153)] = 3083,
  [SMALL_STATE(154)] = 3093,
  [SMALL_STATE(155)] = 3103,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3123,
  [SMALL_STATE(158)] = 3133,
  [SMALL_STATE(159)] = 3143,
  [SMALL_STATE(160)] = 3153,
  [SMALL_STATE(161)] = 3160,
  [SMALL_STATE(162)] = 3167,
  [SMALL_STATE(163)] = 3174,
  [SMALL_STATE(164)] = 3181,
  [SMALL_STATE(165)] = 3188,
  [SMALL_STATE(166)] = 3195,
  [SMALL_STATE(167)] = 3202,
  [SMALL_STATE(168)] = 3209,
  [SMALL_STATE(169)] = 3216,
  [SMALL_STATE(170)] = 3223,
  [SMALL_STATE(171)] = 3230,
  [SMALL_STATE(172)] = 3237,
  [SMALL_STATE(173)] = 3244,
  [SMALL_STATE(174)] = 3251,
  [SMALL_STATE(175)] = 3258,
  [SMALL_STATE(176)] = 3265,
  [SMALL_STATE(177)] = 3272,
  [SMALL_STATE(178)] = 3279,
  [SMALL_STATE(179)] = 3286,
  [SMALL_STATE(180)] = 3293,
  [SMALL_STATE(181)] = 3300,
  [SMALL_STATE(182)] = 3307,
  [SMALL_STATE(183)] = 3314,
  [SMALL_STATE(184)] = 3321,
  [SMALL_STATE(185)] = 3328,
  [SMALL_STATE(186)] = 3335,
  [SMALL_STATE(187)] = 3342,
  [SMALL_STATE(188)] = 3349,
  [SMALL_STATE(189)] = 3356,
  [SMALL_STATE(190)] = 3363,
  [SMALL_STATE(191)] = 3370,
  [SMALL_STATE(192)] = 3377,
  [SMALL_STATE(193)] = 3384,
  [SMALL_STATE(194)] = 3391,
  [SMALL_STATE(195)] = 3398,
  [SMALL_STATE(196)] = 3405,
  [SMALL_STATE(197)] = 3412,
  [SMALL_STATE(198)] = 3419,
  [SMALL_STATE(199)] = 3423,
  [SMALL_STATE(200)] = 3427,
  [SMALL_STATE(201)] = 3431,
  [SMALL_STATE(202)] = 3435,
  [SMALL_STATE(203)] = 3439,
  [SMALL_STATE(204)] = 3443,
  [SMALL_STATE(205)] = 3447,
  [SMALL_STATE(206)] = 3451,
  [SMALL_STATE(207)] = 3455,
  [SMALL_STATE(208)] = 3459,
  [SMALL_STATE(209)] = 3463,
  [SMALL_STATE(210)] = 3467,
  [SMALL_STATE(211)] = 3471,
  [SMALL_STATE(212)] = 3475,
  [SMALL_STATE(213)] = 3479,
  [SMALL_STATE(214)] = 3483,
  [SMALL_STATE(215)] = 3487,
  [SMALL_STATE(216)] = 3491,
  [SMALL_STATE(217)] = 3495,
  [SMALL_STATE(218)] = 3499,
  [SMALL_STATE(219)] = 3503,
  [SMALL_STATE(220)] = 3507,
  [SMALL_STATE(221)] = 3511,
  [SMALL_STATE(222)] = 3515,
  [SMALL_STATE(223)] = 3519,
  [SMALL_STATE(224)] = 3523,
  [SMALL_STATE(225)] = 3527,
  [SMALL_STATE(226)] = 3531,
  [SMALL_STATE(227)] = 3535,
  [SMALL_STATE(228)] = 3539,
  [SMALL_STATE(229)] = 3543,
  [SMALL_STATE(230)] = 3547,
  [SMALL_STATE(231)] = 3551,
  [SMALL_STATE(232)] = 3555,
  [SMALL_STATE(233)] = 3559,
  [SMALL_STATE(234)] = 3563,
  [SMALL_STATE(235)] = 3567,
  [SMALL_STATE(236)] = 3571,
  [SMALL_STATE(237)] = 3575,
  [SMALL_STATE(238)] = 3579,
  [SMALL_STATE(239)] = 3583,
  [SMALL_STATE(240)] = 3587,
  [SMALL_STATE(241)] = 3591,
  [SMALL_STATE(242)] = 3595,
  [SMALL_STATE(243)] = 3599,
  [SMALL_STATE(244)] = 3603,
  [SMALL_STATE(245)] = 3607,
  [SMALL_STATE(246)] = 3611,
  [SMALL_STATE(247)] = 3615,
  [SMALL_STATE(248)] = 3619,
  [SMALL_STATE(249)] = 3623,
  [SMALL_STATE(250)] = 3627,
  [SMALL_STATE(251)] = 3631,
  [SMALL_STATE(252)] = 3635,
  [SMALL_STATE(253)] = 3639,
  [SMALL_STATE(254)] = 3643,
  [SMALL_STATE(255)] = 3647,
  [SMALL_STATE(256)] = 3651,
  [SMALL_STATE(257)] = 3655,
  [SMALL_STATE(258)] = 3659,
  [SMALL_STATE(259)] = 3663,
  [SMALL_STATE(260)] = 3667,
  [SMALL_STATE(261)] = 3671,
  [SMALL_STATE(262)] = 3675,
  [SMALL_STATE(263)] = 3679,
  [SMALL_STATE(264)] = 3683,
  [SMALL_STATE(265)] = 3687,
  [SMALL_STATE(266)] = 3691,
  [SMALL_STATE(267)] = 3695,
  [SMALL_STATE(268)] = 3699,
  [SMALL_STATE(269)] = 3703,
  [SMALL_STATE(270)] = 3707,
  [SMALL_STATE(271)] = 3711,
  [SMALL_STATE(272)] = 3715,
  [SMALL_STATE(273)] = 3719,
  [SMALL_STATE(274)] = 3723,
  [SMALL_STATE(275)] = 3727,
  [SMALL_STATE(276)] = 3731,
  [SMALL_STATE(277)] = 3735,
  [SMALL_STATE(278)] = 3739,
  [SMALL_STATE(279)] = 3743,
  [SMALL_STATE(280)] = 3747,
  [SMALL_STATE(281)] = 3751,
  [SMALL_STATE(282)] = 3755,
  [SMALL_STATE(283)] = 3759,
  [SMALL_STATE(284)] = 3763,
  [SMALL_STATE(285)] = 3767,
  [SMALL_STATE(286)] = 3771,
  [SMALL_STATE(287)] = 3775,
  [SMALL_STATE(288)] = 3779,
  [SMALL_STATE(289)] = 3783,
  [SMALL_STATE(290)] = 3787,
  [SMALL_STATE(291)] = 3791,
  [SMALL_STATE(292)] = 3795,
  [SMALL_STATE(293)] = 3799,
  [SMALL_STATE(294)] = 3803,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(35),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(150),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(150),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(23),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(135),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(176),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(149),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(205),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(205),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(149),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(149),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(205),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(141),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(150),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(150),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(58),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(150),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(35),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(140),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(282),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(145),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(178),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(164),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(76),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(120),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(16),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(126),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(129),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [785] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
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
