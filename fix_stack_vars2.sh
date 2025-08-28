#!/bin/bash

# 修复栈变量名替换脚本
# 将错误的替换结果修复为正确的变量名

cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty

# 修复错误的替换结果
sed -i 's/&stack0x00000090config_buffer_90/&config_buffer_90/g' 06_utilities_part022.c
sed -i 's/&stack0x00000094config_buffer_94/&config_buffer_94/g' 06_utilities_part022.c
sed -i 's/&stack0x000000b8data_buffer_b8/&data_buffer_b8/g' 06_utilities_part022.c
sed -i 's/&stack0x000000b0data_buffer_b0/&data_buffer_b0/g' 06_utilities_part022.c

echo "栈变量名修复完成"