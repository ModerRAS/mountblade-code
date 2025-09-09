#!/bin/bash

# 统计Ghidra自动生成的变量名
# 搜索真实的Ghidra变量名，排除已经美化的宏定义

echo "=== Ghidra变量名统计报告 ==="
echo "生成时间: $(date)"
echo ""

# 定义搜索目录
SRC_DIR="/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 统计函数
count_ghidra_vars() {
    local pattern=$1
    local description=$2
    
    # 排除宏定义行（#define 行）和注释中的引用
    local count=$(find "$SRC_DIR" -name "*.c" -exec grep -H "$pattern" {} \; | \
                 grep -v "^#define" | \
                 grep -v "//.*$pattern" | \
                 grep -v "/\*.*$pattern.*\*/" | \
                 wc -l)
    
    echo "$description: $count"
    return $count
}

# 统计各文件中的Ghidra变量名
echo "=== 各文件详细统计 ==="
echo ""

for file in "$SRC_DIR"/*.c; do
    if [ -f "$file" ]; then
        filename=$(basename "$file")
        echo "文件: $filename"
        echo "----------------------------------------"
        
        # 统计各种类型的Ghidra变量名，排除宏定义
        dat_count=$(grep "$file" -e "DAT_" | grep -v "^#define" | grep -v "//.*DAT_" | grep -v "/\*.*DAT_.*\*/" | wc -l)
        local_count=$(grep "$file" -e "local_" | grep -v "^#define" | grep -v "//.*local_" | grep -v "/\*.*local_.*\*/" | wc -l)
        s_count=$(grep "$file" -e "s_" | grep -v "^#define" | grep -v "//.*s_" | grep -v "/\*.*s_.*\*/" | wc -l)
        unk_count=$(grep "$file" -e "UNK_" | grep -v "^#define" | grep -v "//.*UNK_" | grep -v "/\*.*UNK_.*\*/" | wc -l)
        fun_count=$(grep "$file" -e "FUN_" | grep -v "^#define" | grep -v "//.*FUN_" | grep -v "/\*.*FUN_.*\*/" | wc -l)
        label_count=$(grep "$file" -e "LABEL_" | grep -v "^#define" | grep -v "//.*LABEL_" | grep -v "/\*.*LABEL_.*\*/" | wc -l)
        
        echo "DAT_: $dat_count"
        echo "local_: $local_count"
        echo "s_: $s_count"
        echo "UNK_: $unk_count"
        echo "FUN_: $fun_count"
        echo "LABEL_: $label_count"
        
        total=$((dat_count + local_count + s_count + unk_count + fun_count + label_count))
        echo "总计: $total"
        echo ""
    fi
done

echo "=== 总体统计 ==="
echo ""

# 计算总体统计
total_dat=$(find "$SRC_DIR" -name "*.c" -exec grep -e "DAT_" {} \; | grep -v "^#define" | grep -v "//.*DAT_" | grep -v "/\*.*DAT_.*\*/" | wc -l)
total_local=$(find "$SRC_DIR" -name "*.c" -exec grep -e "local_" {} \; | grep -v "^#define" | grep -v "//.*local_" | grep -v "/\*.*local_.*\*/" | wc -l)
total_s=$(find "$SRC_DIR" -name "*.c" -exec grep -e "s_" {} \; | grep -v "^#define" | grep -v "//.*s_" | grep -v "/\*.*s_.*\*/" | wc -l)
total_unk=$(find "$SRC_DIR" -name "*.c" -exec grep -e "UNK_" {} \; | grep -v "^#define" | grep -v "//.*UNK_" | grep -v "/\*.*UNK_.*\*/" | wc -l)
total_fun=$(find "$SRC_DIR" -name "*.c" -exec grep -e "FUN_" {} \; | grep -v "^#define" | grep -v "//.*FUN_" | grep -v "/\*.*FUN_.*\*/" | wc -l)
total_label=$(find "$SRC_DIR" -name "*.c" -exec grep -e "LABEL_" {} \; | grep -v "^#define" | grep -v "//.*LABEL_" | grep -v "/\*.*LABEL_.*\*/" | wc -l)

echo "DAT_ 变量名总数: $total_dat"
echo "local_ 变量名总数: $total_local"
echo "s_ 变量名总数: $total_s"
echo "UNK_ 变量名总数: $total_unk"
echo "FUN_ 变量名总数: $total_fun"
echo "LABEL_ 变量名总数: $total_label"

grand_total=$((total_dat + total_local + total_s + total_unk + total_fun + total_label))
echo ""
echo "总计需要美化的变量名: $grand_total"

echo ""
echo "=== 头文件统计 ==="
echo ""

# 统计头文件
header_total=$(find "$SRC_DIR" -name "*.h" -exec grep -e "DAT_\|local_\|s_\|UNK_\|FUN_\|LABEL_" {} \; | grep -v "^#define" | wc -l)
echo "头文件中的Ghidra变量名: $header_total"

echo ""
echo "=== 统计完成 ==="