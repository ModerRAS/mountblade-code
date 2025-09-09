#!/bin/bash

# 删除临时文件清理脚本
# 用于清理/dev/shm/mountblade-code/TaleWorlds.Native/src目录中的临时文件

echo "开始清理临时文件..."

# 切换到目标目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 1. 删除所有.md文件（markdown报告文件）
echo "删除markdown报告文件..."
rm -f *.md scripts/*.md

# 2. 删除所有.sh文件（shell脚本文件）
echo "删除shell脚本文件..."
rm -f *.sh scripts/*.sh

# 3. 删除所有.py文件（python脚本文件）
echo "删除python脚本文件..."
rm -f *.py scripts/*.py

# 4. 删除所有*_clean.c文件（清理版本的c文件）
echo "删除清理版本的c文件..."
rm -f *_clean.c

# 5. 删除所有*_simplified.c文件（简化版本的c文件）
echo "删除简化版本的c文件..."
rm -f *_simplified.c

# 6. 删除scripts目录及其所有内容
echo "删除scripts目录..."
rm -rf scripts/

echo "临时文件清理完成！"

# 列出剩余的文件
echo ""
echo "剩余的文件："
ls -la