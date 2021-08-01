const CONSTS = {
  COMMENT: /#.*/,
  WORD: /[A-Za-z][\w-]*/,
  NBT_IDENTIFIER: /[A-Za-z]\w*/,
  IDENTIFIER: /[a-z_-]+/,
  WHITESPACE: / */,
  NAMESPACE: /[a-z_-]+:/
};

module.exports = grammar({
  name: "mcfunction",
  extras: $ => [],
  conflicts: $ => [
    [$.coordinate, $.command],
    [$.rotation, $.location],
    [$.selector_value, $.selector_number],
    [$.item, $.path],
    [$.path]
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
            $.selector,
            $.path,
            $.container,
            $.item,
            $.nbt_path,
            $.nbt,
            $.invalid_comment
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
            CONSTS.WHITESPACE,
            $.selector_option,
            CONSTS.WHITESPACE,
            optional(",")
          )
        )
      ),
      "]"
    ),
    selector_option: $ => choice(
      $.selector_score,
      $.selector_nbt,
      seq(
        $.selector_key,
        CONSTS.WHITESPACE,
        "=",
        CONSTS.WHITESPACE,
        $.selector_value
      )
    ),
    selector_key: $ => CONSTS.IDENTIFIER,
    selector_value: $ => choice(
      CONSTS.IDENTIFIER,
      $.boolean,
      $.number
    ),
    selector_nbt: $ => seq(
      alias("nbt", $.selector_key),
      CONSTS.WHITESPACE,
      "=",
      CONSTS.WHITESPACE,
      alias($._selector_nbt, $.selector_value)
    ),
    _selector_nbt: $ => seq(
      "{",
      repeat(
        seq(
          CONSTS.WHITESPACE,
          $.nbt_object_key,
          CONSTS.WHITESPACE,
          ":",
          CONSTS.WHITESPACE,
          $.nbt_object_value,
          CONSTS.WHITESPACE,
          optional(",")
        )
      ),
      "}"
    ),
    selector_score: $ => seq(
      alias("scores", $.selector_key),
      CONSTS.WHITESPACE,
      "=",
      CONSTS.WHITESPACE,
      alias($._selector_score_object, $.selector_value)
    ),
    _selector_score_object: $ => seq(
      "{",
      CONSTS.WHITESPACE,
      repeat(
        seq(
          CONSTS.WHITESPACE,
          $.selector_score_key,
          CONSTS.WHITESPACE,
          "=",
          CONSTS.WHITESPACE,
          $.selector_score_value,
          CONSTS.WHITESPACE,
          optional(",")
        )
      ),
      CONSTS.WHITESPACE,
      "}"
    ),
    selector_score_key: $ => CONSTS.IDENTIFIER,
    selector_score_value: $ => $.selector_number,
    selector_number: $ => choice(
      /\.\.-?\d+(\.\d+)?/,
      /-?\d+(\.\d+)?\.\.-?\d+(\.\d+)?/,
      /-?\d+(\.\d+)?\.\./,
      $.number
    ),
    nbt: $ => choice($.nbt_array, $.nbt_object),
    nbt_object: $ => seq(
      "{",
      CONSTS.WHITESPACE,
      repeat(
        seq(
          CONSTS.WHITESPACE,
          $.nbt_object_key,
          CONSTS.WHITESPACE,
          ":",
          CONSTS.WHITESPACE,
          $.nbt_object_value,
          CONSTS.WHITESPACE,
          optional(",")
        )
      ),
      CONSTS.WHITESPACE,
      "}"
    ),
    nbt_array: $ => seq(
      "[",
      CONSTS.WHITESPACE,
      repeat(
        seq(
          CONSTS.WHITESPACE,
          $.nbt_object_value,
          CONSTS.WHITESPACE,
          optional(",")
        )
      ),
      CONSTS.WHITESPACE,
      "]"
    ),
    nbt_object_key: $ => choice(
      $.string,
      $.number,
      CONSTS.NBT_IDENTIFIER
    ),
    nbt_object_value: $ => choice(
      $.string,
      $.nbt_number,
      $.boolean,
      $.nbt
    ),
    nbt_number: $ => seq(
      $.number,
      optional(choice("l","s","d","f","b"))
    ),
    item: $ => seq(
      optional(CONSTS.NAMESPACE),
      CONSTS.IDENTIFIER,
      optional(
        choice(
          $.item_state,
          $.item_nbt
        )
      )
    ),
    item_nbt: $ => $.nbt_object,
    item_state: $ => seq(
      "[",
      CONSTS.WHITESPACE,
      repeat(
        seq(
          CONSTS.WHITESPACE,
          $.state_key,
          CONSTS.WHITESPACE,
          "=",
          CONSTS.WHITESPACE,
          $.state_value,
          optional(",")
        )
      ),
      CONSTS.WHITESPACE,
      "]"
    ),
    state_key: $ => CONSTS.IDENTIFIER,
    state_value: $ => choice(
      $.number,
      CONSTS.IDENTIFIER,
      $.boolean
    ),
    path: $ => seq(
      optional(CONSTS.NAMESPACE),
      CONSTS.IDENTIFIER,
      repeat1(
        seq(
          "/",
          CONSTS.IDENTIFIER
        )
      )
    ),
    container: $ => seq(
      optional(CONSTS.NAMESPACE),
      CONSTS.IDENTIFIER,
      repeat1(
        seq(
          ".",
          choice(
            CONSTS.IDENTIFIER,
            $.number
          )
        )
      )
    ),
    nbt_path: $ => /([A-Za-z]\w*)((\[\d+\])*(\.|\/)([A-Za-z]\w*))+/
  }
});
