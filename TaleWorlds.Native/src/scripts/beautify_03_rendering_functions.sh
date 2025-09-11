#!/bin/bash

# 03_rendering.c 函数调用美化脚本
# 用于替换剩余的FUN_函数调用为语义化名称

# 定义函数映射
declare -A function_mapping=(
    ["FUN_1802feba0"]="CalculateAndConvertMaterialPropertyValue"
    ["FUN_180351190"]="ValidateRenderMaterialPointer"
    ["FUN_18014a1b0"]="ProcessMaterialPropertyValueConversion"
    ["FUN_1802eeab0"]="SetupRenderMaterialPropertyData"
    ["FUN_180634a60"]="InitializeRenderStateMatrix"
    ["FUN_180630b20"]="ProcessRenderMaterialPropertyData"
    ["FUN_1801b46a0"]="CalculateMaterialPropertyValues"
    ["FUN_180355030"]="AllocateRenderMaterialBuffer"
    ["FUN_180354db0"]="ValidateRenderMaterialElement"
    ["FUN_18005d190"]="ProcessRenderMaterialElements"
    ["FUN_180469f40"]="CreateRenderMaterialNode"
    ["FUN_1802efdd0"]="UpdateRenderMaterialState"
    ["FUN_1801982b0"]="ProcessDataStreamOffset"
)

# 遍历映射并替换
for func_name in "${!function_mapping[@]}"; do
    semantic_name="${function_mapping[$func_name]}"
    
    # 替换函数调用
    sed -i "s/${func_name}(/${semantic_name}(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
    
    echo "已替换: ${func_name} -> ${semantic_name}"
done

echo "函数调用替换完成"