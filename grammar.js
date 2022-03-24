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
    [$.path],
    [$.execute_command, $.coordinate],
    [$.selector_nbt, $.selector_score],
    [$._command_choices, $.coordinate],
    [$._command_choices, $._legacy_execute],
    [$._legacy_execute],
    [$.command],
    [$._blank_item_with_namespace, $.path],
    [$.nbt_path],
    [$._command_choices, $.container, $.item, $._blank_item_with_namespace, $.path],
    [$._command_choices, $.path],
    [$.selector_option],
    [$.container],
    [$.tag]
  ],
  rules: {
    root: $ => repeat(
      choice(
        $.command,
        $.comment,
        $.bad_command,
        $._line_separator,
        alias($.execute_command, $.command),
        alias($._legacy_execute, $.command)
      )
    ),
    tag: $ => seq(
      $._hash,
      optional(CONSTS.IDENTIFIER)
    ),
    comment: $ => seq(
      $._hash,
      /.*/
    ),
    bad_command: $ => seq(
      "/",
      choice(
        alias($.execute_command, $.command),
        $.command
      )
    ),
    command: $ => seq(
      $.command_name,
      repeat(
        seq(
          " ",
          $._command_choices
        )
      ),
      optional(
        repeat(
          " "
        )
      ),
      optional($._line_separator)
    ),
    _command_choices: $ => choice(
      $.namespace,
      $.identifier,
      $.number,
      $.location,
      $.rotation,
      $.boolean,
      $.string,
      $.selector,
      $.path,
      $.container,
      $.item,
      alias($._blank_item_with_namespace, $.item),
      $.nbt_path,
      $.nbt,
      $.tag,
      $.namespaced_container,
      $.text,
      $.wildcard
    ),
    execute_command: $ => seq(
      seq(
        alias("execute", $.command_name),
        repeat(
          seq(
            " ",
            choice(
              $._command_choices,
              $.execute_keyword
            )
          )
        ),
        " ",
        alias("run", $.execute_keyword),
        " ",
        choice(
          $.execute_command,
          $.command
        )
      )
    ),
    _legacy_execute: $ => seq(
      optional("/"),
      alias("execute", $.command_name),
      seq(
        " ",
        choice($.selector, $.nbt_identifier),
        " ",
        $.location,
        " ",
        optional(
          seq(
            alias("detect", $.execute_keyword),
            " ",
            $.location,
            " ",
            choice(
              $.item,
              $.identifier,
              alias($._blank_item_with_namespace, $.item)
            ),
            " ",
            choice(
              $.number,
              seq(
                $.state_key,
                "=",
                $.state_value
              ),
              "*"
            ),
            " "
          )
        ),
        choice(
          alias($._legacy_execute, $.command),
          $.command
        )
      )
    ),
    _legacy_execute_keyword: $ => " detect ",
    execute_keyword: $ => choice(
      "in",
      "if",
      "unless",
      "facing",
      "anchored",
      "align",
      "at",
      "as",
      "positioned",
      "rotated",
      "store"
    ),
    _line_separator: $ => /\r?\n/,
    nbt_identifier: $ => CONSTS.NBT_IDENTIFIER,
    identifier: $ => CONSTS.IDENTIFIER,
    namespace: $ => CONSTS.NAMESPACE,
    text: $ => CONSTS.WORD,
    command_name: $ => choice($.identifier, "?"),
    number: $ => /-?\d+(\.\d+)?/,
    wildcard: $ => "*",
    _hash: $ => "#",
    boolean: $ => choice("true", "false"),
    coordinate: $ => choice($.number, seq("~", optional($.number)), seq("^", $.number)),
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
          /[^"\n]/
        )
      ),
      "\""
    ),
    _escape_sequence: $ => seq("\\", "\""),
    container: $ => seq(
      optional($.namespace),
      $.identifier,
      repeat1(
        seq(
          ".",
          choice(
            $.identifier,
            $.number
          )
        )
      )
    ),
    nbt_path: $ => seq(
      choice(
        $.identifier,
        $.string
      ),
      repeat1(
        choice(
          repeat1(
            seq(
              ".",
              choice(
                $.text,
                $.string,
                $.identifier
              )
            )
          ),
          repeat1(
            seq(
              "[",
              CONSTS.WHITESPACE,
              alias(/\d+/, $.number),
              CONSTS.WHITESPACE,
              "]"
            )
          )
        )
      ),
      optional(".")
    ),
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
    selector_option: $ => seq(
        $.selector_key,
        CONSTS.WHITESPACE,
        "=",
        optional(
          seq(
            CONSTS.WHITESPACE,
            $.selector_value
          )
        )
    ),
    selector_key: $ => CONSTS.IDENTIFIER,
    selector_value: $ => choice(
      CONSTS.IDENTIFIER,
      $.boolean,
      $.number,
      $.selector_number,
      choice(
        $.selector_score,
        $.selector_nbt
      )
    ),
    selector_nbt: $ => seq(
      "{",
      CONSTS.WHITESPACE,
      repeat(
        seq(
          CONSTS.WHITESPACE,
          choice(alias($.selector_score_key, $.nbt_object_key), $.nbt_object_key),
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
    selector_score: $ => seq(
      seq(
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
      )
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
      $.nbt_identifier
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
    namespaced_container: $ => token(seq(
      CONSTS.IDENTIFIER,
      ".",
      CONSTS.IDENTIFIER,
      ":",
      CONSTS.IDENTIFIER,
      ".",
      CONSTS.IDENTIFIER
    )),
    item: $ => seq(
      optional(
        $.namespace
      ),
      $.identifier,
      choice(
        $.item_state,
        $.item_nbt,
        seq(
          $.item_nbt,
          $.item_state
        ),
        seq(
          $.item_state,
          $.item_nbt
        )
      )
    ),
    _blank_item_with_namespace: $ => seq(
      $.namespace,
      $.identifier
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
      optional($.namespace),
      $.identifier,
      repeat1(
        seq(
          "/",
          optional($.namespace),
          $.identifier
        )
      )
    )
  }
});
