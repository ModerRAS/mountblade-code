#!/bin/bash

# 继续美化网络系统文件中的变量名
# 这个脚本将查找并替换 05_networking.c 文件中剩余的非语义化变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_vars_fixed2.c"

echo "正在继续美化网络系统文件中的变量名..."

# 复制文件到临时位置
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化剩余的变量名
sed -i 's/network_data_packet_buffer_value_num_854/network_packet_buffer_value_index/g' "$TEMP_FILE"
sed -i 's/network_data_packet_buffer_num_850/network_packet_buffer_array_main/g' "$TEMP_FILE"
sed -i 's/network_data_packet_buffer_value_num_120/network_packet_buffer_value_control/g' "$TEMP_FILE"
sed -i 's/network_data_packet_buffer_value_num_118/network_packet_buffer_value_status/g' "$TEMP_FILE"
sed -i 's/network_data_packet_buffer_value_num_110/network_packet_buffer_value_flag/g' "$TEMP_FILE"

# 应用修复后的文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统变量名美化完成"