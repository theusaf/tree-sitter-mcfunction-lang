module.exports = grammar({
  name: "mcfunction",
  rules: {
    root: $ => repeat(
      choice(
        $.command,
        $.comment,
        alias($.execute_command, $.command)
      )
    ),
    comment: $ => /#.*/,
    invalid_comment: $ => /#.*/,
    command: $ => prec.right(seq(
      optional("/"),
      $.command_name,
      repeat(
        choice(
          $.identifier,
          $.number,
          $.location,
          $.rotation,
          $.coordinate,
          $.boolean,
          $.string,
          $.selector,
          $.item,
          alias($._item_with_extra, $.item),
          $.path,
          $.container,
          $.nbt,
          $.invalid_comment
        )
      ),
      "\n"
    )),
    execute_command: $ => seq(
      seq(
        alias("execute", $.command_name),
        repeat(
          choice(
            $.execute_keyword,
            $.identifier,
            $.location,
            $.rotation,
            $.item,
            $.path,
            $.container,
            $.selector,
            $.invalid_comment,
            $.number,
            $.coordinate,
            $.string
          )
        ),
        alias("run", $.execute_keyword),
        choice(
          $.execute_command,
          $.command
        )
      )
    ),
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
    command_name: $ => /[A-Za-z][\w-]+/,
    identifier: $ => /[A-Za-z][\w-]+ /,
    number: $ => prec(1, /-?\d+(\.\d+)?/),
    boolean: $ => choice(
      "true",
      "false"
    ),
    coordinate: $ => prec(2, choice(
      $.number,
      "~"
    )),
    rotation: $ => seq(
      field("x", $.coordinate),
      token.immediate(" "),
      field("y", $.coordinate)
    ),
    location: $ => seq(
      field("x", $.coordinate),
      token.immediate(" "),
      field("y", $.coordinate),
      token.immediate(" "),
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
      token(
        seq(
          "@",
          choice(
            "p", "a", "e", "s", "r"
          )
        )
      ),
      optional($.selector_option_section)
    ),
    selector_option_section: $ => seq(
      token.immediate("["),
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
    selector_key: $ => /[a-z_-]+/,
    selector_value: $ => choice(
      $.item,
      $.path,
      /[a-z_-]+/,
      $.selector_number,
      $.number,
      $.boolean,
      $.selector_object
    ),
    selector_number: $ => prec.right(1, choice(
      /\.\.-?\d+(\.\d+)?/,
      /-?\d+(\.\d+)?\.\.-?\d+(\.\d+)?/,
      /-?\d+(\.\d+)?\.\./,
      $.number
    )),
    selector_object_old: $ => choice(
      seq(
        "{",
        repeat(
          seq(
            $.selector_score,
            optional(",")
          )
        ),
        "}"
      ),
      seq(
        "{",
        repeat(
          seq(
            $.selector_nbt,
            optional(",")
          )
        ),
        "}"
      )
    ),
    // FIXME: This is a hack, but it allows for incorrect syntaxes.
    // Related StackOverFlow question: https://stackoverflow.com/questions/68606558/tree-sitter-match-for-similar-structures
    selector_object: $ => seq(
      "{",
      repeat(
        seq(
          choice(
            $.selector_key,
            $.nbt_object_key
          ),
          choice(":", "="),
          choice(
            $.selector_number,
            $.nbt_object_value
          ),
          /*choice(
            $.selector_score,
            $.selector_nbt
          ),*/
          optional(",")
        )
      ),
      "}"
    ),
    selector_nbt: $ => seq(
      $.nbt_object_key,
      ":",
      $.nbt_object_value
    ),
    selector_score: $ => seq(
      $.selector_score_key,
      "=",
      $.selector_score_value
    ),
    selector_score_key: $ => $.selector_key,
    selector_score_value: $ => $.selector_number,
    _namespace: $ => /[a-z_-]+:/,
    item: $ => seq(
      $._namespace,
      /[a-z_-]+/
    ),
    _item_with_extra: $ => prec.right(5, seq(
      optional($._namespace),
      /[a-z_-]+/,
      choice(
        $.item_state,
        $.item_nbt
      )
    )),
    item_nbt: $ => seq(
      token.immediate("{"),
      repeat(
        seq(
          $.nbt_object_key,
          ":",
          $.nbt_object_value,
          optional(",")
        )
      ),
      "}"
    ),
    item_state: $ => seq(
      token.immediate("["),
      repeat(
        seq(
          $.selector_key,
          "=",
          alias(choice(
            $.number,
            $.selector_key,
            $.boolean
          ), $.selector_value),
          optional(",")
        )
      ),
      "]"
    ),
    path: $ => seq(
      choice($.item, /[a-z_]+/),
      repeat1(
        token(
          seq(
            "/", /[a-z_]+/
          )
        )
      )
    ),
    container: $ => seq(
      choice($.item, /[a-z_]+/),
      repeat1(
        token(
          seq(
            ".", /[a-z_]+/
          )
        )
      )
    ),
    nbt: $ => choice(
      $.nbt_array,
      $.nbt_object
    ),
    nbt_object: $ => seq(
      "{",
      repeat(
        seq(
          $.nbt_object_key,
          ":",
          $.nbt_object_value,
          optional(",")
        )
      ),
      "}"
    ),
    nbt_array: $ => seq(
      "[",
      repeat(
        seq(
          $.nbt_object_value,
          optional(",")
        )
      ),
      "]"
    ),
    nbt_object_key: $ => choice(
      $.string,
      $.number,
      alias(/[A-Za-z][\w-]+/, $.identifier)
    ),
    nbt_object_value: $ => choice(
      $.string,
      $.nbt_number,
      $.boolean,
      $.nbt
    ),
    nbt_number: $ => seq(
      $.number,
      field("nbt_number_suffix", optional(choice("l","s","d","f","b")))
    )
  }
});
