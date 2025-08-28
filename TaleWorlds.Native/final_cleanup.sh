#!/bin/bash

# 最终清理脚本 - 处理剩余的undefined类型
# 处理变量名中的undefined和defundefined类型

echo "开始最终清理undefined类型..."

# 统计需要处理的文件数量
total_files=$(find pretty/ -name "*.c" -exec grep -l "undefined" {} \; | wc -l)
echo "发现 $total_files 个文件需要处理"

# 处理每个文件
count=0
for file in $(find pretty/ -name "*.c" -exec grep -l "undefined" {} \;); do
    count=$((count + 1))
    echo "处理文件 $count/$total_files: $file"
    
    # 创建临时文件
    temp_file="${file}.tmp"
    
    # 处理各种undefined类型
    sed -e 's/defundefined /uint64_t /g' \
        -e 's/undefined1 /uint8_t /g' \
        -e 's/undefined2 /uint16_t /g' \
        -e 's/undefined3 /uint32_t /g' \
        -e 's/undefined4 /uint32_t /g' \
        -e 's/undefined8 /uint64_t /g' \
        -e 's/undefined7 /uint64_t /g' \
        -e 's/temp_undefined/temp_var/g' \
        -e 's/未定义类型临时变量/临时变量/g' \
        -e 's/uStack[0-9]*[0-9a-fA-F]*_undefined/uStack/g' \
        -e 's/puVar[0-9]*/puVar/g' \
        -e 's/DAT_[0-9a-fA-F]*/DAT/g' \
        "$file" > "$temp_file"
    
    # 替换文件
    mv "$temp_file" "$file"
    
    echo "✓ 已处理: $file"
done

echo "最终清理完成！"
echo "总共处理了 $count 个文件"

# 验证清理结果
remaining=$(find pretty/ -name "*.c" -exec grep -c "undefined" {} \; | awk '{sum += $1} END {print sum}')
echo "剩余 undefined 类型数量: $remaining"

# 显示剩余的undefined类型（如果有）
if [ "$remaining" -gt 0 ]; then
    echo "剩余的undefined类型分布："
    find pretty/ -name "*.c" -exec grep -n "undefined" {} \; | head -10
fi