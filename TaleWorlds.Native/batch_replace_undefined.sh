#!/bin/bash

# 批量替换 undefined 类型的脚本
# 用于完成代码美化任务

echo "开始批量替换 undefined 类型..."

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
    
    # 替换 undefined 类型
    sed -e 's/undefined1/int8_t/g' \
        -e 's/undefined2/int16_t/g' \
        -e 's/undefined4/int32_t/g' \
        -e 's/undefined8/uint64_t/g' \
        -e 's/undefined\*/void\*/g' \
        -e 's/undefined \*/void \*/g' \
        -e 's/undefined$/void/g' \
        "$file" > "$temp_file"
    
    # 替换文件
    mv "$temp_file" "$file"
    
    echo "✓ 已处理: $file"
done

echo "批量替换完成！"
echo "总共处理了 $count 个文件"

# 验证替换结果
remaining=$(find pretty/ -name "*.c" -exec grep -c "undefined" {} \; | awk '{sum += $1} END {print sum}')
echo "剩余 undefined 类型数量: $remaining"