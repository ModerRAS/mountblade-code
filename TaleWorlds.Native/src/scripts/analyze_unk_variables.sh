#!/bin/bash

# 为99_unmatched_functions.c文件中的UNK_变量添加语义化名称
# 这个脚本会分析UNK_变量的使用模式并给出合适的语义化名称

echo "开始处理99_unmatched_functions.c文件中的UNK_变量..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 分析UNK_180a01a28的使用模式
grep -n "UNK_180a01a28" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c | head -5

# 分析UNK_180a019f8的使用模式
grep -n "UNK_180a019f8" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c | head -5

# 分析UNK_180a01a78的使用模式
grep -n "UNK_180a01a78" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c | head -5

echo "分析完成。请根据使用模式为这些UNK_变量添加语义化名称。"