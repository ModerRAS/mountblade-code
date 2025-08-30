#!/bin/bash

# 继续美化99_unmatched_functions.c文件中的SystemFunction_函数名
# 这是简化实现，仅进行函数名的语义化替换

# 函数名替换映射
declare -A function_map

# 系统配置函数
function_map["SystemFunction_0ae390"]="SystemConfigSetParameter"
function_map["SystemFunction_0ae3c0"]="SystemConfigGetParameter"
function_map["SystemFunction_0ae640"]="SystemConfigValidate"
function_map["SystemFunction_0ae730"]="SystemConfigApply"
function_map["SystemFunction_0aec40"]="SystemConfigReset"
function_map["SystemFunction_0aecf0"]="SystemConfigSave"
function_map["SystemFunction_0aeef0"]="SystemConfigLoad"
function_map["SystemFunction_0af9f0"]="SystemConfigInitialize"
function_map["SystemFunction_0b01b0"]="SystemConfigCleanup"
function_map["SystemFunction_0b01cf"]="SystemConfigDestroy"

# 系统状态函数
function_map["SystemFunction_0b03e0"]="SystemStatusCheck"
function_map["SystemFunction_0b0400"]="SystemStatusUpdate"
function_map["SystemFunction_0b0420"]="SystemStatusReset"
function_map["SystemFunction_0b0440"]="SystemStatusReport"
function_map["SystemFunction_0b0460"]="SystemStatusNotify"

# 系统错误处理函数
function_map["SystemFunction_0b0480"]="SystemErrorHandle"
function_map["SystemFunction_0b04a0"]="SystemErrorReport"
function_map["SystemFunction_0b04c0"]="SystemErrorLog"
function_map["SystemFunction_0b04e0"]="SystemErrorRecover"

# 系统资源函数
function_map["SystemFunction_0b0500"]="SystemResourceAllocate"
function_map["SystemFunction_0b0520"]="SystemResourceFree"
function_map["SystemFunction_0b0540"]="SystemResourceFind"
function_map["SystemFunction_0b0560"]="SystemResourceLock"
function_map["SystemFunction_0b0580"]="SystemResourceUnlock"

# 文件路径
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 应用替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 替换函数定义
    sed -i "s/\b${old_name}\b/${new_name}/g" "$input_file"
done

echo "第二批函数名美化完成"