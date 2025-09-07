#!/bin/bash

# 批量删除临时文件
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 删除临时文件
rm -f 03_rendering_simplified.c
rm -f 原始变量名搜索报告.md
rm -f rendering_beautification_report.md
rm -f ui_system_beautification_report.md
rm -f ui_system_completion_report.md

# 删除所有.sh文件
find . -name "*.sh" -type f -delete

# 删除所有.py文件
find . -name "*.py" -type f -delete

echo "临时文件清理完成"