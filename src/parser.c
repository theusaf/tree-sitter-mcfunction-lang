#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_RBRACK = 14,
  anon_sym_EQ = 15,
  anon_sym_COMMA = 16,
  sym_selector_key = 17,
  anon_sym_DOT_DOT = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym__namespace = 22,
  aux_sym_path_token1 = 23,
  anon_sym_SLASH = 24,
  anon_sym_LBRACK2 = 25,
  anon_sym_l = 26,
  anon_sym_s = 27,
  anon_sym_d = 28,
  anon_sym_f = 29,
  anon_sym_b = 30,
  sym_root = 31,
  sym_command = 32,
  sym_number = 33,
  sym_boolean = 34,
  sym_coordinate = 35,
  sym_rotation = 36,
  sym_location = 37,
  sym_string = 38,
  sym__escape_sequence = 39,
  sym_selector = 40,
  sym_selector_options = 41,
  sym_selector_value = 42,
  sym__selector_number = 43,
  sym_selector_object = 44,
  sym_selector_nbt = 45,
  sym_selector_scores = 46,
  sym_item = 47,
  sym_path = 48,
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
  aux_sym_selector_options_repeat1 = 59,
  aux_sym_selector_nbt_repeat1 = 60,
  aux_sym_selector_scores_repeat1 = 61,
  aux_sym_path_repeat1 = 62,
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
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [sym_selector_key] = "selector_key",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__namespace] = "_namespace",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
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
  [sym_selector_options] = "selector_options",
  [sym_selector_value] = "selector_value",
  [sym__selector_number] = "_selector_number",
  [sym_selector_object] = "selector_object",
  [sym_selector_nbt] = "selector_nbt",
  [sym_selector_scores] = "selector_scores",
  [sym_item] = "item",
  [sym_path] = "path",
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
  [aux_sym_selector_options_repeat1] = "selector_options_repeat1",
  [aux_sym_selector_nbt_repeat1] = "selector_nbt_repeat1",
  [aux_sym_selector_scores_repeat1] = "selector_scores_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_selector_key] = sym_selector_key,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__namespace] = sym__namespace,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_selector_options] = sym_selector_options,
  [sym_selector_value] = sym_selector_value,
  [sym__selector_number] = sym__selector_number,
  [sym_selector_object] = sym_selector_object,
  [sym_selector_nbt] = sym_selector_nbt,
  [sym_selector_scores] = sym_selector_scores,
  [sym_item] = sym_item,
  [sym_path] = sym_path,
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
  [aux_sym_selector_options_repeat1] = aux_sym_selector_options_repeat1,
  [aux_sym_selector_nbt_repeat1] = aux_sym_selector_nbt_repeat1,
  [aux_sym_selector_scores_repeat1] = aux_sym_selector_scores_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
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
  [sym_selector_options] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_value] = {
    .visible = true,
    .named = true,
  },
  [sym__selector_number] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_object] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_nbt] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_scores] = {
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
  [aux_sym_selector_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_nbt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_scores_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
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
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(58);
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
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_selector_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_selector_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__namespace);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
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
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(119),
    [sym_command] = STATE(69),
    [aux_sym_root_repeat1] = STATE(69),
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
    STATE(16), 1,
      sym_item,
    STATE(19), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(4), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [58] = 16,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(36), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      aux_sym_selector_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym__namespace,
    ACTIONS(57), 1,
      aux_sym_path_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK2,
    STATE(16), 1,
      sym_item,
    STATE(19), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [116] = 16,
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
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(16), 1,
      sym_item,
    STATE(19), 1,
      sym_number,
    STATE(116), 1,
      sym_coordinate,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(3), 8,
      sym_boolean,
      sym_rotation,
      sym_location,
      sym_string,
      sym_selector,
      sym_path,
      sym_nbt,
      aux_sym_command_repeat1,
  [174] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    STATE(10), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [213] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [252] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [291] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [330] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [369] = 11,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACK2,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [408] = 11,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_LBRACK2,
    STATE(11), 1,
      aux_sym_nbt_array_repeat1,
    STATE(21), 1,
      sym_number,
    STATE(47), 1,
      sym_nbt_object_value,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(46), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [447] = 11,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(110), 1,
      sym_selector_key,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym__namespace,
    ACTIONS(118), 1,
      aux_sym_path_token1,
    STATE(67), 1,
      sym_item,
    STATE(96), 1,
      sym_number,
    STATE(97), 1,
      sym_selector_value,
    ACTIONS(108), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(104), 4,
      sym_boolean,
      sym__selector_number,
      sym_selector_object,
      sym_path,
  [485] = 2,
    ACTIONS(122), 1,
      anon_sym_f,
    ACTIONS(120), 14,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
  [505] = 4,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(126), 11,
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
  [528] = 4,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(132), 11,
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
  [551] = 4,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(139), 11,
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
  [574] = 9,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      sym_number,
    STATE(72), 1,
      sym_nbt_object_value,
    ACTIONS(145), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_nbt_object,
      sym_nbt_array,
    STATE(71), 4,
      sym_boolean,
      sym_string,
      sym_nbt,
      sym_nbt_number,
  [607] = 2,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(153), 12,
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
  [625] = 2,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(139), 12,
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
  [643] = 3,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 11,
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
  [663] = 3,
    ACTIONS(169), 1,
      anon_sym_f,
    ACTIONS(167), 4,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
    ACTIONS(165), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [683] = 2,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 12,
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
      anon_sym_SLASH,
      anon_sym_LBRACK2,
  [701] = 1,
    ACTIONS(157), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [717] = 1,
    ACTIONS(122), 13,
      anon_sym_LF,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_DQUOTE,
      aux_sym_selector_token1,
      anon_sym_LBRACE,
      sym__namespace,
      aux_sym_path_token1,
      anon_sym_LBRACK2,
  [733] = 2,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 11,
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
  [750] = 2,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 11,
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
  [767] = 2,
    ACTIONS(183), 1,
      anon_sym_LF,
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
  [784] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 11,
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
  [801] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 11,
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
  [818] = 2,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(195), 11,
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
  [835] = 2,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(199), 11,
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
  [852] = 2,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 11,
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
  [869] = 2,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 11,
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
  [886] = 2,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 11,
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
  [903] = 2,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(215), 11,
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
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 11,
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
  [937] = 10,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(219), 1,
      sym_selector_key,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(98), 1,
      aux_sym_selector_scores_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(115), 2,
      sym_selector_nbt,
      sym_selector_scores,
    STATE(124), 2,
      sym_number,
      sym_string,
  [970] = 2,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 11,
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
  [987] = 2,
    ACTIONS(120), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(122), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1002] = 2,
    ACTIONS(165), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(227), 5,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_f,
      anon_sym_b,
  [1017] = 1,
    ACTIONS(201), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1029] = 1,
    ACTIONS(175), 9,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK2,
  [1041] = 1,
    ACTIONS(197), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1052] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1075] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1098] = 1,
    ACTIONS(233), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1109] = 2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(235), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1122] = 1,
    ACTIONS(209), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1133] = 1,
    ACTIONS(179), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1144] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1167] = 1,
    ACTIONS(213), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1178] = 1,
    ACTIONS(223), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1189] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1212] = 7,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(246), 1,
      aux_sym_number_token1,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1235] = 1,
    ACTIONS(254), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1246] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1269] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1292] = 1,
    ACTIONS(193), 8,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1303] = 7,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_selector_nbt_repeat1,
    STATE(120), 1,
      sym_nbt_object_key,
    STATE(124), 2,
      sym_number,
      sym_string,
  [1326] = 1,
    ACTIONS(98), 7,
      aux_sym_number_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LBRACK2,
  [1336] = 4,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    ACTIONS(264), 1,
      sym_selector_key,
    STATE(91), 1,
      sym_number,
    ACTIONS(262), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1351] = 1,
    ACTIONS(120), 5,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
  [1359] = 4,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      aux_sym_string_token1,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    STATE(87), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1373] = 4,
    ACTIONS(268), 1,
      aux_sym_string_token1,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1387] = 1,
    ACTIONS(254), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1395] = 4,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token1,
    STATE(88), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1409] = 3,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(278), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1421] = 3,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      aux_sym_path_repeat1,
    ACTIONS(130), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1433] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      sym_comment,
    STATE(77), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1447] = 4,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_string_token1,
    STATE(64), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1461] = 1,
    ACTIONS(233), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1469] = 2,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(293), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1479] = 4,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_string_token1,
    STATE(63), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1493] = 1,
    ACTIONS(193), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1501] = 4,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym_selector_key,
    STATE(100), 1,
      aux_sym_selector_options_repeat1,
    STATE(75), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1515] = 1,
    ACTIONS(209), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1523] = 4,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(77), 2,
      sym_command,
      aux_sym_root_repeat1,
  [1537] = 1,
    ACTIONS(201), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1545] = 1,
    ACTIONS(197), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1553] = 3,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      aux_sym_path_repeat1,
    ACTIONS(124), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1565] = 1,
    ACTIONS(179), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1573] = 1,
    ACTIONS(175), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1581] = 1,
    ACTIONS(213), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1589] = 1,
    ACTIONS(223), 5,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1597] = 4,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      sym_selector_key,
    STATE(100), 1,
      aux_sym_selector_options_repeat1,
    STATE(75), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1611] = 4,
    ACTIONS(318), 1,
      sym_selector_key,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_selector_options_repeat1,
    STATE(85), 2,
      sym_selector_options,
      aux_sym_selector_repeat1,
  [1625] = 4,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_string_token1,
    ACTIONS(327), 1,
      anon_sym_BSLASH,
    STATE(87), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1639] = 4,
    ACTIONS(268), 1,
      aux_sym_string_token1,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
  [1653] = 4,
    ACTIONS(332), 1,
      aux_sym_number_token1,
    ACTIONS(334), 1,
      anon_sym_TILDE,
    STATE(27), 1,
      sym_number,
    STATE(29), 1,
      sym_coordinate,
  [1666] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_SLASH,
  [1673] = 1,
    ACTIONS(336), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1680] = 4,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT,
    STATE(105), 1,
      sym__selector_number,
    STATE(123), 1,
      sym_number,
  [1693] = 4,
    ACTIONS(338), 1,
      aux_sym_number_token1,
    ACTIONS(340), 1,
      anon_sym_TILDE,
    STATE(18), 1,
      sym_coordinate,
    STATE(23), 1,
      sym_number,
  [1706] = 1,
    ACTIONS(262), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
      anon_sym_RBRACE,
  [1713] = 1,
    ACTIONS(342), 4,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [1720] = 2,
    ACTIONS(344), 1,
      anon_sym_DOT_DOT,
    ACTIONS(278), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1729] = 2,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(346), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1737] = 3,
    ACTIONS(350), 1,
      sym_selector_key,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_selector_scores_repeat1,
  [1747] = 1,
    ACTIONS(354), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1753] = 3,
    ACTIONS(318), 1,
      sym_selector_key,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      aux_sym_selector_options_repeat1,
  [1763] = 1,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1769] = 1,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [1775] = 3,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      sym_selector_key,
    STATE(103), 1,
      aux_sym_selector_options_repeat1,
  [1785] = 1,
    ACTIONS(278), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1791] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1799] = 1,
    ACTIONS(371), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1805] = 3,
    ACTIONS(373), 1,
      sym_selector_key,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_selector_scores_repeat1,
  [1815] = 1,
    ACTIONS(378), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1821] = 1,
    ACTIONS(223), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_selector_key,
  [1827] = 2,
    ACTIONS(106), 1,
      aux_sym_number_token1,
    STATE(94), 1,
      sym_number,
  [1834] = 1,
    ACTIONS(380), 2,
      anon_sym_RBRACK,
      sym_selector_key,
  [1839] = 2,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      aux_sym_path_repeat1,
  [1846] = 1,
    ACTIONS(382), 2,
      sym_selector_key,
      anon_sym_RBRACE,
  [1851] = 2,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_path_repeat1,
  [1858] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
  [1862] = 1,
    ACTIONS(388), 1,
      anon_sym_,
  [1866] = 1,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [1870] = 1,
    ACTIONS(392), 1,
      sym_selector_key,
  [1874] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1878] = 1,
    ACTIONS(396), 1,
      anon_sym_COLON,
  [1882] = 1,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
  [1886] = 1,
    ACTIONS(183), 1,
      anon_sym_,
  [1890] = 1,
    ACTIONS(344), 1,
      anon_sym_DOT_DOT,
  [1894] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [1898] = 1,
    ACTIONS(402), 1,
      sym_selector_key,
  [1902] = 1,
    ACTIONS(404), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 505,
  [SMALL_STATE(15)] = 528,
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 574,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 625,
  [SMALL_STATE(20)] = 643,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 701,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 733,
  [SMALL_STATE(26)] = 750,
  [SMALL_STATE(27)] = 767,
  [SMALL_STATE(28)] = 784,
  [SMALL_STATE(29)] = 801,
  [SMALL_STATE(30)] = 818,
  [SMALL_STATE(31)] = 835,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 869,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 903,
  [SMALL_STATE(36)] = 920,
  [SMALL_STATE(37)] = 937,
  [SMALL_STATE(38)] = 970,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1017,
  [SMALL_STATE(42)] = 1029,
  [SMALL_STATE(43)] = 1041,
  [SMALL_STATE(44)] = 1052,
  [SMALL_STATE(45)] = 1075,
  [SMALL_STATE(46)] = 1098,
  [SMALL_STATE(47)] = 1109,
  [SMALL_STATE(48)] = 1122,
  [SMALL_STATE(49)] = 1133,
  [SMALL_STATE(50)] = 1144,
  [SMALL_STATE(51)] = 1167,
  [SMALL_STATE(52)] = 1178,
  [SMALL_STATE(53)] = 1189,
  [SMALL_STATE(54)] = 1212,
  [SMALL_STATE(55)] = 1235,
  [SMALL_STATE(56)] = 1246,
  [SMALL_STATE(57)] = 1269,
  [SMALL_STATE(58)] = 1292,
  [SMALL_STATE(59)] = 1303,
  [SMALL_STATE(60)] = 1326,
  [SMALL_STATE(61)] = 1336,
  [SMALL_STATE(62)] = 1351,
  [SMALL_STATE(63)] = 1359,
  [SMALL_STATE(64)] = 1373,
  [SMALL_STATE(65)] = 1387,
  [SMALL_STATE(66)] = 1395,
  [SMALL_STATE(67)] = 1409,
  [SMALL_STATE(68)] = 1421,
  [SMALL_STATE(69)] = 1433,
  [SMALL_STATE(70)] = 1447,
  [SMALL_STATE(71)] = 1461,
  [SMALL_STATE(72)] = 1469,
  [SMALL_STATE(73)] = 1479,
  [SMALL_STATE(74)] = 1493,
  [SMALL_STATE(75)] = 1501,
  [SMALL_STATE(76)] = 1515,
  [SMALL_STATE(77)] = 1523,
  [SMALL_STATE(78)] = 1537,
  [SMALL_STATE(79)] = 1545,
  [SMALL_STATE(80)] = 1553,
  [SMALL_STATE(81)] = 1565,
  [SMALL_STATE(82)] = 1573,
  [SMALL_STATE(83)] = 1581,
  [SMALL_STATE(84)] = 1589,
  [SMALL_STATE(85)] = 1597,
  [SMALL_STATE(86)] = 1611,
  [SMALL_STATE(87)] = 1625,
  [SMALL_STATE(88)] = 1639,
  [SMALL_STATE(89)] = 1653,
  [SMALL_STATE(90)] = 1666,
  [SMALL_STATE(91)] = 1673,
  [SMALL_STATE(92)] = 1680,
  [SMALL_STATE(93)] = 1693,
  [SMALL_STATE(94)] = 1706,
  [SMALL_STATE(95)] = 1713,
  [SMALL_STATE(96)] = 1720,
  [SMALL_STATE(97)] = 1729,
  [SMALL_STATE(98)] = 1737,
  [SMALL_STATE(99)] = 1747,
  [SMALL_STATE(100)] = 1753,
  [SMALL_STATE(101)] = 1763,
  [SMALL_STATE(102)] = 1769,
  [SMALL_STATE(103)] = 1775,
  [SMALL_STATE(104)] = 1785,
  [SMALL_STATE(105)] = 1791,
  [SMALL_STATE(106)] = 1799,
  [SMALL_STATE(107)] = 1805,
  [SMALL_STATE(108)] = 1815,
  [SMALL_STATE(109)] = 1821,
  [SMALL_STATE(110)] = 1827,
  [SMALL_STATE(111)] = 1834,
  [SMALL_STATE(112)] = 1839,
  [SMALL_STATE(113)] = 1846,
  [SMALL_STATE(114)] = 1851,
  [SMALL_STATE(115)] = 1858,
  [SMALL_STATE(116)] = 1862,
  [SMALL_STATE(117)] = 1866,
  [SMALL_STATE(118)] = 1870,
  [SMALL_STATE(119)] = 1874,
  [SMALL_STATE(120)] = 1878,
  [SMALL_STATE(121)] = 1882,
  [SMALL_STATE(122)] = 1886,
  [SMALL_STATE(123)] = 1890,
  [SMALL_STATE(124)] = 1894,
  [SMALL_STATE(125)] = 1898,
  [SMALL_STATE(126)] = 1902,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(114),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(52),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(70),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(59),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(9),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rotation, 3, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_array, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_array, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_object, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_value, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_array_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(124),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(13),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2), SHIFT_REPEAT(70),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_number, 2, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_nbt, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_number, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector_number, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_value, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(68),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(126),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(77),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_number, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_nbt_repeat1, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_options_repeat1, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_scores, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_options, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_options_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_options_repeat1, 2), SHIFT_REPEAT(126),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_scores_repeat1, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_scores_repeat1, 2), SHIFT_REPEAT(117),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_scores_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_object, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_options_repeat1, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_scores_repeat1, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_object_key, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
