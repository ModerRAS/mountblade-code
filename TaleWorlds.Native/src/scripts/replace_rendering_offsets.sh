#!/bin/bash

# 渲染系统硬编码偏移量替换脚本
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份文件
cp "$FILE" "$FILE.backup2"

# 定义替换规则
declare -A replacements=(
    ["+ 0x38"]="+ RenderMaterialPropertyDataStartOffset"
    ["+ 0x40"]="+ RenderMaterialPropertyDataEndOffset"
    ["+ 0x4a"]="+ RenderMaterialPropertyRangeStart"
    ["+ 0x4c"]="+ RenderMaterialPropertyRangeEnd"
    ["+ 0x58"]="+ RenderMaterialPropertyFirstValueOffset"
    ["+ 0x5c"]="+ RenderMaterialPropertySecondValueOffset"
    ["+ 0x60"]="+ RenderMaterialPropertyBlockSize"
    ["+ 0x62a"]="+ RenderMaterialMagicNumberOffset1"
    ["+ 0x634"]="+ RenderMaterialMagicNumberOffset2"
    ["+ 0x65a"]="+ RenderMaterialMagicNumberOffset3"
    ["+ 0x680"]="+ RenderMaterialMagicNumberOffset4"
    ["+ 0x6a6"]="+ RenderMaterialMagicNumberOffset5"
    ["+ 0x6cc"]="+ RenderMaterialMagicNumberOffset6"
    ["+ 0x6f2"]="+ RenderMaterialMagicNumberOffset7"
    ["+ 0x18c9"]="+ RenderMaterialPropertyValueOffset"
    ["+ 0x1fc"]="+ RenderMaterialAnimationRangeStart"
    ["+ 0x1fe"]="+ RenderMaterialAnimationRangeEnd"
    ["+ 0x16"]="+ RenderMaterialPropertyStepSize"
    ["+ 0xd"]="+ RenderMaterialObjectAttributeOffset"
    ["+ 0x3e"]="+ RenderMaterialStatePointerOffset"
    ["+ 0x3f"]="+ RenderMaterialStatusOffset"
    ["+ 0x40"]="+ RenderMaterialControlOffset"
    ["+ 0x41"]="+ RenderMaterialConfigOffset"
    ["+ 0x61"]="+ RenderMaterialTablePointerOffset"
    ["+ 0x62"]="+ RenderMaterialLockOffset"
    ["+ 0x77"]="+ RenderMaterialCallbackOffset1"
    ["+ 0x79"]="+ RenderMaterialCallbackOffset2"
    ["+ 0xc0"]="+ RenderMaterialFunctionPointerOffset"
    ["+ 0xfa"]="+ RenderMaterialValidationOffset"
    ["+ 0x188"]="+ RenderMaterialStateValueOffset"
    ["+ 0x1a0"]="+ RenderMaterialControlValueOffset"
    ["+ 0x170"]="+ RenderMaterialStatusValueOffset"
    ["+ 0x180"]="+ RenderMaterialConfigValueOffset"
    ["+ 0x168"]="+ RenderMaterialPropertyStartOffset"
    ["+ 0x150"]="+ RenderMaterialPropertyEndOffset"
    ["+ 0x148"]="+ RenderMaterialDataStartOffset"
)

# 执行替换
for old in "${!replacements[@]}"; do
    new="${replacements[$old]}"
    echo "替换: $old -> $new"
    sed -i "s/$old/$new/g" "$FILE"
done

echo "硬编码偏移量替换完成"