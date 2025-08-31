#!/bin/bash

# 美化06_utilities.c文件中剩余的军事字母代码函数名
# 简化实现：仅将军事字母代码函数名替换为语义化名称
# 原本实现：完全重构工具系统所有命名体系

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/tmp/utilities_beautified_3.c"

# 创建函数名映射数组
declare -A FUNCTION_MAPPINGS

# 系统阶段函数
FUNCTION_MAPPINGS["utility_unwind_system_phase_zero_echo"]="utility_unwind_function_system_phase_zero_five"
FUNCTION_MAPPINGS["utility_unwind_system_phase_zero_foxtrot"]="utility_unwind_function_system_phase_zero_six"
FUNCTION_MAPPINGS["utility_unwind_system_phase_one_alpha"]="utility_unwind_function_system_phase_one_one"
FUNCTION_MAPPINGS["utility_unwind_system_phase_one_bravo"]="utility_unwind_function_system_phase_one_two"

# 内存阶段函数
FUNCTION_MAPPINGS["utility_unwind_system_memory_phase_charlie"]="utility_unwind_function_memory_phase_three"
FUNCTION_MAPPINGS["utility_unwind_system_memory_phase_delta"]="utility_unwind_function_memory_phase_four"
FUNCTION_MAPPINGS["utility_unwind_system_memory_phase_echo"]="utility_unwind_function_memory_phase_five"
FUNCTION_MAPPINGS["utility_unwind_system_memory_phase_foxtrot"]="utility_unwind_function_memory_phase_six"

# 高级函数
FUNCTION_MAPPINGS["utility_unwind_advanced_function_system_init_bravo"]="utility_unwind_function_advanced_system_init_two"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_system_init_delta"]="utility_unwind_function_advanced_system_init_four"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_system_init_echo"]="utility_unwind_function_advanced_system_init_five"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_system_init_foxtrot"]="utility_unwind_function_advanced_system_init_six"

# 内存处理函数
FUNCTION_MAPPINGS["utility_unwind_advanced_function_memory_handler_alpha"]="utility_unwind_function_advanced_memory_handler_one"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_memory_handler_bravo"]="utility_unwind_function_advanced_memory_handler_two"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_memory_handler_delta"]="utility_unwind_function_advanced_memory_handler_four"
FUNCTION_MAPPINGS["utility_unwind_advanced_function_memory_handler_foxtrot"]="utility_unwind_function_advanced_memory_handler_six"

# 复制原文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行替换
for old_name in "${!FUNCTION_MAPPINGS[@]}"; do
    new_name="${FUNCTION_MAPPINGS[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$TEMP_FILE"
done

# 替换回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "剩余军事字母代码函数名美化完成"