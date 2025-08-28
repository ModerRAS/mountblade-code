#!/bin/bash

# 批量处理longlong/ulonglong类型优化脚本
# 处理剩余的1658个文件

echo "开始批量处理longlong/ulonglong类型优化..."
echo "处理时间: $(date)"
echo "剩余文件数: 1658"

# 创建处理日志
LOG_FILE="longlong_processing_log.txt"
echo "longlong/ulonglong类型处理日志 - $(date)" > $LOG_FILE

# 计数器
processed=0
replaced_longlong=0
replaced_ulonglong=0

# 查找所有包含longlong或ulonglong的文件
files=$(find . -name "*.c" -type f -exec grep -l "longlong\|ulonglong" {} \;)

for file in $files; do
    if [ -f "$file" ]; then
        echo "处理文件: $file" >> $LOG_FILE
        
        # 统计替换次数
        longlong_count=$(grep -o "longlong" "$file" | wc -l)
        ulonglong_count=$(grep -o "ulonglong" "$file" | wc -l)
        
        echo "  - 发现 longlong: $longlong_count 个" >> $LOG_FILE
        echo "  - 发现 ulonglong: $ulonglong_count 个" >> $LOG_FILE
        
        # 执行替换
        sed -i 's/\blonglong\b/int64_t/g' "$file"
        sed -i 's/\bulonglong\b/uint64_t/g' "$file"
        
        # 验证替换结果
        remaining_longlong=$(grep -o "longlong" "$file" | wc -l)
        remaining_ulonglong=$(grep -o "ulonglong" "$file" | wc -l)
        
        echo "  - 替换后剩余 longlong: $remaining_longlong 个" >> $LOG_FILE
        echo "  - 替换后剩余 ulonglong: $remaining_ulonglong 个" >> $LOG_FILE
        echo "  - 处理完成" >> $LOG_FILE
        echo "" >> $LOG_FILE
        
        # 更新计数器
        processed=$((processed + 1))
        replaced_longlong=$((replaced_longlong + longlong_count))
        replaced_ulonglong=$((replaced_ulonglong + ulonglong_count))
        
        # 每处理100个文件显示一次进度
        if [ $((processed % 100)) -eq 0 ]; then
            echo "已处理 $processed 个文件..."
        fi
    fi
done

echo "处理完成!"
echo "总处理文件数: $processed"
echo "替换 longlong 数量: $replaced_longlong"
echo "替换 ulonglong 数量: $replaced_ulonglong"
echo "完成时间: $(date)"

# 记录最终统计
echo "" >> $LOG_FILE
echo "=== 最终统计 ===" >> $LOG_FILE
echo "总处理文件数: $processed" >> $LOG_FILE
echo "替换 longlong 数量: $replaced_longlong" >> $LOG_FILE
echo "替换 ulonglong 数量: $replaced_ulonglong" >> $LOG_FILE
echo "完成时间: $(date)" >> $LOG_FILE

echo "详细日志已保存到: $LOG_FILE"