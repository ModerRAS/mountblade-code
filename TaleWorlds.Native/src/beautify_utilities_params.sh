#!/bin/bash

# 美化06_utilities.c文件中的参数名
# 将param_1, param_2等改为更有意义的名称

sed -i 's/param_1/Parameter1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/param_2/Parameter2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/param_3/Parameter3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/param_4/Parameter4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/param_5/Parameter5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "参数名美化完成"