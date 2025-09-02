#!/bin/bash

# UI系统函数名美化脚本
# 为04_ui_system.c文件中的函数名提供有意义的名称

echo "开始美化UI系统函数名..."

# 定义函数名映射
declare -A function_map=(
    ["FUN_1806844a0"]="InitializeUISystemResources"
    ["FUN_180679d30"]="ProcessUIRenderingData"
    ["FUN_18068b080"]="UpdateUIRenderingState"
    ["FUN_180683f90"]="ValidateUIRenderingParameters"
    ["FUN_18068d2b0"]="ProcessUIAnimationData"
    ["FUN_1806905c0"]="UpdateUIAnimationState"
    ["FUN_180679ac0"]="InitializeUITextureSystem"
    ["FUN_180679b20"]="SetupUITextureParameters"
    ["FUN_1806917c0"]="ProcessUIWindowEvent"
    ["FUN_180691db0"]="HandleUIWindowInput"
    ["FUN_18068d480"]="CalculateUIAnimationMetrics"
    ["FUN_180697770"]="OptimizeUIRenderingPipeline"
)

# 遍历函数映射并进行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换函数名: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
done

echo "函数名美化完成！"