#!/bin/bash

# 06_utilities.c 结构体字段名美化脚本
# 将 ._数字_ 数字_ 格式的字段名替换为语义化常量

echo "开始美化 06_utilities.c 文件中的结构体字段名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup.$$

# 使用 sed 进行批量替换
sed -i 's/\._1_3_/_primary_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._1_1_/_byte_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._6_2_/_six_two_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._2_6_/_dword_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._2_2_/_two_two_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._1_7_/_seven_byte_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/\._bit_fieldbit_field_four_two_/_bit_four_two_field/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "结构体字段名美化完成"

# 验证替换结果
echo "验证替换结果："
grep -c "\._.*_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "美化脚本执行完成"