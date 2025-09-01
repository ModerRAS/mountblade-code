#!/bin/bash

# 处理一些关键的网络函数
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建一个临时文件来处理
temp_file="temp_networking.txt"

# 提取包含FUN_180的行
grep -n "FUN_180" 05_networking.c | head -20 > "$temp_file"

echo "发现的前20个未美化函数："
cat "$temp_file"

# 清理临时文件
rm "$temp_file"