#!/bin/bash

# 清理网络文件中的冗余注释
# 删除包含"原始函数名为"的注释行

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed删除包含特定模式的行
sed -i '/原始函数名为FUN_/d' 05_networking.c

echo "清理完成"