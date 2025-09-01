#!/bin/bash

# 美化02_core_engine.c文件中的undefined变量
# 将undefined变量改为更有语义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义变量替换规则
# undefined8 变量（64位）
sed -i 's/undefined8 \*NewNetworkNode/uint64_t \*NetworkNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*NewSecurityNode/uint64_t \*SecurityNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*NewValidationNode/uint64_t \*ValidationNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*NewAuthNode/uint64_t \*AuthNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*NewDataStreamNode/uint64_t \*DataStreamNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*systemContextPointer/uint64_t \*SystemContextPtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*traverseNodeLeft/uint64_t \*TraverseNodeLeft/g' "$FILE_PATH"
sed -i 's/undefined8 \*traverseNodeRight/uint64_t \*TraverseNodeRight/g' "$FILE_PATH"
sed -i 's/undefined8 \*nextNodePointer/uint64_t \*NextNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*newNodePointer/uint64_t \*NewNodePtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*validationContextPointer/uint64_t \*ValidationContextPtr/g' "$FILE_PATH"
sed -i 's/undefined8 \*validationNodeLeft/uint64_t \*ValidationNodeLeft/g' "$FILE_PATH"
sed -i 's/undefined8 \*validationNodeRight/uint64_t \*ValidationNodeRight/g' "$FILE_PATH"
sed -i 's/undefined8 \*validationnextNode/uint64_t \*ValidationNextNode/g' "$FILE_PATH"
sed -i 's/undefined8 \*validationNewNode/uint64_t \*ValidationNewNode/g' "$FILE_PATH"

# undefined4 变量（32位）
sed -i 's/undefined4 \*ConfigParam/uint32_t \*ConfigParam/g' "$FILE_PATH"
sed -i 's/undefined4 \*StatusParam/uint32_t \*StatusParam/g' "$FILE_PATH"

# undefined1 变量（8位）
sed -i 's/undefined1 \*DataBuffer/uint8_t \*DataBuffer/g' "$FILE_PATH"
sed -i 's/undefined1 \*StatusFlag/uint8_t \*StatusFlag/g' "$FILE_PATH"

# 处理函数参数中的undefined类型
sed -i 's/(undefined8 \*)/(uint64_t \*)/g' "$FILE_PATH"
sed -i 's/(undefined4 \*)/(uint32_t \*)/g' "$FILE_PATH"
sed -i 's/(undefined1 \*)/(uint8_t \*)/g' "$FILE_PATH"
sed -i 's/(undefined \*)/(void \*)/g' "$FILE_PATH"

# 处理返回值类型
sed -i 's/^undefined8 /uint64_t /g' "$FILE_PATH"
sed -i 's/^undefined4 /uint32_t /g' "$FILE_PATH"
sed -i 's/^undefined1 /uint8_t /g' "$FILE_PATH"
sed -i 's/^undefined /void /g' "$FILE_PATH"

# 处理局部变量声明
sed -i 's/undefined8 /uint64_t /g' "$FILE_PATH"
sed -i 's/undefined4 /uint32_t /g' "$FILE_PATH"
sed -i 's/undefined1 /uint8_t /g' "$FILE_PATH"
sed -i 's/undefined /void /g' "$FILE_PATH"

echo "变量美化完成"