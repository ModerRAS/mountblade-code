#!/bin/bash

# 美化变量名的脚本
# 将 uVar1, uVar2 等变量名改为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
cp 01_initialization.c 01_initialization.c.tmp

# 批量替换变量名
sed -i 's/\bvoid\* uVar1\b/void* TempPointer1/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar2\b/void* TempPointer2/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar3\b/void* TempPointer3/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar4\b/void* TempPointer4/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar5\b/void* TempPointer5/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar6\b/void* TempPointer6/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar7\b/void* TempPointer7/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar8\b/void* TempPointer8/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar9\b/void* TempPointer9/g' 01_initialization.c.tmp
sed -i 's/\bvoid\* uVar10\b/void* TempPointer10/g' 01_initialization.c.tmp

# 替换变量使用
sed -i 's/\buVar1\b/TempPointer1/g' 01_initialization.c.tmp
sed -i 's/\buVar2\b/TempPointer2/g' 01_initialization.c.tmp
sed -i 's/\buVar3\b/TempPointer3/g' 01_initialization.c.tmp
sed -i 's/\buVar4\b/TempPointer4/g' 01_initialization.c.tmp
sed -i 's/\buVar5\b/TempPointer5/g' 01_initialization.c.tmp
sed -i 's/\buVar6\b/TempPointer6/g' 01_initialization.c.tmp
sed -i 's/\buVar7\b/TempPointer7/g' 01_initialization.c.tmp
sed -i 's/\buVar8\b/TempPointer8/g' 01_initialization.c.tmp
sed -i 's/\buVar9\b/TempPointer9/g' 01_initialization.c.tmp
sed -i 's/\buVar10\b/TempPointer10/g' 01_initialization.c.tmp

# 应用更改
mv 01_initialization.c.tmp 01_initialization.c

echo "变量名美化完成"