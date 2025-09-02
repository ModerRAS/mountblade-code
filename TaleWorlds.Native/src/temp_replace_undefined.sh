#!/bin/bash
# 临时脚本：批量替换03_rendering.c中的undefined变量

# 备份原文件
cp 03_rendering.c 03_rendering.c.backup

# 批量替换undefined为void*
sed -i 's/^undefined /void* /g' 03_rendering.c

echo "批量替换完成"