#!/bin/bash

# 渲染系统函数美化脚本
# 用于批量替换03_rendering.c中的FUN_函数名

echo "开始美化渲染系统函数..."

# 定义函数名映射
declare -A function_mappings=(
    ["FUN_1803001a0"]="CleanupRenderMaterialPropertiesEx"
    ["FUN_180300290"]="InitializeRenderMaterialProperties"
    ["FUN_1803004f0"]="ProcessRenderMaterialTextureData"
    ["FUN_1803005b0"]="ValidateRenderMaterialState"
    ["FUN_180300650"]="UpdateRenderMaterialTransform"
    ["FUN_180300a13"]="ResetRenderMaterialConfiguration"
    ["FUN_180300e10"]="SetRenderMaterialTextureFlags"
    ["FUN_18030181f"]="InitializeRenderMaterialSystem"
    ["FUN_180301d10"]="ProcessRenderMaterialShaderData"
    ["FUN_180301f30"]="ApplyRenderMaterialShader"
    ["FUN_180302270"]="SetRenderMaterialRenderState"
    ["FUN_180302370"]="ValidateRenderMaterialShader"
    ["FUN_180302c30"]="ReleaseRenderMaterialResources"
    ["FUN_1803033b0"]="ConfigureRenderMaterialParameters"
    ["FUN_1803034a0"]="FinalizeRenderMaterialSetup"
    ["FUN_1803034b9"]="ExecuteRenderMaterialRender"
    ["FUN_180303569"]="DestroyRenderMaterialInstance"
)

# 批量替换函数名
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "渲染系统函数美化完成！"