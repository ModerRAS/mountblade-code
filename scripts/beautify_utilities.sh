#!/bin/bash

# 美化06_utilities.c文件的脚本
# 主要处理一些变量名的进一步语义化改进

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 检查文件是否存在
if [ ! -f "$INPUT_FILE" ]; then
    echo "错误: 文件 $INPUT_FILE 不存在"
    exit 1
fi

echo "开始美化06_utilities.c文件..."

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup_beautify"

# 进行一些变量名的进一步语义化改进
sed -i 's/utility_loop_counter = /utility_iteration_index = /g' "$INPUT_FILE"
sed -i 's/utility_loop_counter$/utility_iteration_index/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter\[/utility_iteration_index\[/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter_/utility_iteration_index_/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter(/utility_iteration_index(/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter\./utility_iteration_index\./g' "$INPUT_FILE"
sed -i 's/utility_loop_counter>/utility_iteration_index>/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter</utility_iteration_index</g' "$INPUT_FILE"
sed -i 's/utility_loop_counter!=/utility_iteration_index!=/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter==/utility_iteration_index==/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter+/utility_iteration_index+/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter-/utility_iteration_index-/g' "$INPUT_FILE"
sed -i 's/utility_loop_counter\*/utility_iteration_index\*/g' "$INPUT_FILE"
sed -i 's/&utility_loop_counter/&utility_iteration_index/g' "$INPUT_FILE"

# 改进一些其他的变量名
sed -i 's/utility_processed_count = /utility_items_processed = /g' "$INPUT_FILE"
sed -i 's/utility_processed_count$/utility_items_processed/g' "$INPUT_FILE"
sed -i 's/utility_processed_count\[/utility_items_processed\[/g' "$INPUT_FILE"

# 改进一些硬编码值的使用
sed -i 's/ - 8)/ - UTILITY_POINTER_OFFSET)/g' "$INPUT_FILE"
sed -i 's/ - 8,/ - UTILITY_POINTER_OFFSET,/g' "$INPUT_FILE"
sed -i 's/ - 8;/ - UTILITY_POINTER_OFFSET;/g' "$INPUT_FILE"
sed -i 's/ + 8)/ + UTILITY_POINTER_OFFSET)/g' "$INPUT_FILE"
sed -i 's/ + 8,/ + UTILITY_POINTER_OFFSET,/g' "$INPUT_FILE"
sed -i 's/ + 8;/ + UTILITY_POINTER_OFFSET;/g' "$INPUT_FILE"

# 在文件头部添加一些必要的常量定义
if ! grep -q "UTILITY_POINTER_OFFSET" "$INPUT_FILE"; then
    sed -i '/^#define UTILITY_MAX_BUFFER_SIZE 0x1000/a\#define UTILITY_POINTER_OFFSET 8' "$INPUT_FILE"
fi

echo "美化完成！"
echo "原始文件已备份为: $INPUT_FILE.backup_beautify"