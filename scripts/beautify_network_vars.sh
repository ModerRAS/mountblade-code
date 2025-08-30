#!/bin/bash

# 美化05_networking.c文件中的变量名
# 这个脚本将对网络系统中的变量名进行语义化替换

# 变量名替换规则
# 将network_uint_stack_var替换为更语义化的名称
sed -i 's/network_uint_stack_var/network_stack_uint_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 将network_int_stack_var替换为更语义化的名称
sed -i 's/network_int_stack_var/network_stack_int_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 将network_stack_hex_var替换为更语义化的名称
sed -i 's/network_stack_hex_var/network_stack_addr_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 将network_stack_hex_varhar替换为更语义化的名称
sed -i 's/network_stack_hex_varhar/network_stack_char_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 将network_stack_hex_varontext替换为更语义化的名称
sed -i 's/network_stack_hex_varontext/network_stack_context_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 将network_stack_hex_varta替换为更语义化的名称
sed -i 's/network_stack_hex_varta/network_stack_data_var/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "变量名美化完成"