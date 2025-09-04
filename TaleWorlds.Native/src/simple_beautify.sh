#!/bin/bash

# 简化的美化脚本 - 只处理最常见的函数名

echo "开始美化 99_unmatched_functions.c 文件..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 只替换最常见的几个函数名
echo "正在替换最常见的函数名..."

# 使用 sed 替换最常见的函数名
sed -i 's/FUN_18062b8b0/MemoryAllocationManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180628ca0/StringBufferAllocator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18005ce30/DataBufferProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18009eae0/StringFormatHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b4910/XmlDataProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800b08e0/ResourceHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180058080/ArrayIterator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180075030/DataStreamProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180628d60/StringIndexer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18005e890/ResourceAccessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "基础美化完成！"
echo "请检查文件内容，确保替换正确。"