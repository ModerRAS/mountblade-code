#!/bin/bash

# 美化 uVar 变量名的脚本
# 将 uVar1, uVar2 等替换为更有意义的名字

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原文件
cp "$FILE" "$FILE.bak"

# 使用 sed 批量替换变量名
sed -i 's/void\* uVar1;/void* TempVariable1;/g' "$FILE"
sed -i 's/void\* uVar2;/void* TempVariable2;/g' "$FILE"
sed -i 's/void\* uVar3;/void* TempVariable3;/g' "$FILE"
sed -i 's/void\* uVar4;/void* TempVariable4;/g' "$FILE"
sed -i 's/void\* uVar5;/void* TempVariable5;/g' "$FILE"
sed -i 's/void\* uVar6;/void* TempVariable6;/g' "$FILE"
sed -i 's/void\* uVar7;/void* TempVariable7;/g' "$FILE"
sed -i 's/void\* uVar8;/void* TempVariable8;/g' "$FILE"
sed -i 's/void\* uVar9;/void* TempVariable9;/g' "$FILE"
sed -i 's/void\* uVar10;/void* TempVariable10;/g' "$FILE"
sed -i 's/void\* uVar11;/void* TempVariable11;/g' "$FILE"
sed -i 's/void\* uVar12;/void* TempVariable12;/g' "$FILE"
sed -i 's/void\* uVar13;/void* TempVariable13;/g' "$FILE"
sed -i 's/void\* uVar16;/void* TempVariable16;/g' "$FILE"
sed -i 's/void\* uVar18;/void* TempVariable18;/g' "$FILE"
sed -i 's/void\* uVar19;/void* TempVariable19;/g' "$FILE"
sed -i 's/void\* uVar20;/void* TempVariable20;/g' "$FILE"
sed -i 's/void\* uVar21;/void* TempVariable21;/g' "$FILE"
sed -i 's/void\* uVar22;/void* TempVariable22;/g' "$FILE"
sed -i 's/void\* uVar23;/void* TempVariable23;/g' "$FILE"
sed -i 's/void\* uVar24;/void* TempVariable24;/g' "$FILE"
sed -i 's/void\* uVar25;/void* TempVariable25;/g' "$FILE"
sed -i 's/void\* uVar26;/void* TempVariable26;/g' "$FILE"
sed -i 's/void\* uVar27;/void* TempVariable27;/g' "$FILE"
sed -i 's/void\* uVar28;/void* TempVariable28;/g' "$FILE"
sed -i 's/void\* uVar29;/void* TempVariable29;/g' "$FILE"
sed -i 's/void\* uVar31;/void* TempVariable31;/g' "$FILE"

echo "变量名美化完成"