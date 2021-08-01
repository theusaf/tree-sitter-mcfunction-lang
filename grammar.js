module.exports = grammar({
  name: "mcfunction",
  rules: {
    root: $ => repeat(
      choice(
        $.command,
        $.comment
      )
    ),
    comment: $ => /#.*/,
    command: $ => prec.right(seq(
      field("command_name", $.identifier),
      repeat(
        choice(
          $.identifier,
          $.number,
          $.location,
          $.rotation,
          $.boolean,
          $.string,
          $.selector,
          $.item,
          $.path,
          $.container,
          $.nbt
        )
      ),
      "\n"
    )),
    identifier: $ => /[A-Za-z][\w-]+/,
    number: $ => prec(1, /-?\d+(\.\d+)?/),
    boolean: $ => choice(
      "true",
      "false"
    ),
    coordinate: $ => choice(
      $.number,
      "~"
    ),
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
      token(
        seq(
          "@",
          choice(
            "p", "a", "e", "s", "r"
          )
        )
      ),
      optional(
        seq(
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
        )
      ),
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
      $.selector_key,
      $.selector_number,
      $.number,
      $.boolean,
      $.selector_object
    ),
    selector_number: $ => prec.right(1, choice(
      seq(
        "..",
        $.number
      ),
      seq(
        $.number,
        "..",
        $.number
      ),
      seq(
        $.number,
        ".."
      ),
      $.number
    )),
    // FIXME: This is a hack, but it allows for incorrect syntaxes.
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
      field("selector_score_key", $.selector_key),
      "=",
      field("selector_score_value", $.selector_number)
    ),
    _namespace: $ => /[a-z_-]+:/,
    item: $ => seq(
      $._namespace,
      $.selector_key
    ),
    path: $ => seq(
      choice($.item, /[a-z_]+/),
      repeat1(
        token("/", /[a-z_]/)
      )
    ),
    container: $ => seq(
      choice($.item, /[a-z_]+/),
      repeat1(
        token(".", /[a-z_]/)
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
      $.identifier
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
