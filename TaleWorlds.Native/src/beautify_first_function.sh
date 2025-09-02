#!/bin/bash

# 创建临时脚本文件来美化99_unmatched_functions.c中的第一个函数

# 定义变量名映射
declare -A var_mapping=(
    ["formatFlags"]="FormatFlags"
    ["param_2"]="DataBuffer"
    ["param_3"]="FormatPointer"
    ["in_stack_00000080"]="StackParam"
    ["uVar8"]="RepeatCount"
    ["lVar2"]="BufferData"
    ["lVar3"]="BufferLength"
    ["puVar4"]="CharPointer"
    ["lVar7"]="StringLength"
    ["puVar6"]="StringPointer"
    ["puVar9"]="FormatPointer"
    ["uVar1"]="CharValue"
    ["lVar5"]="LoopCounter"
    ["unaff_R15"]="RegisterR15"
)

# 获取函数的行号范围
start_line=$(grep -n "void FormatDataOutputProcessor" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c | cut -d: -f1)
end_line=$(tail -n +$start_line /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c | grep -n "^}" | head -1 | cut -d: -f1)
end_line=$((start_line + end_line - 1))

echo "函数从第 $start_line 行到第 $end_line 行"

# 创建临时文件
temp_file="/tmp/beautify_function.c"

# 提取函数内容
sed -n "${start_line},${end_line}p" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c > "$temp_file"

# 替换变量名
for old_var in "${!var_mapping[@]}"; do
    new_var="${var_mapping[$old_var]}"
    sed -i "s/\b$old_var\b/$new_var/g" "$temp_file"
done

# 替换函数内容
sed -i "${start_line},${end_line}d" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i "${start_line}r $temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 清理临时文件
rm -f "$temp_file"

echo "函数美化完成"