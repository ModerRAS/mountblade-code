#!/bin/bash

# 批量替换stack0x变量名的脚本
# 将stack0x开头的变量名替换为更有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 替换规则
declare -A replacements=(
    ["&stack0x00000020"]="&StackBuffer20"
    ["&stack0x00000038"]="&StackBuffer38"
    ["&stack0x00000048"]="&StackBuffer48"
    ["&stack0x00000068"]="&StackBuffer68"
    ["&stack0x00000070"]="&StackBuffer70"
    ["&stack0x00000078"]="&StackBuffer78"
    ["&stack0x00000080"]="&StackBuffer80"
    ["&stack0x00000088"]="&StackBuffer88"
    ["&stack0x00000094"]="&StackBuffer94"
    ["&stack0x000000a0"]="&StackBufferA0"
    ["&stack0x000000a8"]="&StackBufferA8"
    ["&stack0x000000b0"]="&StackBufferB0"
    ["&stack0x000000b8"]="&StackBufferB8"
)

# 执行替换
for old in "${!replacements[@]}"; do
    new="${replacements[$old]}"
    sed -i "s|$old|$new|g" "$INPUT_FILE"
    echo "已替换: $old -> $new"
done

echo "批量替换完成"