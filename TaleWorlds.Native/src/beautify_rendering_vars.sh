#!/bin/bash

# 批量替换渲染系统变量名的脚本
# 将UNK_开头的变量名替换为有语义的名称

# 定义要替换的变量映射
declare -A var_map=(
    # 渲染标志指针
    ["UNK_180a2a148"]="RenderFlagPointerCC"
    ["UNK_180a2a158"]="RenderFlagPointerCD"
    ["UNK_180a2a168"]="RenderFlagPointerCE"
    ["UNK_180a2a1c8"]="RenderFlagPointerCF"
    ["UNK_180a2a1d8"]="RenderFlagPointerCG"
    ["UNK_180a2a1e8"]="RenderFlagPointerCH"
    ["UNK_180a2a200"]="RenderFlagPointerCI"
    ["UNK_180a2a210"]="RenderFlagPointerCJ"
    ["UNK_180a2a228"]="RenderFlagPointerCK"
    ["UNK_180a2a234"]="RenderCounterQ"
    ["UNK_180a2a240"]="RenderFlagPointerCL"
    ["UNK_180a2a250"]="RenderFlagPointerCM"
    ["UNK_180a2a260"]="RenderFlagPointerCN"
    ["UNK_180a2a298"]="RenderFlagPointerCO"
    ["UNK_180a2a318"]="RenderFlagPointerCP"
    ["UNK_180a2a378"]="RenderFlagPointerCQ"
    ["UNK_180a2a3a0"]="RenderFlagPointerCR"
    ["UNK_180a2a3e0"]="RenderFlagPointerCS"
    ["UNK_180a2a43c"]="RenderFlagPointerCT"
    ["UNK_180a2a448"]="RenderFlagPointerCU"
    ["UNK_180a2a4e8"]="RenderFlagPointerCV"
    ["UNK_180a2a500"]="RenderFlagPointerCW"
    ["UNK_180a2a4a8"]="RenderFlagPointerCX"
    ["UNK_180a2a4d0"]="RenderFlagPointerCY"
    ["UNK_180a2a558"]="RenderFlagPointerCZ"
    
    # 数据变量
    ["DAT_1809fd0f8"]="RenderDataFieldA"
    ["UNK_1809fd0f9"]="RenderDataFieldB"
    ["UNK_180a0ac18"]="RenderDataFieldC"
    ["UNK_180a063b8"]="RenderDataFieldD"
    ["UNK_180995a3c"]="RenderDataFieldE"
    ["DAT_1809ff0c8"]="RenderDataFieldF"
    ["UNK_1802f3c00"]="RenderSpecialDataA"
    ["UNK_180a2a348"]="RenderSpecialDataB"
)

# 遍历所有变量映射并进行替换
for old_name in "${!var_map[@]}"; do
    new_name="${var_map[$old_name]}"
    
    # 构建替换命令
    sed_cmd="sed -i 's/void $old_name;/\/\/ $new_name - 渲染系统变量\\n\/\/ 原始变量名: $old_name\\nvoid $new_name;/g' 03_rendering.c"
    
    echo "替换: $old_name -> $new_name"
    eval "$sed_cmd"
done

echo "批量替换完成"