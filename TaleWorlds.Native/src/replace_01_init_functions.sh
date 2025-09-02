#!/bin/bash

# 01_initialization.c 文件中 FUN_ 函数语义化替换脚本
# 自动化替换所有 FUN_ 开头的函数名为语义化名称

echo "============================================"
echo "01_initialization.c 函数语义化替换脚本"
echo "============================================"

# 检查文件是否存在
if [ ! -f "01_initialization.c" ]; then
    echo "错误: 01_initialization.c 文件不存在"
    exit 1
fi

# 备份原始文件
echo "正在备份原始文件..."
cp 01_initialization.c 01_initialization.c.backup
echo "备份完成: 01_initialization.c.backup"

# 执行Python替换脚本
echo "开始执行函数替换..."
python3 replace_01_init_functions.py 01_initialization.c

if [ $? -eq 0 ]; then
    echo "============================================"
    echo "替换完成!"
    echo "============================================"
    echo "原始文件备份: 01_initialization.c.backup"
    echo "处理后文件: 01_initialization.c"
    echo ""
    echo "建议检查替换结果，确保没有破坏代码逻辑"
else
    echo "============================================"
    echo "替换失败!"
    echo "============================================"
    echo "请检查错误信息并重试"
    exit 1
fi