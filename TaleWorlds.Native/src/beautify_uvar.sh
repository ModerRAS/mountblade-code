#!/bin/bash

# 批量替换 uVar 变量为更有意义的名字
# 这个脚本将美化 01_initialization.c 文件中的变量名

# 定义映射关系
declare -A var_mapping=(
    ["uVar1"]="tempVariable1"
    ["uVar2"]="tempVariable2" 
    ["uVar3"]="tempVariable3"
    ["uVar4"]="tempVariable4"
    ["uVar5"]="tempVariable5"
    ["uVar6"]="tempVariable6"
    ["uVar7"]="tempVariable7"
    ["uVar8"]="tempVariable8"
    ["uVar9"]="tempVariable9"
    ["uVar10"]="tempVariable10"
    ["uVar11"]="tempVariable11"
    ["uVar12"]="tempVariable12"
    ["uVar13"]="tempVariable13"
    ["uVar16"]="tempVariable16"
    ["uVar18"]="tempVariable18"
    ["uVar19"]="tempVariable19"
    ["uVar20"]="tempVariable20"
    ["uVar21"]="tempVariable21"
    ["uVar22"]="tempVariable22"
    ["uVar23"]="tempVariable23"
    ["uVar24"]="tempVariable24"
    ["uVar25"]="tempVariable25"
    ["uVar26"]="tempVariable26"
    ["uVar27"]="tempVariable27"
    ["uVar28"]="tempVariable28"
    ["uVar29"]="tempVariable29"
    ["uVar31"]="tempVariable31"
)

# 创建临时文件
temp_file=$(mktemp)

# 复制原文件到临时文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c "$temp_file"

# 替换每个变量
for old_var in "${!var_mapping[@]}"; do
    new_var="${var_mapping[$old_var]}"
    # 使用 sed 进行替换，只替换 void* 声明中的变量名
    sed -i "s/void\* $old_var;/void* $new_var;/g" "$temp_file"
done

# 替换回原文件
cp "$temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 清理临时文件
rm "$temp_file"

echo "变量名美化完成"