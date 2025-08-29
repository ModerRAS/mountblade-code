#!/bin/bash
# 更精确的变量名美化脚本

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 替换 unused_variable1
sed -i 's/unused_variable1;/void* deprecated_system_flag;/g' "$FILE"

# 更精确地替换带数字的变量名
sed -i 's/render_system_data1/render_system_primary_data/g' "$FILE"
sed -i 's/render_system_data2/render_system_secondary_data/g' "$FILE"
sed -i 's/game_ui_flag1/game_ui_primary_flag/g' "$FILE"
sed -i 's/game_ui_flag2/game_ui_secondary_flag/g' "$FILE"
sed -i 's/network_module_data1/network_module_primary_data/g' "$FILE"
sed -i 's/network_module_data2/network_module_secondary_data/g' "$FILE"
sed -i 's/time_system_data1/time_system_primary_data/g' "$FILE"
sed -i 's/time_system_data2/time_system_secondary_data/g' "$FILE"
sed -i 's/time_system_data3/time_system_tertiary_data/g' "$FILE"
sed -i 's/entity_despawn_data1/entity_despawn_config_data/g' "$FILE"
sed -i 's/entity_despawn_data2/entity_despawn_state_data/g' "$FILE"
sed -i 's/entity_despawn_data3/entity_despawn_timer_data/g' "$FILE"
sed -i 's/objectCreationData1/object_creation_config_data/g' "$FILE"
sed -i 's/objectCreationData2/object_creation_state_data/g' "$FILE"
sed -i 's/objectCreationData3/object_creation_timer_data/g' "$FILE"
sed -i 's/objectCreationData4/object_creation_pool_data/g' "$FILE"

# 替换引擎配置数据（更精确）
sed -i 's/engine_config_data_1/engine_config_primary_data/g' "$FILE"
sed -i 's/engine_config_data_2/engine_config_secondary_data/g' "$FILE"
sed -i 's/engine_config_data_3/engine_config_tertiary_data/g' "$FILE"
sed -i 's/engine_config_data_4/engine_config_quaternary_data/g' "$FILE"
sed -i 's/engine_config_data_5/engine_config_fifth_data/g' "$FILE"
sed -i 's/engine_config_data_6/engine_config_sixth_data/g' "$FILE"
sed -i 's/engine_config_data_7/engine_config_seventh_data/g' "$FILE"
sed -i 's/engine_config_data_8/engine_config_eighth_data/g' "$FILE"

# 替换引擎运行时数据
sed -i 's/engine_runtime_data_1/engine_runtime_primary_data/g' "$FILE"
sed -i 's/engine_runtime_data_2/engine_runtime_secondary_data/g' "$FILE"
sed -i 's/engine_runtime_data_3/engine_runtime_tertiary_data/g' "$FILE"
sed -i 's/engine_runtime_data_4/engine_runtime_quaternary_data/g' "$FILE"

# 替换引擎渲染数据
sed -i 's/engine_render_data_1/engine_render_primary_data/g' "$FILE"
sed -i 's/engine_render_data_2/engine_render_secondary_data/g' "$FILE"
sed -i 's/engine_render_data_3/engine_render_tertiary_data/g' "$FILE"

echo "精确变量名美化完成"