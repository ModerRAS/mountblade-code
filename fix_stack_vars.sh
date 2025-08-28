#!/bin/bash

# 栈变量名替换脚本
# 将 stack0x 格式的变量名替换为有意义的名称

cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty

# 替换栈变量名为有意义的名称
sed -i 's/&stack0x00000090/&config_buffer_90/g' 06_utilities_part022.c
sed -i 's/&stack0x00000094/&config_buffer_94/g' 06_utilities_part022.c
sed -i 's/&stack0x000000b8/&data_buffer_b8/g' 06_utilities_part022.c
sed -i 's/&stack0x000000b0/&data_buffer_b0/g' 06_utilities_part022.c

echo "栈变量名替换完成"