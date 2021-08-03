execute legacy ~ ~ ~ some_command
# test
execute legacy 1 2 3 detect ~ ~ ~ some_block * some_command
# test
execute legacy ~ ~ ~ execute legacy 1 2 3 say hi
# test
execute run say hi
# err
execute run execute legacy ~ ~ ~ say hi
# err
execute legacy ~ ~ ~ execute run say hi
