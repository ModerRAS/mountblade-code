#!/bin/bash

# 网络模块美化脚本
# 美化05_networking.c文件中的FUN_函数

echo "开始美化05_networking.c文件..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup

# 执行Python美化脚本
python3 /dev/shm/mountblade-code/TaleWorlds.Native/src/beautify_networking_simple.py

echo "美化脚本执行完成"

# 检查文件大小
original_size=$(wc -c < /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup)
new_size=$(wc -c < /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c)

echo "原始文件大小: $original_size 字节"
echo "新文件大小: $new_size 字节"

# 统计FUN_函数数量
original_fun_count=$(grep -c "FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup)
new_fun_count=$(grep -c "FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c)

echo "原始FUN_函数数量: $original_fun_count"
echo "新FUN_函数数量: $new_fun_count"

echo "美化完成！请检查替换结果。"