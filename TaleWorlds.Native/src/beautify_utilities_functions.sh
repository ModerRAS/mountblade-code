#!/bin/bash

# 批量美化06_utilities.c中的Unwind函数名
# 为资源引用计数管理函数提供语义化名称

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 资源引用计数管理函数替换 (18090d系列)
sed -i 's/void Unwind_18090d420(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset350(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d430(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset350Duplicate(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d440(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset470(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d450(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset470Duplicate(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d460(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset570(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d470(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset370(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d480(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset270(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d490(DataBuffer operationBase,int64_t dataBuffer)/void ManageResourceReferenceCountAtOffset270Duplicate(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"

# 内存操作执行函数替换 (18090d系列)
sed -i 's/void Unwind_18090d900(DataBuffer operationBase,int64_t dataBuffer)/void ExecuteMemoryOperationAtOffset1558(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"
sed -i 's/void Unwind_18090d940(DataBuffer operationBase,int64_t dataBuffer)/void ExecuteMemoryOperationAtOffset1568(DataBuffer operationBase,int64_t dataBuffer)/g' "$FILE_PATH"

echo "函数名美化完成"