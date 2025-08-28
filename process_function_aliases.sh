#!/bin/bash

# 函数地址调用语义化替换脚本
# 用于将 func_0x... 调用替换为有意义的函数别名

set -e

echo "开始处理函数地址调用语义化替换..."

# 统计初始状态
initial_count=$(grep -r "func_0x" . --include="*.c" | wc -l)
echo "初始函数地址调用数量: $initial_count"

# 定义高频函数地址调用的语义化别名
declare -A function_aliases=(
    ["func_0x00018064e870"]="SystemExceptionManager_HandleException"
    ["func_0x00018015c3f0"]="ArrayDataProcessor_CopyData"
    ["func_0x0001800a1de0"]="MemoryAllocator_Allocate"
    ["func_0x00018088c530"]="StringDataProcessor_Convert"
    ["func_0x00018074b800"]="BufferManager_ProcessData"
    ["func_0x00018074b7d0"]="BufferManager_Initialize"
    ["func_0x00018074bda0"]="BufferManager_ResizeBuffer"
    ["func_0x00018088c590"]="StringDataProcessor_ConvertWide"
    ["func_0x0001802eeba0"]="SystemRuntime_Initialize"
    ["func_0x0001800a0c30"]="MemoryAllocator_GetSize"
    ["func_0x0001808c64d0"]="MathFunction_FloatValue"
    ["func_0x0001808c6590"]="MathFunction_FloatOperation"
    ["func_0x0001808b20c0"]="RenderingSystem_ParameterProcessor"
    ["func_0001808fc050"]="SystemSecurity_ValidateParameter"
    ["func_0x00018084c3d0"]="NetworkingSystem_GetConnectionStatus"
    ["func_0x0001808bde90"]="NetworkingSystem_ConnectionPoolManager"
)

# 创建备份目录
backup_dir="backups/function_aliases_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$backup_dir"

# 处理每个函数别名
for func_addr in "${!function_aliases[@]}"; do
    alias_name="${function_aliases[$func_addr]}"
    
    echo "处理函数: $func_addr -> $alias_name"
    
    # 查找包含此函数地址的文件
    files_with_func=$(grep -l "$func_addr" . --include="*.c" -r)
    
    if [ -n "$files_with_func" ]; then
        for file in $files_with_func; do
            # 备份文件
            cp "$file" "$backup_dir/$(basename "$file")"
            
            # 替换函数调用
            sed -i "s/$func_addr/$alias_name/g" "$file"
            
            echo "  已处理文件: $file"
        done
    fi
done

# 统计处理后的状态
final_count=$(grep -r "func_0x" . --include="*.c" | wc -l)
processed_count=$((initial_count - final_count))

echo "函数地址调用处理完成:"
echo "  初始数量: $initial_count"
echo "  处理数量: $processed_count"
echo "  剩余数量: $final_count"
echo "  备份位置: $backup_dir"

# 生成处理报告
report_file="function_aliases_report_$(date +%Y%m%d_%H%M%S).txt"
echo "函数地址调用处理报告" > "$report_file"
echo "处理时间: $(date)" >> "$report_file"
echo "初始函数地址调用数量: $initial_count" >> "$report_file"
echo "处理数量: $processed_count" >> "$report_file"
echo "剩余数量: $final_count" >> "$report_file"
echo "" >> "$report_file"
echo "处理的函数别名映射:" >> "$report_file"
for func_addr in "${!function_aliases[@]}"; do
    echo "  $func_addr -> ${function_aliases[$func_addr]}" >> "$report_file"
done

echo "处理报告已生成: $report_file"