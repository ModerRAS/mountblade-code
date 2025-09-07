#!/bin/bash

# 美化99_unmatched_functions.c中的UNK_变量
# 将Ghidra生成的UNK_变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "开始替换UNK_变量..."

# 首先添加宏定义
# 在文件开头的宏定义区域添加新的宏定义

# UNK_18098bc80 → SystemStreamTemplate
if ! grep -q "#define SystemStreamTemplate UNK_18098bc80" "$INPUT_FILE"; then
    # 找到合适的插入位置
    sed -i '/#define SystemBufferTemplate UNK_18098bcb0/a #define SystemStreamTemplate UNK_18098bc80' "$INPUT_FILE"
    echo "添加 SystemStreamTemplate 宏定义"
fi

# UNK_180a04100 → SystemStringConstantTemplate  
if ! grep -q "#define SystemStringConstantTemplate UNK_180a04100" "$INPUT_FILE"; then
    # 找到合适的插入位置
    sed -i '/#define SystemStreamTemplate UNK_18098bc80/a #define SystemStringConstantTemplate UNK_180a04100' "$INPUT_FILE"
    echo "添加 SystemStringConstantTemplate 宏定义"
fi

# 替换所有的UNK_变量引用
sed -i 's/UNK_18098bc80/SystemStreamTemplate/g' "$INPUT_FILE"
echo "替换 UNK_18098bc80 → SystemStreamTemplate 完成"

sed -i 's/UNK_180a04100/SystemStringConstantTemplate/g' "$INPUT_FILE"
echo "替换 UNK_180a04100 → SystemStringConstantTemplate 完成"

echo "所有UNK_变量替换完成"