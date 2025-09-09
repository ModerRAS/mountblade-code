#!/bin/bash

echo "=== 未美化变量名详细搜索报告 ==="
echo "搜索时间: $(date)"
echo

# 定义文件列表
files=("01_initialization.c" "02_core_engine.c" "03_rendering.c" "04_ui_system.c" "05_networking.c" "06_utilities.c" "99_unmatched_functions.c")

# 搜索函数
search_variables() {
    local file=$1
    echo "文件: $file"
    echo "=================================="
    
    # DAT_ 变量
    dat_count=$(grep -o "DAT_[0-9a-fA-F]\+" "$file" | wc -l)
    if [ $dat_count -gt 0 ]; then
        echo "DAT_ 变量数量: $dat_count"
        echo "前10个DAT_变量:"
        grep -o "DAT_[0-9a-fA-F]\+" "$file" | head -10
        echo
    else
        echo "DAT_ 变量数量: 0"
    fi
    
    # local_ 变量
    local_count=$(grep -o "local_[0-9]\+" "$file" | wc -l)
    if [ $local_count -gt 0 ]; then
        echo "local_ 变量数量: $local_count"
        echo "前10个local_变量:"
        grep -o "local_[0-9]\+" "$file" | head -10
        echo
    else
        echo "local_ 变量数量: 0"
    fi
    
    # s_ 变量 (排除函数调用)
    s_count=$(grep -o "\bs_[a-zA-Z0-9_]\+\b" "$file" | grep -v "__" | grep -v "std::" | wc -l)
    if [ $s_count -gt 0 ]; then
        echo "s_ 变量数量: $s_count"
        echo "前10个s_变量:"
        grep -o "\bs_[a-zA-Z0-9_]\+\b" "$file" | grep -v "__" | grep -v "std::" | head -10
        echo
    else
        echo "s_ 变量数量: 0"
    fi
    
    # UNK_ 变量
    unk_count=$(grep -o "UNK_[0-9a-fA-F]\+" "$file" | wc -l)
    if [ $unk_count -gt 0 ]; then
        echo "UNK_ 变量数量: $unk_count"
        echo "前10个UNK_变量:"
        grep -o "UNK_[0-9a-fA-F]\+" "$file" | head -10
        echo
    else
        echo "UNK_ 变量数量: 0"
    fi
    
    # FUN_ 函数
    fun_count=$(grep -o "FUN_[0-9a-fA-F]\+" "$file" | wc -l)
    if [ $fun_count -gt 0 ]; then
        echo "FUN_ 函数数量: $fun_count"
        echo "前10个FUN_函数:"
        grep -o "FUN_[0-9a-fA-F]\+" "$file" | head -10
        echo
    else
        echo "FUN_ 函数数量: 0"
    fi
    
    # LABEL_ 标签
    label_count=$(grep -o "LAB_[0-9a-fA-F]\+" "$file" | wc -l)
    if [ $label_count -gt 0 ]; then
        echo "LABEL_ 标签数量: $label_count"
        echo "前10个LABEL_标签:"
        grep -o "LAB_[0-9a-fA-F]\+" "$file" | head -10
        echo
    else
        echo "LABEL_ 标签数量: 0"
    fi
    
    echo "----------------------------------"
    echo
}

# 统计总数量
echo "=== 各文件未美化变量统计 ==="
echo

total_dat=0
total_local=0
total_s=0
total_unk=0
total_fun=0
total_label=0

for file in "${files[@]}"; do
    if [ -f "$file" ]; then
        # 统计DAT_变量
        dat_count=$(grep -o "DAT_[0-9a-fA-F]\+" "$file" | wc -l)
        total_dat=$((total_dat + dat_count))
        
        # 统计local_变量
        local_count=$(grep -o "local_[0-9]\+" "$file" | wc -l)
        total_local=$((total_local + local_count))
        
        # 统计s_变量
        s_count=$(grep -o "\bs_[a-zA-Z0-9_]\+\b" "$file" | grep -v "__" | grep -v "std::" | wc -l)
        total_s=$((total_s + s_count))
        
        # 统计UNK_变量
        unk_count=$(grep -o "UNK_[0-9a-fA-F]\+" "$file" | wc -l)
        total_unk=$((total_unk + unk_count))
        
        # 统计FUN_函数
        fun_count=$(grep -o "FUN_[0-9a-fA-F]\+" "$file" | wc -l)
        total_fun=$((total_fun + fun_count))
        
        # 统计LABEL_标签
        label_count=$(grep -o "LAB_[0-9a-fA-F]\+" "$file" | wc -l)
        total_label=$((total_label + label_count))
        
        search_variables "$file"
    fi
done

echo "=== 总计 ==="
echo "DAT_ 变量总数: $total_dat"
echo "local_ 变量总数: $total_local"
echo "s_ 变量总数: $total_s"
echo "UNK_ 变量总数: $total_unk"
echo "FUN_ 函数总数: $total_fun"
echo "LABEL_ 标签总数: $total_label"
echo "未美化变量总计: $((total_dat + total_local + total_s + total_unk + total_fun + total_label))"

# 生成详细的变量列表
echo
echo "=== 详细变量列表 ==="
echo

for file in "${files[@]}"; do
    if [ -f "$file" ]; then
        echo "文件: $file"
        echo "DAT_ 变量:"
        grep -o "DAT_[0-9a-fA-F]\+" "$file" | sort | uniq -c | sort -nr | head -20
        echo
    fi
done