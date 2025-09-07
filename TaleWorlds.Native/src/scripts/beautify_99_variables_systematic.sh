#!/bin/bash

# 系统变量名美化脚本
# 用于批量替换 99_unmatched_functions.c 中的Ghidra生成变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

echo "开始系统变量名美化..."
echo "文件: $FILE_PATH"

# 统计需要替换的变量数量
echo "统计原始变量数量:"
grep -c "iVar[0-9]" "$FILE_PATH" | head -1
grep -c "uVar[0-9]" "$FILE_PATH" | head -1
grep -c "bVar[0-9]" "$FILE_PATH" | head -1
grep -c "pcVar[0-9]" "$FILE_PATH" | head -1
grep -c "local_[0-9]" "$FILE_PATH" | head -1
grep -c "fVar[0-9]" "$FILE_PATH" | head -1

# 执行变量名替换
echo "开始变量名替换..."

# 替换 iVar 系列变量 (前100个)
for i in {1..100}; do
    sed -i "s/\\biVar$i\\b/IntegerVariable$i/g" "$FILE_PATH"
done

# 替换 uVar 系列变量 (前100个)
for i in {1..100}; do
    sed -i "s/\\buVar$i\\b/UnsignedVariable$i/g" "$FILE_PATH"
done

# 替换 bVar 系列变量 (前100个)
for i in {1..100}; do
    sed -i "s/\\bbVar$i\\b/BooleanVariable$i/g" "$FILE_PATH"
done

# 替换 pcVar 系列变量 (前100个)
for i in {1..100}; do
    sed -i "s/\\bpcVar$i\\b/CharPointer$i/g" "$FILE_PATH"
done

# 替换 fVar 系列变量 (前100个)
for i in {1..100}; do
    sed -i "s/\\bfVar$i\\b/FloatVariable$i/g" "$FILE_PATH"
done

echo "变量名替换完成!"

# 统计替换后的变量数量
echo "统计替换后的变量数量:"
grep -c "IntegerVariable[0-9]" "$FILE_PATH" | head -1
grep -c "UnsignedVariable[0-9]" "$FILE_PATH" | head -1
grep -c "BooleanVariable[0-9]" "$FILE_PATH" | head -1
grep -c "CharPointer[0-9]" "$FILE_PATH" | head -1
grep -c "FloatVariable[0-9]" "$FILE_PATH" | head -1

echo "剩余未替换的变量数量:"
grep -c "iVar[0-9]" "$FILE_PATH" | head -1
grep -c "uVar[0-9]" "$FILE_PATH" | head -1
grep -c "bVar[0-9]" "$FILE_PATH" | head -1
grep -c "pcVar[0-9]" "$FILE_PATH" | head -1
grep -c "fVar[0-9]" "$FILE_PATH" | head -1

echo "美化完成!"