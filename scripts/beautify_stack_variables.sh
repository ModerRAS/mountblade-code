#!/bin/bash

# 美化06_utilities.c文件中的栈变量名

# 替换栈变量声明
sed -i 's/float fStack_1a4;/float utility_stack_float_value_1a4;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/float fStack0000000000000044;/float utility_stack_float_value_44;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/float fStack_2c8;/float utility_stack_float_value_2c8;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换栈变量使用
sed -i 's/fStack_1a4 = /utility_stack_float_value_1a4 = /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/fStack0000000000000044 = /utility_stack_float_value_44 = /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/fStack_2c8 = /utility_stack_float_value_2c8 = /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换栈变量引用
sed -i 's/\*fStack_1a4/*utility_stack_float_value_1a4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\*fStack0000000000000044/*utility_stack_float_value_44/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\*fStack_2c8/*utility_stack_float_value_2c8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "栈变量名美化完成"