#!/bin/bash

# 为02_core_engine.c文件中的函数调用添加重命名注释

# 定义函数映射
declare -A function_map=(
    ["FUN_1800590b0"]="AllocateSystemMemoryBlock"
    ["FUN_180059250"]="ProcessMemoryAllocationRange"
    ["FUN_180059300"]="ResizeMemoryAllocation"
    ["FUN_1800596a0"]="ProcessBufferDataBlock"
    ["FUN_180059780"]="CopyMemoryBlockData"
)

# 处理每个函数
for func in "${!function_map[@]}"; do
    new_name="${function_map[$func]}"
    
    # 使用sed替换函数调用并添加注释
    sed -i "s/$func(/$new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
    
    # 在文件开头添加函数重命名注释
    if ! grep -q "原始函数名为$func，现已重命名为$new_name" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c; then
        sed -i "1i\\/**\\n * 原始函数名为$func，现已重命名为$new_name\\n *\/\\n" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
    fi
done

echo "函数重命名完成"