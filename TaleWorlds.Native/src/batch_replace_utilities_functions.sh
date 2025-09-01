#!/bin/bash

# 批量替换06_utilities.c中的FUN_函数
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE" "$FILE.backup"

# 定义函数映射
declare -A FUNCTION_MAP=(
    ["FUN_180045af0"]="ProcessResourceHandler"
    ["FUN_180057010"]="ExecuteSystemOperation"
    ["FUN_1800596a0"]="ProcessResourceIndex"
    ["FUN_18005a050"]="PerformSystemCleanup"
    ["FUN_18005d260"]="ProcessResourceData"
    ["FUN_18005d580"]="InitializeResourceSystem"
    ["FUN_180090b80"]="ConfigureResourceTable"
    ["FUN_18020eba0"]="ValidateResourceHash"
    ["FUN_18020f530"]="FinalizeResourceOperation"
)

# 执行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$FILE"
done

echo "替换完成"