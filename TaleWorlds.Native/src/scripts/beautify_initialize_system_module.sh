#!/bin/bash

# 美化 InitializeSystemModule 函数的变量名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 替换变量名
sed -i 's/temporaryStackContext/tempStackContext/g' "$FILE"
sed -i 's/baseValidationContext/validationContext/g' "$FILE"
sed -i 's/moduleDataContext/moduleData/g' "$FILE"
sed -i 's/StackMemoryContext/stackContext/g' "$FILE"
sed -i 's/gameMessageProcessingStatus/messageProcessingStatus/g' "$FILE"
sed -i 's/systemModuleOperationResult/moduleOperationResult/g' "$FILE"
sed -i 's/moduleInitializationStatus/initializationStatus/g' "$FILE"
sed -i 's/exceptionHandlerContextPointer/exceptionHandler/g' "$FILE"
sed -i 's/resourceInfoContext/resourceInfo/g' "$FILE"
sed -i 's/contextDataContext/contextData/g' "$FILE"
sed -i 's/componentDataContext/componentData/g' "$FILE"
sed -i 's/componentInfoContext/componentInfo/g' "$FILE"

echo "变量名美化完成"