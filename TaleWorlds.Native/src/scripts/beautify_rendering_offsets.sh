#!/bin/bash

# 渲染系统变量名美化脚本
# 用于美化03_rendering.c文件中的硬编码偏移量

# 定义常见的硬编码偏移量及其语义化名称
declare -A offset_mapping=(
    ["0x38"]="RenderMaterialPropertyDataStartOffset"
    ["0x40"]="RenderMaterialPropertyDataEndOffset"
    ["0x4a"]="RenderMaterialPropertyRangeStart"
    ["0x4c"]="RenderMaterialPropertyRangeEnd"
    ["0x58"]="RenderMaterialPropertyFirstValueOffset"
    ["0x5c"]="RenderMaterialPropertySecondValueOffset"
    ["0x60"]="RenderMaterialPropertyBlockSize"
    ["0x62a"]="RenderMaterialMagicNumberOffset1"
    ["0x634"]="RenderMaterialMagicNumberOffset2"
    ["0x65a"]="RenderMaterialMagicNumberOffset3"
    ["0x680"]="RenderMaterialMagicNumberOffset4"
    ["0x6a6"]="RenderMaterialMagicNumberOffset5"
    ["0x6cc"]="RenderMaterialMagicNumberOffset6"
    ["0x6f2"]="RenderMaterialMagicNumberOffset7"
    ["0x18c9"]="RenderMaterialPropertyValueOffset"
    ["0x1fc"]="RenderMaterialAnimationRangeStart"
    ["0x1fe"]="RenderMaterialAnimationRangeEnd"
    ["0x214"]="RenderMaterialTransformMatrixOffset1"
    ["0x21c"]="RenderMaterialTransformMatrixOffset2"
    ["0x224"]="RenderMaterialTransformMatrixOffset3"
    ["0x22c"]="RenderMaterialTransformMatrixOffset4"
    ["0x234"]="RenderMaterialTransformMatrixOffset5"
    ["0x23c"]="RenderMaterialTransformMatrixOffset6"
    ["0x244"]="RenderMaterialTransformMatrixOffset7"
    ["0x24c"]="RenderMaterialTransformMatrixOffset8"
    ["0x254"]="RenderMaterialAnimationDataStart"
    ["0x25c"]="RenderMaterialAnimationDataEnd"
    ["0x264"]="RenderMaterialCurveDataStart"
    ["0x26c"]="RenderMaterialCurveDataEnd"
    ["0x274"]="RenderMaterialShaderDataStart"
    ["0x27c"]="RenderMaterialShaderDataEnd"
    ["0x284"]="RenderMaterialTextureDataStart"
    ["0x28c"]="RenderMaterialTextureDataEnd"
    ["0x294"]="RenderMaterialMeshDataStart"
    ["0x29c"]="RenderMaterialMeshDataEnd"
    ["0x2a4"]="RenderMaterialLightDataStart"
    ["0x2ac"]="RenderMaterialLightDataEnd"
    ["0x2b4"]="RenderMaterialCameraDataStart"
    ["0x2bc"]="RenderMaterialCameraDataEnd"
    ["0x2c4"]="RenderMaterialEffectDataStart"
    ["0x2cc"]="RenderMaterialEffectDataEnd"
    ["0x2d4"]="RenderMaterialPostProcessDataStart"
    ["0x2dc"]="RenderMaterialPostProcessDataEnd"
    ["0x2e4"]="RenderMaterialSystemDataStart"
    ["0x2ec"]="RenderMaterialSystemDataEnd"
    ["0x2f4"]="RenderMaterialUserDataStart"
    ["0x2fc"]="RenderMaterialUserDataEnd"
    ["0x16"]="RenderMaterialPropertyStepSize"
    ["0xd"]="RenderMaterialObjectAttributeOffset"
    ["0x7f7fffff00000000"]="RenderMaterialMaxFloatValue"
    ["0xfffffffffffffffe"]="RenderMaterialSpecialFlagValue"
    ["0x3e"]="RenderMaterialStatePointerOffset"
    ["0x3f"]="RenderMaterialStatusOffset"
    ["0x40"]="RenderMaterialControlOffset"
    ["0x41"]="RenderMaterialConfigOffset"
    ["0x61"]="RenderMaterialTablePointerOffset"
    ["0x62"]="RenderMaterialLockOffset"
    ["0x77"]="RenderMaterialCallbackOffset1"
    ["0x79"]="RenderMaterialCallbackOffset2"
    ["0xc0"]="RenderMaterialFunctionPointerOffset"
    ["0xfa"]="RenderMaterialValidationOffset"
    ["0x188"]="RenderMaterialStateValueOffset"
    ["0x1a0"]="RenderMaterialControlValueOffset"
    ["0x170"]="RenderMaterialStatusValueOffset"
    ["0x180"]="RenderMaterialConfigValueOffset"
    ["0x168"]="RenderMaterialPropertyStartOffset"
    ["0x150"]="RenderMaterialPropertyEndOffset"
    ["0x148"]="RenderMaterialDataStartOffset"
)

# 创建临时脚本文件
cat > /tmp/rendering_beautify.sh << 'EOF'
#!/bin/bash

# 渲染系统变量名美化脚本
# 用于美化03_rendering.c文件中的硬编码偏移量

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义偏移量映射
declare -A offset_mapping=(
EOF

# 添加映射关系到脚本
for offset in "${!offset_mapping[@]}"; do
    echo "    [\"$offset\"]=\"${offset_mapping[$offset]}\"" >> /tmp/rendering_beautify.sh
done

cat >> /tmp/rendering_beautify.sh << 'EOF'
)

# 为每个偏移量创建常量定义
echo "// 渲染系统硬编码偏移量语义化定义" >> "$FILE_PATH"
for offset in "${!offset_mapping[@]}"; do
    echo "#define ${offset_mapping[$offset]} $offset  // 渲染系统偏移量" >> "$FILE_PATH"
done

echo "" >> "$FILE_PATH"

# 替换文件中的硬编码偏移量
for offset in "${!offset_mapping[@]}"; do
    sed -i "s/+ $offset/+ ${offset_mapping[$offset]}/g" "$FILE_PATH"
    sed -i "s/(\*($offset))/(*(${offset_mapping[$offset]}))/g" "$FILE_PATH"
    sed -i "s/\[(\*($offset))\]/[(*(${offset_mapping[$offset]}))]/g" "$FILE_PATH"
    sed -i "s/RenderMaterialObject + $offset/RenderMaterialObject + ${offset_mapping[$offset]}/g" "$FILE_PATH"
    sed -i "s/(longlong)RenderMaterialObject + $offset/(longlong)RenderMaterialObject + ${offset_mapping[$offset]}/g" "$FILE_PATH"
    sed -i "s/\[0x[0-9a-fA-F]*\]\[0x[0-9a-fA-F]*\]\[0x[0-9a-fA-F]*\]\[0x[0-9a-fA-F]*\]\[0x[0-9a-fA-F]*\]//g" "$FILE_PATH"
done

echo "渲染系统变量名美化完成"
EOF

# 执行美化脚本
chmod +x /tmp/rendering_beautify.sh
/tmp/rendering_beautify.sh

# 清理临时文件
rm -f /tmp/rendering_beautify.sh

echo "渲染系统变量名美化脚本执行完成"