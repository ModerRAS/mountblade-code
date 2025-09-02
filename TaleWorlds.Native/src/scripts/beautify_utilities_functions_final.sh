#!/bin/bash

# 06_utilities.c 函数美化脚本
# 用于重命名 Unwind_ 函数为语义化名称

# 定义函数映射关系
declare -A function_mapping=(
    # 系统初始化相关函数
    ["Unwind_1809077b0"]="InitializeSystemDataPointer001"
    ["Unwind_1809077c0"]="InitializeSystemDataPointer002"
    ["Unwind_1809077d0"]="InitializeSystemDataPointer003"
    
    # 系统验证相关函数
    ["Unwind_180907880"]="ValidateSystemContext001"
    ["Unwind_1809078a0"]="ValidateSystemContext002"
    
    # 系统清理相关函数
    ["Unwind_1809078b0"]="ExecuteSystemCleanupCallback001"
    ["Unwind_1809078c0"]="ExecuteSystemCleanupCallback002"
    ["Unwind_1809078d0"]="ExecuteSystemCleanupCallback003"
    ["Unwind_1809078e0"]="ExecuteSystemCleanupCallback004"
    ["Unwind_1809078f0"]="ExecuteSystemCleanupCallback005"
    ["Unwind_180907900"]="ExecuteSystemCleanupCallback006"
    ["Unwind_180907910"]="ExecuteSystemCleanupCallback007"
    
    # 系统状态管理函数
    ["Unwind_180907920"]="CheckSystemStatus001"
    ["Unwind_180907930"]="ResetSystemStatus001"
    ["Unwind_180907940"]="ResetSystemStatus002"
    ["Unwind_180907950"]="UpdateSystemStatus001"
    ["Unwind_180907960"]="UpdateSystemStatus002"
    ["Unwind_180907970"]="UpdateSystemStatus003"
    ["Unwind_180907980"]="UpdateSystemStatus004"
    ["Unwind_180907990"]="UpdateSystemStatus005"
    ["Unwind_1809079a0"]="UpdateSystemStatus006"
    ["Unwind_1809079b0"]="UpdateSystemStatus007"
    
    # 系统资源管理函数
    ["Unwind_180907a50"]="ManageSystemResource001"
    ["Unwind_180907a60"]="ManageSystemResource002"
    ["Unwind_180907a70"]="ManageSystemResource003"
    ["Unwind_180907a80"]="ManageSystemResource004"
    ["Unwind_180907a90"]="ManageSystemResource005"
    ["Unwind_180907c30"]="ManageSystemResource006"
    ["Unwind_180907c60"]="ManageSystemResource007"
    ["Unwind_180907c80"]="ManageSystemResource008"
)

# 遍历所有需要替换的函数
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    
    echo "替换函数: $old_name -> $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "函数重命名完成"