#!/bin/bash

# 01_initialization.c 变量名美化脚本
# 用于替换非语义化的变量名为语义化名称

# 替换 param_5 为更语义化的名称
sed -i 's/param_5/system_context_parameter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 uVar8 为更语义化的名称  
sed -i 's/uVar8/system_byte_var_8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 local_10 为更语义化的名称
sed -i 's/local_10/system_local_temp_var_10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 iVar3 为更语义化的名称
sed -i 's/iVar3/system_int_var_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 local_18 为更语义化的名称
sed -i 's/local_18/system_local_temp_var_18/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 local_20 为更语义化的名称
sed -i 's/local_20/system_local_temp_var_20/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 local_28 为更语义化的名称
sed -i 's/local_28/system_local_temp_var_28/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换 local_30 为更语义化的名称
sed -i 's/local_30/system_local_temp_var_30/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "变量名美化完成"