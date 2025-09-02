#!/bin/bash

# 美化网络模块栈变量名的脚本
# 将 stack0x 变量名替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 05_networking.c 05_networking.c.backup

# 定义栈变量映射关系
declare -A stack_var_mapping=(
    ["stack0x00000030"]="NetworkStackBuffer30"
    ["stack0x00000058"]="NetworkStackBuffer58"
    ["stack0x00000060"]="NetworkStackBuffer60"
    ["stack0x00000068"]="NetworkStackBuffer68"
    ["stack0x00000080"]="NetworkStackBuffer80"
    ["stack0x00000090"]="NetworkStackBuffer90"
    ["stack0x00000094"]="NetworkStackBuffer94"
    ["stack0x00000098"]="NetworkStackBuffer98"
    ["stack0x000000a0"]="NetworkStackBufferA0"
    ["stack0x000000a8"]="NetworkStackBufferA8"
    ["stack0x000000b0"]="NetworkStackBufferB0"
    ["stack0x000000b8"]="NetworkStackBufferB8"
    ["stack0x00000008"]="NetworkStackBuffer08"
    ["stack0x00000018"]="NetworkStackBuffer18"
)

# 执行替换操作
for old_var in "${!stack_var_mapping[@]}"; do
    new_var="${stack_var_mapping[$old_var]}"
    echo "替换: $old_var -> $new_var"
    
    # 替换变量引用
    sed -i "s/&$old_var/&$new_var/g" 05_networking.c
    sed -i "s/($old_var,/($new_var,/g" 05_networking.c
    sed -i "s/,$old_var/,$new_var/g" 05_networking.c
    sed -i "s/$old_var,/new_var,/g" 05_networking.c
    sed -i "s/$old_var)$/new_var)/g" 05_networking.c
    sed -i "s/$old_var /$new_var /g" 05_networking.c
done

echo "栈变量美化完成"