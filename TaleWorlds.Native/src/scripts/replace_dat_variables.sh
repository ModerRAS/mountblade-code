#!/bin/bash

# 替换02_core_engine.c文件中的DAT_变量为对应的常量名称

# 定义DAT_变量到常量名称的映射
declare -A DAT_MAPPING=(
    ["DAT_180d49620"]="SystemMemoryLimit"
    ["DAT_180a04ee4"]="SystemMemoryOffsetPointer"
    ["DAT_180a0aea0"]="SystemSecondaryDataPointer"
    ["DAT_180a06430"]="SystemTertiaryDataPointer"
    ["DAT_180a00300"]="SystemDataTemplatePointer"
    ["DAT_180a0b3b8"]="SystemDataTablePointer"
    ["DAT_180a0b57c"]="SystemDataTableSecondary"
    ["DAT_180c82847"]="SystemStatusFlagSecondary"
    ["DAT_180a3fc80"]="SystemFloatConstantPointer"
    ["DAT_180a035c0"]="SystemEventDataTable"
    ["DAT_180a1e968"]="SystemUnknownDataPointerA"
)

# 遍历映射并进行替换
for dat_var in "${!DAT_MAPPING[@]}"; do
    constant_name="${DAT_MAPPING[$dat_var]}"
    echo "替换 $dat_var 为 $constant_name"
    
    # 使用sed进行替换
    sed -i "s/$dat_var/$constant_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "DAT_变量替换完成"