#!/bin/bash

# 美化脚本 - 用于批量替换变量名和函数名
# 注意：这是一个简化实现，主要用于演示目的

# 原始实现：手动逐个替换变量名和函数名
# 简化实现：使用sed命令进行批量替换

echo "开始美化代码..."

# 替换一些常见的简单变量名
sed -i 's/\btemp\b/Temporary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\btmp\b/Temporary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bcnt\b/Count/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bidx\b/Index/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bptr\b/Pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\buf\b/UserFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bbuf\b/Buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "代码美化完成"