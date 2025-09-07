#!/bin/bash

# 美化ProcessSystemBufferDataAndResourceManagement函数的脚本

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 使用sed命令替换变量名
sed -i 's/StringMemoryResult/StringMemoryPointer/g' "$FILE"
sed -i 's/uVar5/EncodedDataValue/g' "$FILE"
sed -i 's/pEncodedData2/EncodedDataPointer/g' "$FILE"
sed -i 's/EncodedData3/EncodedDataCounter/g' "$FILE"

echo "变量名替换完成"