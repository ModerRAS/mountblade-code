#!/bin/bash

# Mount & Blade: Unwind_ 函数分析脚本
# 该脚本用于分析 06_utilities.c 文件中的 Unwind_ 函数的实际地址范围

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
ANALYSIS_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/unwind_analysis.txt"

echo "分析 Unwind_ 函数的实际地址范围..."
echo "分析时间: $(date)" > "$ANALYSIS_FILE"
echo "" >> "$ANALYSIS_FILE"

# 提取所有 Unwind_ 函数名
echo "提取所有 Unwind_ 函数名..." >> "$ANALYSIS_FILE"
grep "^void Unwind_" "$INPUT_FILE" | sed 's/^void //' | sed 's/(.*$//' | sort >> "$ANALYSIS_FILE"
echo "" >> "$ANALYSIS_FILE"

# 分析地址范围
echo "分析地址范围..." >> "$ANALYSIS_FILE"
grep "^void Unwind_" "$INPUT_FILE" | sed 's/^void Unwind_//' | sed 's/(.*$//' | sort -V >> "$ANALYSIS_FILE"
echo "" >> "$ANALYSIS_FILE"

# 统计函数数量
echo "统计函数数量..." >> "$ANALYSIS_FILE"
total_count=$(grep -c "^void Unwind_" "$INPUT_FILE")
echo "总函数数量: $total_count" >> "$ANALYSIS_FILE"
echo "" >> "$ANALYSIS_FILE"

# 分析前缀分布
echo "分析前缀分布..." >> "$ANALYSIS_FILE"
grep "^void Unwind_" "$INPUT_FILE" | sed 's/^void Unwind_//' | sed 's/(.*$//' | cut -c1-6 | sort | uniq -c >> "$ANALYSIS_FILE"
echo "" >> "$ANALYSIS_FILE"

echo "分析完成，结果保存在: $ANALYSIS_FILE"