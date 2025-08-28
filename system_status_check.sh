#!/bin/bash

# 系统状态检查脚本 - 验证代码美化状态
# 用于检查整个代码库的美化状态和完成情况

echo "=========================================="
echo "系统状态检查脚本 - 代码美化状态验证"
echo "=========================================="
echo "检查时间: $(date)"
echo "检查目录: $(pwd)"
echo

# 1. 统计C文件总数
echo "1. 统计C文件总数:"
total_c_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" | wc -l)
echo "   总C文件数: $total_c_files"

# 2. 统计已美化的文件
echo
echo "2. 统计已美化的文件:"
beautified_files=$(find . -name "*_Beautified.c" -not -path "./.git/*" | wc -l)
final_beautified_files=$(find . -name "*_Final_Beautified.c" -not -path "./.git/*" | wc -l)
echo "   基础美化文件: $beautified_files"
echo "   最终美化文件: $final_beautified_files"
echo "   总美化文件数: $((beautified_files + final_beautified_files))"

# 3. 检查包含FUN_标记的文件
echo
echo "3. 检查包含FUN_标记的文件:"
fun_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "FUN_" {} \; | wc -l)
echo "   包含FUN_标记的文件数: $fun_files"

# 4. 检查包含UNK_标记的文件
echo
echo "4. 检查包含UNK_标记的文件:"
unk_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "UNK_" {} \; | wc -l)
echo "   包含UNK_标记的文件数: $unk_files"

# 5. 检查包含sub_标记的文件
echo
echo "5. 检查包含sub_标记的文件:"
sub_files=$(find . -name "*.c" -not -path "./backup_*" -not -path "./.git/*" -exec grep -l "sub_" {} \; | wc -l)
echo "   包含sub_标记的文件数: $sub_files"

# 6. 检查pretty目录状态
echo
echo "6. 检查pretty目录状态:"
if [ -d "pretty" ]; then
    pretty_files=$(find ./pretty -name "*.c" | wc -l)
    echo "   pretty目录文件数: $pretty_files"
else
    echo "   pretty目录不存在"
fi

# 7. 检查函数别名文件
echo
echo "7. 检查函数别名文件:"
alias_files=$(find . -name "*aliases.h" -not -path "./.git/*" | wc -l)
echo "   函数别名文件数: $alias_files"

# 8. 检查文档完整性
echo
echo "8. 检查文档完整性:"
doc_files=$(find . -name "*.md" -not -path "./.git/*" | wc -l)
echo "   Markdown文档数: $doc_files"

# 9. 系统状态评估
echo
echo "9. 系统状态评估:"
if [ $total_c_files -gt 0 ]; then
    beautified_ratio=$(( (beautified_files + final_beautified_files) * 100 / total_c_files ))
    echo "   美化完成率: $beautified_ratio%"
    
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

# 10. 生成状态报告
echo
echo "10. 生成状态报告:"
report_file="system_status_report_$(date +%Y%m%d_%H%M%S).md"
cat > "$report_file" << EOF
# 系统状态检查报告

**检查时间**: $(date)  
**检查目录**: $(pwd)  
**报告文件**: $report_file

## 统计数据

- **总C文件数**: $total_c_files
- **基础美化文件**: $beautified_files
- **最终美化文件**: $final_beautified_files
- **总美化文件数**: $((beautified_files + final_beautified_files))
- **美化完成率**: $beautified_ratio%

## 标记检查结果

- **包含FUN_标记的文件**: $fun_files
- **包含UNK_标记的文件**: $unk_files
- **包含sub_标记的文件**: $sub_files

## 系统状态评估

$([ $beautified_ratio -eq 100 ] && echo "✅ 系统状态: 已完成" || ([ $beautified_ratio -gt 90 ] && echo "🟡 系统状态: 接近完成" || ([ $beautified_ratio -gt 50 ] && echo "🟠 系统状态: 进行中" || echo "🔴 系统状态: 需要处理")))

## 建议和后续行动

$([ $beautified_ratio -eq 100 ] && echo "系统已完成所有美化工作，建议进行最终验证和归档。" || ([ $beautified_ratio -gt 90 ] && echo "系统接近完成，建议检查剩余文件并完成美化工作。" || ([ $beautified_ratio -gt 50 ] && echo "系统进行中，建议继续处理剩余文件。" || echo "系统需要大量处理，建议制定详细的美化计划。")))

---

*此报告由系统状态检查脚本自动生成*
EOF

echo "   状态报告已生成: $report_file"

echo
echo "=========================================="
echo "系统状态检查完成"
echo "=========================================="