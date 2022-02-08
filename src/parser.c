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
#define SYMBOL_COUNT 113
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
  sym__line_separator = 63,
  sym_identifier = 64,
  sym_command_name = 65,
  sym_boolean = 66,
  sym_coordinate = 67,
  sym_rotation = 68,
  sym_location = 69,
  sym_string = 70,
  sym__escape_sequence = 71,
  sym_nbt_path = 72,
  sym_selector = 73,
  sym_selector_option_section = 74,
  sym_selector_option = 75,
  sym_selector_key = 76,
  sym_selector_value = 77,
  sym_selector_nbt = 78,
  sym_selector_score = 79,
  sym_selector_score_key = 80,
  sym_selector_score_value = 81,
  sym_selector_number = 82,
  sym_nbt = 83,
  sym_nbt_object = 84,
  sym_nbt_array = 85,
  sym_nbt_object_key = 86,
  sym_nbt_object_value = 87,
  sym_nbt_number = 88,
  sym_container = 89,
  sym_item = 90,
  sym__blank_item_with_namespace = 91,
  sym_item_nbt = 92,
  sym_item_state = 93,
  sym_state_key = 94,
  sym_state_value = 95,
  sym_path = 96,
  aux_sym_root_repeat1 = 97,
  aux_sym_command_repeat1 = 98,
  aux_sym_command_repeat2 = 99,
  aux_sym_execute_command_repeat1 = 100,
  aux_sym_string_repeat1 = 101,
  aux_sym_nbt_path_repeat1 = 102,
  aux_sym_nbt_path_repeat2 = 103,
  aux_sym_nbt_path_repeat3 = 104,
  aux_sym_selector_option_section_repeat1 = 105,
  aux_sym_selector_nbt_repeat1 = 106,
  aux_sym_selector_score_repeat1 = 107,
  aux_sym_nbt_object_repeat1 = 108,
  aux_sym_nbt_array_repeat1 = 109,
  aux_sym_container_repeat1 = 110,
  aux_sym_item_state_repeat1 = 111,
  aux_sym_path_repeat1 = 112,
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
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == '=') ADVANCE(94);
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
      if (lookahead == '*') ADVANCE(95);
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
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(120);
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
      if (lookahead == '\n') ADVANCE(84);
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
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == '=') ADVANCE(94);
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
      if (lookahead == 'e') ADVANCE(88);
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
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(96);
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
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(114);
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
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
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
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
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
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 77},
  [95] = {.lex_state = 77},
  [96] = {.lex_state = 77},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 77},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 77},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 77},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 77},
  [117] = {.lex_state = 296},
  [118] = {.lex_state = 77},
  [119] = {.lex_state = 77},
  [120] = {.lex_state = 77},
  [121] = {.lex_state = 77},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 77},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 77},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 77},
  [144] = {.lex_state = 77},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 292},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 295},
  [149] = {.lex_state = 77},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 297},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 294},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 77},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 295},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 295},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 77},
  [165] = {.lex_state = 292},
  [166] = {.lex_state = 77},
  [167] = {.lex_state = 292},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 292},
  [170] = {.lex_state = 292},
  [171] = {.lex_state = 77},
  [172] = {.lex_state = 292},
  [173] = {.lex_state = 77},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 293},
  [176] = {.lex_state = 293},
  [177] = {.lex_state = 292},
  [178] = {.lex_state = 292},
  [179] = {.lex_state = 293},
  [180] = {.lex_state = 293},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 292},
  [184] = {.lex_state = 77},
  [185] = {.lex_state = 292},
  [186] = {.lex_state = 295},
  [187] = {.lex_state = 77},
  [188] = {.lex_state = 77},
  [189] = {.lex_state = 292},
  [190] = {.lex_state = 292},
  [191] = {.lex_state = 292},
  [192] = {.lex_state = 292},
  [193] = {.lex_state = 293},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 293},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 292},
  [198] = {.lex_state = 293},
  [199] = {.lex_state = 77},
  [200] = {.lex_state = 292},
  [201] = {.lex_state = 292},
  [202] = {.lex_state = 77},
  [203] = {.lex_state = 77},
  [204] = {.lex_state = 292},
  [205] = {.lex_state = 292},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 292},
  [208] = {.lex_state = 292},
  [209] = {.lex_state = 292},
  [210] = {.lex_state = 292},
  [211] = {.lex_state = 292},
  [212] = {.lex_state = 77},
  [213] = {.lex_state = 77},
  [214] = {.lex_state = 77},
  [215] = {.lex_state = 292},
  [216] = {.lex_state = 292},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 77},
  [219] = {.lex_state = 292},
  [220] = {.lex_state = 77},
  [221] = {.lex_state = 77},
  [222] = {.lex_state = 292},
  [223] = {.lex_state = 77},
  [224] = {.lex_state = 292},
  [225] = {.lex_state = 292},
  [226] = {.lex_state = 292},
  [227] = {.lex_state = 292},
  [228] = {.lex_state = 292},
  [229] = {.lex_state = 292},
  [230] = {.lex_state = 77},
  [231] = {.lex_state = 77},
  [232] = {.lex_state = 292},
  [233] = {.lex_state = 292},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 77},
  [236] = {.lex_state = 77},
  [237] = {.lex_state = 77},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 292},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 292},
  [242] = {.lex_state = 292},
  [243] = {.lex_state = 77},
  [244] = {.lex_state = 77},
  [245] = {.lex_state = 77},
  [246] = {.lex_state = 292},
  [247] = {.lex_state = 292},
  [248] = {.lex_state = 292},
  [249] = {.lex_state = 292},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 77},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 77},
  [254] = {.lex_state = 77},
  [255] = {.lex_state = 77},
  [256] = {.lex_state = 292},
  [257] = {.lex_state = 77},
  [258] = {.lex_state = 292},
  [259] = {.lex_state = 292},
  [260] = {.lex_state = 292},
  [261] = {.lex_state = 292},
  [262] = {.lex_state = 77},
  [263] = {.lex_state = 292},
  [264] = {.lex_state = 292},
  [265] = {.lex_state = 292},
  [266] = {.lex_state = 292},
  [267] = {.lex_state = 292},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 292},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 292},
  [272] = {.lex_state = 292},
  [273] = {.lex_state = 292},
  [274] = {.lex_state = 292},
  [275] = {.lex_state = 77},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 292},
  [278] = {.lex_state = 292},
  [279] = {.lex_state = 292},
  [280] = {.lex_state = 292},
  [281] = {.lex_state = 292},
  [282] = {.lex_state = 77},
  [283] = {.lex_state = 77},
  [284] = {.lex_state = 292},
  [285] = {.lex_state = 77},
  [286] = {.lex_state = 77},
  [287] = {.lex_state = 77},
  [288] = {.lex_state = 292},
  [289] = {.lex_state = 77},
  [290] = {.lex_state = 292},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 292},
  [293] = {.lex_state = 77},
  [294] = {.lex_state = 77},
  [295] = {.lex_state = 77},
  [296] = {.lex_state = 292},
  [297] = {.lex_state = 292},
  [298] = {.lex_state = 292},
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
    [sym_root] = STATE(291),
    [sym_command] = STATE(20),
    [sym_execute_command] = STATE(116),
    [sym__legacy_execute] = STATE(116),
    [sym__line_separator] = STATE(20),
    [sym_identifier] = STATE(82),
    [sym_command_name] = STATE(46),
    [aux_sym_root_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_execute] = ACTIONS(9),
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
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(257), 1,
      sym_selector,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 11,
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
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(253), 1,
      sym_selector,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 11,
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
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 12,
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
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 12,
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
    ACTIONS(45), 1,
      anon_sym_run,
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 12,
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
    STATE(25), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(13), 2,
      sym_tag,
      sym_namespaced_container,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
    STATE(270), 12,
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
    STATE(23), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 2,
      sym_tag,
      sym_text,
    STATE(85), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
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
    STATE(23), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(58), 2,
      sym_tag,
      sym_namespaced_container,
    STATE(85), 2,
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
    STATE(24), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(29), 1,
      sym_item_state,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(67), 1,
      aux_sym_path_repeat1,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
  [683] = 11,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_item_state,
    STATE(36), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_item_nbt,
    STATE(55), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_nbt_object,
    ACTIONS(76), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
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
    STATE(288), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
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
    STATE(288), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
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
    STATE(288), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
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
    STATE(288), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
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
    STATE(211), 1,
      sym_selector_value,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(207), 4,
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
    STATE(261), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
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
    STATE(288), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [943] = 9,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_execute,
    ACTIONS(123), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(114), 2,
      sym_comment,
      anon_sym_LF,
    STATE(116), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(19), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [975] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(128), 2,
      sym_comment,
      anon_sym_LF,
    STATE(116), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(19), 3,
      sym_command,
      sym__line_separator,
      aux_sym_root_repeat1,
  [1007] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1037] = 8,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_nbt_object_value,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(263), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1067] = 7,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1094] = 7,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(134), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1121] = 12,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(29), 1,
      sym_item_state,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(107), 1,
      aux_sym_nbt_path_repeat3,
    STATE(156), 1,
      aux_sym_path_repeat1,
  [1158] = 7,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(142), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1185] = 4,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(152), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1204] = 4,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(159), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
  [1223] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(91), 1,
      sym_item_nbt,
    ACTIONS(166), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1244] = 4,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(152), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
  [1263] = 5,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_nbt_object,
    STATE(79), 1,
      sym_item_nbt,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1284] = 10,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      sym_item_state,
    STATE(36), 1,
      aux_sym_container_repeat1,
    STATE(41), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
    STATE(149), 1,
      aux_sym_path_repeat1,
  [1315] = 5,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_text,
    STATE(47), 1,
      sym_string,
    ACTIONS(177), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1336] = 4,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(183), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1355] = 2,
    ACTIONS(190), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1370] = 4,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_container_repeat1,
    ACTIONS(194), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1388] = 6,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_command_repeat1,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1410] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_item_state,
    ACTIONS(166), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1428] = 6,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_command_repeat1,
    STATE(68), 1,
      aux_sym_command_repeat2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1450] = 4,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_selector_option_section,
    ACTIONS(214), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1468] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_item_state,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1486] = 2,
    ACTIONS(220), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1500] = 2,
    ACTIONS(224), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1514] = 6,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_command_repeat1,
    STATE(68), 1,
      aux_sym_command_repeat2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1536] = 4,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_container_repeat1,
    ACTIONS(228), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1554] = 6,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(235), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_command_repeat1,
    STATE(63), 1,
      aux_sym_command_repeat2,
    ACTIONS(238), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1576] = 2,
    ACTIONS(183), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1590] = 2,
    ACTIONS(242), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1604] = 4,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
  [1621] = 4,
    ACTIONS(253), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_command_repeat1,
    ACTIONS(256), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(251), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [1638] = 4,
    ACTIONS(260), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(263), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [1655] = 5,
    ACTIONS(267), 1,
      anon_sym_,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1674] = 2,
    ACTIONS(276), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACE,
  [1687] = 3,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1702] = 4,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(289), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
  [1719] = 2,
    ACTIONS(293), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(291), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACE,
  [1732] = 2,
    ACTIONS(297), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(295), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1745] = 8,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_nbt_identifier,
    ACTIONS(301), 1,
      aux_sym_identifier_token1,
    ACTIONS(303), 1,
      sym_number,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_selector_score_key,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
  [1770] = 2,
    ACTIONS(309), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1783] = 4,
    ACTIONS(65), 1,
      anon_sym_execute,
    ACTIONS(311), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1800] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    ACTIONS(318), 1,
      anon_sym_detect,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(105), 2,
      sym_command,
      sym__legacy_execute,
  [1823] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    ACTIONS(320), 1,
      anon_sym_detect,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(109), 2,
      sym_command,
      sym__legacy_execute,
  [1846] = 5,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1865] = 8,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_nbt_identifier,
    ACTIONS(301), 1,
      aux_sym_identifier_token1,
    ACTIONS(303), 1,
      sym_number,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(239), 1,
      sym_selector_score_key,
    STATE(296), 1,
      sym_string,
  [1890] = 2,
    ACTIONS(228), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_DOT,
  [1903] = 2,
    ACTIONS(326), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1916] = 4,
    ACTIONS(330), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_path_repeat1,
    ACTIONS(333), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_,
      anon_sym_LF,
  [1933] = 5,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
  [1952] = 2,
    ACTIONS(337), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(335), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1964] = 2,
    ACTIONS(341), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1976] = 2,
    ACTIONS(345), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [1988] = 3,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(65), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2002] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(111), 2,
      sym_command,
      sym__legacy_execute,
  [2022] = 2,
    ACTIONS(352), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2034] = 2,
    ACTIONS(356), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2046] = 2,
    ACTIONS(360), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2058] = 2,
    ACTIONS(364), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2070] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(114), 2,
      sym_command,
      sym_execute_command,
  [2090] = 2,
    ACTIONS(372), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2102] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [2122] = 2,
    ACTIONS(376), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2134] = 2,
    ACTIONS(380), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(378), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2146] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(99), 2,
      sym_command,
      sym_execute_command,
  [2166] = 2,
    ACTIONS(280), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2178] = 2,
    ACTIONS(384), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(382), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2190] = 7,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_nbt_identifier,
    ACTIONS(301), 1,
      aux_sym_identifier_token1,
    ACTIONS(303), 1,
      sym_number,
    STATE(227), 1,
      sym_nbt_object_key,
    STATE(239), 1,
      sym_selector_score_key,
    STATE(296), 1,
      sym_string,
  [2212] = 2,
    ACTIONS(388), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2224] = 3,
    ACTIONS(392), 1,
      anon_sym_,
    ACTIONS(395), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(390), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2238] = 2,
    ACTIONS(256), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2250] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(120), 2,
      sym_command,
      sym__legacy_execute,
  [2270] = 2,
    ACTIONS(173), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2282] = 2,
    ACTIONS(249), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_,
      anon_sym_LF,
  [2294] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(118), 2,
      sym_command,
      sym_execute_command,
  [2314] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_execute,
    STATE(46), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
    STATE(108), 2,
      sym_command,
      sym__legacy_execute,
  [2334] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_,
    STATE(29), 1,
      sym_item_state,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2353] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      anon_sym_,
    STATE(29), 1,
      sym_item_state,
    STATE(38), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2372] = 2,
    ACTIONS(203), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2383] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_nbt_identifier,
      sym_number,
  [2400] = 2,
    ACTIONS(405), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(403), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2411] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_nbt_identifier,
      sym_number,
  [2428] = 5,
    ACTIONS(409), 1,
      aux_sym_identifier_token1,
    ACTIONS(411), 1,
      sym_number,
    STATE(245), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2445] = 2,
    ACTIONS(415), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(413), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2456] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_nbt_identifier,
      sym_number,
  [2473] = 2,
    ACTIONS(272), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2484] = 2,
    ACTIONS(421), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2495] = 2,
    ACTIONS(210), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2506] = 6,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_,
    ACTIONS(423), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
  [2525] = 2,
    ACTIONS(427), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(425), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2536] = 2,
    ACTIONS(431), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2547] = 4,
    STATE(258), 1,
      sym_selector_score_value,
    STATE(259), 1,
      sym_selector_number,
    ACTIONS(108), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(110), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2562] = 2,
    ACTIONS(435), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2573] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_nbt_identifier,
      sym_number,
  [2590] = 5,
    ACTIONS(439), 1,
      aux_sym_identifier_token1,
    ACTIONS(441), 1,
      sym_number,
    STATE(195), 1,
      sym_boolean,
    STATE(198), 1,
      sym_state_value,
    ACTIONS(443), 2,
      anon_sym_true,
      anon_sym_false,
  [2607] = 2,
    ACTIONS(447), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(445), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2618] = 5,
    ACTIONS(409), 1,
      aux_sym_identifier_token1,
    ACTIONS(411), 1,
      sym_number,
    STATE(235), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
  [2635] = 2,
    ACTIONS(451), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(449), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2646] = 2,
    ACTIONS(453), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(455), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2657] = 2,
    ACTIONS(459), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(457), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2668] = 6,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      aux_sym_nbt_path_repeat1,
    STATE(30), 1,
      aux_sym_nbt_path_repeat2,
    STATE(107), 1,
      aux_sym_nbt_path_repeat3,
  [2687] = 2,
    ACTIONS(463), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2698] = 2,
    ACTIONS(467), 2,
      anon_sym_execute,
      aux_sym_identifier_token1,
    ACTIONS(465), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SLASH,
      anon_sym_LF,
  [2709] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_item_state,
    STATE(41), 1,
      sym_item_nbt,
    STATE(66), 1,
      sym_nbt_object,
  [2728] = 1,
    ACTIONS(469), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [2736] = 4,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_string_token1,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    STATE(130), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2750] = 4,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_nbt_identifier,
      sym_number,
  [2764] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(214), 1,
      sym_coordinate,
    STATE(289), 1,
      sym_location,
  [2780] = 4,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    ACTIONS(484), 1,
      anon_sym_BSLASH,
    STATE(127), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2794] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(487), 1,
      sym_namespace,
    STATE(96), 1,
      sym_identifier,
    STATE(213), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2808] = 4,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    STATE(127), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2822] = 4,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(127), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2836] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(214), 1,
      sym_coordinate,
    STATE(230), 1,
      sym_location,
  [2852] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(487), 1,
      sym_namespace,
    STATE(95), 1,
      sym_identifier,
    STATE(206), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [2866] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(212), 1,
      sym_location,
    STATE(214), 1,
      sym_coordinate,
  [2882] = 4,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      aux_sym_string_token1,
    STATE(129), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2896] = 5,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(214), 1,
      sym_coordinate,
    STATE(251), 1,
      sym_location,
  [2912] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(88), 1,
      sym_coordinate,
  [2925] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(499), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
  [2938] = 3,
    ACTIONS(503), 1,
      aux_sym_identifier_token1,
    STATE(221), 1,
      sym_state_key,
    ACTIONS(501), 2,
      anon_sym_STAR,
      sym_number,
  [2949] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(295), 1,
      sym_coordinate,
  [2962] = 4,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_,
    ACTIONS(505), 1,
      sym_text,
    STATE(47), 1,
      sym_string,
  [2975] = 3,
    ACTIONS(503), 1,
      aux_sym_identifier_token1,
    STATE(218), 1,
      sym_state_key,
    ACTIONS(507), 2,
      anon_sym_STAR,
      sym_number,
  [2986] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(509), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
  [2999] = 4,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      sym_number,
    STATE(87), 1,
      sym_coordinate,
  [3012] = 4,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(511), 1,
      anon_sym_execute,
    STATE(44), 1,
      sym_command_name,
    STATE(82), 1,
      sym_identifier,
  [3025] = 3,
    ACTIONS(513), 1,
      aux_sym_identifier_token1,
    STATE(264), 1,
      sym_selector_key,
    STATE(277), 1,
      sym_selector_option,
  [3035] = 3,
    ACTIONS(515), 1,
      aux_sym_nbt_path_token1,
    STATE(189), 1,
      aux_sym_selector_score_repeat1,
    STATE(200), 1,
      aux_sym_selector_nbt_repeat1,
  [3045] = 2,
    ACTIONS(519), 1,
      aux_sym_string_token1,
    ACTIONS(517), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3053] = 3,
    ACTIONS(521), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_selector_option_section_repeat1,
  [3063] = 3,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    ACTIONS(284), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym_path_repeat1,
  [3073] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(525), 1,
      sym_nbt_identifier,
    STATE(254), 1,
      sym_selector,
  [3083] = 3,
    ACTIONS(527), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(529), 1,
      aux_sym_nbt_path_token2,
    STATE(197), 1,
      aux_sym_item_state_repeat1,
  [3093] = 3,
    ACTIONS(531), 1,
      aux_sym_identifier_token1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_selector_score_key,
  [3103] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(535), 1,
      sym_number,
    STATE(65), 1,
      sym_identifier,
  [3113] = 3,
    ACTIONS(537), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 1,
      anon_sym_COMMA,
  [3123] = 3,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(543), 1,
      aux_sym_identifier_token1,
    STATE(32), 1,
      sym_identifier,
  [3133] = 3,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    ACTIONS(328), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym_path_repeat1,
  [3143] = 3,
    ACTIONS(545), 1,
      aux_sym_identifier_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_state_key,
  [3153] = 3,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(549), 1,
      sym_nbt_identifier,
    STATE(285), 1,
      sym_selector,
  [3163] = 3,
    ACTIONS(551), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_selector_option_section_repeat1,
  [3173] = 3,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      sym_text,
    STATE(47), 1,
      sym_string,
  [3183] = 3,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(556), 1,
      sym_namespace,
    STATE(92), 1,
      sym_identifier,
  [3193] = 3,
    ACTIONS(521), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_selector_option_section_repeat1,
  [3203] = 3,
    ACTIONS(545), 1,
      aux_sym_identifier_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_state_key,
  [3213] = 2,
    ACTIONS(562), 1,
      anon_sym_,
    STATE(173), 1,
      aux_sym_execute_command_repeat1,
  [3220] = 2,
    ACTIONS(564), 1,
      aux_sym_nbt_path_token1,
    STATE(170), 1,
      aux_sym_nbt_object_repeat1,
  [3227] = 2,
    ACTIONS(566), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [3234] = 2,
    ACTIONS(568), 1,
      aux_sym_nbt_path_token1,
    STATE(165), 1,
      aux_sym_nbt_object_repeat1,
  [3241] = 2,
    ACTIONS(531), 1,
      aux_sym_identifier_token1,
    STATE(242), 1,
      sym_selector_score_key,
  [3248] = 2,
    ACTIONS(570), 1,
      aux_sym_nbt_path_token1,
    STATE(169), 1,
      aux_sym_item_state_repeat1,
  [3255] = 2,
    ACTIONS(573), 1,
      aux_sym_nbt_path_token1,
    STATE(170), 1,
      aux_sym_nbt_object_repeat1,
  [3262] = 2,
    ACTIONS(576), 1,
      anon_sym_EQ,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [3269] = 2,
    ACTIONS(580), 1,
      aux_sym_nbt_path_token1,
    STATE(197), 1,
      aux_sym_item_state_repeat1,
  [3276] = 2,
    ACTIONS(582), 1,
      anon_sym_,
    STATE(173), 1,
      aux_sym_execute_command_repeat1,
  [3283] = 2,
    ACTIONS(585), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(587), 1,
      anon_sym_COMMA,
  [3290] = 2,
    ACTIONS(589), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(591), 1,
      anon_sym_COMMA,
  [3297] = 2,
    ACTIONS(593), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(595), 1,
      anon_sym_COMMA,
  [3304] = 2,
    ACTIONS(597), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_nbt_array_repeat1,
  [3311] = 2,
    ACTIONS(600), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_score_repeat1,
  [3318] = 2,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      aux_sym_nbt_path_token1,
  [3325] = 2,
    ACTIONS(603), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(605), 1,
      anon_sym_COMMA,
  [3332] = 2,
    ACTIONS(543), 1,
      aux_sym_identifier_token1,
    STATE(71), 1,
      sym_identifier,
  [3339] = 2,
    ACTIONS(545), 1,
      aux_sym_identifier_token1,
    STATE(246), 1,
      sym_state_key,
  [3346] = 2,
    ACTIONS(607), 1,
      aux_sym_nbt_path_token1,
    STATE(191), 1,
      aux_sym_nbt_array_repeat1,
  [3353] = 2,
    ACTIONS(566), 1,
      anon_sym_,
    STATE(173), 1,
      aux_sym_execute_command_repeat1,
  [3360] = 2,
    ACTIONS(609), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_selector_nbt_repeat1,
  [3367] = 2,
    ACTIONS(612), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
  [3374] = 2,
    ACTIONS(616), 1,
      anon_sym_,
    STATE(164), 1,
      aux_sym_execute_command_repeat1,
  [3381] = 2,
    ACTIONS(618), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3388] = 2,
    ACTIONS(620), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_score_repeat1,
  [3395] = 2,
    ACTIONS(622), 1,
      aux_sym_nbt_path_token1,
    STATE(194), 1,
      aux_sym_nbt_array_repeat1,
  [3402] = 2,
    ACTIONS(624), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_nbt_array_repeat1,
  [3409] = 2,
    ACTIONS(626), 1,
      aux_sym_nbt_path_token1,
    STATE(201), 1,
      aux_sym_nbt_object_repeat1,
  [3416] = 2,
    ACTIONS(628), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [3423] = 2,
    ACTIONS(632), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_nbt_array_repeat1,
  [3430] = 2,
    ACTIONS(634), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(636), 1,
      anon_sym_COMMA,
  [3437] = 2,
    ACTIONS(543), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_identifier,
  [3444] = 2,
    ACTIONS(638), 1,
      aux_sym_nbt_path_token1,
    STATE(169), 1,
      aux_sym_item_state_repeat1,
  [3451] = 2,
    ACTIONS(640), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [3458] = 2,
    ACTIONS(644), 1,
      anon_sym_,
    STATE(184), 1,
      aux_sym_execute_command_repeat1,
  [3465] = 2,
    ACTIONS(646), 1,
      aux_sym_nbt_path_token1,
    STATE(185), 1,
      aux_sym_selector_nbt_repeat1,
  [3472] = 2,
    ACTIONS(648), 1,
      aux_sym_nbt_path_token1,
    STATE(170), 1,
      aux_sym_nbt_object_repeat1,
  [3479] = 1,
    ACTIONS(650), 1,
      anon_sym_EQ,
  [3483] = 1,
    ACTIONS(576), 1,
      anon_sym_EQ,
  [3487] = 1,
    ACTIONS(652), 1,
      aux_sym_nbt_path_token1,
  [3491] = 1,
    ACTIONS(654), 1,
      aux_sym_nbt_path_token1,
  [3495] = 1,
    ACTIONS(397), 1,
      anon_sym_,
  [3499] = 1,
    ACTIONS(656), 1,
      aux_sym_nbt_path_token1,
  [3503] = 1,
    ACTIONS(658), 1,
      aux_sym_nbt_path_token1,
  [3507] = 1,
    ACTIONS(661), 1,
      aux_sym_nbt_path_token1,
  [3511] = 1,
    ACTIONS(663), 1,
      aux_sym_nbt_path_token1,
  [3515] = 1,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
  [3519] = 1,
    ACTIONS(667), 1,
      anon_sym_,
  [3523] = 1,
    ACTIONS(399), 1,
      anon_sym_,
  [3527] = 1,
    ACTIONS(669), 1,
      anon_sym_,
  [3531] = 1,
    ACTIONS(671), 1,
      aux_sym_nbt_path_token1,
  [3535] = 1,
    ACTIONS(673), 1,
      aux_sym_nbt_path_token1,
  [3539] = 1,
    ACTIONS(675), 1,
      anon_sym_,
  [3543] = 1,
    ACTIONS(677), 1,
      anon_sym_EQ,
  [3547] = 1,
    ACTIONS(679), 1,
      aux_sym_nbt_path_token1,
  [3551] = 1,
    ACTIONS(681), 1,
      anon_sym_,
  [3555] = 1,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [3559] = 1,
    ACTIONS(685), 1,
      aux_sym_nbt_path_token1,
  [3563] = 1,
    ACTIONS(687), 1,
      anon_sym_,
  [3567] = 1,
    ACTIONS(689), 1,
      aux_sym_nbt_path_token1,
  [3571] = 1,
    ACTIONS(691), 1,
      aux_sym_nbt_path_token1,
  [3575] = 1,
    ACTIONS(694), 1,
      aux_sym_nbt_path_token1,
  [3579] = 1,
    ACTIONS(696), 1,
      aux_sym_nbt_path_token1,
  [3583] = 1,
    ACTIONS(698), 1,
      aux_sym_nbt_path_token1,
  [3587] = 1,
    ACTIONS(700), 1,
      aux_sym_nbt_path_token1,
  [3591] = 1,
    ACTIONS(703), 1,
      anon_sym_,
  [3595] = 1,
    ACTIONS(705), 1,
      anon_sym_EQ,
  [3599] = 1,
    ACTIONS(707), 1,
      aux_sym_nbt_path_token1,
  [3603] = 1,
    ACTIONS(709), 1,
      aux_sym_nbt_path_token1,
  [3607] = 1,
    ACTIONS(711), 1,
      aux_sym_nbt_path_token1,
  [3611] = 1,
    ACTIONS(713), 1,
      anon_sym_,
  [3615] = 1,
    ACTIONS(715), 1,
      anon_sym_,
  [3619] = 1,
    ACTIONS(717), 1,
      anon_sym_COLON,
  [3623] = 1,
    ACTIONS(719), 1,
      aux_sym_nbt_path_token1,
  [3627] = 1,
    ACTIONS(721), 1,
      aux_sym_nbt_path_token1,
  [3631] = 1,
    ACTIONS(529), 1,
      aux_sym_nbt_path_token2,
  [3635] = 1,
    ACTIONS(723), 1,
      aux_sym_nbt_path_token1,
  [3639] = 1,
    ACTIONS(725), 1,
      aux_sym_nbt_path_token1,
  [3643] = 1,
    ACTIONS(727), 1,
      anon_sym_,
  [3647] = 1,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
  [3651] = 1,
    ACTIONS(731), 1,
      anon_sym_,
  [3655] = 1,
    ACTIONS(733), 1,
      aux_sym_nbt_path_token1,
  [3659] = 1,
    ACTIONS(735), 1,
      aux_sym_nbt_path_token1,
  [3663] = 1,
    ACTIONS(737), 1,
      aux_sym_nbt_path_token1,
  [3667] = 1,
    ACTIONS(739), 1,
      aux_sym_nbt_path_token1,
  [3671] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [3675] = 1,
    ACTIONS(741), 1,
      anon_sym_,
  [3679] = 1,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
  [3683] = 1,
    ACTIONS(745), 1,
      anon_sym_,
  [3687] = 1,
    ACTIONS(748), 1,
      anon_sym_,
  [3691] = 1,
    ACTIONS(750), 1,
      anon_sym_,
  [3695] = 1,
    ACTIONS(752), 1,
      aux_sym_nbt_path_token1,
  [3699] = 1,
    ACTIONS(754), 1,
      anon_sym_,
  [3703] = 1,
    ACTIONS(757), 1,
      aux_sym_nbt_path_token1,
  [3707] = 1,
    ACTIONS(759), 1,
      aux_sym_nbt_path_token1,
  [3711] = 1,
    ACTIONS(761), 1,
      aux_sym_nbt_path_token1,
  [3715] = 1,
    ACTIONS(763), 1,
      aux_sym_nbt_path_token1,
  [3719] = 1,
    ACTIONS(765), 1,
      anon_sym_COLON,
  [3723] = 1,
    ACTIONS(767), 1,
      aux_sym_nbt_path_token1,
  [3727] = 1,
    ACTIONS(769), 1,
      aux_sym_nbt_path_token1,
  [3731] = 1,
    ACTIONS(771), 1,
      aux_sym_nbt_path_token1,
  [3735] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3739] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3743] = 1,
    ACTIONS(777), 1,
      anon_sym_,
  [3747] = 1,
    ACTIONS(354), 1,
      aux_sym_nbt_path_token1,
  [3751] = 1,
    ACTIONS(779), 1,
      anon_sym_,
  [3755] = 1,
    ACTIONS(382), 1,
      aux_sym_nbt_path_token1,
  [3759] = 1,
    ACTIONS(781), 1,
      aux_sym_nbt_path_token1,
  [3763] = 1,
    ACTIONS(218), 1,
      aux_sym_nbt_path_token1,
  [3767] = 1,
    ACTIONS(783), 1,
      aux_sym_nbt_path_token1,
  [3771] = 1,
    ACTIONS(282), 1,
      sym_number,
  [3775] = 1,
    ACTIONS(222), 1,
      aux_sym_nbt_path_token1,
  [3779] = 1,
    ACTIONS(785), 1,
      aux_sym_nbt_path_token1,
  [3783] = 1,
    ACTIONS(362), 1,
      aux_sym_nbt_path_token1,
  [3787] = 1,
    ACTIONS(307), 1,
      aux_sym_nbt_path_token1,
  [3791] = 1,
    ACTIONS(358), 1,
      aux_sym_nbt_path_token1,
  [3795] = 1,
    ACTIONS(295), 1,
      aux_sym_nbt_path_token1,
  [3799] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [3803] = 1,
    ACTIONS(636), 1,
      anon_sym_,
  [3807] = 1,
    ACTIONS(787), 1,
      aux_sym_nbt_path_token1,
  [3811] = 1,
    ACTIONS(789), 1,
      anon_sym_,
  [3815] = 1,
    ACTIONS(791), 1,
      anon_sym_,
  [3819] = 1,
    ACTIONS(793), 1,
      anon_sym_,
  [3823] = 1,
    ACTIONS(795), 1,
      aux_sym_nbt_path_token1,
  [3827] = 1,
    ACTIONS(797), 1,
      anon_sym_,
  [3831] = 1,
    ACTIONS(799), 1,
      aux_sym_nbt_path_token1,
  [3835] = 1,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
  [3839] = 1,
    ACTIONS(803), 1,
      aux_sym_nbt_path_token1,
  [3843] = 1,
    ACTIONS(805), 1,
      anon_sym_,
  [3847] = 1,
    ACTIONS(807), 1,
      anon_sym_,
  [3851] = 1,
    ACTIONS(809), 1,
      anon_sym_,
  [3855] = 1,
    ACTIONS(811), 1,
      aux_sym_nbt_path_token1,
  [3859] = 1,
    ACTIONS(813), 1,
      aux_sym_nbt_path_token1,
  [3863] = 1,
    ACTIONS(815), 1,
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
  [SMALL_STATE(20)] = 975,
  [SMALL_STATE(21)] = 1007,
  [SMALL_STATE(22)] = 1037,
  [SMALL_STATE(23)] = 1067,
  [SMALL_STATE(24)] = 1094,
  [SMALL_STATE(25)] = 1121,
  [SMALL_STATE(26)] = 1158,
  [SMALL_STATE(27)] = 1185,
  [SMALL_STATE(28)] = 1204,
  [SMALL_STATE(29)] = 1223,
  [SMALL_STATE(30)] = 1244,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1284,
  [SMALL_STATE(33)] = 1315,
  [SMALL_STATE(34)] = 1336,
  [SMALL_STATE(35)] = 1355,
  [SMALL_STATE(36)] = 1370,
  [SMALL_STATE(37)] = 1388,
  [SMALL_STATE(38)] = 1410,
  [SMALL_STATE(39)] = 1428,
  [SMALL_STATE(40)] = 1450,
  [SMALL_STATE(41)] = 1468,
  [SMALL_STATE(42)] = 1486,
  [SMALL_STATE(43)] = 1500,
  [SMALL_STATE(44)] = 1514,
  [SMALL_STATE(45)] = 1536,
  [SMALL_STATE(46)] = 1554,
  [SMALL_STATE(47)] = 1576,
  [SMALL_STATE(48)] = 1590,
  [SMALL_STATE(49)] = 1604,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1638,
  [SMALL_STATE(52)] = 1655,
  [SMALL_STATE(53)] = 1674,
  [SMALL_STATE(54)] = 1687,
  [SMALL_STATE(55)] = 1702,
  [SMALL_STATE(56)] = 1719,
  [SMALL_STATE(57)] = 1732,
  [SMALL_STATE(58)] = 1745,
  [SMALL_STATE(59)] = 1770,
  [SMALL_STATE(60)] = 1783,
  [SMALL_STATE(61)] = 1800,
  [SMALL_STATE(62)] = 1823,
  [SMALL_STATE(63)] = 1846,
  [SMALL_STATE(64)] = 1865,
  [SMALL_STATE(65)] = 1890,
  [SMALL_STATE(66)] = 1903,
  [SMALL_STATE(67)] = 1916,
  [SMALL_STATE(68)] = 1933,
  [SMALL_STATE(69)] = 1952,
  [SMALL_STATE(70)] = 1964,
  [SMALL_STATE(71)] = 1976,
  [SMALL_STATE(72)] = 1988,
  [SMALL_STATE(73)] = 2002,
  [SMALL_STATE(74)] = 2022,
  [SMALL_STATE(75)] = 2034,
  [SMALL_STATE(76)] = 2046,
  [SMALL_STATE(77)] = 2058,
  [SMALL_STATE(78)] = 2070,
  [SMALL_STATE(79)] = 2090,
  [SMALL_STATE(80)] = 2102,
  [SMALL_STATE(81)] = 2122,
  [SMALL_STATE(82)] = 2134,
  [SMALL_STATE(83)] = 2146,
  [SMALL_STATE(84)] = 2166,
  [SMALL_STATE(85)] = 2178,
  [SMALL_STATE(86)] = 2190,
  [SMALL_STATE(87)] = 2212,
  [SMALL_STATE(88)] = 2224,
  [SMALL_STATE(89)] = 2238,
  [SMALL_STATE(90)] = 2250,
  [SMALL_STATE(91)] = 2270,
  [SMALL_STATE(92)] = 2282,
  [SMALL_STATE(93)] = 2294,
  [SMALL_STATE(94)] = 2314,
  [SMALL_STATE(95)] = 2334,
  [SMALL_STATE(96)] = 2353,
  [SMALL_STATE(97)] = 2372,
  [SMALL_STATE(98)] = 2383,
  [SMALL_STATE(99)] = 2400,
  [SMALL_STATE(100)] = 2411,
  [SMALL_STATE(101)] = 2428,
  [SMALL_STATE(102)] = 2445,
  [SMALL_STATE(103)] = 2456,
  [SMALL_STATE(104)] = 2473,
  [SMALL_STATE(105)] = 2484,
  [SMALL_STATE(106)] = 2495,
  [SMALL_STATE(107)] = 2506,
  [SMALL_STATE(108)] = 2525,
  [SMALL_STATE(109)] = 2536,
  [SMALL_STATE(110)] = 2547,
  [SMALL_STATE(111)] = 2562,
  [SMALL_STATE(112)] = 2573,
  [SMALL_STATE(113)] = 2590,
  [SMALL_STATE(114)] = 2607,
  [SMALL_STATE(115)] = 2618,
  [SMALL_STATE(116)] = 2635,
  [SMALL_STATE(117)] = 2646,
  [SMALL_STATE(118)] = 2657,
  [SMALL_STATE(119)] = 2668,
  [SMALL_STATE(120)] = 2687,
  [SMALL_STATE(121)] = 2698,
  [SMALL_STATE(122)] = 2709,
  [SMALL_STATE(123)] = 2728,
  [SMALL_STATE(124)] = 2736,
  [SMALL_STATE(125)] = 2750,
  [SMALL_STATE(126)] = 2764,
  [SMALL_STATE(127)] = 2780,
  [SMALL_STATE(128)] = 2794,
  [SMALL_STATE(129)] = 2808,
  [SMALL_STATE(130)] = 2822,
  [SMALL_STATE(131)] = 2836,
  [SMALL_STATE(132)] = 2852,
  [SMALL_STATE(133)] = 2866,
  [SMALL_STATE(134)] = 2882,
  [SMALL_STATE(135)] = 2896,
  [SMALL_STATE(136)] = 2912,
  [SMALL_STATE(137)] = 2925,
  [SMALL_STATE(138)] = 2938,
  [SMALL_STATE(139)] = 2949,
  [SMALL_STATE(140)] = 2962,
  [SMALL_STATE(141)] = 2975,
  [SMALL_STATE(142)] = 2986,
  [SMALL_STATE(143)] = 2999,
  [SMALL_STATE(144)] = 3012,
  [SMALL_STATE(145)] = 3025,
  [SMALL_STATE(146)] = 3035,
  [SMALL_STATE(147)] = 3045,
  [SMALL_STATE(148)] = 3053,
  [SMALL_STATE(149)] = 3063,
  [SMALL_STATE(150)] = 3073,
  [SMALL_STATE(151)] = 3083,
  [SMALL_STATE(152)] = 3093,
  [SMALL_STATE(153)] = 3103,
  [SMALL_STATE(154)] = 3113,
  [SMALL_STATE(155)] = 3123,
  [SMALL_STATE(156)] = 3133,
  [SMALL_STATE(157)] = 3143,
  [SMALL_STATE(158)] = 3153,
  [SMALL_STATE(159)] = 3163,
  [SMALL_STATE(160)] = 3173,
  [SMALL_STATE(161)] = 3183,
  [SMALL_STATE(162)] = 3193,
  [SMALL_STATE(163)] = 3203,
  [SMALL_STATE(164)] = 3213,
  [SMALL_STATE(165)] = 3220,
  [SMALL_STATE(166)] = 3227,
  [SMALL_STATE(167)] = 3234,
  [SMALL_STATE(168)] = 3241,
  [SMALL_STATE(169)] = 3248,
  [SMALL_STATE(170)] = 3255,
  [SMALL_STATE(171)] = 3262,
  [SMALL_STATE(172)] = 3269,
  [SMALL_STATE(173)] = 3276,
  [SMALL_STATE(174)] = 3283,
  [SMALL_STATE(175)] = 3290,
  [SMALL_STATE(176)] = 3297,
  [SMALL_STATE(177)] = 3304,
  [SMALL_STATE(178)] = 3311,
  [SMALL_STATE(179)] = 3318,
  [SMALL_STATE(180)] = 3325,
  [SMALL_STATE(181)] = 3332,
  [SMALL_STATE(182)] = 3339,
  [SMALL_STATE(183)] = 3346,
  [SMALL_STATE(184)] = 3353,
  [SMALL_STATE(185)] = 3360,
  [SMALL_STATE(186)] = 3367,
  [SMALL_STATE(187)] = 3374,
  [SMALL_STATE(188)] = 3381,
  [SMALL_STATE(189)] = 3388,
  [SMALL_STATE(190)] = 3395,
  [SMALL_STATE(191)] = 3402,
  [SMALL_STATE(192)] = 3409,
  [SMALL_STATE(193)] = 3416,
  [SMALL_STATE(194)] = 3423,
  [SMALL_STATE(195)] = 3430,
  [SMALL_STATE(196)] = 3437,
  [SMALL_STATE(197)] = 3444,
  [SMALL_STATE(198)] = 3451,
  [SMALL_STATE(199)] = 3458,
  [SMALL_STATE(200)] = 3465,
  [SMALL_STATE(201)] = 3472,
  [SMALL_STATE(202)] = 3479,
  [SMALL_STATE(203)] = 3483,
  [SMALL_STATE(204)] = 3487,
  [SMALL_STATE(205)] = 3491,
  [SMALL_STATE(206)] = 3495,
  [SMALL_STATE(207)] = 3499,
  [SMALL_STATE(208)] = 3503,
  [SMALL_STATE(209)] = 3507,
  [SMALL_STATE(210)] = 3511,
  [SMALL_STATE(211)] = 3515,
  [SMALL_STATE(212)] = 3519,
  [SMALL_STATE(213)] = 3523,
  [SMALL_STATE(214)] = 3527,
  [SMALL_STATE(215)] = 3531,
  [SMALL_STATE(216)] = 3535,
  [SMALL_STATE(217)] = 3539,
  [SMALL_STATE(218)] = 3543,
  [SMALL_STATE(219)] = 3547,
  [SMALL_STATE(220)] = 3551,
  [SMALL_STATE(221)] = 3555,
  [SMALL_STATE(222)] = 3559,
  [SMALL_STATE(223)] = 3563,
  [SMALL_STATE(224)] = 3567,
  [SMALL_STATE(225)] = 3571,
  [SMALL_STATE(226)] = 3575,
  [SMALL_STATE(227)] = 3579,
  [SMALL_STATE(228)] = 3583,
  [SMALL_STATE(229)] = 3587,
  [SMALL_STATE(230)] = 3591,
  [SMALL_STATE(231)] = 3595,
  [SMALL_STATE(232)] = 3599,
  [SMALL_STATE(233)] = 3603,
  [SMALL_STATE(234)] = 3607,
  [SMALL_STATE(235)] = 3611,
  [SMALL_STATE(236)] = 3615,
  [SMALL_STATE(237)] = 3619,
  [SMALL_STATE(238)] = 3623,
  [SMALL_STATE(239)] = 3627,
  [SMALL_STATE(240)] = 3631,
  [SMALL_STATE(241)] = 3635,
  [SMALL_STATE(242)] = 3639,
  [SMALL_STATE(243)] = 3643,
  [SMALL_STATE(244)] = 3647,
  [SMALL_STATE(245)] = 3651,
  [SMALL_STATE(246)] = 3655,
  [SMALL_STATE(247)] = 3659,
  [SMALL_STATE(248)] = 3663,
  [SMALL_STATE(249)] = 3667,
  [SMALL_STATE(250)] = 3671,
  [SMALL_STATE(251)] = 3675,
  [SMALL_STATE(252)] = 3679,
  [SMALL_STATE(253)] = 3683,
  [SMALL_STATE(254)] = 3687,
  [SMALL_STATE(255)] = 3691,
  [SMALL_STATE(256)] = 3695,
  [SMALL_STATE(257)] = 3699,
  [SMALL_STATE(258)] = 3703,
  [SMALL_STATE(259)] = 3707,
  [SMALL_STATE(260)] = 3711,
  [SMALL_STATE(261)] = 3715,
  [SMALL_STATE(262)] = 3719,
  [SMALL_STATE(263)] = 3723,
  [SMALL_STATE(264)] = 3727,
  [SMALL_STATE(265)] = 3731,
  [SMALL_STATE(266)] = 3735,
  [SMALL_STATE(267)] = 3739,
  [SMALL_STATE(268)] = 3743,
  [SMALL_STATE(269)] = 3747,
  [SMALL_STATE(270)] = 3751,
  [SMALL_STATE(271)] = 3755,
  [SMALL_STATE(272)] = 3759,
  [SMALL_STATE(273)] = 3763,
  [SMALL_STATE(274)] = 3767,
  [SMALL_STATE(275)] = 3771,
  [SMALL_STATE(276)] = 3775,
  [SMALL_STATE(277)] = 3779,
  [SMALL_STATE(278)] = 3783,
  [SMALL_STATE(279)] = 3787,
  [SMALL_STATE(280)] = 3791,
  [SMALL_STATE(281)] = 3795,
  [SMALL_STATE(282)] = 3799,
  [SMALL_STATE(283)] = 3803,
  [SMALL_STATE(284)] = 3807,
  [SMALL_STATE(285)] = 3811,
  [SMALL_STATE(286)] = 3815,
  [SMALL_STATE(287)] = 3819,
  [SMALL_STATE(288)] = 3823,
  [SMALL_STATE(289)] = 3827,
  [SMALL_STATE(290)] = 3831,
  [SMALL_STATE(291)] = 3835,
  [SMALL_STATE(292)] = 3839,
  [SMALL_STATE(293)] = 3843,
  [SMALL_STATE(294)] = 3847,
  [SMALL_STATE(295)] = 3851,
  [SMALL_STATE(296)] = 3855,
  [SMALL_STATE(297)] = 3859,
  [SMALL_STATE(298)] = 3863,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(35),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(161),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(161),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(142),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(188),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(35),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(160),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(228),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(160),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(228),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(228),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(160),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(104),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(97),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(153),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(106),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(161),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(51),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 4), SHIFT(121),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(161),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(35),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(161),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 2), SHIFT(143),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 7),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(127),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(252),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(145),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(182),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(125),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(7),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(18),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(168),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(86),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(16),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(126),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(133),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [801] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
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
