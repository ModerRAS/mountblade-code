#!/bin/bash

# 美化06_utilities.c文件中的变量名
echo "开始美化06_utilities.c文件中的变量名..."

# 定义变量名映射
sed -i 's/StackVariable80/ResourceCount/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable58/ResourceBufferPointer/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable68/ResourceRegisterPointer/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable30/ValidationContext/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable70/ConversionFactor/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable34/LoopCounter/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariableB8/ConfigurationFlags/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariableD0/ValidationChar/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable38/SecondaryContext/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable3C/FirstValue/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable3E/SecondValue/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariableA0/PrimaryValue/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariableA8/SecondaryValue/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
sed -i 's/StackVariable1a8/ResourceContextOffset/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "变量名美化完成"