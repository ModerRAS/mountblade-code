#!/bin/bash

# 批量修改动画系统变量名
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 动画系统变量
sed -i 's/AnimationBlendTreeTable/AnimationBlendTreeDataTable/g' "$FILE"
sed -i 's/AnimationControllerTable/AnimationControllerDataTable/g' "$FILE"
sed -i 's/AnimationParameterTable/AnimationParameterDataTable/g' "$FILE"
sed -i 's/AnimationEventTable/AnimationEventDataTable/g' "$FILE"
sed -i 's/AnimationLayerTable/AnimationLayerDataTable/g' "$FILE"
sed -i 's/AnimationMixerTable/AnimationMixerDataTable/g' "$FILE"

# 脚本系统变量
sed -i 's/ScriptFunctionTable/ScriptFunctionDataTable/g' "$FILE"
sed -i 's/ScriptVariableTable/ScriptVariableDataTable/g' "$FILE"
sed -i 's/ScriptClassTable/ScriptClassDataTable/g' "$FILE"
sed -i 's/ScriptMethodTable/ScriptMethodDataTable/g' "$FILE"
sed -i 's/ScriptObjectTable/ScriptObjectDataTable/g' "$FILE"

echo "动画和脚本系统变量名美化完成"