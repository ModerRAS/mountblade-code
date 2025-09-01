#!/bin/bash

# 获取所有需要删除的行号
lines_to_delete=$(grep -n "^ FUN_1808" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c | cut -d: -f1 | sort -nr)

echo "找到需要删除的行号："
echo "$lines_to_delete"

# 从最后一行开始删除，避免行号变化
for line in $lines_to_delete; do
    echo "删除第 $line 行..."
    sed -i "${line}d" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "删除完成！"