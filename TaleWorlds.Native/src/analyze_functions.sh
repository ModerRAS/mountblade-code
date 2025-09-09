#!/bin/bash

# 分析03_rendering.c文件中的FUN_函数美化状态
echo "=== 分析03_rendering.c文件中的FUN_函数美化状态 ==="

# 获取所有FUN_函数定义的总数
total_funs=$(grep -c "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "1. 总FUN_函数定义数量: $total_funs"

# 获取已美化的函数数量（有语义化名称的）
beautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* [A-Z][a-zA-Z0-9_]*" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "2. 已美化函数数量: $beautified_funs"

# 获取未美化的函数数量（仍然是FUN_开头的）
unbeautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "3. 未美化函数数量: $unbeautified_funs"

# 获取重复定义的函数数量
duplicate_funs=$(grep "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | cut -d' ' -f2 | sort | uniq -d | wc -l)
echo "4. 重复定义的函数地址数量: $duplicate_funs"

echo ""
echo "=== 详细分析 ==="

# 显示重复定义的函数地址
echo "重复定义的函数地址："
grep "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | cut -d' ' -f2 | sort | uniq -d | head -10

echo ""
echo "=== 未美化的函数示例 ==="
# 显示前10个未美化的函数
grep "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | head -10

echo ""
echo "=== 需要清理的重复定义 ==="
# 显示需要清理的重复定义
echo "以下函数地址有多个定义："
grep "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | cut -d' ' -f2 | sort | uniq -d | while read addr; do
    echo "地址 $addr 的定义："
    grep "^#define FUN_180$addr" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | head -3
    echo ""
done