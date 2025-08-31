#!/bin/bash

# 临时变量名美化脚本
# 用于批量替换网络系统中的临时变量名

# 进入源码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 05_networking.c 05_networking.c.backup_temp_vars

# 处理int_array_temp_* 变量
sed -i 's/int_array_temp_8/network_temp_int_array_8/g' 05_networking.c
sed -i 's/int_array_temp_18/network_temp_int_array_18/g' 05_networking.c
sed -i 's/int_array_temp_10/network_temp_int_array_10/g' 05_networking.c

# 处理char_temp_* 变量
sed -i 's/char_temp_68/network_temp_char_68/g' 05_networking.c
sed -i 's/char_temp_154/network_temp_char_154/g' 05_networking.c
sed -i 's/char_temp_1c/network_temp_char_1c/g' 05_networking.c
sed -i 's/char_temp_98/network_temp_char_98/g' 05_networking.c
sed -i 's/char_temp_97/network_temp_char_97/g' 05_networking.c
sed -i 's/char_temp_96/network_temp_char_96/g' 05_networking.c

# 处理byte_temp_* 变量
sed -i 's/byte_temp_160/network_temp_byte_160/g' 05_networking.c
sed -i 's/byte_temp_128/network_temp_byte_128/g' 05_networking.c
sed -i 's/byte_temp_127/network_temp_byte_127/g' 05_networking.c
sed -i 's/byte_temp_126/network_temp_byte_126/g' 05_networking.c
sed -i 's/byte_temp_125/network_temp_byte_125/g' 05_networking.c
sed -i 's/byte_temp_124/network_temp_byte_124/g' 05_networking.c
sed -i 's/byte_temp_123/network_temp_byte_123/g' 05_networking.c
sed -i 's/byte_temp_122/network_temp_byte_122/g' 05_networking.c
sed -i 's/byte_temp_121/network_temp_byte_121/g' 05_networking.c
sed -i 's/byte_temp_70/network_temp_byte_70/g' 05_networking.c
sed -i 's/byte_temp_6f/network_temp_byte_6f/g' 05_networking.c
sed -i 's/byte_temp_6e/network_temp_byte_6e/g' 05_networking.c
sed -i 's/byte_temp_6d/network_temp_byte_6d/g' 05_networking.c
sed -i 's/byte_temp_6c/network_temp_byte_6c/g' 05_networking.c
sed -i 's/byte_temp_6b/network_temp_byte_6b/g' 05_networking.c
sed -i 's/byte_temp_6a/network_temp_byte_6a/g' 05_networking.c
sed -i 's/byte_temp_69/network_temp_byte_69/g' 05_networking.c
sed -i 's/byte_temp_3c/network_temp_byte_3c/g' 05_networking.c

echo "临时变量名美化完成"