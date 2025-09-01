#!/bin/bash

# 简化的渲染系统函数重命名脚本

input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$input_file" "$input_file.backup"

# 批量替换函数调用
sed -i 's/FUN_1802b6e50/ProcessRenderMaterial/g' "$input_file"
sed -i 's/FUN_18025a7b0/InitializeRenderContext/g' "$input_file"
sed -i 's/FUN_180271cf0/UpdateRenderObjectData/g' "$input_file"
sed -i 's/FUN_1808fc050/ValidateRenderState/g' "$input_file"
sed -i 's/FUN_180639bf0/SetRenderProperty/g' "$input_file"
sed -i 's/FUN_180272d60/ProcessRenderObject/g' "$input_file"
sed -i 's/FUN_180639ec0/CopyRenderProperty/g' "$input_file"
sed -i 's/FUN_1802719d0/InitializeRenderSystem/g' "$input_file"
sed -i 's/FUN_1802416d0/SetRenderMemorySize/g' "$input_file"

echo "渲染系统函数重命名完成"