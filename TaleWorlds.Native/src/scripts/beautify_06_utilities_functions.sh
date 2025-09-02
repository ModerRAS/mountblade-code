#!/bin/bash

# 批量重命名06_utilities.c中的Unwind函数

# 定义重命名映射
declare -A rename_mapping=(
    ["Unwind_180905010"]="InitializeSystemResourceHandlerTemplate"
    ["Unwind_180905020"]="ExecuteSystemResourceCleanupWithFlags"
    ["Unwind_180905030"]="ValidateSystemResourceContext"
    ["Unwind_180905040"]="ExecuteSystemResourceValidationWithFlags"
    ["Unwind_180905050"]="InitializeSystemResourceValidator"
    ["Unwind_180905060"]="ExecuteSystemResourceValidation"
    ["Unwind_180905070"]="CleanupSystemResourceContext"
    ["Unwind_180905080"]="InitializeSystemResourceCleanup"
    ["Unwind_180905090"]="ExecuteSystemResourceCleanup"
    ["Unwind_1809050c0"]="ValidateSystemResourceIntegrity"
    ["Unwind_1809050d0"]="InitializeSystemResourceIntegrityCheck"
    ["Unwind_1809050e0"]="ExecuteSystemResourceIntegrityValidation"
    ["Unwind_1809050f0"]="CleanupSystemResourceValidation"
    ["Unwind_180905100"]="InitializeSystemResourceValidationContext"
    ["Unwind_180905110"]="ExecuteSystemResourceCleanupWithOptions"
    ["Unwind_180905120"]="ExecuteSystemResourceValidationWithOptions"
    ["Unwind_180905130"]="FinalizeSystemResourceCleanup"
    ["Unwind_180905140"]="InitializeSystemResourceFinalization"
    ["Unwind_180905150"]="ExecuteSystemResourceFinalization"
    ["Unwind_180905c80"]="ExecuteSystemResourceCleanupAndValidation"
    ["Unwind_180905c90"]="ExecuteSystemResourceValidationAndCleanup"
)

# 处理每个重命名
for old_name in "${!rename_mapping[@]}"; do
    new_name="${rename_mapping[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/void $old_name(/void $new_name(/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/$old_name(/$new_name(/g" "TaleWorlds.Native/src/06_utilities.c"
    
    echo "重命名: $old_name -> $new_name"
done

echo "函数重命名完成"