#!/bin/bash

# 美化03_rendering.c中的FUN_函数调用
# 将FUN_函数名替换为语义化名称

echo "开始美化03_rendering.c中的FUN_函数调用..."

# 定义要替换的函数映射
declare -A function_map=(
    ["FUN_180364e8e"]="ProcessRenderMaterialTransformProperties"
    ["FUN_1803665f0"]="ProcessRenderMaterialBase"
    ["FUN_1803667e0"]="ProcessRenderMaterialObjectPointer"
    ["FUN_18037ad90"]="ProcessRenderMaterialDataPointers"
    ["FUN_18037f230"]="ProcessRenderMaterialUnsignedData"
    ["FUN_18037f530"]="ProcessRenderMaterialExtendedParameters"
    ["FUN_18037f9c0"]="ProcessRenderMaterialPropertyData"
    ["FUN_180382fd0"]="ProcessRenderMaterialCurveDataAdvanced"
    ["FUN_1803872c0"]="ProcessRenderMaterialAttributeData"
    ["FUN_180387710"]="ProcessRenderMaterialExtendedAttributes"
    ["FUN_180387860"]="ProcessRenderMaterialAdvancedAttributes"
    ["FUN_180388370"]="ProcessRenderMaterialIndexData"
    ["FUN_180392a30"]="ProcessRenderMaterialFloatData"
    ["FUN_180393610"]="ValidateRenderMaterialProperty"
    ["FUN_18039e2c2"]="ProcessRenderMaterialDataStream"
)

# 遍历所有函数进行替换
for func_name in "${!function_map[@]}"; do
    semantic_name="${function_map[$func_name]}"
    
    echo "替换函数: $func_name -> $semantic_name"
    
    # 使用sed进行替换，处理函数定义和调用
    sed -i "s/\b$func_name\b/$semantic_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
    
done

echo "FUN_函数替换完成！"

# 统计替换结果
echo "统计替换结果:"
for func_name in "${!function_map[@]}"; do
    semantic_name="${function_map[$func_name]}"
    count=$(grep -c "$semantic_name" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
    echo "$semantic_name: $count 次"
done