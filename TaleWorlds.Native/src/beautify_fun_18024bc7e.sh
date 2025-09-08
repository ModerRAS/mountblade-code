#!/bin/bash

# 美化FUN_18024bc7e函数中的变量名
# 这是简化实现，只处理关键变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 替换函数体内的变量名
sed -i 's/unaff_RBP/FramePointer/g' "$FILE_PATH"
sed -i 's/unaff_RDI/DestinationIndex/g' "$FILE_PATH"
sed -i 's/in_EAX/RegisterEAXValue/g' "$FILE_PATH"
sed -i 's/in_XMM0_Dc/FloatComponentB/g' "$FILE_PATH"
sed -i 's/in_XMM0_Dd/FloatComponentC/g' "$FILE_PATH"
sed -i 's/in_XMM1_Dc/FloatComponentD/g' "$FILE_PATH"
sed -i 's/in_XMM1_Dd/FloatComponentD/g' "$FILE_PATH"
sed -i 's/CurrentChar11/SystemStatusFlag/g' "$FILE_PATH"
sed -i 's/pdVar1/TransformMatrixPointer/g' "$FILE_PATH"
sed -i 's/dVar17/ScalingFactor/g' "$FILE_PATH"
sed -i 's/uStackX_20/TransformResultX/g' "$FILE_PATH"
sed -i 's/dStack0000000000000028/TransformResultY/g' "$FILE_PATH"
sed -i 's/DataValue15/DataProcessingValue15/g' "$FILE_PATH"
sed -i 's/Counter/ProcessingCounter/g' "$FILE_PATH"
sed -i 's/uVar5/ValidationFlag/g' "$FILE_PATH"
sed -i 's/extraout_XMM0_Da/FloatComponentA/g' "$FILE_PATH"

echo "变量名美化完成"