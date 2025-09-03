#!/bin/bash

# 变量名替换脚本
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 使用sed进行替换
sed -i 's/UNK_180a15e98/SystemMemoryRegion15e98/g' "$FILE"
sed -i 's/UNK_180a15eb0/SystemMemoryRegion15eb0/g' "$FILE"
sed -i 's/UNK_180a15ed0/SystemMemoryRegion15ed0/g' "$FILE"
sed -i 's/UNK_180a15ee8/SystemMemoryRegion15ee8/g' "$FILE"
sed -i 's/UNK_180a15f08/SystemMemoryRegion15f08/g' "$FILE"
sed -i 's/UNK_180a15f20/SystemMemoryRegion15f20/g' "$FILE"
sed -i 's/UNK_180a15f38/SystemMemoryRegion15f38/g' "$FILE"
sed -i 's/UNK_180a15f48/SystemMemoryRegion15f48/g' "$FILE"
sed -i 's/UNK_180a15f58/SystemMemoryRegion15f58/g' "$FILE"
sed -i 's/UNK_180a15f68/SystemMemoryRegion15f68/g' "$FILE"
sed -i 's/UNK_180a15f80/SystemMemoryRegion15f80/g' "$FILE"
sed -i 's/UNK_180a15f98/SystemMemoryRegion15f98/g' "$FILE"
sed -i 's/UNK_180a15fb0/SystemMemoryRegion15fb0/g' "$FILE"
sed -i 's/UNK_180a15fc0/SystemMemoryRegion15fc0/g' "$FILE"
sed -i 's/UNK_180a15ff8/SystemMemoryRegion15ff8/g' "$FILE"
sed -i 's/UNK_180a16008/SystemMemoryRegion16008/g' "$FILE"
sed -i 's/UNK_180a16020/SystemMemoryRegion16020/g' "$FILE"
sed -i 's/UNK_180a16030/SystemMemoryRegion16030/g' "$FILE"
sed -i 's/UNK_180a16048/SystemMemoryRegion16048/g' "$FILE"

echo "变量名替换完成"