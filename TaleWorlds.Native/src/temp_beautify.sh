#!/bin/bash

# 批量替换渲染系统中的函数名
# 临时脚本，将在执行完成后删除

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换 FUN_18033bf30 为 InitializeRenderMaterialHashTable
sed -i 's/FUN_18033bf30(/InitializeRenderMaterialHashTable(/g' 03_rendering.c

# 替换其他常见的FUN_函数调用
sed -i 's/FUN_180372570(/AllocateRenderMaterialMemory(/g' 03_rendering.c
sed -i 's/FUN_1801b5f00(/ValidateMaterialPropertyData(/g' 03_rendering.c
sed -i 's/FUN_1802a1dd0(/ProcessMaterialShaderData(/g' 03_rendering.c
sed -i 's/FUN_18038d0a0(/CalculateShaderPropertyCount(/g' 03_rendering.c

echo "函数名替换完成"