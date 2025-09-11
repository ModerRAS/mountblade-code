#!/bin/bash

echo "=== 未美化代码分析报告 ==="
echo "分析时间: $(date)"
echo

# 定义要分析的文件
files=(
    "01_initialization.c"
    "02_core_engine.c"
    "03_rendering.c"
    "04_ui_system.c"
    "05_networking.c"
    "06_utilities.c"
    "99_unmatched_functions.c"
)

echo "=== 各文件未美化代码统计 ==="
echo

total_fun_calls=0
total_dat_vars=0
total_unk_vars=0
total_s_vars=0
total_local_vars=0

for file in "${files[@]}"; do
    if [ -f "$file" ]; then
        echo "文件: $file"
        
        # 统计FUN_函数调用
        fun_calls=$(grep -c "FUN_[0-9a-fA-F]" "$file" 2>/dev/null || echo "0")
        defined_funs=$(grep -c "#define.*FUN_" "$file" 2>/dev/null || echo "0")
        fun_calls_actual=$((fun_calls - defined_funs))
        
        # 统计DAT_变量
        dat_vars=$(grep -c "DAT_[0-9a-fA-F]" "$file" 2>/dev/null || echo "0")
        defined_dat=$(grep -c "#define.*DAT_" "$file" 2>/dev/null || echo "0")
        dat_vars_actual=$((dat_vars - defined_dat))
        
        # 统计UNK_变量
        unk_vars=$(grep -c "UNK_[0-9a-fA-F]" "$file" 2>/dev/null || echo "0")
        defined_unk=$(grep -c "#define.*UNK_" "$file" 2>/dev/null || echo "0")
        unk_vars_actual=$((unk_vars - defined_unk))
        
        # 统计s_变量
        s_vars=$(grep -c "s_[a-zA-Z0-9]" "$file" 2>/dev/null || echo "0")
        defined_s=$(grep -c "#define.*s_" "$file" 2>/dev/null || echo "0")
        s_vars_actual=$((s_vars - defined_s))
        
        # 统计local_变量
        local_vars=$(grep -c "local_[0-9]" "$file" 2>/dev/null || echo "0")
        defined_local=$(grep -c "#define.*local_" "$file" 2>/dev/null || echo "0")
        local_vars_actual=$((local_vars - defined_local))
        
        echo "  - FUN_函数调用总数: $fun_calls"
        echo "  - 已定义FUN_函数: $defined_funs"
        echo "  - 未定义FUN_调用: $fun_calls_actual"
        echo "  - DAT_变量总数: $dat_vars"
        echo "  - 已定义DAT_变量: $defined_dat"
        echo "  - 未定义DAT_变量: $dat_vars_actual"
        echo "  - UNK_变量总数: $unk_vars"
        echo "  - 已定义UNK_变量: $defined_unk"
        echo "  - 未定义UNK_变量: $unk_vars_actual"
        echo "  - s_变量总数: $s_vars"
        echo "  - 已定义s_变量: $defined_s"
        echo "  - 未定义s_变量: $s_vars_actual"
        echo "  - local_变量总数: $local_vars"
        echo "  - 已定义local_变量: $defined_local"
        echo "  - 未定义local_变量: $local_vars_actual"
        echo
        
        # 累计总数
        total_fun_calls=$((total_fun_calls + fun_calls_actual))
        total_dat_vars=$((total_dat_vars + dat_vars_actual))
        total_unk_vars=$((total_unk_vars + unk_vars_actual))
        total_s_vars=$((total_s_vars + s_vars_actual))
        total_local_vars=$((total_local_vars + local_vars_actual))
    else
        echo "文件: $file (不存在)"
    fi
done

echo "=== 总计统计 ==="
echo "未定义FUN_函数调用: $total_fun_calls"
echo "未定义DAT_变量: $total_dat_vars"
echo "未定义UNK_变量: $total_unk_vars"
echo "未定义s_变量: $total_s_vars"
echo "未定义local_变量: $total_local_vars"
echo "总计未美化代码: $((total_fun_calls + total_dat_vars + total_unk_vars + total_s_vars + total_local_vars))"

echo
echo "=== 代码质量评估 ==="
if [ $total_fun_calls -eq 0 ] && [ $total_dat_vars -eq 0 ] && [ $total_unk_vars -eq 0 ] && [ $total_s_vars -eq 0 ] && [ $total_local_vars -eq 0 ]; then
    echo "✅ 所有代码已完全美化！"
else
    echo "⚠️  仍有未美化代码需要处理"
    echo "优先级建议:"
    if [ $total_fun_calls -gt 0 ]; then
        echo "1. FUN_函数调用 ($total_fun_calls 个)"
    fi
    if [ $total_dat_vars -gt 0 ]; then
        echo "2. DAT_变量 ($total_dat_vars 个)"
    fi
    if [ $total_unk_vars -gt 0 ]; then
        echo "3. UNK_变量 ($total_unk_vars 个)"
    fi
    if [ $total_s_vars -gt 0 ]; then
        echo "4. s_变量 ($total_s_vars 个)"
    fi
    if [ $total_local_vars -gt 0 ]; then
        echo "5. local_变量 ($total_local_vars 个)"
    fi
fi