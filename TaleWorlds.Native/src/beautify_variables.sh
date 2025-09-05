#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 将auStack_xxx、aiStack_xxx、uStack_xxx等变量名改为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 变量名替换规则
# auStack_xxx -> dataBuffer_xxx (字节数据缓冲区)
sed -i 's/\bauStack_\([0-9a-fA-F]\+\)\b/dataBuffer_\1/g' "$FILE_PATH"

# aiStack_xxx -> integerArray_xxx (整数数组)
sed -i 's/\baiStack_\([0-9a-fA-F]\+\)\b/integerArray_\1/g' "$FILE_PATH"

# uStack_xxx -> unsignedData_xxx (无符号数据)
sed -i 's/\buStack_\([0-9a-fA-F]\+\)\b/unsignedData_\1/g' "$FILE_PATH"

# plStack_xxx -> pointerList_xxx (指针列表)
sed -i 's/\bplStack_\([0-9a-fA-F]\+\)\b/pointerList_\1/g' "$FILE_PATH"

# lStack_xxx -> localData_xxx (本地数据)
sed -i 's/\blStack_\([0-9a-fA-F]\+\)\b/localData_\1/g' "$FILE_PATH"

# puStack_xxx -> pointerUnsigned_xxx (无符号指针)
sed -i 's/\bpuStack_\([0-9a-fA-F]\+\)\b/pointerUnsigned_\1/g' "$FILE_PATH"

# cStack_xxx -> charData_xxx (字符数据)
sed -i 's/\bcStack_\([0-9a-fA-F]\+\)\b/charData_\1/g' "$FILE_PATH"

# fVar_xxx -> floatVariable_xxx (浮点变量)
sed -i 's/\bfVar\([0-9]\+\)\b/floatVariable_\1/g' "$FILE_PATH"

# sVar_xxx -> shortVariable_xxx (短整型变量)
sed -i 's/\bsVar\([0-9]\+\)\b/shortVariable_\1/g' "$FILE_PATH"

# bVar_xxx -> booleanVariable_xxx (布尔变量)
sed -i 's/\bbVar\([0-9]\+\)\b/booleanVariable_\1/g' "$FILE_PATH"

# iVar_xxx -> integerVariable_xxx (整型变量)
sed -i 's/\biVar\([0-9]\+\)\b/integerVariable_\1/g' "$FILE_PATH"

# param_x -> parameter_x (参数)
sed -i 's/\bparam_\([0-9]\+\)\b/parameter_\1/g' "$FILE_PATH"

echo "变量名美化完成"