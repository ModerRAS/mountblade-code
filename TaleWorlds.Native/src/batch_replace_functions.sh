#!/bin/bash

# 批量替换FUN_函数名的脚本
# 用于处理02_core_engine.c中的大量FUN_函数调用

# 首先创建一个备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 定义函数映射（从文件中提取）
echo "开始批量替换FUN_函数名..."

# 使用sed进行批量替换
# 注意：这里只处理一些常见的函数，实际使用时需要根据具体情况调整

# 替换一些常见的函数名
sed -i 's/FUN_18012e810/ProcessSystemCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012eaf0/ProcessSystemFinalization/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012e6e8/ValidateSystemData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012e706/InitializeSystemValidator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012e4e0/ProcessSystemEncoding/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012e4f6/ProcessSystemDataConversion/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/FUN_18012e63a/ProcessSystemFloatingPoint/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "批量替换完成"

# 检查替换结果
echo "剩余FUN_函数数量："
grep -c 'FUN_180[0-9a-f]' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c || echo "0"