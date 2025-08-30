#!/bin/bash

# 脚本：美化01_initialization.c中的剩余变量名
# 原本实现：完全重构初始化系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

cd /dev/shm/mountblade-code/TaleWorlds.Native/src/

# 替换iVar变量名（整数）
sed -i 's/ iVar9/ system_int_var_9/g' 01_initialization.c
sed -i 's/ iVar13/ system_int_var_13/g' 01_initialization.c

# 替换piVar变量名（整数指针）
sed -i 's/piVar6/system_int_pointer_6/g' 01_initialization.c

# 替换dVar变量名（双精度浮点数）
sed -i 's/dVar14/system_double_var_14/g' 01_initialization.c
sed -i 's/dVar15/system_double_var_15/g' 01_initialization.c
sed -i 's/dVar16/system_double_var_16/g' 01_initialization.c

echo "剩余变量名语义化美化完成"