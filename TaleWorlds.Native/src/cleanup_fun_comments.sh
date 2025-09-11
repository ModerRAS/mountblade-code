#!/bin/bash
# 批量清理02_core_engine.c中的FUN_函数注释

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 使用sed删除所有以"// 函数:"开头且包含"FUN_180"的行
sed -i '/^\/\/ 函数:.*FUN_180/d' "$FILE"

echo "FUN_函数注释清理完成"