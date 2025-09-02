#!/bin/bash

# 美化02_core_engine.c文件中的func_0x函数名
# 将func_0x开头的函数名替换为语义化名称

# 定义函数映射表
declare -A func_map=(
    ["func_0x0001800694c0"]="AllocateMemoryBlock"
    ["func_0x0001800464d0"]="GetSystemTimeoutCounter"
    ["func_0x000180086550"]="InitializeSystemData"
    ["func_0x0001800854e0"]="ValidateSystemConfiguration"
    ["func_0x0001800773c0"]="CalculateFloatValue"
    ["func_0x0001801fc730"]="GetSystemConfigurationA"
    ["func_0x0001801fc760"]="GetSystemConfigurationB"
    ["func_0x0001801fca90"]="GetSystemConfigurationC"
    ["func_0x0001801fcac0"]="GetSystemConfigurationD"
    ["func_0x0001801fcb00"]="GetSystemConfigurationE"
    ["func_0x0001801fcb40"]="GetSystemConfigurationF"
    ["func_0x0001801fcb80"]="GetSystemConfigurationG"
    ["func_0x0001801fc7a0"]="GetSystemConfigurationH"
    ["func_0x0001801fc7d0"]="GetSystemConfigurationI"
    ["func_0x0001801fc800"]="GetSystemConfigurationJ"
    ["func_0x0001801fc840"]="GetSystemConfigurationK"
    ["func_0x0001801fc880"]="GetSystemConfigurationL"
    ["func_0x0001801fc8c0"]="GetSystemConfigurationM"
)

# 遍历映射表并替换
for old_name in "${!func_map[@]}"; do
    new_name="${func_map[$old_name]}"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "函数名美化完成"