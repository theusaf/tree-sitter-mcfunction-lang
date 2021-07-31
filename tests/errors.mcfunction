/give @s diamond_pickaxe 1
scoreboard players add @s objective 0
tell example_1st_player_issue hi
execute if entity @e[scores=1,team=,advancements={}] align x run summon minecraft:area_effect_cloud ~ ~ ~ {}
oh no everything is green!!
say help!
give @[tag=foo] yay_no_crash 1
loot spawn ~ ~ ~ loot minecraft:blocks/minecraft:piston_extension
