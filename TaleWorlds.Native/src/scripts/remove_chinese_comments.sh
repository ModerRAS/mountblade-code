#!/bin/bash

# 批量删除06_utilities.c文件中的中文注释
file="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 使用sed删除包含中文字符的注释行
sed -i '/\/\/.*[\u4e00-\u9fff]/d' "$file"

echo "中文注释删除完成"