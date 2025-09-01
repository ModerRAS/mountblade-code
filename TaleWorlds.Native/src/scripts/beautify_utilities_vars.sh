#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 将简单的变量名替换为更具语义的名称

sed -i 's/plocalContextPointer/ResourceContextPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/validationResult/ValidationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/_cStack0000000000000090/SecurityValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/stack0x00000090/SecurityValidationStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/stack0x00000098/HashValidationStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/in_stack_00000098/HashValidationValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/in_stack_00000090/SecurityValidationValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/bVar4/HasValidResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/cStack0000000000000090/SecurityValidationChar/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ValidationResult/ResourceValidationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "变量名美化完成"