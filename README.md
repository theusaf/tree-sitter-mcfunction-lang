# tree-sitter-mcfunction-lang
A tree sitter grammar for Minecraft functions

Used in the [mcfunction-lang](https://atom.io/packages/mcfunction-lang) Atom package.

## Examples
```mcfunction
say hi
```
```
command
> command_name
> identifier
```
---
```mcfunction
give @a[tag=foo] diamond_sword{Damage: 100} 128
```
```
command
> command_name
> selector
  > selector_option_section
    > selector_option
      > selector_key
      > selector_value
  > item
    > identifier
    > item_nbt
      > nbt_object
        > nbt_object_key
          > nbt_identifier
        > nbt_object_value
          > nbt_number
            > number
> number
```
---
```mcfunction
setblock ~ ~ ~ chest[facing=north]{List:[{foo:"bar"}]}
```
```
command
> command_name
> location
  > x: coordinate
  > y: coordinate
  > z: coordinate
> item
  > identifier
  > item_state
    > state_key
    > state_value
  > item_nbt
    > nbt_object
      > nbt_object_key
        > nbt_identifier
      > nbt_object_value
        > nbt
          > nbt_array
            > nbt_object_value
              > nbt
                > nbt_object
                  > nbt_object_key
                    > nbt_identifier
                  > nbt_object_value
                    > string
```
