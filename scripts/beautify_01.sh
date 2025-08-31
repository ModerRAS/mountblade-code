#!/bin/bash

# 01_initialization.c 文件语义化美化脚本
# 简化实现：保持代码语义不变，仅进行语义化美化

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/dev/shm/mountblade-code/scripts/temp_beautify_01.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 函数名美化
sed -i 's/system_init_anonymous_function_/system_init_subsystem_/g' "$INPUT_FILE"
sed -i 's/system_init_placeholder_function_auto/system_init_subsystem_complete/g' "$INPUT_FILE"

# 变量名美化
sed -i 's/system_validation_flag/system_init_validation_flag/g' "$INPUT_FILE"
sed -i 's/buffer_pointer/system_init_buffer_pointer/g' "$INPUT_FILE"
sed -i 's/comparison_result/system_init_comparison_result/g' "$INPUT_FILE"
sed -i 's/system_context_base_address/system_init_context_base_address/g' "$INPUT_FILE"
sed -i 's/initialization_status/system_init_status/g' "$INPUT_FILE"
sed -i 's/module_data_address/system_init_module_address/g' "$INPUT_FILE"
sed -i 's/config_data_pointer/system_init_config_pointer/g' "$INPUT_FILE"
sed -i 's/system_temp_data_ptr/system_init_temp_pointer/g' "$INPUT_FILE"
sed -i 's/stack_frame_address/system_init_stack_frame/g' "$INPUT_FILE"
sed -i 's/stack_memory_pointer/system_init_stack_memory/g' "$INPUT_FILE"
sed -i 's/system_init_stack_counter/system_init_stack_counter_current/g' "$INPUT_FILE"

# 删除重复的函数声明
sed -i '/^void system_init_placeholder_function_auto(void)$/d' "$INPUT_FILE"
sed -i '/^void system_init_subsystem_complete(void)$/N;/system_init_subsystem_complete.*system_init_subsystem_complete/d' "$INPUT_FILE"

# 修复函数声明格式
sed -i 's/^void system_init_subsystem_complete(void)$/\/**\n * @brief 系统初始化完成函数\n * \n * 原本实现应该为每个不同的初始化阶段创建特定的函数。\n * \n * @note 这是简化实现，保持代码语义不变，仅进行语义化美化\n *\/\nvoid system_init_subsystem_complete(void)/g' "$INPUT_FILE"

echo "01_initialization.c 文件语义化美化完成"