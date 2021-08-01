#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_DOT_DOT = 18,
  anon_sym_LBRACE = 19,
  anon_sym_COLON = 20,
  anon_sym_RBRACE = 21,
  sym__namespace = 22,
  aux_sym_path_token1 = 23,
  aux_sym_path_token2 = 24,
  aux_sym_container_token1 = 25,
  anon_sym_LBRACK2 = 26,
  anon_sym_l = 27,
  anon_sym_s = 28,
  anon_sym_d = 29,
  anon_sym_f = 30,
  anon_sym_b = 31,
  sym_root = 32,
  sym_command = 33,
  sym_number = 34,
  sym_boolean = 35,
  sym_coordinate = 36,
  sym_rotation = 37,
  sym_location = 38,
  sym_string = 39,
  sym__escape_sequence = 40,
  sym_selector = 41,
  sym_selector_option = 42,
  sym_selector_value = 43,
  sym_selector_number = 44,
  sym_selector_object = 45,
  sym_item = 46,
  sym_path = 47,
  sym_container = 48,
  sym_nbt = 49,
  sym_nbt_object = 50,
  sym_nbt_array = 51,
  sym_nbt_object_key = 52,
  sym_nbt_object_value = 53,
  sym_nbt_number = 54,
  aux_sym_root_repeat1 = 55,
  aux_sym_command_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_selector_repeat1 = 58,
  aux_sym_selector_object_repeat1 = 59,
  aux_sym_path_repeat1 = 60,
  aux_sym_container_repeat1 = 61,
  aux_sym_nbt_object_repeat1 = 62,
  aux_sym_nbt_array_repeat1 = 63,
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
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_DOT_DOT] = {
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
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_selector_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_container_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_root] = STATE(126),
    [sym_command] = STATE(85),
    [aux_sym_root_repeat1] = STATE(85),
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
    STATE(6), 1,
      sym_item,
    STATE(23), 1,
      sym_coordinate,
    STATE(24), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
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
    STATE(6), 1,
      sym_item,
    STATE(23), 1,
      sym_coordinate,
    STATE(24), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
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
    STATE(6), 1,
      sym_item,
    STATE(23), 1,
      sym_coordinate,
    STATE(24), 1,
      sym_number,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
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
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_LBRACK2,
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(70), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [216] = 6,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      aux_sym_path_token2,
    ACTIONS(90), 1,
      aux_sym_container_token1,
    STATE(20), 1,
      aux_sym_container_repeat1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(86), 11,
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
  [245] = 10,
    ACTIONS(92), 1,
      aux_sym_number_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_DOT_DOT,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK2,
    STATE(31), 1,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(82), 2,
      sym_selector_number,
      sym_nbt_object_value,
    STATE(75), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [282] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [321] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [360] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [399] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [438] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [477] = 11,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK2,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_nbt_array_repeat1,
    STATE(27), 1,
      sym_number,
    STATE(63), 1,
      sym_nbt_object_value,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(61), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [516] = 2,
    ACTIONS(128), 1,
      anon_sym_f,
    ACTIONS(126), 14,
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
  [536] = 11,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    ACTIONS(134), 1,
      sym_selector_key,
    ACTIONS(136), 1,
      anon_sym_DOT_DOT,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym__namespace,
    ACTIONS(142), 1,
      aux_sym_path_token1,
    STATE(93), 1,
      sym_item,
    STATE(107), 1,
      sym_number,
    STATE(114), 1,
      sym_selector_value,
    ACTIONS(132), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 4,
      sym_boolean,
      sym_selector_number,
      sym_selector_object,
      sym_path,
  [574] = 2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 13,
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
  [593] = 4,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      aux_sym_path_token2,
    STATE(17), 1,
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
  [616] = 4,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(157), 11,
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
  [639] = 9,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK2,
    ACTIONS(162), 1,
      aux_sym_number_token1,
    STATE(45), 1,
      sym_number,
    STATE(91), 1,
      sym_nbt_object_value,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(75), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [672] = 4,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      aux_sym_container_token1,
    STATE(18), 1,
      aux_sym_container_repeat1,
    ACTIONS(166), 11,
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
  [695] = 4,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      aux_sym_path_token2,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(172), 11,
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
  [718] = 2,
    ACTIONS(178), 1,
      anon_sym_,
    ACTIONS(176), 12,
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
  [736] = 2,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(86), 12,
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
  [754] = 2,
    ACTIONS(184), 1,
      anon_sym_,
    ACTIONS(182), 12,
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
  [772] = 2,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(128), 12,
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
  [790] = 3,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 11,
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
  [810] = 3,
    ACTIONS(196), 1,
      anon_sym_f,
    ACTIONS(194), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(192), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [830] = 2,
    ACTIONS(184), 1,
      anon_sym_,
    ACTIONS(182), 12,
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
  [848] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 11,
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
  [865] = 2,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 11,
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
  [882] = 4,
    ACTIONS(204), 1,
      sym_selector_key,
    ACTIONS(206), 1,
      anon_sym_DOT_DOT,
    ACTIONS(202), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(208), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [903] = 2,
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
  [920] = 2,
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
  [937] = 2,
    ACTIONS(126), 6,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
    ACTIONS(128), 6,
      sym_selector_key,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [954] = 2,
    ACTIONS(184), 1,
      anon_sym_LF,
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
  [971] = 2,
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
  [988] = 2,
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
  [1005] = 2,
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
  [1022] = 2,
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
  [1039] = 2,
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
  [1056] = 2,
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
  [1073] = 2,
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
  [1090] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 11,
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
  [1107] = 1,
    ACTIONS(238), 10,
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
  [1120] = 2,
    ACTIONS(192), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(208), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1135] = 2,
    ACTIONS(126), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(128), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1150] = 1,
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
  [1163] = 8,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(253), 1,
      aux_sym_number_token1,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      sym_selector_key,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_selector_object_repeat1,
    STATE(124), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1189] = 8,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      sym_selector_key,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_selector_object_repeat1,
    STATE(124), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1215] = 8,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      sym_selector_key,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_selector_object_repeat1,
    STATE(124), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1241] = 1,
    ACTIONS(218), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1252] = 1,
    ACTIONS(198), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1263] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1286] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1309] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1332] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1355] = 7,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(283), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1378] = 1,
    ACTIONS(291), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1389] = 1,
    ACTIONS(222), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1400] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1423] = 1,
    ACTIONS(295), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1434] = 1,
    ACTIONS(214), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1445] = 2,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(297), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1458] = 1,
    ACTIONS(234), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1469] = 7,
    ACTIONS(104), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_nbt_object_repeat1,
    STATE(128), 1,
      sym_nbt_object_key,
    STATE(120), 2,
      sym_number,
      sym_string,
  [1492] = 1,
    ACTIONS(210), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1503] = 1,
    ACTIONS(76), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1513] = 4,
    ACTIONS(305), 1,
      aux_sym_number_token1,
    ACTIONS(307), 1,
      sym_selector_key,
    STATE(71), 1,
      sym_number,
    ACTIONS(303), 4,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1529] = 2,
    ACTIONS(224), 1,
      sym_selector_key,
    ACTIONS(222), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1540] = 2,
    ACTIONS(236), 1,
      sym_selector_key,
    ACTIONS(234), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1551] = 2,
    ACTIONS(311), 1,
      sym_selector_key,
    ACTIONS(309), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1562] = 2,
    ACTIONS(307), 1,
      sym_selector_key,
    ACTIONS(303), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1573] = 2,
    ACTIONS(128), 1,
      sym_selector_key,
    ACTIONS(126), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1584] = 2,
    ACTIONS(313), 1,
      sym_selector_key,
    ACTIONS(291), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1595] = 2,
    ACTIONS(315), 1,
      sym_selector_key,
    ACTIONS(295), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1606] = 2,
    ACTIONS(232), 1,
      sym_selector_key,
    ACTIONS(230), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1617] = 2,
    ACTIONS(216), 1,
      sym_selector_key,
    ACTIONS(214), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1628] = 2,
    ACTIONS(212), 1,
      sym_selector_key,
    ACTIONS(210), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1639] = 2,
    ACTIONS(240), 1,
      sym_selector_key,
    ACTIONS(238), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1650] = 2,
    ACTIONS(220), 1,
      sym_selector_key,
    ACTIONS(218), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1661] = 2,
    ACTIONS(200), 1,
      sym_selector_key,
    ACTIONS(198), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1672] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      sym_selector_key,
    ACTIONS(317), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1685] = 3,
    ACTIONS(323), 1,
      aux_sym_path_token2,
    STATE(97), 1,
      aux_sym_path_repeat1,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1697] = 4,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_string_token1,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    STATE(90), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1711] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_comment,
    STATE(96), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1725] = 4,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1739] = 2,
    ACTIONS(341), 1,
      sym_selector_key,
    ACTIONS(339), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1749] = 4,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_string_token1,
    STATE(86), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1763] = 4,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_string_token1,
    STATE(95), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1777] = 4,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1791] = 2,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(353), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1801] = 4,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_string_token1,
    ACTIONS(362), 1,
      anon_sym_BSLASH,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1815] = 3,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(365), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1827] = 4,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    ACTIONS(307), 1,
      sym_selector_key,
    STATE(112), 1,
      sym_number,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1841] = 4,
    ACTIONS(329), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1855] = 4,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(96), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1869] = 3,
    ACTIONS(379), 1,
      aux_sym_path_token2,
    STATE(97), 1,
      aux_sym_path_repeat1,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1881] = 4,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      sym_selector_key,
    STATE(101), 1,
      aux_sym_selector_repeat1,
    STATE(116), 1,
      sym_selector_option,
  [1894] = 4,
    ACTIONS(386), 1,
      aux_sym_number_token1,
    ACTIONS(388), 1,
      anon_sym_TILDE,
    STATE(35), 1,
      sym_number,
    STATE(38), 1,
      sym_coordinate,
  [1907] = 1,
    ACTIONS(144), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      aux_sym_path_token2,
  [1914] = 4,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    ACTIONS(392), 1,
      sym_selector_key,
    STATE(101), 1,
      aux_sym_selector_repeat1,
    STATE(116), 1,
      sym_selector_option,
  [1927] = 4,
    ACTIONS(395), 1,
      aux_sym_number_token1,
    ACTIONS(397), 1,
      anon_sym_TILDE,
    STATE(22), 1,
      sym_coordinate,
    STATE(28), 1,
      sym_number,
  [1940] = 4,
    ACTIONS(384), 1,
      sym_selector_key,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_selector_repeat1,
    STATE(116), 1,
      sym_selector_option,
  [1953] = 1,
    ACTIONS(401), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1960] = 1,
    ACTIONS(126), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
      anon_sym_DOT_DOT,
  [1967] = 4,
    ACTIONS(403), 1,
      aux_sym_path_token2,
    ACTIONS(405), 1,
      aux_sym_container_token1,
    STATE(20), 1,
      aux_sym_container_repeat1,
    STATE(21), 1,
      aux_sym_path_repeat1,
  [1980] = 2,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [1989] = 1,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1995] = 1,
    ACTIONS(411), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [2001] = 1,
    ACTIONS(365), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2007] = 1,
    ACTIONS(413), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2013] = 1,
    ACTIONS(309), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2019] = 1,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2025] = 1,
    ACTIONS(415), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2031] = 1,
    ACTIONS(417), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2037] = 2,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [2045] = 1,
    ACTIONS(423), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [2051] = 1,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_selector_key,
  [2057] = 1,
    ACTIONS(390), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [2062] = 1,
    ACTIONS(425), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2067] = 2,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    STATE(118), 1,
      sym_number,
  [2074] = 2,
    ACTIONS(305), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
  [2081] = 2,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    STATE(83), 1,
      aux_sym_path_repeat1,
  [2088] = 1,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2093] = 1,
    ACTIONS(429), 1,
      sym_selector_key,
  [2097] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [2101] = 1,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
  [2105] = 1,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [2109] = 1,
    ACTIONS(437), 1,
      sym_selector_key,
  [2113] = 1,
    ACTIONS(439), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 321,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 616,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 718,
  [SMALL_STATE(23)] = 736,
  [SMALL_STATE(24)] = 754,
  [SMALL_STATE(25)] = 772,
  [SMALL_STATE(26)] = 790,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 848,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 882,
  [SMALL_STATE(32)] = 903,
  [SMALL_STATE(33)] = 920,
  [SMALL_STATE(34)] = 937,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 971,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1005,
  [SMALL_STATE(39)] = 1022,
  [SMALL_STATE(40)] = 1039,
  [SMALL_STATE(41)] = 1056,
  [SMALL_STATE(42)] = 1073,
  [SMALL_STATE(43)] = 1090,
  [SMALL_STATE(44)] = 1107,
  [SMALL_STATE(45)] = 1120,
  [SMALL_STATE(46)] = 1135,
  [SMALL_STATE(47)] = 1150,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1189,
  [SMALL_STATE(50)] = 1215,
  [SMALL_STATE(51)] = 1241,
  [SMALL_STATE(52)] = 1252,
  [SMALL_STATE(53)] = 1263,
  [SMALL_STATE(54)] = 1286,
  [SMALL_STATE(55)] = 1309,
  [SMALL_STATE(56)] = 1332,
  [SMALL_STATE(57)] = 1355,
  [SMALL_STATE(58)] = 1378,
  [SMALL_STATE(59)] = 1389,
  [SMALL_STATE(60)] = 1400,
  [SMALL_STATE(61)] = 1423,
  [SMALL_STATE(62)] = 1434,
  [SMALL_STATE(63)] = 1445,
  [SMALL_STATE(64)] = 1458,
  [SMALL_STATE(65)] = 1469,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1503,
  [SMALL_STATE(68)] = 1513,
  [SMALL_STATE(69)] = 1529,
  [SMALL_STATE(70)] = 1540,
  [SMALL_STATE(71)] = 1551,
  [SMALL_STATE(72)] = 1562,
  [SMALL_STATE(73)] = 1573,
  [SMALL_STATE(74)] = 1584,
  [SMALL_STATE(75)] = 1595,
  [SMALL_STATE(76)] = 1606,
  [SMALL_STATE(77)] = 1617,
  [SMALL_STATE(78)] = 1628,
  [SMALL_STATE(79)] = 1639,
  [SMALL_STATE(80)] = 1650,
  [SMALL_STATE(81)] = 1661,
  [SMALL_STATE(82)] = 1672,
  [SMALL_STATE(83)] = 1685,
  [SMALL_STATE(84)] = 1697,
  [SMALL_STATE(85)] = 1711,
  [SMALL_STATE(86)] = 1725,
  [SMALL_STATE(87)] = 1739,
  [SMALL_STATE(88)] = 1749,
  [SMALL_STATE(89)] = 1763,
  [SMALL_STATE(90)] = 1777,
  [SMALL_STATE(91)] = 1791,
  [SMALL_STATE(92)] = 1801,
  [SMALL_STATE(93)] = 1815,
  [SMALL_STATE(94)] = 1827,
  [SMALL_STATE(95)] = 1841,
  [SMALL_STATE(96)] = 1855,
  [SMALL_STATE(97)] = 1869,
  [SMALL_STATE(98)] = 1881,
  [SMALL_STATE(99)] = 1894,
  [SMALL_STATE(100)] = 1907,
  [SMALL_STATE(101)] = 1914,
  [SMALL_STATE(102)] = 1927,
  [SMALL_STATE(103)] = 1940,
  [SMALL_STATE(104)] = 1953,
  [SMALL_STATE(105)] = 1960,
  [SMALL_STATE(106)] = 1967,
  [SMALL_STATE(107)] = 1980,
  [SMALL_STATE(108)] = 1989,
  [SMALL_STATE(109)] = 1995,
  [SMALL_STATE(110)] = 2001,
  [SMALL_STATE(111)] = 2007,
  [SMALL_STATE(112)] = 2013,
  [SMALL_STATE(113)] = 2019,
  [SMALL_STATE(114)] = 2025,
  [SMALL_STATE(115)] = 2031,
  [SMALL_STATE(116)] = 2037,
  [SMALL_STATE(117)] = 2045,
  [SMALL_STATE(118)] = 2051,
  [SMALL_STATE(119)] = 2057,
  [SMALL_STATE(120)] = 2062,
  [SMALL_STATE(121)] = 2067,
  [SMALL_STATE(122)] = 2074,
  [SMALL_STATE(123)] = 2081,
  [SMALL_STATE(124)] = 2088,
  [SMALL_STATE(125)] = 2093,
  [SMALL_STATE(126)] = 2097,
  [SMALL_STATE(127)] = 2101,
  [SMALL_STATE(128)] = 2105,
  [SMALL_STATE(129)] = 2109,
  [SMALL_STATE(130)] = 2113,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(56),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(129),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(106),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(64),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(84),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(60),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_container_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_repeat1, 2), SHIFT_REPEAT(18),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(120),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(14),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(84),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 2), SHIFT_REPEAT(124),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(120),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(14),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2), SHIFT_REPEAT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_number, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_number, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object_value, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_object_repeat1, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(92),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(127),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(96),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(3),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(130),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_object_repeat1, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_option, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
