#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_lua_comment = 2,
  anon_sym_conky_DOTconfig = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token1 = 11,
  aux_sym_string_token2 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token3 = 14,
  sym_number = 15,
  aux_sym_identifier_token1 = 16,
  anon_sym_conky_DOTtext = 17,
  anon_sym_LBRACK_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_RBRACK_RBRACK = 20,
  sym_text_literal = 21,
  sym_text_comment = 22,
  sym_text_continuation = 23,
  sym_text_dollar = 24,
  anon_sym_DOLLAR = 25,
  sym_text_backslash = 26,
  anon_sym_DOLLAR_LBRACE = 27,
  aux_sym_text_variable_token1 = 28,
  sym_text_arguments = 29,
  sym_source_file = 30,
  sym_config_block = 31,
  sym_config_entry = 32,
  sym_config_value = 33,
  sym_boolean = 34,
  sym_string = 35,
  sym_identifier = 36,
  sym_text_block = 37,
  sym_text_dollar_literal = 38,
  sym_text_variable = 39,
  sym_text_variable_short = 40,
  sym_text_command = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_config_block_repeat1 = 43,
  aux_sym_string_repeat1 = 44,
  aux_sym_string_repeat2 = 45,
  aux_sym_text_block_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_lua_comment] = "lua_comment",
  [anon_sym_conky_DOTconfig] = "conky.config",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token3] = "string_token3",
  [sym_number] = "number",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_conky_DOTtext] = "conky.text",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_text_literal] = "text_literal",
  [sym_text_comment] = "text_comment",
  [sym_text_continuation] = "text_continuation",
  [sym_text_dollar] = "text_dollar",
  [anon_sym_DOLLAR] = "$",
  [sym_text_backslash] = "text_backslash",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_text_variable_token1] = "text_variable_token1",
  [sym_text_arguments] = "text_arguments",
  [sym_source_file] = "source_file",
  [sym_config_block] = "config_block",
  [sym_config_entry] = "config_entry",
  [sym_config_value] = "config_value",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_text_block] = "text_block",
  [sym_text_dollar_literal] = "text_dollar_literal",
  [sym_text_variable] = "text_variable",
  [sym_text_variable_short] = "text_variable_short",
  [sym_text_command] = "text_command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_config_block_repeat1] = "config_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_text_block_repeat1] = "text_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_lua_comment] = sym_lua_comment,
  [anon_sym_conky_DOTconfig] = anon_sym_conky_DOTconfig,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_number] = sym_number,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_conky_DOTtext] = anon_sym_conky_DOTtext,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_text_literal] = sym_text_literal,
  [sym_text_comment] = sym_text_comment,
  [sym_text_continuation] = sym_text_continuation,
  [sym_text_dollar] = sym_text_dollar,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_text_backslash] = sym_text_backslash,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_text_variable_token1] = aux_sym_text_variable_token1,
  [sym_text_arguments] = sym_text_arguments,
  [sym_source_file] = sym_source_file,
  [sym_config_block] = sym_config_block,
  [sym_config_entry] = sym_config_entry,
  [sym_config_value] = sym_config_value,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_text_block] = sym_text_block,
  [sym_text_dollar_literal] = sym_text_dollar_literal,
  [sym_text_variable] = sym_text_variable,
  [sym_text_variable_short] = sym_text_variable_short,
  [sym_text_command] = sym_text_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_config_block_repeat1] = aux_sym_config_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_text_block_repeat1] = aux_sym_text_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_lua_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_conky_DOTconfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_conky_DOTtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_text_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_text_dollar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_text_backslash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_config_block] = {
    .visible = true,
    .named = true,
  },
  [sym_config_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_config_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym_text_dollar_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_text_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_text_variable_short] = {
    .visible = true,
    .named = true,
  },
  [sym_text_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_config_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_key = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_name, 2},
  [4] =
    {field_args, 2},
    {field_name, 1},
  [6] =
    {field_args, 3},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 12,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 41,
        '#', 62,
        '$', 65,
        '\'', 37,
        ',', 33,
        '-', 7,
        '=', 31,
        '[', 9,
        '\\', 66,
        ']', 57,
        'f', 46,
        't', 50,
        '{', 32,
        '}', 34,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_lua_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_conky_DOTconfig);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_conky_DOTtext);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_text_literal);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_text_literal);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_text_literal);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_text_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_text_continuation);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_text_dollar);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '{') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_text_backslash);
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_variable_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_text_arguments);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_text_arguments);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_lua_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_text_comment] = ACTIONS(1),
    [sym_text_continuation] = ACTIONS(1),
    [sym_text_dollar] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_text_backslash] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_config_block] = STATE(13),
    [sym_text_block] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_lua_comment] = ACTIONS(5),
    [anon_sym_conky_DOTconfig] = ACTIONS(7),
    [anon_sym_conky_DOTtext] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(14), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(16), 1,
      sym_text_literal,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(22), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(2), 4,
      sym_text_dollar_literal,
      sym_text_variable,
      sym_text_variable_short,
      aux_sym_text_block_repeat1,
    ACTIONS(11), 5,
      anon_sym_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      sym_text_backslash,
  [26] = 6,
    ACTIONS(27), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(29), 1,
      sym_text_literal,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(4), 4,
      sym_text_dollar_literal,
      sym_text_variable,
      sym_text_variable_short,
      aux_sym_text_block_repeat1,
    ACTIONS(25), 5,
      anon_sym_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      sym_text_backslash,
  [52] = 6,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(37), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(39), 1,
      sym_text_literal,
    STATE(2), 4,
      sym_text_dollar_literal,
      sym_text_variable,
      sym_text_variable_short,
      aux_sym_text_block_repeat1,
    ACTIONS(35), 5,
      anon_sym_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      sym_text_backslash,
  [78] = 3,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_text_command,
    ACTIONS(43), 9,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_literal,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [96] = 7,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(53), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_config_value,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym_boolean,
      sym_string,
      sym_identifier,
  [121] = 2,
    ACTIONS(57), 1,
      sym_text_literal,
    ACTIONS(55), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [135] = 2,
    ACTIONS(61), 1,
      sym_text_literal,
    ACTIONS(59), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [149] = 2,
    ACTIONS(65), 1,
      sym_text_literal,
    ACTIONS(63), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [163] = 2,
    ACTIONS(69), 1,
      sym_text_literal,
    ACTIONS(67), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [177] = 2,
    ACTIONS(73), 1,
      sym_text_literal,
    ACTIONS(71), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [191] = 2,
    ACTIONS(77), 1,
      sym_text_literal,
    ACTIONS(75), 8,
      anon_sym_RBRACK,
      anon_sym_RBRACK_RBRACK,
      sym_text_comment,
      sym_text_continuation,
      sym_text_dollar,
      anon_sym_DOLLAR,
      sym_text_backslash,
      anon_sym_DOLLAR_LBRACE,
  [205] = 5,
    ACTIONS(7), 1,
      anon_sym_conky_DOTconfig,
    ACTIONS(9), 1,
      anon_sym_conky_DOTtext,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 2,
      anon_sym_LF,
      sym_lua_comment,
    STATE(14), 3,
      sym_config_block,
      sym_text_block,
      aux_sym_source_file_repeat1,
  [224] = 5,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_conky_DOTconfig,
    ACTIONS(91), 1,
      anon_sym_conky_DOTtext,
    ACTIONS(85), 2,
      anon_sym_LF,
      sym_lua_comment,
    STATE(14), 3,
      sym_config_block,
      sym_text_block,
      aux_sym_source_file_repeat1,
  [243] = 5,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
    STATE(16), 2,
      sym_config_entry,
      aux_sym_config_block_repeat1,
    ACTIONS(94), 3,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
  [262] = 5,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_identifier,
    STATE(17), 2,
      sym_config_entry,
      aux_sym_config_block_repeat1,
    ACTIONS(100), 3,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
  [281] = 5,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
    STATE(17), 2,
      sym_config_entry,
      aux_sym_config_block_repeat1,
    ACTIONS(104), 3,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
  [300] = 1,
    ACTIONS(112), 6,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [309] = 1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_conky_DOTconfig,
      anon_sym_conky_DOTtext,
  [317] = 1,
    ACTIONS(116), 5,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [325] = 1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_conky_DOTconfig,
      anon_sym_conky_DOTtext,
  [333] = 1,
    ACTIONS(120), 5,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [341] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_conky_DOTconfig,
      anon_sym_conky_DOTtext,
  [349] = 1,
    ACTIONS(124), 5,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [357] = 1,
    ACTIONS(126), 5,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [365] = 1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_conky_DOTconfig,
      anon_sym_conky_DOTtext,
  [373] = 1,
    ACTIONS(130), 5,
      anon_sym_LF,
      sym_lua_comment,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [381] = 4,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_string_token1,
    ACTIONS(136), 1,
      aux_sym_string_token2,
    STATE(30), 1,
      aux_sym_string_repeat1,
  [394] = 4,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_string_token2,
    ACTIONS(140), 1,
      aux_sym_string_token3,
    STATE(31), 1,
      aux_sym_string_repeat2,
  [407] = 4,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      aux_sym_string_token2,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [420] = 4,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_token2,
    ACTIONS(150), 1,
      aux_sym_string_token3,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [433] = 4,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_token1,
    ACTIONS(157), 1,
      aux_sym_string_token2,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [446] = 4,
    ACTIONS(160), 1,
      aux_sym_string_token2,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      aux_sym_string_token3,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [459] = 3,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_text_variable_token1,
    STATE(35), 1,
      sym_text_command,
  [469] = 2,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      sym_text_arguments,
  [476] = 2,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_text_arguments,
  [483] = 2,
    ACTIONS(180), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_text_command,
  [490] = 2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_text_arguments,
  [497] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [501] = 1,
    ACTIONS(184), 1,
      anon_sym_EQ,
  [505] = 1,
    ACTIONS(186), 1,
      anon_sym_LBRACK_LBRACK,
  [509] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [513] = 1,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
  [517] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
  [521] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [525] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 373,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 407,
  [SMALL_STATE(31)] = 420,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 483,
  [SMALL_STATE(38)] = 490,
  [SMALL_STATE(39)] = 497,
  [SMALL_STATE(40)] = 501,
  [SMALL_STATE(41)] = 505,
  [SMALL_STATE(42)] = 509,
  [SMALL_STATE(43)] = 513,
  [SMALL_STATE(44)] = 517,
  [SMALL_STATE(45)] = 521,
  [SMALL_STATE(46)] = 525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_block_repeat1, 2, 0, 0),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_dollar_literal, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_variable, 5, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_variable, 5, 0, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_variable, 4, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_variable, 4, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_variable, 4, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_variable, 4, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_variable, 3, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_variable, 3, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_variable_short, 2, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_variable_short, 2, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_command, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_command, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_block_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_entry, 3, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_value, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_conky(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
