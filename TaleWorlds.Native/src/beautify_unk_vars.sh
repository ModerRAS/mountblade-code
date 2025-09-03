#!/bin/bash

# 批量替换UNK_变量名为更具语义的名称
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换UNK_为SystemMemoryRegion（用于内存相关变量）
sed -i 's/UNK_180a15/SystemMemoryRegion15/g' 99_unmatched_functions.c
sed -i 's/UNK_180a16/SystemMemoryRegion16/g' 99_unmatched_functions.c
sed -i 's/UNK_180a18/SystemMemoryRegion18/g' 99_unmatched_functions.c
sed -i 's/UNK_180a19/SystemMemoryRegion19/g' 99_unmatched_functions.c
sed -i 's/UNK_180a23/SystemMemoryRegion23/g' 99_unmatched_functions.c
sed -i 's/UNK_180a24/SystemMemoryRegion24/g' 99_unmatched_functions.c
sed -i 's/UNK_180a25/SystemMemoryRegion25/g' 99_unmatched_functions.c
sed -i 's/UNK_180a26/SystemMemoryRegion26/g' 99_unmatched_functions.c
sed -i 's/UNK_180a27/SystemMemoryRegion27/g' 99_unmatched_functions.c
sed -i 's/UNK_180a33/SystemMemoryRegion33/g' 99_unmatched_functions.c
sed -i 's/UNK_180a36/SystemMemoryRegion36/g' 99_unmatched_functions.c
sed -i 's/UNK_180a3c/SystemMemoryRegion3c/g' 99_unmatched_functions.c
sed -i 's/UNK_180a3d/SystemMemoryRegion3d/g' 99_unmatched_functions.c
sed -i 's/UNK_180a3f/SystemMemoryRegion3f/g' 99_unmatched_functions.c

# 替换DAT_为SystemDataTable（用于数据表相关变量）
sed -i 's/DAT_180a/SystemDataTable/g' 99_unmatched_functions.c
sed -i 's/DAT_180b/SystemDataTableB/g' 99_unmatched_functions.c
sed -i 's/DAT_180c/SystemDataTableC/g' 99_unmatched_functions.c
sed -i 's/DAT_1809/SystemDataTable9/g' 99_unmatched_functions.c
sed -i 's/DAT_1800/SystemDataTable0/g' 99_unmatched_functions.c

# 替换LAB_为SystemLabel（用于标签）
sed -i 's/LAB_1800/SystemLabel/g' 99_unmatched_functions.c

echo "变量名替换完成"