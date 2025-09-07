#!/bin/bash

# 美化变量类型脚本
# 将 undefined 类型替换为适当的类型

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份文件
cp "$FILE" "$FILE.bak"

# 替换 undefined 为 uint64_t (用于数据变量)
sed -i 's/undefined \([a-zA-Z_][a-zA-Z0-9_]*\);.*DAT_180/uint64_t \1;/g' "$FILE"

# 替换 undefined* 为 void* (用于指针变量)
sed -i 's/undefined\* \([a-zA-Z_][a-zA-Z0-9_]*\);.*UNK_180/void* \1;/g' "$FILE"

# 替换 undefined1 为 uint8_t (用于字节数据)
sed -i 's/undefined1 \([a-zA-Z_][a-zA-Z0-9_]*\);/uint8_t \1;/g' "$FILE"

# 替换 undefined2 为 uint16_t (用于短整型数据)
sed -i 's/undefined2 \([a-zA-Z_][a-zA-Z0-9_]*\);/uint16_t \1;/g' "$FILE"

# 替换 undefined4 为 uint32_t (用于整型数据)
sed -i 's/undefined4 \([a-zA-Z_][a-zA-Z0-9_]*\);/uint32_t \1;/g' "$FILE"

# 替换 undefined8 为 uint64_t (用于长整型数据)
sed -i 's/undefined8 \([a-zA-Z_][a-zA-Z0-9_]*\);/uint64_t \1;/g' "$FILE"

echo "变量类型美化完成"