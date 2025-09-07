#!/bin/bash

# 渲染系统函数美化脚本
# 用于替换03_rendering.c文件中的FUN_函数调用为语义化名称

# 定义函数映射
declare -A function_map=(
    ["FUN_1802940f0"]="ProcessRenderMaterialCurveData"
    ["FUN_18011d9a0"]="UpdateRenderMaterialCurve"
    ["FUN_180293190"]="ApplyRenderMaterialTransform"
    ["FUN_180294117"]="ResetRenderMaterialState"
    ["FUN_180075030"]="AllocateRenderMaterialProperty"
    ["FUN_180057830"]="ReleaseRenderMaterialBuffer"
    ["FUN_1800b8cb0"]="ProcessRenderMaterialArray"
    ["FUN_180075ff0"]="FreeRenderMaterialChild"
    ["FUN_1800b32c0"]="InitializeRenderMaterialProperty"
    ["FUN_180075990"]="ValidateRenderMaterialProperty"
    ["FUN_18007bbb0"]="SetRenderMaterialPropertyValue"
    ["FUN_18007baa0"]="UpdateRenderMaterialReference"
    ["FUN_18007b240"]="CalculateRenderMaterialOffset"
    ["FUN_1800bf050"]="CreateRenderMaterialPointer"
    ["FUN_1800b08e0"]="SetupRenderMaterialStream"
    ["FUN_1800bf6c0"]="InitializeRenderMaterialContext"
)

# 创建宏定义
echo "// 渲染系统函数语义化宏定义" > temp_macros.h
for func in "${!function_map[@]}"; do
    semantic_name="${function_map[$func]}"
    echo "#define $semantic_name $func" >> temp_macros.h
done

# 在文件开头插入宏定义
sed -i '/^#include "TaleWorlds.Native.Split.h"/r temp_macros.h' 03_rendering.c

# 清理临时文件
rm temp_macros.h

echo "渲染系统函数美化完成"