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
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 18

enum {
  aux_sym_tag_token1 = 1,
  aux_sym_comment_token1 = 2,
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
  sym_namespace = 23,
  sym_text = 24,
  anon_sym_QMARK = 25,
  sym_number = 26,
  sym__hash = 27,
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
  sym_tag = 59,
  sym_comment = 60,
  sym_bad_command = 61,
  sym_command = 62,
  sym__command_choices = 63,
  sym_execute_command = 64,
  sym__legacy_execute = 65,
  sym_execute_keyword = 66,
  sym_identifier = 67,
  sym_command_name = 68,
  sym_wildcard = 69,
  sym_boolean = 70,
  sym_coordinate = 71,
  sym_rotation = 72,
  sym_location = 73,
  sym_string = 74,
  sym__escape_sequence = 75,
  sym_container = 76,
  sym_nbt_path = 77,
  sym_selector = 78,
  sym_selector_option_section = 79,
  sym_selector_option = 80,
  sym_selector_key = 81,
  sym_selector_value = 82,
  sym_selector_nbt = 83,
  sym_selector_score = 84,
  sym_selector_score_key = 85,
  sym_selector_score_value = 86,
  sym_selector_number = 87,
  sym_nbt = 88,
  sym_nbt_object = 89,
  sym_nbt_array = 90,
  sym_nbt_object_key = 91,
  sym_nbt_object_value = 92,
  sym_nbt_number = 93,
  sym_item = 94,
  sym__blank_item_with_namespace = 95,
  sym_item_nbt = 96,
  sym_item_state = 97,
  sym_state_key = 98,
  sym_state_value = 99,
  sym_path = 100,
  aux_sym_root_repeat1 = 101,
  aux_sym_command_repeat1 = 102,
  aux_sym_command_repeat2 = 103,
  aux_sym_execute_command_repeat1 = 104,
  aux_sym_string_repeat1 = 105,
  aux_sym_container_repeat1 = 106,
  aux_sym_nbt_path_repeat1 = 107,
  aux_sym_nbt_path_repeat2 = 108,
  aux_sym_nbt_path_repeat3 = 109,
  aux_sym_selector_option_section_repeat1 = 110,
  aux_sym_selector_nbt_repeat1 = 111,
  aux_sym_selector_score_repeat1 = 112,
  aux_sym_nbt_object_repeat1 = 113,
  aux_sym_nbt_array_repeat1 = 114,
  aux_sym_item_state_repeat1 = 115,
  aux_sym_path_repeat1 = 116,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_namespace] = "namespace",
  [sym_text] = "text",
  [anon_sym_QMARK] = "\?",
  [sym_number] = "number",
  [sym__hash] = "_hash",
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
  [sym_tag] = "tag",
  [sym_comment] = "comment",
  [sym_bad_command] = "bad_command",
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
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_namespace] = sym_namespace,
  [sym_text] = sym_text,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_number] = sym_number,
  [sym__hash] = sym__hash,
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
  [sym_tag] = sym_tag,
  [sym_comment] = sym_comment,
  [sym_bad_command] = sym_bad_command,
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
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym__hash] = {
    .visible = false,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_command] = {
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

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
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

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_command,
  },
  [2] = {
    [1] = sym_command,
  },
  [5] = {
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
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '^') ADVANCE(281);
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
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '_') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '}') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '{') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(319);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(238);
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
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(244);
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
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '~') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'x') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_detect);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_facing);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_anchored);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_at);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_positioned);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rotated);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__line_separator);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (lookahead == '-') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_nbt_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_namespace);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__hash);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
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
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(33);
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
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(68);
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
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(23);
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
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 77},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 9},
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
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
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
  [75] = {.lex_state = 77},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 2},
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
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 77},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 77},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 77},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 77},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 77},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 77},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 297},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 77},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 77},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 293},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 77},
  [152] = {.lex_state = 296},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 296},
  [155] = {.lex_state = 298},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 296},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 295},
  [161] = {.lex_state = 77},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 293},
  [166] = {.lex_state = 77},
  [167] = {.lex_state = 293},
  [168] = {.lex_state = 293},
  [169] = {.lex_state = 293},
  [170] = {.lex_state = 77},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 77},
  [173] = {.lex_state = 77},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 77},
  [176] = {.lex_state = 293},
  [177] = {.lex_state = 293},
  [178] = {.lex_state = 293},
  [179] = {.lex_state = 293},
  [180] = {.lex_state = 293},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 294},
  [183] = {.lex_state = 293},
  [184] = {.lex_state = 293},
  [185] = {.lex_state = 296},
  [186] = {.lex_state = 294},
  [187] = {.lex_state = 294},
  [188] = {.lex_state = 294},
  [189] = {.lex_state = 294},
  [190] = {.lex_state = 294},
  [191] = {.lex_state = 77},
  [192] = {.lex_state = 293},
  [193] = {.lex_state = 293},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 294},
  [198] = {.lex_state = 294},
  [199] = {.lex_state = 293},
  [200] = {.lex_state = 293},
  [201] = {.lex_state = 77},
  [202] = {.lex_state = 77},
  [203] = {.lex_state = 293},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 293},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 293},
  [208] = {.lex_state = 77},
  [209] = {.lex_state = 293},
  [210] = {.lex_state = 293},
  [211] = {.lex_state = 293},
  [212] = {.lex_state = 293},
  [213] = {.lex_state = 293},
  [214] = {.lex_state = 77},
  [215] = {.lex_state = 293},
  [216] = {.lex_state = 293},
  [217] = {.lex_state = 77},
  [218] = {.lex_state = 77},
  [219] = {.lex_state = 293},
  [220] = {.lex_state = 77},
  [221] = {.lex_state = 293},
  [222] = {.lex_state = 77},
  [223] = {.lex_state = 293},
  [224] = {.lex_state = 293},
  [225] = {.lex_state = 293},
  [226] = {.lex_state = 293},
  [227] = {.lex_state = 77},
  [228] = {.lex_state = 77},
  [229] = {.lex_state = 77},
  [230] = {.lex_state = 293},
  [231] = {.lex_state = 77},
  [232] = {.lex_state = 77},
  [233] = {.lex_state = 293},
  [234] = {.lex_state = 77},
  [235] = {.lex_state = 293},
  [236] = {.lex_state = 77},
  [237] = {.lex_state = 293},
  [238] = {.lex_state = 293},
  [239] = {.lex_state = 293},
  [240] = {.lex_state = 293},
  [241] = {.lex_state = 293},
  [242] = {.lex_state = 77},
  [243] = {.lex_state = 293},
  [244] = {.lex_state = 77},
  [245] = {.lex_state = 293},
  [246] = {.lex_state = 293},
  [247] = {.lex_state = 293},
  [248] = {.lex_state = 293},
  [249] = {.lex_state = 77},
  [250] = {.lex_state = 77},
  [251] = {.lex_state = 77},
  [252] = {.lex_state = 77},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 77},
  [255] = {.lex_state = 77},
  [256] = {.lex_state = 293},
  [257] = {.lex_state = 293},
  [258] = {.lex_state = 293},
  [259] = {.lex_state = 293},
  [260] = {.lex_state = 293},
  [261] = {.lex_state = 293},
  [262] = {.lex_state = 77},
  [263] = {.lex_state = 293},
  [264] = {.lex_state = 293},
  [265] = {.lex_state = 293},
  [266] = {.lex_state = 293},
  [267] = {.lex_state = 77},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 293},
  [270] = {.lex_state = 77},
  [271] = {.lex_state = 293},
  [272] = {.lex_state = 293},
  [273] = {.lex_state = 293},
  [274] = {.lex_state = 293},
  [275] = {.lex_state = 77},
  [276] = {.lex_state = 293},
  [277] = {.lex_state = 293},
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
  [290] = {.lex_state = 77},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 215},
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
    [sym__hash] = ACTIONS(1),
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
    [sym_comment] = STATE(11),
    [sym_bad_command] = STATE(11),
    [sym_command] = STATE(11),
    [sym_execute_command] = STATE(110),
    [sym__legacy_execute] = STATE(110),
    [sym_identifier] = STATE(83),
    [sym_command_name] = STATE(41),
    [aux_sym_root_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_tag_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_execute] = ACTIONS(9),
    [sym__line_separator] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [sym__hash] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
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
    ACTIONS(31), 1,
      sym__hash,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_namespaced_container,
    STATE(24), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(254), 1,
      sym_selector,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
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
    STATE(270), 13,
      sym_tag,
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
  [94] = 23,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
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
    ACTIONS(31), 1,
      sym__hash,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_namespaced_container,
    ACTIONS(49), 1,
      sym_nbt_identifier,
    STATE(24), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(267), 1,
      sym_selector,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
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
    STATE(270), 13,
      sym_tag,
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
  [188] = 21,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      sym__hash,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_namespaced_container,
    ACTIONS(51), 1,
      anon_sym_run,
    STATE(24), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
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
    STATE(270), 14,
      sym_tag,
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
  [277] = 21,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
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
    ACTIONS(31), 1,
      sym__hash,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_namespaced_container,
    STATE(24), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
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
    STATE(270), 14,
      sym_tag,
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
  [366] = 20,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_namespace,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      sym__hash,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_namespaced_container,
    STATE(24), 1,
      sym_identifier,
    STATE(114), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
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
    STATE(270), 14,
      sym_tag,
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
  [452] = 21,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      aux_sym_tag_token1,
    ACTIONS(58), 1,
      anon_sym_execute,
    ACTIONS(60), 1,
      sym_namespace,
    ACTIONS(62), 1,
      sym_text,
    ACTIONS(64), 1,
      sym__hash,
    ACTIONS(67), 1,
      sym_namespaced_container,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_nbt_object,
      sym_nbt_array,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
    STATE(78), 13,
      sym_tag,
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
  [534] = 19,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym_namespace,
    ACTIONS(62), 1,
      sym_text,
    ACTIONS(67), 1,
      sym_namespaced_container,
    ACTIONS(69), 1,
      sym__hash,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(268), 1,
      sym_coordinate,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(78), 13,
      sym_tag,
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
  [606] = 14,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      sym_item_state,
    STATE(43), 1,
      aux_sym_container_repeat1,
    STATE(44), 1,
      sym_item_nbt,
    STATE(56), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(73), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [654] = 11,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(38), 1,
      sym_item_nbt,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_nbt_object,
    ACTIONS(84), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [693] = 11,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_execute,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      sym__hash,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__line_separator,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(110), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 4,
      sym_comment,
      sym_bad_command,
      sym_command,
      aux_sym_root_repeat1,
  [731] = 11,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_tag_token1,
    ACTIONS(102), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_execute,
    ACTIONS(108), 1,
      sym__line_separator,
    ACTIONS(111), 1,
      anon_sym_QMARK,
    ACTIONS(114), 1,
      sym__hash,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(110), 2,
      sym_execute_command,
      sym__legacy_execute,
    STATE(12), 4,
      sym_comment,
      sym_bad_command,
      sym_command,
      aux_sym_root_repeat1,
  [769] = 9,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [802] = 9,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [835] = 9,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [868] = 9,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [901] = 8,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [931] = 8,
    ACTIONS(135), 1,
      aux_sym_tag_token1,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      aux_sym_selector_number_token3,
    STATE(213), 1,
      sym_selector_value,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(209), 4,
      sym_boolean,
      sym_selector_nbt,
      sym_selector_score,
      sym_selector_number,
  [961] = 8,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [991] = 7,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(149), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1019] = 7,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(73), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1047] = 7,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(163), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1075] = 8,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1105] = 13,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(33), 1,
      sym_item_state,
    STATE(43), 1,
      aux_sym_container_repeat1,
    STATE(44), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
    STATE(112), 1,
      aux_sym_nbt_path_repeat3,
    STATE(161), 1,
      aux_sym_path_repeat1,
  [1145] = 8,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_nbt_object_value,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(271), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(239), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [1175] = 6,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_tag_token1,
    ACTIONS(174), 1,
      anon_sym_execute,
    ACTIONS(176), 1,
      sym_text,
    STATE(39), 2,
      sym_identifier,
      sym_string,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1200] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(180), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
  [1220] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_nbt_object,
    STATE(66), 1,
      sym_item_nbt,
    ACTIONS(187), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1242] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(191), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACK,
  [1262] = 2,
    ACTIONS(198), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1278] = 4,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_nbt_path_repeat2,
    ACTIONS(202), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
  [1298] = 4,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(180), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACK,
  [1318] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_nbt_object,
    STATE(72), 1,
      sym_item_nbt,
    ACTIONS(212), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1340] = 10,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_item_state,
    STATE(37), 1,
      aux_sym_container_repeat1,
    STATE(38), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
    STATE(151), 1,
      aux_sym_path_repeat1,
  [1371] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(220), 1,
      sym__line_separator,
    STATE(50), 1,
      aux_sym_command_repeat1,
    STATE(51), 1,
      aux_sym_command_repeat2,
    ACTIONS(216), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      sym__hash,
  [1394] = 2,
    ACTIONS(225), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1409] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_container_repeat1,
    ACTIONS(229), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1428] = 4,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_item_state,
    ACTIONS(187), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1447] = 2,
    ACTIONS(191), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1462] = 3,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
  [1479] = 6,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(241), 1,
      sym__line_separator,
    STATE(35), 1,
      aux_sym_command_repeat1,
    STATE(61), 1,
      aux_sym_command_repeat2,
    ACTIONS(239), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      sym__hash,
  [1502] = 4,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_container_repeat1,
    ACTIONS(246), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1521] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_container_repeat1,
    ACTIONS(253), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1540] = 4,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_item_state,
    ACTIONS(212), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1559] = 2,
    ACTIONS(257), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1574] = 4,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_selector_option_section,
    ACTIONS(261), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1593] = 2,
    ACTIONS(267), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [1608] = 8,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    ACTIONS(273), 1,
      anon_sym_detect,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 2,
      sym_command,
      sym__legacy_execute,
  [1634] = 3,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(277), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1650] = 4,
    ACTIONS(285), 1,
      anon_sym_,
    STATE(50), 1,
      aux_sym_command_repeat1,
    ACTIONS(283), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1668] = 5,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(294), 1,
      sym__line_separator,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(290), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      sym__hash,
  [1688] = 4,
    ACTIONS(301), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(299), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1706] = 4,
    ACTIONS(308), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(306), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1724] = 2,
    ACTIONS(246), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_DOT,
  [1738] = 2,
    ACTIONS(313), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACE,
  [1752] = 4,
    ACTIONS(319), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(317), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(315), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1770] = 8,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    ACTIONS(322), 1,
      anon_sym_detect,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(101), 2,
      sym_command,
      sym__legacy_execute,
  [1796] = 4,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(326), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1814] = 2,
    ACTIONS(333), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACK,
  [1828] = 4,
    ACTIONS(73), 1,
      anon_sym_execute,
    ACTIONS(335), 1,
      aux_sym_tag_token1,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1846] = 5,
    ACTIONS(220), 1,
      sym__line_separator,
    ACTIONS(292), 1,
      anon_sym_,
    STATE(52), 1,
      aux_sym_command_repeat2,
    ACTIONS(216), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      sym__hash,
  [1866] = 2,
    ACTIONS(340), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACK,
  [1880] = 2,
    ACTIONS(344), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(342), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACK,
  [1894] = 2,
    ACTIONS(348), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(346), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
      anon_sym_LBRACE,
  [1908] = 7,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(103), 2,
      sym_command,
      sym__legacy_execute,
  [1931] = 2,
    ACTIONS(352), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1944] = 2,
    ACTIONS(356), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1957] = 2,
    ACTIONS(360), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [1970] = 7,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(102), 2,
      sym_command,
      sym__legacy_execute,
  [1993] = 7,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(98), 2,
      sym_command,
      sym__legacy_execute,
  [2016] = 2,
    ACTIONS(364), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(362), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2029] = 2,
    ACTIONS(187), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2042] = 3,
    ACTIONS(368), 1,
      aux_sym_tag_token1,
    ACTIONS(371), 1,
      anon_sym_execute,
    ACTIONS(366), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2057] = 2,
    ACTIONS(375), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2070] = 2,
    ACTIONS(379), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2083] = 2,
    ACTIONS(383), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2096] = 2,
    ACTIONS(387), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(385), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2109] = 2,
    ACTIONS(283), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2122] = 2,
    ACTIONS(391), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(389), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2135] = 2,
    ACTIONS(395), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2148] = 2,
    ACTIONS(399), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2161] = 8,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_tag_token1,
    ACTIONS(403), 1,
      sym_nbt_identifier,
    ACTIONS(405), 1,
      sym_number,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(238), 1,
      sym_selector_score_key,
    STATE(296), 1,
      sym_string,
  [2186] = 2,
    ACTIONS(411), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(409), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2199] = 2,
    ACTIONS(277), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2212] = 2,
    ACTIONS(326), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2225] = 7,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(106), 2,
      sym_command,
      sym__legacy_execute,
  [2248] = 8,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_tag_token1,
    ACTIONS(403), 1,
      sym_nbt_identifier,
    ACTIONS(405), 1,
      sym_number,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_selector_score_key,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
  [2273] = 3,
    ACTIONS(415), 1,
      anon_sym_,
    ACTIONS(73), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2288] = 2,
    ACTIONS(420), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(418), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2301] = 2,
    ACTIONS(424), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(422), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2314] = 3,
    ACTIONS(430), 1,
      anon_sym_,
    ACTIONS(428), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2329] = 2,
    ACTIONS(435), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(433), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2341] = 6,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(437), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(97), 2,
      sym_command,
      sym_execute_command,
  [2361] = 7,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(439), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(96), 1,
      sym_command,
    STATE(108), 1,
      sym_execute_command,
  [2383] = 2,
    ACTIONS(443), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(441), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2395] = 2,
    ACTIONS(447), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(445), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2407] = 2,
    ACTIONS(451), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(449), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2419] = 2,
    ACTIONS(455), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(453), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2431] = 2,
    ACTIONS(290), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2443] = 6,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(437), 1,
      anon_sym_execute,
    STATE(41), 1,
      sym_command_name,
    STATE(83), 1,
      sym_identifier,
    STATE(92), 2,
      sym_command,
      sym_execute_command,
  [2463] = 2,
    ACTIONS(459), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(457), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2475] = 2,
    ACTIONS(463), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(461), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2487] = 2,
    ACTIONS(467), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(465), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2499] = 7,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_tag_token1,
    ACTIONS(403), 1,
      sym_nbt_identifier,
    ACTIONS(405), 1,
      sym_number,
    STATE(226), 1,
      sym_nbt_object_key,
    STATE(238), 1,
      sym_selector_score_key,
    STATE(296), 1,
      sym_string,
  [2521] = 2,
    ACTIONS(216), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2533] = 2,
    ACTIONS(471), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(469), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2545] = 2,
    ACTIONS(475), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2557] = 2,
    ACTIONS(479), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(477), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2569] = 2,
    ACTIONS(483), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(481), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2581] = 2,
    ACTIONS(487), 2,
      aux_sym_tag_token1,
      anon_sym_execute,
    ACTIONS(485), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      sym__line_separator,
      anon_sym_QMARK,
      sym__hash,
  [2593] = 5,
    ACTIONS(489), 1,
      aux_sym_tag_token1,
    ACTIONS(491), 1,
      sym_number,
    STATE(187), 1,
      sym_boolean,
    STATE(188), 1,
      sym_state_value,
    ACTIONS(493), 2,
      anon_sym_true,
      anon_sym_false,
  [2610] = 6,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_nbt_path_repeat3,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
  [2629] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_item_state,
    STATE(38), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2648] = 6,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      aux_sym_nbt_path_repeat2,
    STATE(32), 1,
      aux_sym_nbt_path_repeat1,
    STATE(112), 1,
      aux_sym_nbt_path_repeat3,
  [2667] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(405), 2,
      sym_nbt_identifier,
      sym_number,
  [2684] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(405), 2,
      sym_nbt_identifier,
      sym_number,
  [2701] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(33), 1,
      sym_item_state,
    STATE(44), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2720] = 5,
    ACTIONS(503), 1,
      aux_sym_tag_token1,
    ACTIONS(505), 1,
      sym_number,
    STATE(234), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
  [2737] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(405), 2,
      sym_nbt_identifier,
      sym_number,
  [2754] = 6,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_text,
    ACTIONS(509), 1,
      sym_number,
    STATE(39), 1,
      sym_string,
    STATE(40), 1,
      sym_identifier,
  [2773] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      anon_sym_,
    STATE(33), 1,
      sym_item_state,
    STATE(44), 1,
      sym_item_nbt,
    STATE(63), 1,
      sym_nbt_object,
  [2792] = 4,
    STATE(257), 1,
      sym_selector_score_value,
    STATE(258), 1,
      sym_selector_number,
    ACTIONS(143), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    ACTIONS(145), 2,
      sym_number,
      aux_sym_selector_number_token3,
  [2807] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(405), 2,
      sym_nbt_identifier,
      sym_number,
  [2824] = 2,
    ACTIONS(515), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(517), 5,
      anon_sym_s,
      anon_sym_l,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [2835] = 5,
    ACTIONS(503), 1,
      aux_sym_tag_token1,
    ACTIONS(505), 1,
      sym_number,
    STATE(244), 1,
      sym_state_value,
    STATE(283), 1,
      sym_boolean,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
  [2852] = 5,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_,
    ACTIONS(176), 1,
      sym_text,
    STATE(39), 2,
      sym_identifier,
      sym_string,
  [2869] = 5,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(227), 1,
      sym_coordinate,
    STATE(228), 1,
      sym_location,
  [2885] = 4,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      aux_sym_string_token1,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2899] = 5,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(227), 1,
      sym_coordinate,
    STATE(250), 1,
      sym_location,
  [2915] = 4,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_nbt_object_key,
    STATE(296), 1,
      sym_string,
    ACTIONS(405), 2,
      sym_nbt_identifier,
      sym_number,
  [2929] = 4,
    ACTIONS(523), 1,
      aux_sym_string_token1,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [2943] = 4,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_text,
    STATE(39), 2,
      sym_identifier,
      sym_string,
  [2957] = 5,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(206), 1,
      sym_location,
    STATE(227), 1,
      sym_coordinate,
  [2973] = 5,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(222), 1,
      sym_location,
    STATE(227), 1,
      sym_coordinate,
  [2989] = 4,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(529), 1,
      sym_namespace,
    STATE(121), 1,
      sym_identifier,
    STATE(214), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [3003] = 1,
    ACTIONS(531), 5,
      anon_sym_p,
      anon_sym_a,
      anon_sym_r,
      anon_sym_s,
      anon_sym_e,
  [3011] = 4,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      aux_sym_string_token1,
    ACTIONS(538), 1,
      anon_sym_BSLASH,
    STATE(137), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3025] = 4,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      aux_sym_string_token1,
    STATE(128), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3039] = 4,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(529), 1,
      sym_namespace,
    STATE(117), 1,
      sym_identifier,
    STATE(208), 2,
      sym_item,
      sym__blank_item_with_namespace,
  [3053] = 4,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym_string_token1,
    STATE(131), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [3067] = 4,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(91), 1,
      sym_coordinate,
  [3080] = 4,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(295), 1,
      sym_coordinate,
  [3093] = 3,
    ACTIONS(549), 1,
      aux_sym_tag_token1,
    STATE(218), 1,
      sym_state_key,
    ACTIONS(551), 2,
      anon_sym_STAR,
      sym_number,
  [3104] = 3,
    ACTIONS(549), 1,
      aux_sym_tag_token1,
    STATE(220), 1,
      sym_state_key,
    ACTIONS(553), 2,
      anon_sym_STAR,
      sym_number,
  [3115] = 4,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(519), 1,
      sym_number,
    STATE(81), 1,
      sym_coordinate,
  [3128] = 3,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(555), 1,
      sym_nbt_identifier,
    STATE(255), 1,
      sym_selector,
  [3138] = 3,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(557), 1,
      sym_namespace,
    STATE(85), 1,
      sym_identifier,
  [3148] = 3,
    ACTIONS(559), 1,
      aux_sym_nbt_path_token1,
    STATE(192), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(200), 1,
      aux_sym_selector_score_repeat1,
  [3158] = 3,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(561), 1,
      sym_nbt_identifier,
    STATE(286), 1,
      sym_selector,
  [3168] = 3,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(563), 1,
      aux_sym_tag_token1,
    STATE(34), 1,
      sym_identifier,
  [3178] = 3,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_path_repeat1,
  [3188] = 3,
    ACTIONS(565), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym_selector_option_section_repeat1,
  [3198] = 3,
    ACTIONS(569), 1,
      aux_sym_tag_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_state_key,
  [3208] = 3,
    ACTIONS(565), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_selector_option_section_repeat1,
  [3218] = 3,
    ACTIONS(575), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(577), 1,
      aux_sym_nbt_path_token2,
    STATE(177), 1,
      aux_sym_item_state_repeat1,
  [3228] = 2,
    ACTIONS(581), 1,
      aux_sym_string_token1,
    ACTIONS(579), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [3236] = 3,
    ACTIONS(5), 1,
      aux_sym_tag_token1,
    ACTIONS(509), 1,
      sym_number,
    STATE(54), 1,
      sym_identifier,
  [3246] = 3,
    ACTIONS(583), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym_selector_option_section_repeat1,
  [3256] = 3,
    ACTIONS(588), 1,
      aux_sym_tag_token1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selector_score_key,
  [3266] = 3,
    ACTIONS(592), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [3276] = 3,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(315), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_path_repeat1,
  [3286] = 3,
    ACTIONS(569), 1,
      aux_sym_tag_token1,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_state_key,
  [3296] = 3,
    ACTIONS(600), 1,
      aux_sym_tag_token1,
    STATE(277), 1,
      sym_selector_key,
    STATE(284), 1,
      sym_selector_option,
  [3306] = 2,
    ACTIONS(563), 1,
      aux_sym_tag_token1,
    STATE(74), 1,
      sym_identifier,
  [3313] = 2,
    ACTIONS(602), 1,
      aux_sym_nbt_path_token1,
    STATE(174), 1,
      aux_sym_nbt_array_repeat1,
  [3320] = 2,
    ACTIONS(604), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym_execute_command_repeat1,
  [3327] = 2,
    ACTIONS(607), 1,
      aux_sym_nbt_path_token1,
    STATE(196), 1,
      aux_sym_nbt_array_repeat1,
  [3334] = 2,
    ACTIONS(609), 1,
      aux_sym_nbt_path_token1,
    STATE(193), 1,
      aux_sym_nbt_object_repeat1,
  [3341] = 2,
    ACTIONS(611), 1,
      aux_sym_nbt_path_token1,
    STATE(169), 1,
      aux_sym_item_state_repeat1,
  [3348] = 2,
    ACTIONS(614), 1,
      anon_sym_,
    STATE(175), 1,
      aux_sym_execute_command_repeat1,
  [3355] = 2,
    ACTIONS(588), 1,
      aux_sym_tag_token1,
    STATE(241), 1,
      sym_selector_score_key,
  [3362] = 2,
    ACTIONS(616), 1,
      anon_sym_,
    STATE(175), 1,
      aux_sym_execute_command_repeat1,
  [3369] = 2,
    ACTIONS(618), 1,
      anon_sym_,
    STATE(175), 1,
      aux_sym_execute_command_repeat1,
  [3376] = 2,
    ACTIONS(620), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_nbt_array_repeat1,
  [3383] = 2,
    ACTIONS(622), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym_execute_command_repeat1,
  [3390] = 2,
    ACTIONS(624), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_selector_score_repeat1,
  [3397] = 2,
    ACTIONS(627), 1,
      aux_sym_nbt_path_token1,
    STATE(169), 1,
      aux_sym_item_state_repeat1,
  [3404] = 2,
    ACTIONS(629), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_nbt_repeat1,
  [3411] = 2,
    ACTIONS(632), 1,
      aux_sym_nbt_path_token1,
    STATE(177), 1,
      aux_sym_item_state_repeat1,
  [3418] = 2,
    ACTIONS(634), 1,
      aux_sym_nbt_path_token1,
    STATE(199), 1,
      aux_sym_nbt_object_repeat1,
  [3425] = 2,
    ACTIONS(569), 1,
      aux_sym_tag_token1,
    STATE(256), 1,
      sym_state_key,
  [3432] = 2,
    ACTIONS(636), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [3439] = 2,
    ACTIONS(640), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_nbt_array_repeat1,
  [3446] = 2,
    ACTIONS(643), 1,
      aux_sym_nbt_path_token1,
    STATE(180), 1,
      aux_sym_nbt_object_repeat1,
  [3453] = 2,
    ACTIONS(645), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
  [3460] = 2,
    ACTIONS(649), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(651), 1,
      anon_sym_COMMA,
  [3467] = 2,
    ACTIONS(653), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
  [3474] = 2,
    ACTIONS(657), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
  [3481] = 2,
    ACTIONS(661), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(663), 1,
      anon_sym_COMMA,
  [3488] = 2,
    ACTIONS(665), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(667), 1,
      anon_sym_COMMA,
  [3495] = 2,
    ACTIONS(669), 1,
      anon_sym_EQ,
    ACTIONS(671), 1,
      anon_sym_COLON,
  [3502] = 2,
    ACTIONS(673), 1,
      aux_sym_nbt_path_token1,
    STATE(178), 1,
      aux_sym_selector_nbt_repeat1,
  [3509] = 2,
    ACTIONS(675), 1,
      aux_sym_nbt_path_token1,
    STATE(199), 1,
      aux_sym_nbt_object_repeat1,
  [3516] = 2,
    ACTIONS(366), 1,
      anon_sym_,
    ACTIONS(677), 1,
      aux_sym_tag_token1,
  [3523] = 2,
    ACTIONS(563), 1,
      aux_sym_tag_token1,
    STATE(113), 1,
      sym_identifier,
  [3530] = 2,
    ACTIONS(679), 1,
      aux_sym_nbt_path_token1,
    STATE(183), 1,
      aux_sym_nbt_array_repeat1,
  [3537] = 2,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      aux_sym_nbt_path_token1,
  [3544] = 2,
    ACTIONS(681), 1,
      aux_sym_nbt_path_token1,
    ACTIONS(683), 1,
      anon_sym_COMMA,
  [3551] = 2,
    ACTIONS(685), 1,
      aux_sym_nbt_path_token1,
    STATE(199), 1,
      aux_sym_nbt_object_repeat1,
  [3558] = 2,
    ACTIONS(688), 1,
      aux_sym_nbt_path_token1,
    STATE(176), 1,
      aux_sym_selector_score_repeat1,
  [3565] = 1,
    ACTIONS(690), 1,
      anon_sym_,
  [3569] = 1,
    ACTIONS(669), 1,
      anon_sym_EQ,
  [3573] = 1,
    ACTIONS(692), 1,
      aux_sym_nbt_path_token1,
  [3577] = 1,
    ACTIONS(577), 1,
      aux_sym_nbt_path_token2,
  [3581] = 1,
    ACTIONS(695), 1,
      aux_sym_nbt_path_token1,
  [3585] = 1,
    ACTIONS(697), 1,
      anon_sym_,
  [3589] = 1,
    ACTIONS(699), 1,
      aux_sym_nbt_path_token1,
  [3593] = 1,
    ACTIONS(501), 1,
      anon_sym_,
  [3597] = 1,
    ACTIONS(701), 1,
      aux_sym_nbt_path_token1,
  [3601] = 1,
    ACTIONS(703), 1,
      aux_sym_nbt_path_token1,
  [3605] = 1,
    ACTIONS(706), 1,
      aux_sym_nbt_path_token1,
  [3609] = 1,
    ACTIONS(708), 1,
      aux_sym_nbt_path_token1,
  [3613] = 1,
    ACTIONS(710), 1,
      aux_sym_nbt_path_token1,
  [3617] = 1,
    ACTIONS(511), 1,
      anon_sym_,
  [3621] = 1,
    ACTIONS(712), 1,
      aux_sym_nbt_path_token1,
  [3625] = 1,
    ACTIONS(714), 1,
      aux_sym_nbt_path_token1,
  [3629] = 1,
    ACTIONS(716), 1,
      anon_sym_,
  [3633] = 1,
    ACTIONS(718), 1,
      anon_sym_EQ,
  [3637] = 1,
    ACTIONS(720), 1,
      aux_sym_nbt_path_token1,
  [3641] = 1,
    ACTIONS(722), 1,
      anon_sym_EQ,
  [3645] = 1,
    ACTIONS(724), 1,
      aux_sym_nbt_path_token1,
  [3649] = 1,
    ACTIONS(726), 1,
      anon_sym_,
  [3653] = 1,
    ACTIONS(728), 1,
      aux_sym_nbt_path_token1,
  [3657] = 1,
    ACTIONS(730), 1,
      aux_sym_nbt_path_token1,
  [3661] = 1,
    ACTIONS(733), 1,
      aux_sym_nbt_path_token1,
  [3665] = 1,
    ACTIONS(735), 1,
      aux_sym_nbt_path_token1,
  [3669] = 1,
    ACTIONS(737), 1,
      anon_sym_,
  [3673] = 1,
    ACTIONS(739), 1,
      anon_sym_,
  [3677] = 1,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [3681] = 1,
    ACTIONS(743), 1,
      aux_sym_nbt_path_token1,
  [3685] = 1,
    ACTIONS(745), 1,
      anon_sym_EQ,
  [3689] = 1,
    ACTIONS(747), 1,
      anon_sym_,
  [3693] = 1,
    ACTIONS(749), 1,
      aux_sym_nbt_path_token1,
  [3697] = 1,
    ACTIONS(751), 1,
      anon_sym_,
  [3701] = 1,
    ACTIONS(753), 1,
      aux_sym_nbt_path_token1,
  [3705] = 1,
    ACTIONS(755), 1,
      anon_sym_COLON,
  [3709] = 1,
    ACTIONS(757), 1,
      aux_sym_nbt_path_token1,
  [3713] = 1,
    ACTIONS(759), 1,
      aux_sym_nbt_path_token1,
  [3717] = 1,
    ACTIONS(761), 1,
      aux_sym_nbt_path_token1,
  [3721] = 1,
    ACTIONS(763), 1,
      aux_sym_nbt_path_token1,
  [3725] = 1,
    ACTIONS(765), 1,
      aux_sym_nbt_path_token1,
  [3729] = 1,
    ACTIONS(767), 1,
      anon_sym_,
  [3733] = 1,
    ACTIONS(769), 1,
      aux_sym_nbt_path_token1,
  [3737] = 1,
    ACTIONS(771), 1,
      anon_sym_,
  [3741] = 1,
    ACTIONS(773), 1,
      aux_sym_nbt_path_token1,
  [3745] = 1,
    ACTIONS(775), 1,
      aux_sym_nbt_path_token1,
  [3749] = 1,
    ACTIONS(777), 1,
      aux_sym_nbt_path_token1,
  [3753] = 1,
    ACTIONS(779), 1,
      aux_sym_nbt_path_token1,
  [3757] = 1,
    ACTIONS(671), 1,
      anon_sym_COLON,
  [3761] = 1,
    ACTIONS(781), 1,
      anon_sym_,
  [3765] = 1,
    ACTIONS(783), 1,
      anon_sym_,
  [3769] = 1,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
  [3773] = 1,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
  [3777] = 1,
    ACTIONS(789), 1,
      anon_sym_,
  [3781] = 1,
    ACTIONS(792), 1,
      anon_sym_,
  [3785] = 1,
    ACTIONS(794), 1,
      aux_sym_nbt_path_token1,
  [3789] = 1,
    ACTIONS(796), 1,
      aux_sym_nbt_path_token1,
  [3793] = 1,
    ACTIONS(798), 1,
      aux_sym_nbt_path_token1,
  [3797] = 1,
    ACTIONS(800), 1,
      aux_sym_nbt_path_token1,
  [3801] = 1,
    ACTIONS(802), 1,
      aux_sym_nbt_path_token1,
  [3805] = 1,
    ACTIONS(804), 1,
      aux_sym_nbt_path_token1,
  [3809] = 1,
    ACTIONS(806), 1,
      anon_sym_COLON,
  [3813] = 1,
    ACTIONS(808), 1,
      aux_sym_nbt_path_token1,
  [3817] = 1,
    ACTIONS(810), 1,
      aux_sym_nbt_path_token1,
  [3821] = 1,
    ACTIONS(812), 1,
      aux_sym_nbt_path_token1,
  [3825] = 1,
    ACTIONS(814), 1,
      aux_sym_nbt_path_token1,
  [3829] = 1,
    ACTIONS(816), 1,
      anon_sym_,
  [3833] = 1,
    ACTIONS(819), 1,
      anon_sym_,
  [3837] = 1,
    ACTIONS(393), 1,
      aux_sym_nbt_path_token1,
  [3841] = 1,
    ACTIONS(821), 1,
      anon_sym_,
  [3845] = 1,
    ACTIONS(354), 1,
      aux_sym_nbt_path_token1,
  [3849] = 1,
    ACTIONS(823), 1,
      aux_sym_nbt_path_token1,
  [3853] = 1,
    ACTIONS(265), 1,
      aux_sym_nbt_path_token1,
  [3857] = 1,
    ACTIONS(825), 1,
      aux_sym_nbt_path_token1,
  [3861] = 1,
    ACTIONS(279), 1,
      sym_number,
  [3865] = 1,
    ACTIONS(223), 1,
      aux_sym_nbt_path_token1,
  [3869] = 1,
    ACTIONS(827), 1,
      aux_sym_nbt_path_token1,
  [3873] = 1,
    ACTIONS(385), 1,
      aux_sym_nbt_path_token1,
  [3877] = 1,
    ACTIONS(338), 1,
      aux_sym_nbt_path_token1,
  [3881] = 1,
    ACTIONS(418), 1,
      aux_sym_nbt_path_token1,
  [3885] = 1,
    ACTIONS(331), 1,
      aux_sym_nbt_path_token1,
  [3889] = 1,
    ACTIONS(804), 1,
      anon_sym_EQ,
  [3893] = 1,
    ACTIONS(655), 1,
      anon_sym_,
  [3897] = 1,
    ACTIONS(829), 1,
      aux_sym_nbt_path_token1,
  [3901] = 1,
    ACTIONS(831), 1,
      aux_sym_nbt_path_token1,
  [3905] = 1,
    ACTIONS(833), 1,
      anon_sym_,
  [3909] = 1,
    ACTIONS(835), 1,
      anon_sym_,
  [3913] = 1,
    ACTIONS(837), 1,
      anon_sym_,
  [3917] = 1,
    ACTIONS(839), 1,
      aux_sym_nbt_path_token1,
  [3921] = 1,
    ACTIONS(841), 1,
      anon_sym_,
  [3925] = 1,
    ACTIONS(843), 1,
      ts_builtin_sym_end,
  [3929] = 1,
    ACTIONS(845), 1,
      aux_sym_comment_token1,
  [3933] = 1,
    ACTIONS(847), 1,
      anon_sym_,
  [3937] = 1,
    ACTIONS(849), 1,
      anon_sym_execute,
  [3941] = 1,
    ACTIONS(851), 1,
      anon_sym_,
  [3945] = 1,
    ACTIONS(853), 1,
      aux_sym_nbt_path_token1,
  [3949] = 1,
    ACTIONS(855), 1,
      aux_sym_nbt_path_token1,
  [3953] = 1,
    ACTIONS(857), 1,
      aux_sym_nbt_path_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 277,
  [SMALL_STATE(6)] = 366,
  [SMALL_STATE(7)] = 452,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 606,
  [SMALL_STATE(10)] = 654,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 731,
  [SMALL_STATE(13)] = 769,
  [SMALL_STATE(14)] = 802,
  [SMALL_STATE(15)] = 835,
  [SMALL_STATE(16)] = 868,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 931,
  [SMALL_STATE(19)] = 961,
  [SMALL_STATE(20)] = 991,
  [SMALL_STATE(21)] = 1019,
  [SMALL_STATE(22)] = 1047,
  [SMALL_STATE(23)] = 1075,
  [SMALL_STATE(24)] = 1105,
  [SMALL_STATE(25)] = 1145,
  [SMALL_STATE(26)] = 1175,
  [SMALL_STATE(27)] = 1200,
  [SMALL_STATE(28)] = 1220,
  [SMALL_STATE(29)] = 1242,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1278,
  [SMALL_STATE(32)] = 1298,
  [SMALL_STATE(33)] = 1318,
  [SMALL_STATE(34)] = 1340,
  [SMALL_STATE(35)] = 1371,
  [SMALL_STATE(36)] = 1394,
  [SMALL_STATE(37)] = 1409,
  [SMALL_STATE(38)] = 1428,
  [SMALL_STATE(39)] = 1447,
  [SMALL_STATE(40)] = 1462,
  [SMALL_STATE(41)] = 1479,
  [SMALL_STATE(42)] = 1502,
  [SMALL_STATE(43)] = 1521,
  [SMALL_STATE(44)] = 1540,
  [SMALL_STATE(45)] = 1559,
  [SMALL_STATE(46)] = 1574,
  [SMALL_STATE(47)] = 1593,
  [SMALL_STATE(48)] = 1608,
  [SMALL_STATE(49)] = 1634,
  [SMALL_STATE(50)] = 1650,
  [SMALL_STATE(51)] = 1668,
  [SMALL_STATE(52)] = 1688,
  [SMALL_STATE(53)] = 1706,
  [SMALL_STATE(54)] = 1724,
  [SMALL_STATE(55)] = 1738,
  [SMALL_STATE(56)] = 1752,
  [SMALL_STATE(57)] = 1770,
  [SMALL_STATE(58)] = 1796,
  [SMALL_STATE(59)] = 1814,
  [SMALL_STATE(60)] = 1828,
  [SMALL_STATE(61)] = 1846,
  [SMALL_STATE(62)] = 1866,
  [SMALL_STATE(63)] = 1880,
  [SMALL_STATE(64)] = 1894,
  [SMALL_STATE(65)] = 1908,
  [SMALL_STATE(66)] = 1931,
  [SMALL_STATE(67)] = 1944,
  [SMALL_STATE(68)] = 1957,
  [SMALL_STATE(69)] = 1970,
  [SMALL_STATE(70)] = 1993,
  [SMALL_STATE(71)] = 2016,
  [SMALL_STATE(72)] = 2029,
  [SMALL_STATE(73)] = 2042,
  [SMALL_STATE(74)] = 2057,
  [SMALL_STATE(75)] = 2070,
  [SMALL_STATE(76)] = 2083,
  [SMALL_STATE(77)] = 2096,
  [SMALL_STATE(78)] = 2109,
  [SMALL_STATE(79)] = 2122,
  [SMALL_STATE(80)] = 2135,
  [SMALL_STATE(81)] = 2148,
  [SMALL_STATE(82)] = 2161,
  [SMALL_STATE(83)] = 2186,
  [SMALL_STATE(84)] = 2199,
  [SMALL_STATE(85)] = 2212,
  [SMALL_STATE(86)] = 2225,
  [SMALL_STATE(87)] = 2248,
  [SMALL_STATE(88)] = 2273,
  [SMALL_STATE(89)] = 2288,
  [SMALL_STATE(90)] = 2301,
  [SMALL_STATE(91)] = 2314,
  [SMALL_STATE(92)] = 2329,
  [SMALL_STATE(93)] = 2341,
  [SMALL_STATE(94)] = 2361,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2395,
  [SMALL_STATE(97)] = 2407,
  [SMALL_STATE(98)] = 2419,
  [SMALL_STATE(99)] = 2431,
  [SMALL_STATE(100)] = 2443,
  [SMALL_STATE(101)] = 2463,
  [SMALL_STATE(102)] = 2475,
  [SMALL_STATE(103)] = 2487,
  [SMALL_STATE(104)] = 2499,
  [SMALL_STATE(105)] = 2521,
  [SMALL_STATE(106)] = 2533,
  [SMALL_STATE(107)] = 2545,
  [SMALL_STATE(108)] = 2557,
  [SMALL_STATE(109)] = 2569,
  [SMALL_STATE(110)] = 2581,
  [SMALL_STATE(111)] = 2593,
  [SMALL_STATE(112)] = 2610,
  [SMALL_STATE(113)] = 2629,
  [SMALL_STATE(114)] = 2648,
  [SMALL_STATE(115)] = 2667,
  [SMALL_STATE(116)] = 2684,
  [SMALL_STATE(117)] = 2701,
  [SMALL_STATE(118)] = 2720,
  [SMALL_STATE(119)] = 2737,
  [SMALL_STATE(120)] = 2754,
  [SMALL_STATE(121)] = 2773,
  [SMALL_STATE(122)] = 2792,
  [SMALL_STATE(123)] = 2807,
  [SMALL_STATE(124)] = 2824,
  [SMALL_STATE(125)] = 2835,
  [SMALL_STATE(126)] = 2852,
  [SMALL_STATE(127)] = 2869,
  [SMALL_STATE(128)] = 2885,
  [SMALL_STATE(129)] = 2899,
  [SMALL_STATE(130)] = 2915,
  [SMALL_STATE(131)] = 2929,
  [SMALL_STATE(132)] = 2943,
  [SMALL_STATE(133)] = 2957,
  [SMALL_STATE(134)] = 2973,
  [SMALL_STATE(135)] = 2989,
  [SMALL_STATE(136)] = 3003,
  [SMALL_STATE(137)] = 3011,
  [SMALL_STATE(138)] = 3025,
  [SMALL_STATE(139)] = 3039,
  [SMALL_STATE(140)] = 3053,
  [SMALL_STATE(141)] = 3067,
  [SMALL_STATE(142)] = 3080,
  [SMALL_STATE(143)] = 3093,
  [SMALL_STATE(144)] = 3104,
  [SMALL_STATE(145)] = 3115,
  [SMALL_STATE(146)] = 3128,
  [SMALL_STATE(147)] = 3138,
  [SMALL_STATE(148)] = 3148,
  [SMALL_STATE(149)] = 3158,
  [SMALL_STATE(150)] = 3168,
  [SMALL_STATE(151)] = 3178,
  [SMALL_STATE(152)] = 3188,
  [SMALL_STATE(153)] = 3198,
  [SMALL_STATE(154)] = 3208,
  [SMALL_STATE(155)] = 3218,
  [SMALL_STATE(156)] = 3228,
  [SMALL_STATE(157)] = 3236,
  [SMALL_STATE(158)] = 3246,
  [SMALL_STATE(159)] = 3256,
  [SMALL_STATE(160)] = 3266,
  [SMALL_STATE(161)] = 3276,
  [SMALL_STATE(162)] = 3286,
  [SMALL_STATE(163)] = 3296,
  [SMALL_STATE(164)] = 3306,
  [SMALL_STATE(165)] = 3313,
  [SMALL_STATE(166)] = 3320,
  [SMALL_STATE(167)] = 3327,
  [SMALL_STATE(168)] = 3334,
  [SMALL_STATE(169)] = 3341,
  [SMALL_STATE(170)] = 3348,
  [SMALL_STATE(171)] = 3355,
  [SMALL_STATE(172)] = 3362,
  [SMALL_STATE(173)] = 3369,
  [SMALL_STATE(174)] = 3376,
  [SMALL_STATE(175)] = 3383,
  [SMALL_STATE(176)] = 3390,
  [SMALL_STATE(177)] = 3397,
  [SMALL_STATE(178)] = 3404,
  [SMALL_STATE(179)] = 3411,
  [SMALL_STATE(180)] = 3418,
  [SMALL_STATE(181)] = 3425,
  [SMALL_STATE(182)] = 3432,
  [SMALL_STATE(183)] = 3439,
  [SMALL_STATE(184)] = 3446,
  [SMALL_STATE(185)] = 3453,
  [SMALL_STATE(186)] = 3460,
  [SMALL_STATE(187)] = 3467,
  [SMALL_STATE(188)] = 3474,
  [SMALL_STATE(189)] = 3481,
  [SMALL_STATE(190)] = 3488,
  [SMALL_STATE(191)] = 3495,
  [SMALL_STATE(192)] = 3502,
  [SMALL_STATE(193)] = 3509,
  [SMALL_STATE(194)] = 3516,
  [SMALL_STATE(195)] = 3523,
  [SMALL_STATE(196)] = 3530,
  [SMALL_STATE(197)] = 3537,
  [SMALL_STATE(198)] = 3544,
  [SMALL_STATE(199)] = 3551,
  [SMALL_STATE(200)] = 3558,
  [SMALL_STATE(201)] = 3565,
  [SMALL_STATE(202)] = 3569,
  [SMALL_STATE(203)] = 3573,
  [SMALL_STATE(204)] = 3577,
  [SMALL_STATE(205)] = 3581,
  [SMALL_STATE(206)] = 3585,
  [SMALL_STATE(207)] = 3589,
  [SMALL_STATE(208)] = 3593,
  [SMALL_STATE(209)] = 3597,
  [SMALL_STATE(210)] = 3601,
  [SMALL_STATE(211)] = 3605,
  [SMALL_STATE(212)] = 3609,
  [SMALL_STATE(213)] = 3613,
  [SMALL_STATE(214)] = 3617,
  [SMALL_STATE(215)] = 3621,
  [SMALL_STATE(216)] = 3625,
  [SMALL_STATE(217)] = 3629,
  [SMALL_STATE(218)] = 3633,
  [SMALL_STATE(219)] = 3637,
  [SMALL_STATE(220)] = 3641,
  [SMALL_STATE(221)] = 3645,
  [SMALL_STATE(222)] = 3649,
  [SMALL_STATE(223)] = 3653,
  [SMALL_STATE(224)] = 3657,
  [SMALL_STATE(225)] = 3661,
  [SMALL_STATE(226)] = 3665,
  [SMALL_STATE(227)] = 3669,
  [SMALL_STATE(228)] = 3673,
  [SMALL_STATE(229)] = 3677,
  [SMALL_STATE(230)] = 3681,
  [SMALL_STATE(231)] = 3685,
  [SMALL_STATE(232)] = 3689,
  [SMALL_STATE(233)] = 3693,
  [SMALL_STATE(234)] = 3697,
  [SMALL_STATE(235)] = 3701,
  [SMALL_STATE(236)] = 3705,
  [SMALL_STATE(237)] = 3709,
  [SMALL_STATE(238)] = 3713,
  [SMALL_STATE(239)] = 3717,
  [SMALL_STATE(240)] = 3721,
  [SMALL_STATE(241)] = 3725,
  [SMALL_STATE(242)] = 3729,
  [SMALL_STATE(243)] = 3733,
  [SMALL_STATE(244)] = 3737,
  [SMALL_STATE(245)] = 3741,
  [SMALL_STATE(246)] = 3745,
  [SMALL_STATE(247)] = 3749,
  [SMALL_STATE(248)] = 3753,
  [SMALL_STATE(249)] = 3757,
  [SMALL_STATE(250)] = 3761,
  [SMALL_STATE(251)] = 3765,
  [SMALL_STATE(252)] = 3769,
  [SMALL_STATE(253)] = 3773,
  [SMALL_STATE(254)] = 3777,
  [SMALL_STATE(255)] = 3781,
  [SMALL_STATE(256)] = 3785,
  [SMALL_STATE(257)] = 3789,
  [SMALL_STATE(258)] = 3793,
  [SMALL_STATE(259)] = 3797,
  [SMALL_STATE(260)] = 3801,
  [SMALL_STATE(261)] = 3805,
  [SMALL_STATE(262)] = 3809,
  [SMALL_STATE(263)] = 3813,
  [SMALL_STATE(264)] = 3817,
  [SMALL_STATE(265)] = 3821,
  [SMALL_STATE(266)] = 3825,
  [SMALL_STATE(267)] = 3829,
  [SMALL_STATE(268)] = 3833,
  [SMALL_STATE(269)] = 3837,
  [SMALL_STATE(270)] = 3841,
  [SMALL_STATE(271)] = 3845,
  [SMALL_STATE(272)] = 3849,
  [SMALL_STATE(273)] = 3853,
  [SMALL_STATE(274)] = 3857,
  [SMALL_STATE(275)] = 3861,
  [SMALL_STATE(276)] = 3865,
  [SMALL_STATE(277)] = 3869,
  [SMALL_STATE(278)] = 3873,
  [SMALL_STATE(279)] = 3877,
  [SMALL_STATE(280)] = 3881,
  [SMALL_STATE(281)] = 3885,
  [SMALL_STATE(282)] = 3889,
  [SMALL_STATE(283)] = 3893,
  [SMALL_STATE(284)] = 3897,
  [SMALL_STATE(285)] = 3901,
  [SMALL_STATE(286)] = 3905,
  [SMALL_STATE(287)] = 3909,
  [SMALL_STATE(288)] = 3913,
  [SMALL_STATE(289)] = 3917,
  [SMALL_STATE(290)] = 3921,
  [SMALL_STATE(291)] = 3925,
  [SMALL_STATE(292)] = 3929,
  [SMALL_STATE(293)] = 3933,
  [SMALL_STATE(294)] = 3937,
  [SMALL_STATE(295)] = 3941,
  [SMALL_STATE(296)] = 3945,
  [SMALL_STATE(297)] = 3949,
  [SMALL_STATE(298)] = 3953,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1), SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_choices, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_choices, 1),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(147),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_item_with_namespace, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__blank_item_with_namespace, 2), SHIFT(147),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(30),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(94),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(170),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(12),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(83),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(292),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(132),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 2), SHIFT_REPEAT(233),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_path, 3),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_nbt_path, 3), SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat3, 1),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(233),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat1, 2), SHIFT_REPEAT(132),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 2), SHIFT_REPEAT(233),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat3, 1), SHIFT(132),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 2), SHIFT(99),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), REDUCE(aux_sym_nbt_path_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), REDUCE(aux_sym_nbt_path_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 1), SHIFT(105),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(157),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat2, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_command, 3), SHIFT(107),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(52),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 3), SHIFT(147),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_path, 2), SHIFT(147),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(147),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 5),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__command_choices, 1), SHIFT(30),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_nbt, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_nbt, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_state, 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_state, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tag, 1), SHIFT(76),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), REDUCE(sym_coordinate, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option_section, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_option_section, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_rotation, 3, .production_id = 3), SHIFT(145),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 7),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 7),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_command, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bad_command, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_command, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_execute_command, 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 18),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 18),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 8),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 8),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 17),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 17),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 16),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 16),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_execute, 15),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_execute, 15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_command, 2, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bad_command, 2, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 1, .production_id = 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(137),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(253),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 2), SHIFT_REPEAT(163),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2), SHIFT_REPEAT(6),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 2), SHIFT_REPEAT(181),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 2), SHIFT_REPEAT(171),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(104),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_score_repeat1, 7),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(17),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_option_section_repeat1, 4),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_object_repeat1, 7),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_value, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_value, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_item_state_repeat1, 6),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7, .production_id = 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_nbt_repeat1, 7),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_array_repeat1, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(130),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_option, 3), SHIFT(18),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_value, 1), REDUCE(sym_selector_number, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 8),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_state_repeat1, 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_key, 1),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_selector_nbt, 4), REDUCE(sym_selector_score, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 5),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(127),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_score_value, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_key, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_score_repeat1, 8),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8, .production_id = 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 8),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__command_choices, 1), SHIFT(134),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_command_repeat1, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_key, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_keyword, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [843] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
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
