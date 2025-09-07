#!/bin/bash

# 批量替换99_unmatched_functions.c中的FUN_函数调用
# 根据已定义的宏替换对应的函数调用

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 提取所有已定义的函数宏
echo "提取已定义的函数宏..."
grep "^#define.*FUN_1800" "$FILE_PATH" > /tmp/defined_functions.txt

# 统计替换次数
total_replacements=0

# 逐个处理每个已定义的函数
while IFS= read -r line; do
    # 提取宏定义中的函数名和原始函数名
    if [[ $line =~ ^#define[[:space:]]+([^[:space:]]+)[[:space:]]+FUN_1800[a-f0-9]+ ]]; then
        semantic_name="${BASH_REMATCH[1]}"
        if [[ $line =~ FUN_1800[a-f0-9]+ ]]; then
            original_name="${BASH_REMATCH[0]}"
            
            # 替换函数调用
            count=$(sed -n "s/${original_name}(/${semantic_name}(/gp" "$FILE_PATH" | wc -l)
            if [ $count -gt 0 ]; then
                echo "替换 $original_name -> $semantic_name : $count 次"
                sed "s/${original_name}(/${semantic_name}(/g" "$FILE_PATH" > "$TEMP_FILE"
                mv "$TEMP_FILE" "$FILE_PATH"
                total_replacements=$((total_replacements + count))
            fi
        fi
    fi
done < /tmp/defined_functions.txt

echo "总共替换了 $total_replacements 个函数调用"

# 清理临时文件
rm -f /tmp/defined_functions.txt
rm -f "$TEMP_FILE"