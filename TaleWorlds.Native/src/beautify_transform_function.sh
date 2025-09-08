#!/bin/bash

# 美化ProcessMaterialObjectTransformData函数的变量名
# 这是一个临时脚本，用于美化03_rendering.c中的特定函数

# 定义输入和输出文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp.c"

# 使用sed命令替换变量名
sed -i 's/float fVar8;/float ScaleY;/' "$INPUT_FILE"
sed -i 's/int IntegerVariable13;/int PropertyCount;/' "$INPUT_FILE"
sed -i 's/ulonglong PropertyValueByte4;/ulonglong PropertyCountValue;/' "$INPUT_FILE"
sed -i 's/int IntegerVariable15;/int ActivePropertyCount;/' "$INPUT_FILE"
sed -i 's/int IntegerVariable16;/int PropertyIndex;/' "$INPUT_FILE"
sed -i 's/longlong lVar17;/longlong LoopIndex;/' "$INPUT_FILE"
sed -i 's/int IntegerVariable18;/int CurrentPropertyIndex;/' "$INPUT_FILE"
sed -i 's/bool RenderStateByte9;/bool IsPropertyActive;/' "$INPUT_FILE"
sed -i 's/uint64_t UnsignedVariable20;/uint64_t MaterialDataBuffer;/' "$INPUT_FILE"
sed -i 's/longlong \*plStackX_8;/longlong *MaterialPropertyStackPointer;/' "$INPUT_FILE"
sed -i 's/longlong \*plStackX_18;/longlong *TransformDataStackPointer;/' "$INPUT_FILE"

# 替换函数体中的变量引用
sed -i 's/IntegerVariable13/PropertyCount/g' "$INPUT_FILE"
sed -i 's/PropertyValueByte4/PropertyCountValue/g' "$INPUT_FILE"
sed -i 's/IntegerVariable15/ActivePropertyCount/g' "$INPUT_FILE"
sed -i 's/IntegerVariable16/PropertyIndex/g' "$INPUT_FILE"
sed -i 's/lVar17/LoopIndex/g' "$INPUT_FILE"
sed -i 's/IntegerVariable18/CurrentPropertyIndex/g' "$INPUT_FILE"
sed -i 's/RenderStateByte9/IsPropertyActive/g' "$INPUT_FILE"
sed -i 's/UnsignedVariable20/MaterialDataBuffer/g' "$INPUT_FILE"
sed -i 's/plStackX_8/MaterialPropertyStackPointer/g' "$INPUT_FILE"
sed -i 's/plStackX_18/TransformDataStackPointer/g' "$INPUT_FILE"

echo "变量名美化完成"