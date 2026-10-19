module.exports = grammar({
  name: 'conky',

  extras: $ => [
    /[ \t]/,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.lua_comment,
      $.config_block,
      $.text_block,
      '\n'
    )),

    lua_comment: $ => token(/--[^\n]*/),

    config_block: $ => seq(
      'conky.config',
      '=',
      '{',
      repeat(choice(
        $.config_entry,
        ',',
        $.lua_comment,
        '\n'
      )),
      '}'
    ),

    config_entry: $ => seq(
      field('key', $.identifier),
      '=',
      field('value', $.config_value)
    ),

    config_value: $ => choice(
      $.string,
      $.number,
      $.boolean,
      $.identifier
    ),

    boolean: $ => choice('true', 'false'),

    string: $ => choice(
      seq("'", repeat(choice(/[^'\\]/, /\\./)), "'"),
      seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')
    ),

    number: $ => /-?[0-9]+(\.[0-9]+)?/,

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    text_block: $ => seq(
      'conky.text',
      '=',
      '[[',
      repeat(choice(
        $.text_literal,
        $.text_variable,
        $.text_variable_short,
        $.text_dollar,
        $.text_dollar_literal,
        $.text_comment,
        $.text_continuation,
        $.text_backslash,
        ']'
      )),
      ']]'
    ),

    text_literal: $ => token(/[^$#\\\]]+/),
    text_comment: $ => token(/#[^\n]*/),
    text_continuation: $ => token(/\\\n/),
    text_dollar: $ => token('$$'),
    text_dollar_literal: $ => token('$'),
    text_backslash: $ => token('\\'),

    text_variable: $ => seq(
      '${',
      optional(/[ \t]+/),
      field('name', $.text_command),
      optional(field('args', $.text_arguments)),
      '}'
    ),

    text_variable_short: $ => seq(
      '$',
      field('name', $.text_command)
    ),

    text_command: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    text_arguments: $ => /[^}]*/,
  }
});
