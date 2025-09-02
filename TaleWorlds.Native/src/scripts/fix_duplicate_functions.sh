#!/bin/bash

# ============================================================================
# 修复重复函数定义的脚本 - 最终版本
# 用于修复 06_utilities.c 文件中的重复函数定义问题
# 
# 重复函数定义模式：
#  void FunctionName(void)
# /**
#  * @brief 函数说明
#  */
# void FunctionName(void)
# {
#     // 函数体
# }
# 
# 修复目标：删除第一行的重复声明
# ============================================================================

set -e

# 文件路径
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="${INPUT_FILE}.backup_duplicate_functions"

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
duplicate_count=$(grep -n "^[[:space:]]*void[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*(void)[[:space:]]*$" "$INPUT_FILE" | wc -l)
print_message $YELLOW "发现 $duplicate_count 个可能的重复函数定义"

# 使用python进行更精确的修复
print_message $BLUE "开始修复重复函数定义..."

python3 << 'EOF'
import re
import sys

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
    lines = f.readlines()

# 正则表达式匹配重复函数定义
# 模式：行首有空格，然后是void函数名(void)行尾
duplicate_pattern = re.compile(r'^\s*void\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\(\s*void\s*\)\s*$')

# 修复后的行
fixed_lines = []
i = 0
fixed_count = 0

while i < len(lines):
    line = lines[i]
    
    # 检查是否是重复函数定义的第一行
    match = duplicate_pattern.match(line.strip())
    if match:
        func_name = match.group(1)
        
        # 检查是否有足够的后续行
        if i + 2 < len(lines):
            next_line = lines[i + 1]
            next_next_line = lines[i + 2]
            
            # 检查下一行是否是注释块
            if '/**' in next_line:
                # 检查下下一行是否是相同的函数定义
                next_next_match = duplicate_pattern.match(next_next_line.strip())
                if next_next_match and next_next_match.group(1) == func_name:
                    # 发现重复函数定义，跳过当前行
                    fixed_lines.append(f"/* 修复重复函数定义：删除重复声明 {line.strip()} */\n")
                    fixed_lines.append(next_line)
                    fixed_lines.append(next_next_line)
                    fixed_count += 1
                    i += 3
                    continue
    
    # 不是重复定义，正常添加
    fixed_lines.append(line)
    i += 1

# 写入修复后的文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
    f.writelines(fixed_lines)

print(f"修复完成！共修复了 {fixed_count} 个重复函数定义")
EOF

# 统计修复后的重复函数数量
print_message $BLUE "验证修复结果..."
remaining_duplicates=$(grep -n "^[[:space:]]*void[[:space:]]\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*(void)[[:space:]]*$" "$INPUT_FILE" | wc -l)

# 计算修复数量
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
    echo "grep -n \"^[[:space:]]*void[[:space:]]\\+[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]*(void)[[:space:]]*$\" \"$INPUT_FILE\""
fi

print_message $GREEN "脚本执行完成！"
print_message $YELLOW "如果需要恢复备份，请运行：cp \"$BACKUP_FILE\" \"$INPUT_FILE\""