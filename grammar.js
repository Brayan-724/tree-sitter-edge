const balanced_brace = /(?:[^}{]|\{(?:[^}{]|\{(?:[^}{]|\{[^}]*})*})*})*/;
const balanced_paren = /\((?:[^)(]|\((?:[^)(]|\((?:[^)(]|\([^)(]*\))*\))*\))*\)/;

module.exports = grammar({
  name: 'edge',

  rules: {
    html: $ => repeat(choice($.double_brace, $.triple_brace, $.comment, $.function, /./)),

    double_brace: $ => seq(token("{{"), alias(balanced_brace, $.raw_expresion), token("}}")),
    triple_brace: $ => seq(token("{{{"), alias(balanced_brace, $.raw_expresion), token("}}}")),

    comment: $ => token(seq("{{--", /[^-]*/, "--}}")),

    function: $ => seq("@", /(\r?\n|\t| )*/, $.identifier, /(\r?\n|\t| )*/, optional(alias(balanced_paren, $.raw_expresion))),

    identifier: $ => /[a-zA-Z_]\w*(\.\w+)*/,
  }
});
