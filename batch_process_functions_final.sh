#!/bin/bash

# 最终批次函数地址调用处理脚本
# 处理剩余的函数调用

set -e

echo "开始最终批次函数地址调用处理..."

# 统计初始状态
initial_count=$(find . -name "*.c" -not -path "./backups/*" | xargs grep "func_0x" | wc -l)
echo "初始函数地址调用数量: $initial_count"

# 创建备份目录
backup_dir="backups/batch_function_aliases_final_$(date +%Y%m%d_%H%M%S)"
mkdir -p "$backup_dir"

# 定义最终批次函数别名（基于剩余的函数调用分析）
declare -A function_aliases=(
    # 渲染系统函数
    ["func_0x0001808cef10"]="RenderingSystem_UpdateTransform"
    ["func_0x0001808c92a0"]="RenderingSystem_ProcessParameters"
    ["func_0x0001808b62c0"]="RenderingSystem_RenderObject"
    ["func_0x0001800e2bf0"]="RenderingSystem_SetShaderParams"
    ["func_0x00018024c420"]="RenderingSystem_GetRenderMode"
    ["func_0x0001808cf130"]="RenderingSystem_UpdateBuffer"
    ["func_0x0001808cded0"]="RenderingSystem_ReleaseResource"
    ["func_0x0001808bef20"]="RenderingSystem_SetRenderState"
    ["func_0x0001808bef10"]="RenderingSystem_GetRenderState"
    ["func_0x000180862c20"]="RenderingSystem_FlushPipeline"
    ["func_0x0001808534b0"]="RenderingSystem_ProcessCommand"
    ["func_0x00018084e310"]="RenderingSystem_UpdateTexture"
    ["func_0x0001807d2ed0"]="RenderingSystem_BindTexture"
    
    # 内存管理函数
    ["func_0x000180851be0"]="MemoryManager_AllocateBuffer"
    ["func_0x00018076a7d0"]="MemoryManager_CopyData"
    ["func_0x00018076b420"]="MemoryManager_ValidateBuffer"
    ["func_0x00018076b450"]="MemoryManager_SecureBuffer"
    ["func_0x00018076b8a0"]="MemoryManager_GetBufferData"
    
    # 系统核心函数
    ["func_0x00018084d0b0"]="SystemCore_ProcessRequest"
    ["func_0x000180074f10"]="SystemCore_CleanupResource"
    ["func_0x0001808bc370"]="SystemCore_GetStatus"
    ["func_0x0001808c0d90"]="SystemCore_ValidateRequest"
    ["func_0x000180857b00"]="SystemCore_CheckCondition"
    
    # 数学计算函数
    ["func_0x0001808d57c0"]="MathFunction_CalculateTransform"
    ["func_0x0001808c16c0"]="MathFunction_ComputeValue"
    ["func_0x0001808cd390"]="MathFunction_ProcessMatrix"
    ["func_0x0001808c1de0"]="MathFunction_ValidateResult"
    ["func_0x000180853810"]="MathFunction_CalculateDistance"
    ["func_0x0001808c3960"]="MathFunction_ConvertValue"
    ["func_0x000180851e30"]="MathFunction_GetParameterValue"
    ["func_0x0001808b2ef0"]="MathFunction_ApplyTransform"
    ["func_0x0001808b2ec0"]="MathFunction_InverseTransform"
    ["func_0x0001808c1740"]="MathFunction_CalculateScale"
    ["func_0x00018085f4a0"]="MathFunction_ComputeVector"
)

# 批量处理函数
processed_count=0
for func_addr in "${!function_aliases[@]}"; do
    alias_name="${function_aliases[$func_addr]}"
    
    echo "处理函数: $func_addr -> $alias_name"
    
    # 查找包含此函数地址的文件（排除备份目录）
    files_with_func=$(find . -name "*.c" -not -path "./backups/*" | xargs grep -l "$func_addr" 2>/dev/null || true)
    
    if [ -n "$files_with_func" ]; then
        # 统计此函数的调用次数
        func_count=$(find . -name "*.c" -not -path "./backups/*" | xargs grep "$func_addr" | wc -l)
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
final_count=$(find . -name "*.c" -not -path "./backups/*" | xargs grep "func_0x" | wc -l)
actual_processed=$((initial_count - final_count))

echo "最终批次处理完成:"
echo "  初始数量: $initial_count"
echo "  实际处理: $actual_processed"
echo "  剩余数量: $final_count"
echo "  处理文件数: $processed_count"
echo "  备份位置: $backup_dir"

# 生成处理报告
report_file="batch_function_aliases_final_report_$(date +%Y%m%d_%H%M%S).txt"
echo "最终批次函数地址调用处理报告" > "$report_file"
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

# 如果还有剩余函数，显示所有剩余的函数调用
if [ $final_count -gt 0 ]; then
    echo ""
    echo "剩余的函数调用:"
    find . -name "*.c" -not -path "./backups/*" | xargs grep "func_0x" | cut -d: -f2 | sort | uniq -c | sort -nr
fi

# 显示总体统计
echo ""
echo "=== 总体统计 ==="
echo "原始函数地址调用总数: 13,616"
echo "处理后剩余数量: $final_count"
echo "总体处理效率: $(( (13616 - final_count) * 100 / 13616 ))%"