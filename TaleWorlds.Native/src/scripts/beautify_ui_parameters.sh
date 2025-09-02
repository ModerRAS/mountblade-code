#!/bin/bash

# UI系统参数名美化脚本
# 用于将04_ui_system.c中的中文参数名和通用参数名替换为语义化的英文名称

echo "开始美化UI系统参数名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 定义参数替换映射
declare -A param_mapping=(
    # UIParameterOne 系列替换
    ["UIParameterOne"]="systemContext"
    ["参数二"]="dataBuffer" 
    ["参数三"]="bufferSize"
    ["参数四"]="operationFlags"
    ["参数五"]="additionalParams"
    
    # 函数参数中的参数名替换
    ["longlong 参数二"]="longlong dataBuffer"
    ["float *参数三"]="float *outputArray"
    ["char 参数四"]="char operationMode"
    ["uint64_t 参数二"]="uint64_t dataBuffer"
    ["longlong *参数三"]="longlong *resultBuffer"
    ["int 参数四"]="int bufferSize"
    ["longlong 参数三"]="longlong bufferSize"
    ["uint64_t 参数三"]="uint64_t bufferSize"
    ["longlong 参数四"]="longlong operationFlags"
    ["uint64_t 参数四"]="uint64_t operationFlags"
    ["longlong 参数五"]="longlong additionalParams"
    ["uint64_t 参数五"]="uint64_t additionalParams"
    ["int 参数五"]="int additionalParams"
)

# 执行替换操作
for old_name in "${!param_mapping[@]}"; do
    new_name="${param_mapping[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
done

echo "UI系统参数名美化完成！"