#!/bin/bash

# 美化04_ui_system.c文件中的堆栈变量名
# 将类似 in_stack_00000040 的变量名改为更有意义的名称

sed -i 's/in_stack_00000030/stackParameterUInt/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_stack_00000038/stackParameterFloat1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_stack_00000040/stackParameterFloat2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_stack_00000048/stackParameterFloat3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/in_stack_00000060/stackParameterFloat4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化其他堆栈变量
sed -i 's/fStack0000000000000074/stackCalculatedFloat1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/fStack000000000000005c/stackCalculatedFloat2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/fStack0000000000000054/stackCalculatedFloat3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/fStack0000000000000058/stackCalculatedFloat4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/fStack000000000000003c/stackCalculatedFloat5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化数据变量
sed -i 's/cStack0000000000000030/stackCharacterData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统堆栈变量美化完成"