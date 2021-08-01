spreadplayers ~ ~ 0 0 under 256 false @e
# spreadplayers ~ ~ 0 0 true @a
# particle minecraft:ash ~ ~ ~ ~ ~ ~ 1 1 normal
# experience add @s 1 points
# execute align xy rotated as @s in overworld positioned as @s anchored eyes facing entity @s eyes if entity @s if blocks ~ ~ ~ ~ ~ ~ ~ ~ ~ masked offset ~ ~ ~ store success block ~ ~ ~ path double 1 run experience query @s points
# effect give @s minecraft:conduit_power 10 0 false
