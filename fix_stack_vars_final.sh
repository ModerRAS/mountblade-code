#!/bin/bash

# 最终修复栈变量名脚本
# 使用perl进行精确的替换

cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty

# 使用perl进行精确替换
perl -i -pe 's/&stack0x00000090config_buffer_90config_buffer_90/&config_buffer_90/g' 06_utilities_part022.c
perl -i -pe 's/&stack0x00000094config_buffer_94config_buffer_94/&config_buffer_94/g' 06_utilities_part022.c
perl -i -pe 's/&stack0x000000b8data_buffer_b8data_buffer_b8/&data_buffer_b8/g' 06_utilities_part022.c
perl -i -pe 's/&stack0x000000b0data_buffer_b0data_buffer_b0/&data_buffer_b0/g' 06_utilities_part022.c

echo "栈变量名最终修复完成"