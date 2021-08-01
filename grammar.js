const CONSTS = {
  COMMENT: /#.*/,
  WORD: /[A-Za-z][\w-]+/,
  IDENTIFIER: /[a-z_-]+/
};

module.exports = grammar({
  name: "mcfunction",
  extras: $ => [],
  conflicts: $ => [
    [$.coordinate, $.command],
    [$.rotation, $.location]
  ],
  rules: {
    root: $ => repeat(
      choice(
        $.command,
        $.comment,
        $._line_separator
        // alias($.execute_command, $.command)
      )
    ),
    comment: $ => CONSTS.COMMENT,
    invalid_comment: $ => CONSTS.COMMENT,
    command: $ => seq(
      optional("/"),
      $.command_name,
      repeat(
        seq(
          " ",
          choice(
            $._identifier,
            $.number,
            $.location,
            $.rotation,
            $.boolean,
            $.string,
            $.selector
          )
        )
      )
    ),
    _line_separator: $ => "\n",
    command_name: $ => CONSTS.IDENTIFIER,
    _identifier: $ => CONSTS.WORD,
    number: $ => /-?\d+(\.\d+)?/,
    boolean: $ => choice("true", "false"),
    coordinate: $ => choice($.number, "~"),
    rotation: $ => seq(
      field("x", $.coordinate),
      " ",
      field("y", $.coordinate)
    ),
    location: $ => seq(
      field("x", $.coordinate),
      " ",
      field("y", $.coordinate),
      " ",
      field("z", $.coordinate)
    ),
    string: $ => seq(
      "\"",
      repeat(
        choice(
          $._escape_sequence,
          /[^"]/
        )
      ),
      "\""
    ),
    _escape_sequence: $ => seq("\\", "\""),
    selector: $ => seq(
      "@",
      choice("p", "a", "r", "s", "e"),
      optional($.selector_option_section)
    ),
    selector_option_section: $ => seq(
      "[",
      optional(
        repeat(
          seq(
            $.selector_option,
            optional(",")
          )
        )
      ),
      "]"
    ),
    selector_option: $ => seq(
      $.selector_key,
      "=",
      $.selector_value
    ),
    selector_key: $ => CONSTS.IDENTIFIER,
    selector_value: $ => choice(
      CONSTS.IDENTIFIER,
      $.boolean,
      $.number
    )
  }
});
