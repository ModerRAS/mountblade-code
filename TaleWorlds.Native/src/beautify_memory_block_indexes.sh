#!/bin/bash

# 美化02_core_engine.c中的SystemMemoryBlockIndex变量名

# 定义美化映射
declare -A replacements=(
    ["SystemMemoryBlockIndex180"]="CharacterTypeFlagTable"
    ["SystemMemoryBlockIndex184"]="CharacterSubTypeFlagTable" 
    ["SystemMemoryBlockIndex188"]="CharacterDataPointerTable"
)

# 遍历所有替换映射
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    
    echo "替换 $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "变量名美化完成"