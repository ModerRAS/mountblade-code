#!/bin/bash

# 为03_rendering.c中的FUN_函数添加语义化宏定义
# 这是一个简化实现，用于演示批量美化函数名的过程

# 文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 需要美化的函数列表及其语义化名称
declare -A FUNCTION_MAP=(
    ["FUN_180363350"]="ProcessRenderMaterialProperties"
    ["FUN_180363760"]="ValidateRenderMaterialState"
    ["FUN_180363880"]="UpdateRenderMaterialPointers"
    ["FUN_1803638c0"]="ConfigureRenderMaterialSettings"
    ["FUN_180363930"]="ResetRenderMaterialConfiguration"
    ["FUN_1803639e0"]="InitializeRenderMaterialData"
    ["FUN_180363de0"]="ApplyRenderMaterialProperties"
    ["FUN_180363e30"]="FinalizeRenderMaterialProcess"
    ["FUN_180363e70"]="CleanupRenderMaterialResources"
    ["FUN_180364110"]="ValidateRenderMaterialParameters"
    ["FUN_180364280"]="SetupRenderMaterialEnvironment"
    ["FUN_180364810"]="CheckRenderMaterialIntegrity"
    ["FUN_180364880"]="VerifyRenderMaterialStructure"
    ["FUN_180365038"]="CompleteRenderMaterialInitialization"
)

# 为每个函数添加宏定义
for func_name in "${!FUNCTION_MAP[@]}"; do
    semantic_name="${FUNCTION_MAP[$func_name]}"
    
    # 检查函数是否存在于文件中
    if grep -q "^void $func_name" "$FILE_PATH"; then
        # 查找函数定义的行号
        line_num=$(grep -n "^void $func_name" "$FILE_PATH" | cut -d: -f1)
        
        # 在函数定义前添加宏定义
        sed -i "${line_num}i\\// 原始函数名：$func_name - 渲染材质处理函数\\n#define $semantic_name $func_name\\n" "$FILE_PATH"
        
        echo "已为函数 $func_name 添加宏定义: $semantic_name"
    fi
done

echo "批量函数美化完成"