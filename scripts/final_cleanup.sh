#!/bin/bash

# 简单清理05_networking.c文件中的重复文档注释
# 使用sed命令直接删除重复的注释块

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup_final

# 删除所有包含"简化实现"的行
sed -i '/简化实现/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 删除连续的空行
sed -i '/^$/N;/^\n$/D;/^$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "最终清理完成"