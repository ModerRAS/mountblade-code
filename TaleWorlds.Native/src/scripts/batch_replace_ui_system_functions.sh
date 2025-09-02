#!/bin/bash

# UI系统函数美化脚本
# 用于替换04_ui_system.c文件中的FUN_函数名为语义化名称

echo "开始美化UI系统函数名..."

# 定义函数替换映射
declare -A function_mapping=(
    ["FUN_180660051"]="UserInterfaceSystemEmptyOperation2"
    ["FUN_1806673f0"]="UserInterfaceSystemEmptyOperation3"
    ["FUN_1806677e7"]="UserInterfaceSystemEmptyOperation4"
    ["FUN_1806687d4"]="UserInterfaceSystemEmptyOperation5"
    ["FUN_18066c4b8"]="UserInterfaceSystemEmptyOperation6"
    ["FUN_18066d3e9"]="UserInterfaceSystemEmptyOperation7"
    ["FUN_18066d3f4"]="UserInterfaceSystemEmptyOperation8"
    ["FUN_18066d763"]="UserInterfaceSystemEmptyOperation9"
    ["FUN_18066e90c"]="UserInterfaceSystemEmptyOperation10"
    ["FUN_18066ebc0"]="UserInterfaceSystemEmptyOperation11"
    ["FUN_1806704b6"]="UserInterfaceSystemEmptyOperation12"
    ["FUN_1806704db"]="UserInterfaceSystemEmptyOperation13"
    ["FUN_1806707c6"]="UserInterfaceSystemEmptyOperation14"
    ["FUN_180670b1e"]="UserInterfaceSystemParameterProcessor1"
    ["FUN_180670bda"]="UserInterfaceSystemEmptyOperation15"
    ["FUN_180670c31"]="UserInterfaceSystemEmptyOperation16"
    ["FUN_180670c62"]="UserInterfaceSystemParameterProcessor2"
    ["FUN_180670c6a"]="UserInterfaceSystemEmptyOperation17"
    ["FUN_180674930"]="UserInterfaceSystemEmptyOperation18"
    ["FUN_180675320"]="UserInterfaceSystemDataProcessor1"
)

# 遍历所有函数映射并执行替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    
    echo "替换函数: $old_name -> $new_name"
    
    # 替换函数定义
    sed -i "s/\/\/ 函数: void $old_name/\/\/ 函数: void $new_name/g" "04_ui_system.c"
    
    # 替换函数调用
    sed -i "s/$old_name(/$new_name(/g" "04_ui_system.c"
    
    # 替换函数指针引用
    sed -i "s/\&$old_name/\&$new_name/g" "04_ui_system.c"
    
    # 替换函数地址引用
    sed -i "s/\*$old_name/\*$new_name/g" "04_ui_system.c"
done

echo "UI系统函数美化完成！"

# 显示替换统计
echo "替换统计:"
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    count=$(grep -c "$new_name" "04_ui_system.c" 2>/dev/null || echo 0)
    echo "  $new_name: $count 次引用"
done