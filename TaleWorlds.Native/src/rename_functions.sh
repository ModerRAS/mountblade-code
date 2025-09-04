#!/bin/bash

# 批量重命名工具系统中的函数
# 这个脚本用于美化06_utilities.c文件中的原始函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 定义函数映射关系
declare -A FUNCTION_MAPPINGS=(
    ["Unwind_18090bc70"]="ProcessResourceContextOperation1"
    ["Unwind_18090bc90"]="ProcessResourceContextOperation2"
    ["Unwind_18090bcb0"]="ProcessResourceContextOperation3"
    ["Unwind_18090bcd0"]="ProcessResourceContextOperation4"
    ["Unwind_18090bd10"]="ProcessResourceTableCleanup1"
    ["Unwind_18090bd20"]="ProcessResourceTableCleanup2"
    ["Unwind_18090bd50"]="ProcessResourceTableCleanup3"
    ["Unwind_18090bd60"]="ProcessResourceTableCleanup4"
    ["Unwind_18090bd70"]="ProcessResourceTableCleanup5"
    ["Unwind_18090bd80"]="ProcessResourceTableCleanup6"
    ["Unwind_18090bd90"]="ProcessResourceTableCleanup7"
    ["Unwind_18090bdc0"]="ProcessResourceTableCleanup8"
    ["Unwind_18090bdd0"]="ProcessResourceTableCleanup9"
    ["Unwind_18090bde0"]="ProcessResourceTableCleanup10"
    ["Unwind_18090bdf0"]="ProcessResourceTableCleanup11"
    ["Unwind_18090be00"]="ProcessResourceTableCleanup12"
    ["Unwind_18090be30"]="ProcessResourceTableCleanup13"
    ["Unwind_18090be40"]="ProcessResourceTableCleanup14"
    ["Unwind_18090be50"]="ProcessResourceTableCleanup15"
    ["Unwind_18090be80"]="ProcessResourceTableCleanup16"
    ["Unwind_18090beb0"]="ProcessResourceTableCleanup17"
    ["Unwind_18090bee0"]="ProcessResourceTableCleanup18"
    ["Unwind_18090bf10"]="ProcessResourceTableCleanup19"
    ["Unwind_18090bf40"]="ProcessResourceTableCleanup20"
)

# 遍历所有映射关系并替换
for old_name in "${!FUNCTION_MAPPINGS[@]}"; do
    new_name="${FUNCTION_MAPPINGS[$old_name]}"
    
    # 使用sed替换函数名
    sed -i "s/$old_name/$new_name/g" "$FILE_PATH"
    
    echo "已将 $old_name 替换为 $new_name"
done

echo "函数重命名完成"