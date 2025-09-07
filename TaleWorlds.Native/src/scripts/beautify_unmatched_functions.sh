#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将替换Ghidra自动生成的变量名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 美化DAT_变量名（系统全局变量）
sed -i 's/_DAT_180d48d28/SystemGlobalStatusFlag/g' "$FILE_PATH"
sed -i 's/_DAT_180bf5218/NetworkConnectionStatus/g' "$FILE_PATH"
sed -i 's/_DAT_180c8ed60/ResourceReferenceCounter/g' "$FILE_PATH"
sed -i 's/_DAT_180c8ed64/ResourceAllocationCounter/g' "$FILE_PATH"
sed -i 's/_DAT_180c9105c/ThreadIdentifier/g' "$FILE_PATH"

# 美化UNK_变量名（未知数据）
sed -i 's/UNK_1809fcc28/SystemStackBufferBaseAddress/g' "$FILE_PATH"

# 美化其他常见的Ghidra生成变量名
sed -i 's/auVar\([0-9]\+\)/EncodedDataBuffer\1/g' "$FILE_PATH"
sed -i 's/aEncodedData\([0-9]\+\)/EncodedDataArray\1/g' "$FILE_PATH"
sed -i 's/lVar\([0-9]\+\)/LongVariable\1/g' "$FILE_PATH"
sed -i 's/fVar\([0-9]\+\)/FloatVariable\1/g' "$FILE_PATH"
sed -i 's/uVar\([0-9]\+\)/UnsignedVariable\1/g' "$FILE_PATH"
sed -i 's/iVar\([0-9]\+\)/IntegerVariable\1/g' "$FILE_PATH"
sed -i 's/pVar\([0-9]\+\)/PointerVariable\1/g' "$FILE_PATH"

echo "变量名美化完成"