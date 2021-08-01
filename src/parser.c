#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  sym_identifier = 3,
  aux_sym_number_token1 = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_TILDE = 7,
  anon_sym_ = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_BSLASH = 11,
  aux_sym_selector_token1 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_EQ = 16,
  sym_selector_key = 17,
  aux_sym_selector_number_token1 = 18,
  aux_sym_selector_number_token2 = 19,
  aux_sym_selector_number_token3 = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_COLON = 23,
  sym__namespace = 24,
  aux_sym_path_token1 = 25,
  aux_sym_path_token2 = 26,
  aux_sym_container_token1 = 27,
  anon_sym_LBRACK2 = 28,
  anon_sym_l = 29,
  anon_sym_s = 30,
  anon_sym_d = 31,
  anon_sym_f = 32,
  anon_sym_b = 33,
  sym_root = 34,
  sym_command = 35,
  sym_number = 36,
  sym_boolean = 37,
  sym_coordinate = 38,
  sym_rotation = 39,
  sym_location = 40,
  sym_string = 41,
  sym__escape_sequence = 42,
  sym_selector = 43,
  sym_selector_option = 44,
  sym_selector_value = 45,
  sym_selector_number = 46,
  sym_selector_object = 47,
  sym_item = 48,
  sym_path = 49,
  sym_container = 50,
  sym_nbt = 51,
  sym_nbt_object = 52,
  sym_nbt_array = 53,
  sym_nbt_object_key = 54,
  sym_nbt_object_value = 55,
  sym_nbt_number = 56,
  aux_sym_root_repeat1 = 57,
  aux_sym_command_repeat1 = 58,
  aux_sym_string_repeat1 = 59,
  aux_sym_selector_repeat1 = 60,
  aux_sym_selector_object_repeat1 = 61,
  aux_sym_path_repeat1 = 62,
  aux_sym_container_repeat1 = 63,
  aux_sym_nbt_object_repeat1 = 64,
  aux_sym_nbt_array_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TILDE] = "~",
  [anon_sym_] = " ",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_selector_token1] = "selector_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_selector_key] = "selector_key",
  [aux_sym_selector_number_token1] = "selector_number_token1",
  [aux_sym_selector_number_token2] = "selector_number_token2",
  [aux_sym_selector_number_token3] = "selector_number_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_container_token1] = "container_token1",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_l] = "l",
  [anon_sym_s] = "s",
  [anon_sym_d] = "d",
  [anon_sym_f] = "f",
  [anon_sym_b] = "b",
  [sym_root] = "root",
  [sym_command] = "command",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_coordinate] = "coordinate",
  [sym_rotation] = "rotation",
  [sym_location] = "location",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_selector] = "selector",
  [sym_selector_option] = "selector_option",
  [sym_selector_value] = "selector_value",
  [sym_selector_number] = "selector_number",
  [sym_selector_object] = "selector_object",
  [sym_item] = "item",
  [sym_path] = "path",
  [sym_container] = "container",
  [sym_nbt] = "nbt",
  [sym_nbt_object] = "nbt_object",
  [sym_nbt_array] = "nbt_array",
  [sym_nbt_object_key] = "nbt_object_key",
  [sym_nbt_object_value] = "nbt_object_value",
  [sym_nbt_number] = "nbt_number",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
  [aux_sym_selector_object_repeat1] = "selector_object_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_container_repeat1] = "container_repeat1",
  [aux_sym_nbt_object_repeat1] = "nbt_object_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_] = anon_sym_,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_selector_token1] = aux_sym_selector_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_selector_key] = sym_selector_key,
  [aux_sym_selector_number_token1] = aux_sym_selector_number_token1,
  [aux_sym_selector_number_token2] = aux_sym_selector_number_token2,
  [aux_sym_selector_number_token3] = aux_sym_selector_number_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [aux_sym_container_token1] = aux_sym_container_token1,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_b] = anon_sym_b,
  [sym_root] = sym_root,
  [sym_command] = sym_command,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_coordinate] = sym_coordinate,
  [sym_rotation] = sym_rotation,
  [sym_location] = sym_location,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_selector] = sym_selector,
  [sym_selector_option] = sym_selector_option,
  [sym_selector_value] = sym_selector_value,
  [sym_selector_number] = sym_selector_number,
  [sym_selector_object] = sym_selector_object,
  [sym_item] = sym_item,
  [sym_path] = sym_path,
  [sym_container] = sym_container,
  [sym_nbt] = sym_nbt,
  [sym_nbt_object] = sym_nbt_object,
  [sym_nbt_array] = sym_nbt_array,
  [sym_nbt_object_key] = sym_nbt_object_key,
  [sym_nbt_object_value] = sym_nbt_object_value,
  [sym_nbt_number] = sym_nbt_number,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_selector_repeat1] = aux_sym_selector_repeat1,
  [aux_sym_selector_object_repeat1] = aux_sym_selector_object_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_container_repeat1] = aux_sym_container_repeat1,
  [aux_sym_nbt_object_repeat1] = aux_sym_nbt_object_repeat1,
  [aux_sym_nbt_array_repeat1] = aux_sym_nbt_array_repeat1,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_] = {
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
  [aux_sym_selector_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_selector_key] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__namespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_container_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
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
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_option] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_value] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_number] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_object] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_container] = {
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
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_container_repeat1] = {
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
};

