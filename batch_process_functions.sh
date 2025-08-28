#!/bin/bash

# 高频函数地址调用批量处理脚本
# 用于处理剩余的大量函数地址调用

set -e

echo "开始高频函数地址调用批量处理..."

# 统计初始状态
initial_count=$(grep -r "func_0x" . --include="*.c" | wc -l)
echo "初始函数地址调用数量: $initial_count"

# 分析最高频的函数调用
echo "分析最高频的函数调用..."
grep -r "func_0x" . --include="*.c" | cut -d: -f2 | sort | uniq -c | sort -nr | head -20 > /tmp/top_functions.txt

echo "最高频函数调用:"
cat /tmp/top_functions.txt

# 创建备份目录
backup_dir="backups/batch_function_aliases_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$backup_dir"

# 定义更多函数别名（基于高频调用分析）
declare -A function_aliases=(
    # 系统核心函数（最高频）
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
    ["func_0x0001808fc050"]="SystemSecurity_ValidateParameter"
    ["func_0x00018084c3d0"]="NetworkingSystem_GetConnectionStatus"
    ["func_0x0001808bde90"]="NetworkingSystem_ConnectionPoolManager"
    ["func_0x0001808c6500"]="MathFunction_FloatScale"
    ["func_0x0001808b22c0"]="RenderingSystem_AllocationManager"
    ["func_0x0001808b3060"]="RenderingSystem_ContextValidator"
    ["func_0x0001808b2d60"]="RenderingSystem_TransformProcessor"
    ["func_0x0001808b1d10"]="RenderingSystem_ParameterSetter"
    ["func_0x0001808b4e20"]="RenderingSystem_StateValidator"
    ["func_0x000180862910"]="RenderingSystem_ContextProcessor"
    ["func_0x0001808b5a30"]="RenderingSystem_DataHandler"
    ["func_0x000180740d90"]="RenderingSystem_SyncManager"
    ["func_0x0001808b4d60"]="RenderingSystem_QueueProcessor"
    ["func_0x0001808b5780"]="RenderingSystem_QueueManager"
    ["func_0x0001808bef30"]="RenderingSystem_QueueCleaner"
    ["func_0x0001808b2c50"]="RenderingSystem_StatusChecker"
)

# 批量处理函数
processed_count=0
for func_addr in "${!function_aliases[@]}"; do
    alias_name="${function_aliases[$func_addr]}"
    
    echo "处理函数: $func_addr -> $alias_name"
    
    # 查找包含此函数地址的文件
    files_with_func=$(grep -l "$func_addr" . --include="*.c" -r 2>/dev/null || true)
    
    if [ -n "$files_with_func" ]; then
        # 统计此函数的调用次数
        func_count=$(grep -r "$func_addr" . --include="*.c" | wc -l)
        echo "  调用次数: $func_count"
        
        for file in $files_with_func; do
            # 备份文件（仅备份一次）
            if [ ! -f "$backup_dir/$(basename "$file")" ]; then
                cp "$file" "$backup_dir/$(basename "$file")"
            fi
            
            # 替换函数调用
            sed -i "s/$func_addr/$alias_name/g" "$file"
            
            processed_count=$((processed_count + 1))
        done
    fi
done

# 统计处理后的状态
final_count=$(grep -r "func_0x" . --include="*.c" | wc -l)
actual_processed=$((initial_count - final_count))

echo "批量处理完成:"
echo "  初始数量: $initial_count"
echo "  实际处理: $actual_processed"
echo "  剩余数量: $final_count"
echo "  处理文件数: $processed_count"
echo "  备份位置: $backup_dir"

# 生成处理报告
report_file="batch_function_aliases_report_$(date +%Y%m%d_%H%M%S).txt"
echo "批量函数地址调用处理报告" > "$report_file"
echo "处理时间: $(date)" >> "$report_file"
echo "初始函数地址调用数量: $initial_count" >> "$report_file"
echo "实际处理数量: $actual_processed" >> "$report_file"
echo "剩余数量: $final_count" >> "$report_file"
echo "处理文件数: $processed_count" >> "$report_file"
echo "" >> "$report_file"
echo "处理的函数别名映射:" >> "$report_file"
for func_addr in "${!function_aliases[@]}"; do
    echo "  $func_addr -> ${function_aliases[$func_addr]}" >> "$report_file"
done

echo "处理报告已生成: $report_file"

# 如果还有剩余函数，显示前10个最常用的
if [ $final_count -gt 0 ]; then
    echo ""
    echo "剩余最常用的函数调用:"
    grep -r "func_0x" . --include="*.c" | cut -d: -f2 | sort | uniq -c | sort -nr | head -10
fi