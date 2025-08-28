#!/bin/bash

# 智能系统状态检查脚本 - 验证代码美化状态
# 用于检查整个代码库的美化状态和完成情况

echo "=========================================="
echo "智能系统状态检查脚本 - 代码美化状态验证"
echo "=========================================="
echo "检查时间: $(date)"
echo "检查目录: $(pwd)"
echo

# 1. 统计C文件总数
echo "1. 统计C文件总数:"
total_c_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" | wc -l)
echo "   总C文件数: $total_c_files"

# 2. 检查已美化的文件（通过内容判断）
echo
echo "2. 智能检查已美化的文件:"
beautified_count=0
unbeautified_count=0

# 创建临时文件来存储检查结果
temp_file=$(mktemp)

echo "   开始检查文件美化状态..."

# 检查每个文件
find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" | while read -r file; do
    # 检查文件是否包含美化特征
    if grep -q -E "(@file|@brief|@author|@version|@date)" "$file" && \
       grep -q -E "(主要功能|技术实现|核心函数|性能优化)" "$file"; then
        echo "✅ $file" >> "$temp_file"
        beautified_count=$((beautified_count + 1))
    else
        echo "❌ $file" >> "$temp_file"
        unbeautified_count=$((unbeautified_count + 1))
    fi
done

echo "   已美化文件数: $beautified_count"
echo "   未美化文件数: $unbeautified_count"

# 3. 检查标记文件
echo
echo "3. 检查标记文件:"
fun_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "FUN_" {} \; | wc -l)
unk_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "UNK_" {} \; | wc -l)
sub_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "sub_" {} \; | wc -l)
echo "   包含FUN_标记的文件: $fun_files"
echo "   包含UNK_标记的文件: $unk_files"
echo "   包含sub_标记的文件: $sub_files"

# 4. 系统状态评估
echo
echo "4. 系统状态评估:"
if [ $total_c_files -gt 0 ]; then
    beautified_ratio=$(( beautified_count * 100 / total_c_files ))
    echo "   智能美化完成率: $beautified_ratio%"
    
    if [ $beautified_ratio -eq 100 ]; then
        echo "   ✅ 系统状态: 已完成"
    elif [ $beautified_ratio -gt 90 ]; then
        echo "   🟡 系统状态: 接近完成"
    elif [ $beautified_ratio -gt 50 ]; then
        echo "   🟠 系统状态: 进行中"
    else
        echo "   🔴 系统状态: 需要处理"
    fi
else
    echo "   ⚠️  系统状态: 无C文件"
fi

# 5. 生成详细报告
echo
echo "5. 生成详细报告:"
report_file="intelligent_system_status_report_$(date +%Y%m%d_%H%M%S).md"

cat > "$report_file" << EOF
# 智能系统状态检查报告

**检查时间**: $(date)  
**检查目录**: $(pwd)  
**检查方式**: 智能内容分析  
**报告文件**: $report_file

## 统计数据

- **总C文件数**: $total_c_files
- **已美化文件数**: $beautified_count
- **未美化文件数**: $unbeautified_count
- **智能美化完成率**: $beautified_ratio%

## 标记检查结果

- **包含FUN_标记的文件**: $fun_files
- **包含UNK_标记的文件**: $unk_files
- **包含sub_标记的文件**: $sub_files

## 系统状态评估

$([ $beautified_ratio -eq 100 ] && echo "✅ 系统状态: 已完成" || ([ $beautified_ratio -gt 90 ] && echo "🟡 系统状态: 接近完成" || ([ $beautified_ratio -gt 50 ] && echo "🟠 系统状态: 进行中" || echo "🔴 系统状态: 需要处理")))

## 文件美化状态详情

### 已美化文件
$(grep "✅" "$temp_file" | sed 's/✅ /- /')

### 未美化文件
$(grep "❌" "$temp_file" | sed 's/❌ /- /')

## 建议和后续行动

$([ $beautified_ratio -eq 100 ] && echo "系统已完成所有美化工作，建议进行最终验证和归档。" || ([ $beautified_ratio -gt 90 ] && echo "系统接近完成，建议检查剩余文件并完成美化工作。" || ([ $beautified_ratio -gt 50 ] && echo "系统进行中，建议继续处理剩余文件。" || echo "系统需要大量处理，建议制定详细的美化计划。")))

---

*此报告由智能系统状态检查脚本自动生成*
EOF

echo "   详细报告已生成: $report_file"

# 清理临时文件
rm -f "$temp_file"

echo
echo "=========================================="
echo "智能系统状态检查完成"
echo "=========================================="