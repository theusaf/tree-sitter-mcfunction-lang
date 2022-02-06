give @a[team=,test=true] diamond 1
setblock ~ ~ ~ chest[facing=north]{nbt:"yes"}
setblock ~ ~ ~ minecraft:chest[facing=north]{nbt:"yes"}
data modify block ~ ~ ~ my.path[0]."to modify" insert 0 from block ~ ~ ~ my.path[0]."to get"
