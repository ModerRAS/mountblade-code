#!/bin/bash

# 处理04_ui_system.c文件中的函数美化

# 查找所有需要处理的函数
grep -n "void FUN_180[0-9a-f].*(void)" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c | grep -v "//" | cut -d: -f1 | sort -u > /tmp/line_numbers.txt

echo "找到 $(wc -l < /tmp/line_numbers.txt) 个需要处理的函数"

# 处理前10个函数作为示例
head -10 /tmp/line_numbers.txt | while read line; do
    echo "处理第 $line 行的函数"
done

# 清理
rm -f /tmp/line_numbers.txt