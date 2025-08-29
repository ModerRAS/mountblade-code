#!/bin/bash

# 美化18094系列函数名
# 将FUN_18094开头的函数名替换为有意义的名称

sed -i 's/FUN_180942660/game_character_update_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942750/game_character_spawn_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942790/game_character_despawn_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_1809427d0/game_character_move_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_1809427f0/game_character_attack_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942810/game_character_defend_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942890/game_character_skill_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_1809428e0/game_character_inventory_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942930/game_character_equip_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180942a20/game_character_unequip_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_1809429f0/game_character_levelup_function/g' TaleWorlds.Native.dll.c

echo "18094系列函数名美化完成"