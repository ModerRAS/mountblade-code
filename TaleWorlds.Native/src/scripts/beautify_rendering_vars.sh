#!/bin/bash

# 美化03_rendering.c文件中的变量名和函数名
# 这个脚本会批量替换逆向工程生成的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 函数名美化
sed -i 's/FUN_18033ca4a/InitializeRenderContext/g' "$INPUT_FILE"
sed -i 's/FUN_18033ca66/ResetRenderContext/g' "$INPUT_FILE"
sed -i 's/FUN_18033ca70/AllocateRenderContext/g' "$INPUT_FILE"
sed -i 's/FUN_18033cc90/GetRenderContextProperty/g' "$INPUT_FILE"
sed -i 's/FUN_18066c220/UpdateRenderContext/g' "$INPUT_FILE"
sed -i 's/FUN_18062b1e0/AllocateRenderBuffer/g' "$INPUT_FILE"

# 变量名美化
sed -i 's/propertyLength/RenderPropertyLength/g' "$INPUT_FILE"
sed -i 's/contextData/RenderContextData/g' "$INPUT_FILE"
sed -i 's/objectState/RenderObjectState/g' "$INPUT_FILE"
sed -i 's/thirdValue/RenderThirdValue/g' "$INPUT_FILE"
sed -i 's/fourthValue/RenderFourthValue/g' "$INPUT_FILE"
sed -i 's/piVar2/RenderPropertyIterator/g' "$INPUT_FILE"
sed -i 's/piVar4/RenderPropertyPointer/g' "$INPUT_FILE"
sed -i 's/piStackX_8/RenderStackPointer/g' "$INPUT_FILE"
sed -i 's/uVar2/RenderUnsignedValue/g' "$INPUT_FILE"
sed -i 's/uVar3/RenderUnsignedCounter/g' "$INPUT_FILE"
sed -i 's/calculatedValue/RenderCalculatedValue/g' "$INPUT_FILE"
sed -i 's/contextOffset/RenderContextOffset/g' "$INPUT_FILE"
sed -i 's/dataPointer/RenderDataPointer/g' "$INPUT_FILE"
sed -i 's/ppropertyLength/RenderPropertyLengthPtr/g' "$INPUT_FILE"

# 全局变量美化
sed -i 's/_DAT_180c8ed18/GlobalRenderAllocator/g' "$INPUT_FILE"
sed -i 's/unaff_RSI/RenderContextSize/g' "$INPUT_FILE"
sed -i 's/unaff_RDI/RenderConfigFlags/g' "$INPUT_FILE"

echo "03_rendering.c 文件美化完成"