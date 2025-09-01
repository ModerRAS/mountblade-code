#!/bin/bash

# 删除大量的注释块，保留函数声明和变量定义
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 删除函数文档注释块
sed -i '/^\/\*\*$/,/^ \*\//d' 06_utilities.c

# 删除多余的空行，保留适当的空行
sed -i '/^$/N;/^\n$/d' 06_utilities.c

echo "注释删除完成"