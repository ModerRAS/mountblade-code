#!/bin/bash

# 批量替换Unwind_函数的脚本
# 这个脚本将Unwind_函数重命名为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义函数映射
declare -A function_map=(
    ["Unwind_1809075f0"]="CleanupExceptionHandlerStack"
    ["Unwind_180907610"]="ResetResourceHandlerContext"
    ["Unwind_180907620"]="ClearMemoryAllocationContext"
    ["Unwind_180907630"]="ReleaseThreadSynchronizationLock"
    ["Unwind_180907640"]="InitializeResourceCleanupHandler"
    ["Unwind_180907670"]="RegisterResourceCleanupCallback"
)

# 遍历所有函数映射并执行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    
    # 使用sed替换函数定义和调用
    sed -i "s/\b${old_name}\b/${new_name}/g" 06_utilities.c
    
    echo "已替换: ${old_name} -> ${new_name}"
done

echo "批量替换完成"