enum {
  field_command_name = 1,
  field_nbt_number_suffix = 2,
  field_x = 3,
  field_y = 4,
  field_z = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command_name] = "command_name",
  [field_nbt_number_suffix] = "nbt_number_suffix",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command_name, 0},
  [1] =
    {field_nbt_number_suffix, 1},
  [2] =
    {field_x, 0},
    {field_y, 2},
  [4] =
    {field_x, 0},
    {field_y, 2},
    {field_z, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_selector_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_selector_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_selector_number_token3);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_container_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_selector_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_selector_key] = ACTIONS(1),
    [aux_sym_selector_number_token1] = ACTIONS(1),
    [aux_sym_selector_number_token2] = ACTIONS(1),
    [aux_sym_selector_number_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_path_token2] = ACTIONS(1),
    [aux_sym_container_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(120),
    [sym_command] = STATE(83),
    [aux_sym_root_repeat1] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_selector_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym__namespace,
    ACTIONS(27), 1,
      aux_sym_path_token1,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    STATE(13), 1,
      sym_item,
    STATE(25), 1,
      sym_number,
    STATE(27), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [59] = 16,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_selector_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym__namespace,
    ACTIONS(27), 1,
      aux_sym_path_token1,
    ACTIONS(29), 1,
      anon_sym_LBRACK2,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(13), 1,
      sym_item,
    STATE(25), 1,
      sym_number,
    STATE(27), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(2), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [118] = 16,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      aux_sym_number_token1,
    ACTIONS(46), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      aux_sym_selector_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym__namespace,
    ACTIONS(61), 1,
      aux_sym_path_token1,
    ACTIONS(64), 1,
      anon_sym_LBRACK2,
    STATE(13), 1,
      sym_item,
    STATE(25), 1,
      sym_number,
    STATE(27), 1,
      sym_coordinate,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 9,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_container,
      sym_nbt,
      aux_sym_command_repeat1,
  [177] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_selector_number_token3,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK2,
    STATE(43), 1,
      sym_number,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(79), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(73), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [218] = 12,
    ACTIONS(81), 1,
      aux_sym_number_token1,
    ACTIONS(85), 1,
      sym_selector_key,
    ACTIONS(89), 1,
      aux_sym_selector_number_token3,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      sym__namespace,
    ACTIONS(95), 1,
      aux_sym_path_token1,
    STATE(86), 1,
      sym_item,
    STATE(111), 1,
      sym_number,
    STATE(112), 1,
      sym_selector_value,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      aux_sym_selector_number_token1,
      aux_sym_selector_number_token2,
    STATE(105), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [260] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [299] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [338] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [377] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [416] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [455] = 11,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LBRACK2,
    STATE(12), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [494] = 6,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      aux_sym_path_token2,
    ACTIONS(140), 1,
      aux_sym_container_token1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    STATE(19), 1,
      aux_sym_container_repeat1,
    ACTIONS(136), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [523] = 11,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK2,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(26), 1,
      sym_number,
    STATE(61), 1,
      sym_nbt_object_value,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(58), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [562] = 2,
    ACTIONS(146), 1,
      anon_sym_f,
    ACTIONS(144), 14,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [582] = 4,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      aux_sym_path_token2,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(150), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [605] = 9,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK2,
    ACTIONS(154), 1,
      aux_sym_number_token1,
    STATE(46), 1,
      sym_number,
    STATE(81), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(73), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [638] = 4,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(158), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [661] = 4,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(165), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [684] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 13,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      aux_sym_path_token2,
      aux_sym_container_token1,
      anon_sym_LBRACK2,
  [703] = 4,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      aux_sym_path_token2,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(175), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [726] = 3,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [746] = 2,
    ACTIONS(188), 1,
      anon_sym_,
    ACTIONS(186), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [764] = 2,
    ACTIONS(144), 1,
      anon_sym_,
    ACTIONS(146), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [782] = 2,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(190), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [800] = 3,
    ACTIONS(198), 1,
      anon_sym_f,
    ACTIONS(196), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(194), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [820] = 2,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(136), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [838] = 2,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(190), 12,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [856] = 2,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [873] = 2,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(190), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [890] = 2,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [907] = 2,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [924] = 2,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [941] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [958] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [975] = 2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [992] = 2,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1009] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1026] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1043] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1060] = 2,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 11,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [1077] = 2,
    ACTIONS(144), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(146), 6,
      sym_selector_key,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1093] = 3,
    ACTIONS(248), 1,
      sym_selector_key,
    ACTIONS(246), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(250), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1111] = 2,
    ACTIONS(144), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(146), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1126] = 1,
    ACTIONS(210), 10,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1139] = 2,
    ACTIONS(194), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(250), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1154] = 1,
    ACTIONS(230), 10,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1167] = 8,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 1,
      sym_selector_key,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_selector_object_repeat1,
    STATE(114), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1193] = 8,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(261), 1,
      aux_sym_number_token1,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      sym_selector_key,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(114), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1219] = 8,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 1,
      sym_selector_key,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_selector_object_repeat1,
    STATE(114), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1245] = 1,
    ACTIONS(202), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1256] = 1,
    ACTIONS(222), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1267] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1290] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1313] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1336] = 7,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(283), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1359] = 1,
    ACTIONS(291), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1370] = 1,
    ACTIONS(293), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1381] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1404] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1427] = 2,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(299), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1440] = 1,
    ACTIONS(206), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1451] = 1,
    ACTIONS(234), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1462] = 7,
    ACTIONS(97), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_nbt_object_repeat1,
    STATE(123), 1,
      sym_nbt_object_key,
    STATE(116), 2,
      sym_number,
      sym_string,
  [1485] = 1,
    ACTIONS(218), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1496] = 1,
    ACTIONS(214), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1507] = 1,
    ACTIONS(126), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1517] = 2,
    ACTIONS(220), 1,
      sym_selector_key,
    ACTIONS(218), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1528] = 2,
    ACTIONS(236), 1,
      sym_selector_key,
    ACTIONS(234), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1539] = 2,
    ACTIONS(248), 1,
      sym_selector_key,
    ACTIONS(246), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1550] = 2,
    ACTIONS(212), 1,
      sym_selector_key,
    ACTIONS(210), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1561] = 2,
    ACTIONS(305), 1,
      sym_selector_key,
    ACTIONS(291), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1572] = 2,
    ACTIONS(307), 1,
      sym_selector_key,
    ACTIONS(293), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1583] = 2,
    ACTIONS(208), 1,
      sym_selector_key,
    ACTIONS(206), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1594] = 2,
    ACTIONS(224), 1,
      sym_selector_key,
    ACTIONS(222), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1605] = 2,
    ACTIONS(232), 1,
      sym_selector_key,
    ACTIONS(230), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1616] = 2,
    ACTIONS(204), 1,
      sym_selector_key,
    ACTIONS(202), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1627] = 2,
    ACTIONS(216), 1,
      sym_selector_key,
    ACTIONS(214), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1638] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      sym_selector_key,
    ACTIONS(309), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1651] = 3,
    ACTIONS(315), 1,
      aux_sym_path_token2,
    STATE(90), 1,
      aux_sym_path_repeat1,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1663] = 2,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(317), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1673] = 4,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    STATE(93), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1687] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      sym_comment,
    STATE(87), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1701] = 2,
    ACTIONS(333), 1,
      sym_selector_key,
    ACTIONS(331), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1711] = 4,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1725] = 3,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1737] = 4,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(87), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1751] = 4,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym_string_token1,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1765] = 4,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_string_token1,
    STATE(85), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1779] = 3,
    ACTIONS(363), 1,
      aux_sym_path_token2,
    STATE(90), 1,
      aux_sym_path_repeat1,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1791] = 4,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      aux_sym_string_token1,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1805] = 4,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1819] = 4,
    ACTIONS(325), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1833] = 4,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    ACTIONS(376), 1,
      sym_selector_key,
    STATE(99), 1,
      aux_sym_selector_repeat1,
    STATE(107), 1,
      sym_selector_option,
  [1846] = 4,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    ACTIONS(380), 1,
      sym_selector_key,
    STATE(95), 1,
      aux_sym_selector_repeat1,
    STATE(107), 1,
      sym_selector_option,
  [1859] = 4,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    STATE(30), 1,
      sym_number,
    STATE(37), 1,
      sym_coordinate,
  [1872] = 1,
    ACTIONS(387), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1879] = 1,
    ACTIONS(169), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      aux_sym_path_token2,
  [1886] = 4,
    ACTIONS(376), 1,
      sym_selector_key,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_selector_repeat1,
    STATE(107), 1,
      sym_selector_option,
  [1899] = 4,
    ACTIONS(391), 1,
      aux_sym_number_token1,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    STATE(23), 1,
      sym_coordinate,
    STATE(28), 1,
      sym_number,
  [1912] = 4,
    ACTIONS(395), 1,
      aux_sym_path_token2,
    ACTIONS(397), 1,
      aux_sym_container_token1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    STATE(19), 1,
      aux_sym_container_repeat1,
  [1925] = 1,
    ACTIONS(399), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1931] = 1,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1937] = 1,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1943] = 1,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1949] = 1,
    ACTIONS(403), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1955] = 2,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1963] = 1,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1969] = 1,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1975] = 1,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1981] = 1,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1987] = 1,
    ACTIONS(411), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1993] = 1,
    ACTIONS(413), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1999] = 1,
    ACTIONS(415), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2004] = 1,
    ACTIONS(378), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [2009] = 1,
    ACTIONS(417), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2014] = 2,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    STATE(80), 1,
      aux_sym_path_repeat1,
  [2021] = 1,
    ACTIONS(419), 1,
      sym_selector_key,
  [2025] = 1,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
  [2029] = 1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [2033] = 1,
    ACTIONS(425), 1,
      anon_sym_EQ,
  [2037] = 1,
    ACTIONS(427), 1,
      sym_selector_key,
  [2041] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 299,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 455,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 582,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 638,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 684,
  [SMALL_STATE(21)] = 703,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 746,
  [SMALL_STATE(24)] = 764,
  [SMALL_STATE(25)] = 782,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 820,
  [SMALL_STATE(28)] = 838,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 890,
  [SMALL_STATE(32)] = 907,
  [SMALL_STATE(33)] = 924,
  [SMALL_STATE(34)] = 941,
  [SMALL_STATE(35)] = 958,
  [SMALL_STATE(36)] = 975,
  [SMALL_STATE(37)] = 992,
  [SMALL_STATE(38)] = 1009,
  [SMALL_STATE(39)] = 1026,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1060,
  [SMALL_STATE(42)] = 1077,
  [SMALL_STATE(43)] = 1093,
  [SMALL_STATE(44)] = 1111,
  [SMALL_STATE(45)] = 1126,
  [SMALL_STATE(46)] = 1139,
  [SMALL_STATE(47)] = 1154,
  [SMALL_STATE(48)] = 1167,
  [SMALL_STATE(49)] = 1193,
  [SMALL_STATE(50)] = 1219,
  [SMALL_STATE(51)] = 1245,
  [SMALL_STATE(52)] = 1256,
  [SMALL_STATE(53)] = 1267,
  [SMALL_STATE(54)] = 1290,
  [SMALL_STATE(55)] = 1313,
  [SMALL_STATE(56)] = 1336,
  [SMALL_STATE(57)] = 1359,
  [SMALL_STATE(58)] = 1370,
  [SMALL_STATE(59)] = 1381,
  [SMALL_STATE(60)] = 1404,
  [SMALL_STATE(61)] = 1427,
  [SMALL_STATE(62)] = 1440,
  [SMALL_STATE(63)] = 1451,
  [SMALL_STATE(64)] = 1462,
  [SMALL_STATE(65)] = 1485,
  [SMALL_STATE(66)] = 1496,
  [SMALL_STATE(67)] = 1507,
  [SMALL_STATE(68)] = 1517,
  [SMALL_STATE(69)] = 1528,
  [SMALL_STATE(70)] = 1539,
  [SMALL_STATE(71)] = 1550,
  [SMALL_STATE(72)] = 1561,
  [SMALL_STATE(73)] = 1572,
  [SMALL_STATE(74)] = 1583,
  [SMALL_STATE(75)] = 1594,
  [SMALL_STATE(76)] = 1605,
  [SMALL_STATE(77)] = 1616,
  [SMALL_STATE(78)] = 1627,
  [SMALL_STATE(79)] = 1638,
  [SMALL_STATE(80)] = 1651,
  [SMALL_STATE(81)] = 1663,
  [SMALL_STATE(82)] = 1673,
  [SMALL_STATE(83)] = 1687,
  [SMALL_STATE(84)] = 1701,
  [SMALL_STATE(85)] = 1711,
  [SMALL_STATE(86)] = 1725,
  [SMALL_STATE(87)] = 1737,
  [SMALL_STATE(88)] = 1751,
  [SMALL_STATE(89)] = 1765,
  [SMALL_STATE(90)] = 1779,
  [SMALL_STATE(91)] = 1791,
  [SMALL_STATE(92)] = 1805,
  [SMALL_STATE(93)] = 1819,
  [SMALL_STATE(94)] = 1833,
  [SMALL_STATE(95)] = 1846,
  [SMALL_STATE(96)] = 1859,
  [SMALL_STATE(97)] = 1872,
  [SMALL_STATE(98)] = 1879,
  [SMALL_STATE(99)] = 1886,
  [SMALL_STATE(100)] = 1899,
  [SMALL_STATE(101)] = 1912,
  [SMALL_STATE(102)] = 1925,
  [SMALL_STATE(103)] = 1931,
  [SMALL_STATE(104)] = 1937,
  [SMALL_STATE(105)] = 1943,
  [SMALL_STATE(106)] = 1949,
  [SMALL_STATE(107)] = 1955,
  [SMALL_STATE(108)] = 1963,
  [SMALL_STATE(109)] = 1969,
  [SMALL_STATE(110)] = 1975,
  [SMALL_STATE(111)] = 1981,
  [SMALL_STATE(112)] = 1987,
  [SMALL_STATE(113)] = 1993,
  [SMALL_STATE(114)] = 1999,
  [SMALL_STATE(115)] = 2004,
  [SMALL_STATE(116)] = 2009,
  [SMALL_STATE(117)] = 2014,
  [SMALL_STATE(118)] = 2021,
  [SMALL_STATE(119)] = 2025,
  [SMALL_STATE(120)] = 2029,
  [SMALL_STATE(121)] = 2033,
  [SMALL_STATE(122)] = 2037,
  [SMALL_STATE(123)] = 2041,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(91),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(15),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(63),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(82),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(116),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(15),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(82),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(114),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(116),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(15),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(82),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(87),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(88),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(90),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(121),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mcfunction(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
