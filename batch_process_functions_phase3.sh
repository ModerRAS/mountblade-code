#!/bin/bash

# 第三批函数地址调用处理脚本
# 处理剩余的高频函数调用

set -e

echo "开始第三批函数地址调用处理..."

# 统计初始状态
initial_count=$(grep -r "func_0x" . --include="*.c" | wc -l)
echo "初始函数地址调用数量: $initial_count"

# 创建备份目录
backup_dir="backups/batch_function_aliases_phase3_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$backup_dir"

# 定义第三批函数别名（基于剩余的高频调用分析）
declare -A function_aliases=(
    ["func_0x00018074bda0"]="BufferManager_MigrateMetadata"
    ["func_0x00018076b690"]="BufferManager_ValidateRange"
    ["func_0x0001808682c0"]="SystemRuntime_GetContext"
    ["func_0x000180855b70"]="SystemDataResolver_GetField"
    ["func_0x0001808676a0"]="RenderingSystem_ProcessTransform"
    ["func_0x0001808c5700"]="SystemTimer_GetCurrentTime"
    ["func_0x00018076b320"]="SystemMemory_GetAllocationInfo"
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

echo "第三批处理完成:"
echo "  初始数量: $initial_count"
echo "  实际处理: $actual_processed"
echo "  剩余数量: $final_count"
echo "  处理文件数: $processed_count"
echo "  备份位置: $backup_dir"

# 生成处理报告
report_file="batch_function_aliases_phase3_report_$(date +%Y%m%d_%H%M%S).txt"
echo "第三批函数地址调用处理报告" > "$report_file"
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