#!/bin/bash

# 网络系统变量名语义化美化脚本
# 用于将 05_networking.c 中的非语义化变量名替换为语义化名称

echo "开始网络系统变量名语义化美化..."

# 替换网络结果值变量名
sed -i 's/network_result_value7/network_result_value_seven/g' TaleWorlds.Native/src/05_networking.c

# 替换网络标志变量名
sed -i 's/NETWORK_FLAG_REUSEADDRc/NETWORK_FLAG_REUSEADDR_OFFSET_C/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/NETWORK_FLAG_BLOCKINGee000/NETWORK_FLAG_BLOCKING_EXTENDED_VALUE/g' TaleWorlds.Native/src/05_networking.c

# 替换其他非语义化变量名
sed -i 's/network_tertiary_value/network_calculated_tertiary_value/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/network_packet_id_value/network_packet_identifier_value/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/network_result_primary/network_primary_result_value/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/network_final_return_value/network_final_result_value/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/network_packet_header_length/network_packet_header_length_value/g' TaleWorlds.Native/src/05_networking.c

echo "网络系统变量名语义化美化完成"