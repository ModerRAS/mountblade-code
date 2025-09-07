#!/bin/bash

# 批量美化03_rendering.c文件中的FUN_函数
# 注意：这个脚本会直接修改源文件，请确保已备份

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 定义要替换的函数映射
declare -A function_mappings=(
    ["FUN_18029e500"]="InitializeRenderMaterialAttributeTable"
    ["FUN_18029e570"]="ProcessRenderMaterialAttributeWithFlags"
    ["FUN_18029e630"]="ValidateRenderMaterialAttributeTable"
    ["FUN_18029e6e0"]="SetRenderMaterialAttributeValues"
    ["FUN_18029e910"]="UpdateRenderMaterialAttributeState"
    ["FUN_18029ea30"]="ResetRenderMaterialAttributeData"
    ["FUN_18029ead0"]="CleanupRenderMaterialAttributeBuffer"
    ["FUN_18029eb60"]="GetRenderMaterialAttributeInfo"
    ["FUN_18029ec10"]="SetRenderMaterialAttributeInfo"
    ["FUN_18029ecc0"]="ValidateRenderMaterialAttributeInfo"
)

# 批量替换函数名
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    echo "替换 $old_name -> $new_name"
    
    # 使用sed进行替换，只替换函数定义处的名称
    sed -i "s/^void $old_name(/void $new_name(/g" "$FILE"
    sed -i "s/^bool $old_name(/bool $new_name(/g" "$FILE"
    sed -i "s/^int $old_name(/int $new_name(/g" "$FILE"
    sed -i "s/^uint $old_name(/uint $new_name(/g" "$FILE"
    sed -i "s/^longlong $old_name(/longlong $new_name(/g" "$FILE"
    sed -i "s/^uint64_t $old_name(/uint64_t $new_name(/g" "$FILE"
done

echo "批量替换完成"