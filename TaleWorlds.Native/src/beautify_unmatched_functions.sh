#!/bin/bash

# 美化99_unmatched_functions.c文件中的FUN_函数
# 为每个函数提供语义化名称和完整注释

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "开始美化99_unmatched_functions.c文件..."

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 函数重命名映射
declare -A FUNCTION_RENAMES=(
    ["FUN_1800a4010"]="CreateResourceWithFlags"
    ["FUN_1800a43c0"]="InitializeResourceHandle" 
    ["FUN_1800a4c50"]="SetupResourceParameters"
    ["FUN_1800a5110"]="ProcessResourceData"
    ["FUN_1800a5810"]="LoadResourceWithOptions"
    ["FUN_1800a5f50"]="CleanupResourceContext"
    ["FUN_1800a5f90"]="ReleaseResourceMemory"
    ["FUN_1800a5fc0"]="ValidateResourceState"
    ["FUN_1800a6011"]="InitializeSystemComponents"
    ["FUN_1800a609a"]="CleanupSystemComponents"
)

# 执行函数重命名
for old_name in "${!FUNCTION_RENAMES[@]}"; do
    new_name="${FUNCTION_RENAMES[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    
    # 使用sed进行函数定义重命名
    sed -i "s/void $old_name(/void $new_name(/g" "$FILE_PATH"
    sed -i "s/char $old_name(/char $new_name(/g" "$FILE_PATH"
    sed -i "s/int $old_name(/int $new_name(/g" "$FILE_PATH"
    sed -i "s/longlong $old_name(/longlong $new_name(/g" "$FILE_PATH"
    sed -i "s/undefined8 $old_name(/undefined8 $new_name(/g" "$FILE_PATH"
    sed -i "s/bool $old_name(/bool $new_name(/g" "$FILE_PATH"
    sed -i "s/float $old_name(/float $new_name(/g" "$FILE_PATH"
    sed -i "s/double $old_name(/double $new_name(/g" "$FILE_PATH"
    sed -i "s/byte $old_name(/byte $new_name(/g" "$FILE_PATH"
    sed -i "s/ushort $old_name(/ushort $new_name(/g" "$FILE_PATH"
    sed -i "s/uint $old_name(/uint $new_name(/g" "$FILE_PATH"
    sed -i "s/ulonglong $old_name(/ulonglong $new_name(/g" "$FILE_PATH"
    
    # 重命名函数调用
    sed -i "s/$old_name(/$new_name(/g" "$FILE_PATH"
done

echo "函数重命名完成！"
echo "请检查文件以确认重命名结果正确。"