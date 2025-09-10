#!/bin/bash

# 简化的函数美化脚本
echo "开始美化渲染系统函数名..."

# 处理前10个函数
sed -i 's/^void FUN_18035a770(/void ValidateRenderMaterialProperty(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035a8e0(/void ApplyRenderMaterialPropertyData(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035b160(/void CreateRenderMaterialObject(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035b1cd(/void SetRenderMaterialPropertyPointer(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035b201(/void ResetRenderMaterialState(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035b262(/void CleanupRenderMaterialObject(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035b2f0(/void InitializeRenderMaterialSystem(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035bbd0(/void AllocateRenderMaterialMemory(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035c940(/void ReleaseRenderMaterialMemory(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/^void FUN_18035c979(/void UpdateRenderMaterialProperty(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "函数名美化完成"