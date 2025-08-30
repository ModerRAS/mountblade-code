#!/bin/bash

# 美化脚本：将非语义化变量名替换为语义化名称
# 用于01_initialization.c文件中的变量名美化

# 简化实现：仅将常见的非语义化变量名替换为语义化名称
# 原本实现：完全重构所有变量命名体系，建立统一的语义化命名规范

sed -i 's/\bpuVar1\b/system_pointer_var_1/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar2\b/system_pointer_var_2/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar3\b/system_pointer_var_3/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar4\b/system_pointer_var_4/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar5\b/system_pointer_var_5/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar6\b/system_pointer_var_6/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar7\b/system_pointer_var_7/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar8\b/system_pointer_var_8/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\bpuVar9\b/system_pointer_var_9/g' TaleWorlds.Native/src/01_initialization.c

sed -i 's/\blVar1\b/system_long_var_1/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\blVar2\b/system_long_var_2/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\blVar3\b/system_long_var_3/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\blVar4\b/system_long_var_4/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\blVar5\b/system_long_var_5/g' TaleWorlds.Native/src/01_initialization.c

sed -i 's/\buVar1\b/system_unsigned_var_1/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buVar2\b/system_unsigned_var_2/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buVar3\b/system_unsigned_var_3/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buVar4\b/system_unsigned_var_4/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buVar5\b/system_unsigned_var_5/g' TaleWorlds.Native/src/01_initialization.c

sed -i 's/\buStackX_1\b/system_stack_uint_1/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buStackX_2\b/system_stack_uint_2/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buStackX_3\b/system_stack_uint_3/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buStackX_4\b/system_stack_uint_4/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/\buStackX_5\b/system_stack_uint_5/g' TaleWorlds.Native/src/01_initialization.c

echo "变量名美化完成"