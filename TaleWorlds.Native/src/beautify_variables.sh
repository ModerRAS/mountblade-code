#!/bin/bash

# 美化变量名脚本
# 用于将DAT_变量替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.temp

# 替换变量名
sed -i 's/DAT_180c8aa48/SystemDataTablePointer/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180c91cf8/SystemConfigurationDataPointer/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180c91d00/SystemStateDataPointer/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180c91cf0/SystemNetworkDataPointer/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180a401f0/SystemMemoryManagerPointer/g' 99_unmatched_functions.c.temp

# 替换其他常见变量
sed -i 's/DAT_180d48da4/SystemResourceManagerA/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180d48da0/SystemResourceManagerB/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180d48d70/SystemResourceManagerC/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180d48d80/SystemResourceManagerD/g' 99_unmatched_functions.c.temp
sed -i 's/DAT_180d48d90/SystemResourceManagerE/g' 99_unmatched_functions.c.temp

echo "变量替换完成"