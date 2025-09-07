#!/bin/bash

# 美化03_rendering.c文件中的变量名
# 这个脚本将替换一些常见的逆向工程变量名为更有意义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 矩阵元素变量名美化
sed -i 's/RegisterXMM6_Element1/TransformMatrixRow1Col1/g' "$FILE_PATH"
sed -i 's/RegisterXMM6_Element2/TransformMatrixRow1Col2/g' "$FILE_PATH"
sed -i 's/RegisterXMM6_Element3/TransformMatrixRow1Col3/g' "$FILE_PATH"
sed -i 's/RegisterXMM6_Element4/TransformMatrixRow1Col4/g' "$FILE_PATH"

sed -i 's/RegisterXMM7_Element1/TransformMatrixRow2Col1/g' "$FILE_PATH"
sed -i 's/RegisterXMM7_Element2/TransformMatrixRow2Col2/g' "$FILE_PATH"
sed -i 's/RegisterXMM7_Element3/TransformMatrixRow2Col3/g' "$FILE_PATH"
sed -i 's/RegisterXMM7_Element4/TransformMatrixRow2Col4/g' "$FILE_PATH"

sed -i 's/RegisterXMM8_Element1/TransformMatrixRow3Col1/g' "$FILE_PATH"
sed -i 's/RegisterXMM8_Element2/TransformMatrixRow3Col2/g' "$FILE_PATH"
sed -i 's/RegisterXMM8_Element3/TransformMatrixRow3Col3/g' "$FILE_PATH"
sed -i 's/RegisterXMM8_Element4/TransformMatrixRow3Col4/g' "$FILE_PATH"

sed -i 's/RegisterXMM9_Element1/TransformMatrixRow4Col1/g' "$FILE_PATH"
sed -i 's/RegisterXMM9_Element2/TransformMatrixRow4Col2/g' "$FILE_PATH"
sed -i 's/RegisterXMM9_Element3/TransformMatrixRow4Col3/g' "$FILE_PATH"
sed -i 's/RegisterXMM9_Element4/TransformMatrixRow4Col4/g' "$FILE_PATH"

# 寄存器变量名美化
sed -i 's/RegisterRAX/RegisterContextPointer/g' "$FILE_PATH"
sed -i 's/RegisterR12/RegisterMaterialPointer/g' "$FILE_PATH"
sed -i 's/RegisterR13/RegisterPropertyOffset/g' "$FILE_PATH"
sed -i 's/RegisterR14/RegisterRenderContext/g' "$FILE_PATH"
sed -i 's/RegisterR15/RegisterMemoryPool/g' "$FILE_PATH"

# 堆栈变量名美化
sed -i 's/StackFramePointer/FunctionCallStack/g' "$FILE_PATH"
sed -i 's/HeapSize/MemoryPoolSize/g' "$FILE_PATH"
sed -i 's/StackPointerA8/StackFrameDataA8/g' "$FILE_PATH"

# 材质属性变量名美化
sed -i 's/MaterialPropertyStreamPointer/PropertyStreamPointer/g' "$FILE_PATH"
sed -i 's/MaterialDataOffset/PropertyDataOffset/g' "$FILE_PATH"
sed -i 's/MaterialPropertyBasePointer/PropertyBasePointer/g' "$FILE_PATH"
sed -i 's/PropertyArraySize/PropertyBufferSize/g' "$FILE_PATH"
sed -i 's/MaterialPropertyNewPointer/PropertyNewPointer/g' "$FILE_PATH"

# 矩阵元素变量名美化（续）
sed -i 's/MatrixRow1Element1/TransformMatrixElement11/g' "$FILE_PATH"
sed -i 's/MatrixRow1Element2/TransformMatrixElement12/g' "$FILE_PATH"
sed -i 's/MatrixRow1Element3/TransformMatrixElement13/g' "$FILE_PATH"
sed -i 's/MatrixRow1Element4/TransformMatrixElement14/g' "$FILE_PATH"

sed -i 's/ComparisonResultPointer/MatrixComparisonResult/g' "$FILE_PATH"

# 渲染上下文变量名美化
sed -i 's/RenderContextRegister/RenderContextFlags/g' "$FILE_PATH"
sed -i 's/in_stack_000000a8/InputStackFrameA8/g' "$FILE_PATH"
sed -i 's/unaff_R14/UnassignedRenderContext/g' "$FILE_PATH"

echo "变量名美化完成"