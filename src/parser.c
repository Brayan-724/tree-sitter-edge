#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_html_token1 = 1,
  anon_sym_LBRACE_LBRACE = 2,
  aux_sym_double_brace_token1 = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_LBRACE_LBRACE_LBRACE = 5,
  anon_sym_RBRACE_RBRACE_RBRACE = 6,
  sym_comment = 7,
  anon_sym_AT = 8,
  aux_sym_function_token1 = 9,
  aux_sym_function_token2 = 10,
  sym_identifier = 11,
  sym_html = 12,
  sym_double_brace = 13,
  sym_triple_brace = 14,
  sym_function = 15,
  aux_sym_html_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_html_token1] = "html_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_double_brace_token1] = "raw_expresion",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_LBRACE] = "{{{",
  [anon_sym_RBRACE_RBRACE_RBRACE] = "}}}",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym_function_token2] = "raw_expresion",
  [sym_identifier] = "identifier",
  [sym_html] = "html",
  [sym_double_brace] = "double_brace",
  [sym_triple_brace] = "triple_brace",
  [sym_function] = "function",
  [aux_sym_html_repeat1] = "html_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_html_token1] = aux_sym_html_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_double_brace_token1] = aux_sym_double_brace_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_double_brace_token1,
  [sym_identifier] = sym_identifier,
  [sym_html] = sym_html,
  [sym_double_brace] = sym_double_brace,
  [sym_triple_brace] = sym_triple_brace,
  [sym_function] = sym_function,
  [aux_sym_html_repeat1] = aux_sym_html_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_html_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_brace_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_html] = {
    .visible = true,
    .named = true,
  },
  [sym_double_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_triple_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_html_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(1);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(14);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_html_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_html_token1);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_html_token1);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_html_token1);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_html_token1);
      if (lookahead == '{') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_double_brace_token1);
      if (lookahead == '{') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_double_brace_token1);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_function_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_html] = STATE(11),
    [sym_double_brace] = STATE(2),
    [sym_triple_brace] = STATE(2),
    [sym_function] = STATE(2),
    [aux_sym_html_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_html_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(11),
  },
  [2] = {
    [sym_double_brace] = STATE(3),
    [sym_triple_brace] = STATE(3),
    [sym_function] = STATE(3),
    [aux_sym_html_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_html_token1] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(11),
  },
  [3] = {
    [sym_double_brace] = STATE(3),
    [sym_triple_brace] = STATE(3),
    [sym_function] = STATE(3),
    [aux_sym_html_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_html_token1] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(22),
    [anon_sym_LBRACE_LBRACE_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_function_token2,
    ACTIONS(33), 5,
      aux_sym_html_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_LBRACE,
      sym_comment,
      anon_sym_AT,
  [14] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 5,
      aux_sym_html_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_LBRACE,
      sym_comment,
      anon_sym_AT,
  [25] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 5,
      aux_sym_html_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_LBRACE,
      sym_comment,
      anon_sym_AT,
  [36] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 5,
      aux_sym_html_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_LBRACE,
      sym_comment,
      anon_sym_AT,
  [47] = 1,
    ACTIONS(49), 1,
      aux_sym_double_brace_token1,
  [51] = 1,
    ACTIONS(51), 1,
      aux_sym_double_brace_token1,
  [55] = 1,
    ACTIONS(53), 1,
      aux_sym_function_token1,
  [59] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [63] = 1,
    ACTIONS(57), 1,
      anon_sym_RBRACE_RBRACE,
  [67] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACE_RBRACE_RBRACE,
  [71] = 1,
    ACTIONS(61), 1,
      sym_identifier,
  [75] = 1,
    ACTIONS(63), 1,
      aux_sym_function_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 47,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 59,
  [SMALL_STATE(12)] = 63,
  [SMALL_STATE(13)] = 67,
  [SMALL_STATE(14)] = 71,
  [SMALL_STATE(15)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_brace, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_brace, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_brace, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_brace, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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

TS_PUBLIC const TSLanguage *tree_sitter_edge(void) {
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
