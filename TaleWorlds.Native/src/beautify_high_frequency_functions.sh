#!/bin/bash

# 高频FUN_函数替换脚本
# 用于将02_core_engine.c中的高频FUN_函数调用替换为语义化名称

# 定义高频函数映射
declare -A function_mapping=(
    # 字符串处理相关函数 (调用次数: 95次)
    ["FUN_180122210"]="ProcessStringFormattingOperation"
    
    # 内存管理相关函数 (调用次数: 26次)
    ["FUN_180136d40"]="ProcessMemoryDataTransfer"
    ["FUN_18013ea00"]="CleanupSystemResourcesEx"
    ["FUN_180136f60"]="ProcessStringCopyOperation"
    
    # 字符编码相关函数 (调用次数: 11次)
    ["FUN_18013a5e0"]="ProcessCharacterEncodingConversion"
    ["FUN_18013bf60"]="ValidateStringOperation"
    ["FUN_18013a920"]="FinalizeCharacterEncoding"
    
    # 系统管理相关函数 (调用次数: 9次)
    ["FUN_180291cf0"]="ProcessSystemContextCleanup"
    ["FUN_180136b10"]="ProcessMemoryAllocationEx"
    ["FUN_180292160"]="UpdateSystemStatusEx"
    
    # 其他高频函数 (调用次数: 7-8次)
    ["FUN_18013b0f0"]="InitializeSystemComponent"
    ["FUN_180136210"]="ProcessSystemConfigurationEx"
    ["FUN_180136440"]="ValidateSystemOperation"
    ["FUN_180136850"]="ProcessCharacterEncodingEx"
    ["FUN_18013a860"]="ProcessCharacterEncodingOperation"
)

# 遍历函数映射并替换
for func in "${!function_mapping[@]}"; do
    replacement="${function_mapping[$func]}"
    echo "替换 $func 为 $replacement"
    
    # 使用sed进行替换
    sed -i "s/$func(/$replacement(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "高频函数替换完成"