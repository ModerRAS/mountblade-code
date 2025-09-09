#!/bin/bash

# 美化99_unmatched_functions.c中的剩余变量
# 主要处理UNK_变量和其他未美化的变量

# 设置文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时脚本文件
cat > /tmp/beautify_99_unmatched.sh << 'EOF'
#!/bin/bash

# 美化UNK_变量
sed -i 's/UNK_18098bc80/SystemUnknownDataBuffer1/g' "$FILE"
sed -i 's/UNK_180a03988/SystemUnknownDataBuffer2/g' "$FILE"
sed -i 's/_DAT_180c86970/SystemGlobalDataTablec86970/g' "$FILE"

# 美化栈变量
sed -i 's/puStack_/StackPointer_/g' "$FILE"
sed -i 's/uStack_/StackUnsigned_/g' "$FILE"
sed -i 's/lStack_/StackLong_/g' "$FILE"
sed -i 's/auStack_/StackArray_/g' "$FILE"
sed -i 's/acStack_/StackChar_/g' "$FILE"

# 美化局部变量
sed -i 's/bVar/SystemByteVar/g' "$FILE"
sed -i 's/iVar/SystemIntVar/g' "$FILE"
sed -i 's/uVar/SystemUIntVar/g' "$FILE"
sed -i 's/lVar/SystemLongVar/g' "$FILE"
sed -i 's/pVar/SystemPointerVar/g' "$FILE"

# 美化资源相关变量
sed -i 's/ResourceLockPointer/SystemResourceLockPointer/g' "$FILE"
sed -i 's/SourceDataPointer/SystemSourceDataPointer/g' "$FILE"
sed -i 's/EncodedDataValue/SystemEncodedDataValue/g' "$FILE"
sed -i 's/ProcessingFlags/SystemProcessingFlags/g' "$FILE"
sed -i 's/NodeIndex/SystemNodeIndex/g' "$FILE"
sed -i 's/ResourceIterator/SystemResourceIterator/g' "$FILE"
sed -i 's/MemoryAllocationResult/SystemMemoryAllocationResult/g' "$FILE"
sed -i 's/SystemContext/SystemContext/g' "$FILE"
sed -i 's/SystemConfigTablePointer/SystemConfigTablePointer/g' "$FILE"
sed -i 's/ResourceFlags/SystemResourceFlags/g' "$FILE"

# 美化函数参数
sed -i 's/aFunctionParameter18/FunctionParameter18/g' "$FILE"
sed -i 's/pVertexCount/VertexCountPointer/g' "$FILE"

echo "变量美化完成"
EOF

# 执行美化脚本
chmod +x /tmp/beautify_99_unmatched.sh
/tmp/beautify_99_unmatched.sh

# 清理临时文件
rm -f /tmp/beautify_99_unmatched.sh

echo "99_unmatched_functions.c变量美化完成"