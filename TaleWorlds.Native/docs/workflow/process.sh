#!/bin/bash

# TaleWorlds.Native 代码转译助手脚本
# 用于简化文件处理流程

set -e

# 颜色定义
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${BLUE}TaleWorlds.Native 代码转译助手${NC}"
echo ""

# 检查参数
if [ $# -eq 0 ]; then
    echo "使用方法:"
    echo "  $0 <文件名>     # 处理指定文件"
    echo "  $0 -l           # 列出所有文件"
    echo "  $0 -p           # 显示进度"
    echo "  $0 -h           # 显示帮助"
    echo ""
    echo "示例:"
    echo "  $0 01_initialization_part001.c"
    echo "  $0 -l"
    exit 0
fi

# 显示帮助
if [ "$1" = "-h" ]; then
    echo "详细帮助:"
    echo ""
    echo "1. 列出所有文件: $0 -l"
    echo "2. 显示进度: $0 -p"
    echo "3. 处理文件: $0 <文件名>"
    echo ""
    echo "处理文件步骤:"
    echo "  1. 自动创建目标目录"
    echo "  2. 复制原始文件"
    echo "  3. 创建任务模板"
    echo "  4. 提供转译建议"
    echo ""
    exit 0
fi

# 列出所有文件
if [ "$1" = "-l" ]; then
    echo -e "${YELLOW}可处理的文件列表:${NC}"
    echo ""
    
    for module in 00 01 02 03 04 05 06 99; do
        echo "模块 $module:"
        find src -name "${module}_*.c" | head -5
        count=$(find src -name "${module}_*.c" | wc -l)
        if [ $count -gt 5 ]; then
            echo "... 还有 $((count - 5)) 个文件"
        fi
        echo ""
    done
    exit 0
fi

# 显示进度
if [ "$1" = "-p" ]; then
    echo -e "${YELLOW}项目进度统计:${NC}"
    echo ""
    
    total_files=$(find src -name "*.c" | wc -l)
    processed_files=$(find pretty -name "*.c" 2>/dev/null | wc -l)
    
    echo "总体进度: $processed_files / $total_files"
    
    for module in 00 01 02 03 04 05 06 99; do
        module_total=$(find src -name "${module}_*.c" | wc -l)
        module_done=$(find pretty -name "${module}_*.c" 2>/dev/null | wc -l)
        
        if [ $module_total -gt 0 ]; then
            echo "模块 $module: $module_done / $module_total"
        fi
    done
    exit 0
fi

# 处理指定文件
filename=$1

# 检查文件是否存在
if [ ! -f "src/$filename" ]; then
    echo -e "${RED}错误: 文件 src/$filename 不存在${NC}"
    exit 1
fi

echo -e "${GREEN}开始处理文件: $filename${NC}"

# 获取模块名
module=$(echo "$filename" | cut -d'_' -f1)

# 创建目标目录
target_dir="pretty/$module"
mkdir -p "$target_dir"

echo -e "${BLUE}创建目录: $target_dir${NC}"

# 复制文件
cp "src/$filename" "$target_dir/"
echo -e "${BLUE}复制文件到: $target_dir/$filename${NC}"

# 创建任务说明
task_file="$target_dir/${filename%.c}_README.txt"
cat > "$task_file" << EOF
代码转译任务 - $filename
=====================

文件信息:
- 原始文件: src/$filename
- 目标文件: $target_dir/$filename
- 模块: $module
- 创建时间: $(date '+%Y-%m-%d %H:%M:%S')

转译任务:
1. 重命名所有 FUN_* 函数
2. 重命名所有 DAT_* 变量
3. 重命名所有 UNK_* 常量
4. 为每个函数添加中文注释
5. 确保代码格式统一

常见命名模式:
- FUN_* → initialize_* (初始化函数)
- FUN_* → render_* (渲染函数)
- FUN_* → process_* (处理函数)
- FUN_* → get_* (获取函数)
- FUN_* → set_* (设置函数)

- DAT_* → *_status (状态变量)
- DAT_* → *_count (计数变量)
- DAT_* → *_position (位置变量)

示例:
// 原始代码
int FUN_00123456(int param1) {
    int DAT_00123456 = param1 + 1;
    return DAT_00123456;
}

// 转译后
/**
 * @brief 函数功能描述
 * @param param1 参数描述
 * @return 返回值描述
 */
int function_name(int param1) {
    int variable_name = param1 + 1;
    return variable_name;
}

完成后检查:
- [ ] 所有函数已重命名
- [ ] 所有变量已重命名
- [ ] 所有常量已重命名
- [ ] 添加了完整注释
- [ ] 代码格式统一

---
任务创建时间: $(date '+%Y-%m-%d %H:%M:%S')
EOF

echo -e "${BLUE}创建任务说明: $task_file${NC}"

# 统计文件信息
line_count=$(wc -l < "src/$filename")
func_count=$(grep -c "FUN_" "src/$filename" || echo "0")
data_count=$(grep -c "DAT_" "src/$filename" || echo "0")
unk_count=$(grep -c "UNK_" "src/$filename" || echo "0")

echo ""
echo -e "${GREEN}文件分析完成:${NC}"
echo "  总行数: $line_count"
echo "  函数数量: $func_count"
echo "  变量数量: $data_count"
echo "  常量数量: $unk_count"

echo ""
echo -e "${YELLOW}下一步操作:${NC}"
echo "1. 编辑文件: code $target_dir/$filename"
echo "2. 查看任务说明: cat $task_file"
echo "3. 开始转译代码"
echo "4. 完成后检查质量"

echo ""
echo -e "${GREEN}文件准备完成！开始转译吧！${NC}"