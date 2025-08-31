#!/bin/bash

# 美化初始化文件脚本
# 用于批量替换01_initialization.c中的函数名和变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_beautified.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 函数名替换规则
# 将FUN_18002cd40替换为system_initialize_basic
sed -i 's/FUN_18002cd40/system_initialize_basic/g' "$INPUT_FILE"

# 将FUN_18002d260替换为system_initialize_thread_pool
sed -i 's/FUN_18002d260/system_initialize_thread_pool/g' "$INPUT_FILE"

# 将FUN_18002d2a0替换为system_initialize_config_system
sed -i 's/FUN_18002d2a0/system_initialize_config_system/g' "$INPUT_FILE"

# 将FUN_18002d2e0替换为system_initialize_resource_manager
sed -i 's/FUN_18002d2e0/system_initialize_resource_manager/g' "$INPUT_FILE"

# 将FUN_18002d520替换为system_initialize_audio_system
sed -i 's/FUN_18002d520/system_initialize_audio_system/g' "$INPUT_FILE"

# 将FUN_18002dbe0替换为system_initialize_graphics_system
sed -i 's/FUN_18002dbe0/system_initialize_graphics_system/g' "$INPUT_FILE"

# 将FUN_18002dce0替换为system_initialize_network_system
sed -i 's/FUN_18002dce0/system_initialize_network_system/g' "$INPUT_FILE"

# 将FUN_180041fa0替换为system_initialize_input_system
sed -i 's/FUN_180041fa0/system_initialize_input_system/g' "$INPUT_FILE"

# 将FUN_1800435a0替换为system_initialize_script_engine
sed -i 's/FUN_1800435a0/system_initialize_script_engine/g' "$INPUT_FILE"

# 将FUN_1800435e0替换为system_initialize_physics_engine
sed -i 's/FUN_1800435e0/system_initialize_physics_engine/g' "$INPUT_FILE"

# 将FUN_180043d40替换为system_initialize_module_loader
sed -i 's/FUN_180043d40/system_initialize_module_loader/g' "$INPUT_FILE"

# 将FUN_180043f30替换为system_initialize_memory_pool
sed -i 's/FUN_180043f30/system_initialize_memory_pool/g' "$INPUT_FILE"

# 变量名替换规则
# 将param_1替换为context_ptr
sed -i 's/param_1/context_ptr/g' "$INPUT_FILE"

# 将param_2替换为config_flags
sed -i 's/param_2/config_flags/g' "$INPUT_FILE"

# 将param_3替换为thread_count
sed -i 's/param_3/thread_count/g' "$INPUT_FILE"

# 将param_4替换为memory_size
sed -i 's/param_4/memory_size/g' "$INPUT_FILE"

# 将lVar1替换为result_value
sed -i 's/lVar1/result_value/g' "$INPUT_FILE"

# 将puVar2替换为data_ptr
sed -i 's/puVar2/data_ptr/g' "$INPUT_FILE"

# 将iVar3替换为compare_result
sed -i 's/iVar3/compare_result/g' "$INPUT_FILE"

# 将plVar4替换为context_manager_ptr
sed -i 's/plVar4/context_manager_ptr/g' "$INPUT_FILE"

# 将lVar5替换为allocated_memory
sed -i 's/lVar5/allocated_memory/g' "$INPUT_FILE"

# 将puVar6替换为current_node
sed -i 's/puVar6/current_node/g' "$INPUT_FILE"

# 将puVar7替换为previous_node
sed -i 's/puVar7/previous_node/g' "$INPUT_FILE"

# 将puVar8替换为next_node
sed -i 's/puVar8/next_node/g' "$INPUT_FILE"

# 将cVar1替换为status_flag
sed -i 's/cVar1/status_flag/g' "$INPUT_FILE"

echo "代码美化完成"