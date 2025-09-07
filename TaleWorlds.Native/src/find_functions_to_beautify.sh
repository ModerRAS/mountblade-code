#!/bin/bash

# 搜索所有包含Ghidra生成变量的函数定义
echo "正在搜索需要美化的函数定义..."

# 搜索所有FUN_函数定义
echo "=== FUN_函数定义 ==="
grep -n "^void FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -20

echo ""
echo "=== undefined类型函数定义 ==="
grep -n "^undefined[0-9] FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -20

echo ""
echo "=== 包含local_变量的函数 ==="
grep -n "local_[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -10

echo ""
echo "=== 包含iVar变量的函数 ==="
grep -n "iVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -10

echo ""
echo "=== 包含UNK_变量的函数 ==="
grep -n "UNK_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -10

echo ""
echo "=== 包含DAT_变量的函数 ==="
grep -n "DAT_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c | head -10

echo ""
echo "=== 统计各文件中的FUN_函数数量 ==="
for file in /dev/shm/mountblade-code/TaleWorlds.Native/src/*.c; do
    count=$(grep -c "^void FUN_" "$file" 2>/dev/null || echo "0")
    if [ "$count" -gt "0" ]; then
        echo "$file: $count 个FUN_函数"
    fi
done | sort -nr -k2 -t: