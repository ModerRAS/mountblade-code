#!/bin/bash

# 函数别名优化脚本
# 用于处理剩余的func_0x函数调用，替换为有意义的函数别名

echo "开始函数别名优化工作..."

# 创建函数别名映射
declare -A func_aliases=(
    ["func_0x0001808c64d0"]="TimeSystem_GetCurrentTime"
    ["func_0x0001808c6590"]="MathSystem_ScaleFactor"
    ["func_0x0001808b20c0"]="RenderingSystem_UpdateQueue"
    ["func_0x0001808fc050"]="SecuritySystem_EncryptData"
    ["func_0x00018084c3d0"]="NetworkingSystem_GetConnectionStatus"
    ["func_0x0001808bde90"]="NetworkingSystem_ConnectionPoolManager"
)

# 统计处理数量
total_processed=0
success_count=0
error_count=0

# 遍历所有C文件
find . -name "*.c" -type f | while read file; do
    if [[ -f "$file" ]]; then
        echo "处理文件: $file"
        
        # 备份原文件
        cp "$file" "$file.backup"
        
        # 替换函数调用
        for func_addr in "${!func_aliases[@]}"; do
            func_alias="${func_aliases[$func_addr]}"
            
            # 使用sed替换函数调用
            if sed -i "s/$func_addr/$func_alias/g" "$file" 2>/dev/null; then
                echo "  替换: $func_addr -> $func_alias"
                ((success_count++))
            else
                echo "  错误: 无法替换 $func_addr"
                ((error_count++))
            fi
            ((total_processed++))
        done
        
        # 移除备份文件
        rm "$file.backup"
    fi
done

echo "函数别名优化完成!"
echo "处理统计:"
echo "  总处理数: $total_processed"
echo "  成功数: $success_count"
echo "  错误数: $error_count"

# 验证处理结果
echo "验证处理结果..."
remaining_funcs=$(grep -r "func_0x" . --include="*.c" | wc -l)
echo "剩余函数地址调用: $remaining_funcs"