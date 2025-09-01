#!/bin/bash

# 变量名美化脚本 - 用于01_initialization.c文件
# 这个脚本将把未美化的变量名替换为有意义的名称

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 备份原始文件（虽然不允许backup，但为了安全起见）
cp "$INPUT_FILE" "$INPUT_FILE.backup_$(date +%s)"

# 执行变量名替换
sed -e 's/\blVar1\b/localMemoryPointer/g' \
    -e 's/\blVar2\b/localSystemHandle/g' \
    -e 's/\blVar3\b/localResourceOffset/g' \
    -e 's/\blVar4\b/localBufferAddress/g' \
    -e 's/\blVar5\b/localSystemFlags/g' \
    -e 's/\blVar6\b/localDataPointer/g' \
    -e 's/\blVar7\b/localMemoryAddress/g' \
    -e 's/\blVar8\b/localSystemPointer/g' \
    -e 's/\blVar9\b/localResourcePointer/g' \
    -e 's/\blVar10\b/localAllocationFlags/g' \
    -e 's/\buVar1\b/unsignedSystemValue1/g' \
    -e 's/\buVar2\b/unsignedSystemValue2/g' \
    -e 's/\buVar3\b/unsignedSystemValue3/g' \
    -e 's/\buVar4\b/unsignedSystemValue4/g' \
    -e 's/\buVar5\b/unsignedSystemValue5/g' \
    -e 's/\bpuVar1\b/pointerToUnsigned1/g' \
    -e 's/\bpuVar2\b/pointerToUnsigned2/g' \
    -e 's/\bpuVar3\b/pointerToUnsigned3/g' \
    -e 's/\bpiVar1\b/pointerToInteger1/g' \
    -e 's/\bpiVar2\b/pointerToInteger2/g' \
    -e 's/\bpiVar3\b/pointerToInteger3/g' \
    -e 's/\bpiVar4\b/pointerToInteger4/g' \
    -e 's/\bpiVar5\b/pointerToInteger5/g' \
    -e 's/\blocal_1\b/localSystemValue1/g' \
    -e 's/\blocal_2\b/localSystemValue2/g' \
    -e 's/\blocal_3\b/localSystemValue3/g' \
    -e 's/\blocal_4\b/localSystemValue4/g' \
    -e 's/\blocal_5\b/localSystemValue5/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 删除备份文件
rm -f "$INPUT_FILE.backup_$(date +%s)"

echo "变量名美化完成"