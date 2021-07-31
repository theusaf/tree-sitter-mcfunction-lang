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
    selector: $ => prec.right(seq(
      token(
        seq(
          "@",
          choice(
            "p", "a", "e", "s", "r"
          )
        )
      ),
      repeat(
        $.selector_options
      )
    )),
    selector_options: $ => seq(
      "[",
      $.selector_key,
      "=",
      $.selector_value,
      "]",
      optional(",")
    ),
    selector_key: $ => /[a-z_-]+/,
    selector_value: $ => choice(
      $.item,
      $.path,
      /[a-z_-]+/,
      seq(
        $.number,
        ".."
      ),
      seq(
        "..",
        $.number
      ),
      seq(
        $.number,
        "..",
        $.number
      ),
      $.number,
      $.boolean,
      $.nbt
    ),
    _namespace: $ => /[a-z_-]+:/,
    item: $ => seq(
      $._namespace,
      /[a-z_-]+/
    ),
    path: $ => seq(
      choice($.item, /[a-z_]+/),
      repeat1(
        token("/", /[a-z_]/)
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
