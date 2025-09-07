#!/bin/bash

# 批量美化06_utilities.c中的Unwind_函数
# 这个脚本将批量替换Unwind_函数名为有意义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"

# 函数映射表 - 将Unwind_函数名映射为有意义的名称
declare -A function_map=(
    ["Unwind_180908730"]="IterateAndInvokeExceptionHandlers"
    ["Unwind_180908750"]="DestroyMutexResourcesDuplicate"
    ["Unwind_180908760"]="DestroyMutexResourceAtOffset60"
    ["Unwind_180908770"]="IterateAndInvokeExceptionHandlersAtOffset60"
    ["Unwind_180908780"]="InvokeExceptionHandlerAtOffset30"
    ["Unwind_180908790"]="InvokeExceptionHandlerAtOffset38"
    ["Unwind_1809087a0"]="InvokeExceptionHandlerAtOffset40"
    ["Unwind_1809087b0"]="InvokeExceptionHandlerAtOffset48"
    ["Unwind_1809087c0"]="InvokeExceptionHandlerAtOffset50"
    ["Unwind_1809087d0"]="InvokeExceptionHandlerAtOffset58"
    ["Unwind_1809087e0"]="InvokeExceptionHandlerAtOffset60"
    ["Unwind_1809087f0"]="InvokeExceptionHandlerAtOffset68"
    ["Unwind_180908800"]="InvokeExceptionHandlerAtOffset70"
    ["Unwind_180908810"]="InvokeExceptionHandlerAtOffset78"
    ["Unwind_180908820"]="InvokeExceptionHandlerAtOffset80"
    ["Unwind_180908830"]="InvokeExceptionHandlerAtOffset88"
    ["Unwind_180908850"]="InvokeExceptionHandlerAtOffset90"
    ["Unwind_180908860"]="InvokeExceptionHandlerAtOffset98"
    ["Unwind_180908870"]="InvokeExceptionHandlerAtOffsetA0"
    ["Unwind_180908880"]="InvokeExceptionHandlerAtOffsetA8"
)

# 为每个函数添加注释和替换函数名
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    
    echo "Processing function: $old_name -> $new_name"
    
    # 查找函数定义的位置
    line_number=$(grep -n "^void $old_name" "$FILE_PATH" | cut -d: -f1)
    
    if [ -n "$line_number" ]; then
        echo "Found function at line: $line_number"
        
        # 创建临时文件
        temp_file=$(mktemp)
        
        # 在函数定义前添加注释
        sed -i "${line_number}i\\/**\\n * @brief ${new_name//_/ }\\n * \\n * 美化的函数，原始名称: ${old_name}\\n * \\n * @note 原始函数名：${old_name}\\n */" "$FILE_PATH"
        
        # 替换函数名
        sed -i "s/void $old_name(/void $new_name(/g" "$FILE_PATH"
        
        echo "Updated function: $old_name -> $new_name"
    fi
done

echo "Batch processing completed!"