#!/bin/bash

# 批量替换FUN_函数名的脚本
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"

# 替换一些常见的FUN_函数名为更有意义的名称
sed -i 's/FUN_180941280/engine_initialize_core/g' "$FILE"
sed -i 's/FUN_18094136c/engine_setup_subsystem/g' "$FILE"
sed -i 's/FUN_180941383/engine_configure_subsystem/g' "$FILE"
sed -i 's/FUN_18094139f/engine_initialize_component/g' "$FILE"
sed -i 's/FUN_1809413d5/engine_check_status/g' "$FILE"
sed -i 's/FUN_1809413ed/engine_start_subsystem/g' "$FILE"
sed -i 's/FUN_180941419/engine_stop_subsystem/g' "$FILE"
sed -i 's/FUN_180941445/engine_get_subsystem_info/g' "$FILE"
sed -i 's/FUN_180941486/engine_update_subsystem/g' "$FILE"
sed -i 's/FUN_1809414b5/engine_cleanup_subsystem/g' "$FILE"
sed -i 's/FUN_180941920/module_initialize_function/g' "$FILE"
sed -i 's/FUN_1809419e0/module_load_function/g' "$FILE"
sed -i 's/FUN_180941a30/module_unload_function/g' "$FILE"
sed -i 's/FUN_180941ad0/module_configure_function/g' "$FILE"
sed -i 's/FUN_180941b20/module_start_function/g' "$FILE"
sed -i 's/FUN_180941d50/module_stop_function/g' "$FILE"
sed -i 's/FUN_180941da0/module_update_function/g' "$FILE"
sed -i 's/FUN_180941dd0/module_cleanup_function/g' "$FILE"
sed -i 's/FUN_180941e00/module_get_status_function/g' "$FILE"

echo "函数名替换完成"