#!/bin/bash
# 清理临时文件脚本
# 删除所有临时文件、脚本和报告

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 删除临时文件
rm -f 03_rendering_simplified.c
rm -f 原始变量名搜索报告.md
rm -f add_macro_definitions.sh
rm -f fun_macro_definitions.h
rm -f rendering_beautification_report.md
rm -f ui_system_beautification_report.md
rm -f ui_system_completion_report.md

# 删除所有.sh脚本文件（除了保留在scripts文件夹中的）
find . -maxdepth 1 -name "*.sh" -delete
find . -maxdepth 1 -name "*.py" -delete
find . -maxdepth 1 -name "*.md" -delete

echo "临时文件清理完成"