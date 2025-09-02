#!/bin/bash

# ============================================================================
# 修复重复函数定义的脚本
# 用于修复 /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c 
# 文件中的重复函数定义问题
# 
# 重复函数定义模式：
# 1. 第一行：空格 + 返回类型 + 函数名 + 参数列表 (无分号)
# 2. 第二行：/** 注释块 */
# 3. 第三行：返回类型 + 函数名 + 参数列表 (无分号)
# 4. 第四行：{ 函数体开始
# 
# 修复目标：删除第一行的重复声明，保留完整的函数定义
# ============================================================================

set -e

# 文件路径
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="${INPUT_FILE}.backup_duplicate_functions"
TEMP_FILE="${INPUT_FILE}.temp"

# 颜色定义
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# 打印带颜色的消息
print_message() {
    local color=$1
    local message=$2
    echo -e "${color}[$(date '+%Y-%m-%d %H:%M:%S')] ${message}${NC}"
}

# 检查文件是否存在
if [ ! -f "$INPUT_FILE" ]; then
    print_message $RED "错误：找不到文件 $INPUT_FILE"
    exit 1
fi

# 创建备份
print_message $YELLOW "创建备份文件..."
cp "$INPUT_FILE" "$BACKUP_FILE"
print_message $GREEN "备份已创建：$BACKUP_FILE"

# 统计修复前的重复函数数量
print_message $BLUE "分析重复函数定义..."
duplicate_count=$(grep -n "^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*([[:space:]]*void[[:space:]]*)[[:space:]]*$" "$INPUT_FILE" | wc -l)
print_message $YELLOW "发现 $duplicate_count 个可能的重复函数定义"

# 创建临时文件
print_message $BLUE "开始修复重复函数定义..."

# 使用awk处理文件，修复重复函数定义
awk '
# 状态变量
in_duplicate_pattern = 0
duplicate_line = ""
skip_next_line = 0

# 主处理循环
{
    # 检查是否是重复函数定义的第一行
    # 模式：行首有空格，然后是返回类型，函数名，参数列表，行尾无分号
    if (match($0, /^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*\([[:space:]]*void[[:space:]]*\)[[:space:]]*$/)) {
        # 检查下一行是否是注释块
        getline next_line
        if (next_line ~ /^[[:space:]]*\/\*\*.*$/) {
            # 检查下下行是否是相同的函数定义
            getline next_next_line
            # 提取当前行的函数名
            if (match($0, /([a-zA-Z_][a-zA-Z0-9_]*)[[:space:]]*\([[:space:]]*void[[:space:]]*\)[[:space:]]*$/, arr)) {
                current_func = arr[1]
                # 检查下下行是否包含相同的函数名
                if (next_next_line ~ current_func && next_next_line ~ /^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*\([[:space:]]*void[[:space:]]*\)[[:space:]]*$/) {
                    # 发现重复函数定义，跳过当前行
                    print "/* 修复重复函数定义：删除重复声明 " $0 " */"
                    print next_line  # 输出注释块
                    print next_next_line  # 输出正确的函数声明
                    skip_next_line = 1
                    next
                } else {
                    # 不是重复定义，输出所有行
                    print $0
                    print next_line
                    print next_next_line
                    next
                }
            } else {
                # 无法提取函数名，输出所有行
                print $0
                print next_line
                print next_next_line
                next
            }
        } else {
            # 下一行不是注释块，输出当前行和下一行
            print $0
            print next_line
            next
        }
    }
    
    # 检查是否需要跳过下一行
    if (skip_next_line) {
        skip_next_line = 0
        next
    }
    
    # 输出当前行
    print
}
' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 统计修复后的重复函数数量
print_message $BLUE "验证修复结果..."
remaining_duplicates=$(grep -n "^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*([[:space:]]*void[[:space:]]*)[[:space:]]*$" "$INPUT_FILE" | wc -l)
fixed_count=$((duplicate_count - remaining_duplicates))

print_message $GREEN "修复完成！"
print_message $GREEN "修复前重复函数数量：$duplicate_count"
print_message $GREEN "修复后剩余重复函数数量：$remaining_duplicates"
print_message $GREEN "成功修复函数数量：$fixed_count"

# 显示一些修复的例子
print_message $BLUE "修复示例："
echo "----------------------------------------"
grep -A 3 -B 1 "修复重复函数定义" "$INPUT_FILE" | head -20
echo "----------------------------------------"

# 如果还有剩余的重复函数，提供手动修复建议
if [ $remaining_duplicates -gt 0 ]; then
    print_message $YELLOW "警告：仍有 $remaining_duplicates 个重复函数定义需要手动修复"
    print_message $YELLOW "请运行以下命令查看剩余的重复函数："
    echo "grep -n \"^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]\\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*([[:space:]]*void[[:space:]]*)[[:space:]]*$\" \"$INPUT_FILE\""
fi

print_message $GREEN "脚本执行完成！"
print_message $YELLOW "如果需要恢复备份，请运行：cp \"$BACKUP_FILE\" \"$INPUT_FILE\""