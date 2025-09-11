#!/bin/bash

# 美化脚本：用于演示如何美化Ghidra生成的变量名
# 这个脚本将展示如何替换一些常见的Ghidra变量名模式

# 设置工作目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份（仅用于演示，实际执行时不需要）
# cp 06_utilities.c 06_utilities_backup.c

# 示例：美化一些常见的变量名模式
# 注意：这些只是一些示例，实际的美化需要根据上下文来判断

# 美化栈变量
sed -i 's/local_60/StackVariable60/g' 06_utilities.c
sed -i 's/local_70/StackVariable70/g' 06_utilities.c
sed -i 's/local_80/StackVariable80/g' 06_utilities.c

# 美化整数变量
sed -i 's/iVar1/IntegerVariable1/g' 06_utilities.c
sed -i 's/iVar2/IntegerVariable2/g' 06_utilities.c
sed -i 's/iVar3/IntegerVariable3/g' 06_utilities.c

# 美化无符号变量
sed -i 's/uVar1/UnsignedVariable1/g' 06_utilities.c
sed -i 's/uVar2/UnsignedVariable2/g' 06_utilities.c

# 美化指针变量
sed -i 's/puVar1/PointerToUnsigned1/g' 06_utilities.c
sed -i 's/puVar2/PointerToUnsigned2/g' 06_utilities.c

echo "变量名美化完成"