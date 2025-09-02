#!/bin/bash

# 批量替换DAT_变量的脚本
# 此脚本用于美化02_core_engine.c文件中的变量名

cd "/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 定义替换映射
declare -A replacements=(
    ["DAT_180bf7370"]="SystemUnknownDataPointerB"
    ["DAT_180a0ff10"]="SystemUnknownDataPointerC"
    ["DAT_180a04ee4"]="SystemMemoryOffsetPointer"
    ["DAT_18098c5e8"]="SystemUnknownDataPointerD"
    ["DAT_180a0e8a0"]="SystemUnknownDataPointerE"
    ["DAT_180a03a84"]="SystemUnknownDataPointerF"
    ["DAT_180a0ff18"]="SystemUnknownDataPointerG"
    ["DAT_180a02618"]="SystemUnknownDataPointerH"
    ["DAT_180c96810"]="SystemUnknownDataPointerI"
    ["DAT_180a0ba58"]="SystemUnknownDataPointerJ"
    ["DAT_180a0d580"]="SystemUnknownDataPointerK"
    ["DAT_180a0d5b8"]="SystemUnknownDataPointerL"
    ["DAT_180a0e020"]="SystemUnknownDataPointerM"
    ["DAT_180a13c30"]="SystemUnknownDataPointerN"
    ["DAT_180a0d648"]="SystemUnknownDataPointerO"
    ["DAT_180a01228"]="SystemUnknownDataPointerP"
    ["DAT_180a1388c"]="SystemUnknownDataPointerQ"
    ["DAT_180a002f0"]="SystemUnknownDataPointerR"
)

# 执行替换
for dat_var in "${!replacements[@]}"; do
    new_name="${replacements[$dat_var]}"
    echo "替换 $dat_var 为 $new_name"
    sed -i "s/$dat_var/$new_name/g" 02_core_engine.c
done

echo "DAT_变量替换完成"