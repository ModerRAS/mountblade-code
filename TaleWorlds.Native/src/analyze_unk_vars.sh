#!/bin/bash

# 分析 06_utilities.c 文件中的 UNK_ 变量
# 根据上下文和使用模式为变量提供语义化名称

echo "分析 06_utilities.c 中的 UNK_ 变量..."

# 查找所有 UNK_ 变量的定义
echo "=== UNK_ 变量定义 ==="
grep -n "undefined UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 查找所有 UNK_ 变量的引用
echo -e "\n=== UNK_ 变量引用 ==="
grep -n "&UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | head -20

# 分析使用模式
echo -e "\n=== 使用模式分析 ==="
echo "1. 数据结构初始化模式:"
grep -A2 -B2 "Initialize.*UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo -e "\n2. 内存分配模式:"
grep -A2 -B2 "AllocateMemoryBlock.*UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo -e "\n3. 字符串操作模式:"
grep -A2 -B2 "ProcessStringOperation.*UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo -e "\n4. 序列化操作模式:"
grep -A2 -B2 "SerializeData.*UNK_\|DeserializeData.*UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c