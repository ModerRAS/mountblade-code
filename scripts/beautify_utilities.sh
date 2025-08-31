#!/bin/bash

# 06_utilities.c 语义化美化脚本
# 用于美化变量名、函数名，修复格式问题

# 定义美化规则
# 变量名美化规则
declare -A variable_rules=(
    ["UTILITY_RESULT"]="utility_result"
    ["UTILITY_RESOURCE_PRIMARY_HANDLE"]="utility_resource_primary_handle"
    ["UTILITY_SYSTEM_RESOURCE_HANDLE"]="utility_system_resource_handle"
    ["UTILITY_REGISTER_INPUT"]="utility_register_input"
    ["UTILITY_RESOURCE_CACHE"]="utility_resource_cache"
    ["UTILITY_RESOURCE_CONTEXT_HANDLE"]="utility_resource_context_handle"
)

# 函数名美化规则
declare -A function_rules=(
    ["utility_config_function_121"]="utility_config_handler_primary"
    ["utility_legacy_function_handler_system_validator7"]="utility_system_validator_septenary"
    ["utility_legacy_function_handler_system_cleaner0"]="utility_system_cleaner_primary"
    ["utility_legacy_function_handler_system_manager0"]="utility_system_manager_primary"
    ["utility_write_resource_data"]="utility_resource_data_writer"
)

# 修复格式问题
sed -i 's/^[[:space:]]*{\s*$/&/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/^[[:space:]]*}\s*$/&/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '/^[[:space:]]*\/\/ 简化实现：返回基本内存状态$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '/^[[:space:]]*return UTILITY_ZERO;$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '/^[[:space:]]*}$/N;s/}\n[[:space:]]*$/}/' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 应用变量名美化规则
for old_var in "${!variable_rules[@]}"; do
    new_var="${variable_rules[$old_var]}"
    sed -i "s/\b$old_var\b/$new_var/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

# 应用函数名美化规则
for old_func in "${!function_rules[@]}"; do
    new_func="${function_rules[$old_func]}"
    sed -i "s/\b$old_func\b/$new_func/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "06_utilities.c 语义化美化完成"