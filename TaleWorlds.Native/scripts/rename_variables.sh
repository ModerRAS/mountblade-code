#!/bin/bash

# 批量替换变量名的脚本
# 将DAT_和UNK_开头的变量替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native

# 创建备份（虽然要求不要备份，但为了安全起见先创建）
# cp TaleWorlds.Native.dll.c TaleWorlds.Native.dll.c.backup

# 替换变量名
sed -i 's/DAT_180a01078/entity_spawn_data/g' TaleWorlds.Native.dll.c
sed -i 's/UNK_180a00388/entity_spawn_timer/g' TaleWorlds.Native.dll.c
sed -i 's/DAT_180a01050/entity_despawn_data/g' TaleWorlds.Native.dll.c
sed -i 's/UNK_180a003a0/entity_despawn_timer/g' TaleWorlds.Native.dll.c
sed -i 's/DAT_180a01028/entity_pool_data/g' TaleWorlds.Native.dll.c
sed -i 's/DAT_180a01000/entity_update_data/g' TaleWorlds.Native.dll.c
sed -i 's/UNK_180a003d0/entity_state_data/g' TaleWorlds.Native.dll.c
sed -i 's/DAT_180a00fb0/entity_transform_data/g' TaleWorlds.Native.dll.c
sed -i 's/UNK_180a00400/entity_physics_data/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941800/object_initialize_function/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941820/object_render_function/g' TaleWorlds.Native.dll.c
sed -i 's/UNK_180a004e8/object_collision_data/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941840/object_physics_function/g' TaleWorlds.Native.dll.c

echo "变量名替换完成"