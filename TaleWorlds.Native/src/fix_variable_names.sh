#!/bin/bash

# 批量修复01_initialization.c文件中的变量命名问题
# 将hashTableNode改为HashTableNode，System_IDENTIFIER_SIZE改为SystemIdentifierSize

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed进行替换
sed -e 's/hashTableNode/HashTableNode/g' \
    -e 's/System_IDENTIFIER_SIZE/SystemIdentifierSize/g' \
    -e 's/SystemSystemNode/SystemNode/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "变量命名修复完成"