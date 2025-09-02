#!/bin/bash
# 批量美化99_unmatched_functions.c中的函数名

# 函数名映射
declare -A function_mappings=(
    ["FUN_1800b4830"]="ValidateSystemParameters"
    ["FUN_1800b4860"]="ResetSystemState"
    ["FUN_1800b4890"]="ConfigureSystemModules"
    ["FUN_1800b48c0"]="InitializeSystemComponents"
    ["FUN_1800b48e0"]="SetupSystemEnvironment"
    ["FUN_1800b4e00"]="CreateResourceHandle"
    ["FUN_1800b4ec0"]="ConfigureResourceParameters"
    ["FUN_1800b57a0"]="ProcessResourceData"
    ["FUN_1800b5cc0"]="ManageResourceAllocation"
    ["FUN_1800b5d10"]="ReleaseResourceHandle"
    ["FUN_1800b5d38"]="CleanupResourceCache"
    ["FUN_1800b5e73"]="ValidateResourceState"
)

# 遍历所有函数映射
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 替换函数注释中的名称
    sed -i "s/void $old_name(/void $new_name(/g" "TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 替换函数定义中的名称
    sed -i "s/void $old_name(/void $new_name(/g" "TaleWorlds.Native/src/99_unmatched_functions.c"
    
    echo "已替换函数名: $old_name -> $new_name"
done

echo "函数名批量替换完成"