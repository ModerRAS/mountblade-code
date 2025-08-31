#!/bin/bash

# 创建临时脚本用于批量替换变量名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换网络缓冲区管理器变量名
sed -i 's/network_buffer_management_handler_b8/network_buffer_context_backup/g' 05_networking.c
sed -i 's/network_buffer_management_handler_b0/network_buffer_context_secondary/g' 05_networking.c
sed -i 's/data_processing_bufferpointer_a8/data_processing_context_pointer/g' 05_networking.c
sed -i 's/network_buffer_management_handlera0/network_buffer_context_primary/g' 05_networking.c
sed -i 's/network_buffer_management_handlerc0/network_buffer_management_context/g' 05_networking.c

# 替换其他非语义化变量名
sed -i 's/network_data_packet_buffer_small_b8/network_encryption_seed_buffer/g' 05_networking.c
sed -i 's/network_connection_id6/network_connection_id_primary/g' 05_networking.c
sed -i 's/network_connection_id7/network_connection_id_secondary/g' 05_networking.c
sed -i 's/network_connection_id8/network_connection_id_tertiary/g' 05_networking.c

# 替换网络栈指针变量名
sed -i 's/network_stack_ptr_context_ptr_secondary/network_stack_context_secondary/g' 05_networking.c
sed -i 's/network_stack_ptr_context_ptr_quaternary/network_stack_context_quaternary/g' 05_networking.c

# 替换缓冲区索引变量名
sed -i 's/data_processing_bufferindex_c8/data_processing_index_secondary/g' 05_networking.c
sed -i 's/data_processing_bufferindex_num_100/data_processing_index_primary/g' 05_networking.c

# 替换网络数据包缓冲区变量名
sed -i 's/network_data_packet_buffer_78/network_packet_buffer_temp/g' 05_networking.c
sed -i 's/network_data_packet_buffer_offset_primary/network_packet_buffer_offset/g' 05_networking.c

# 替换网络缓冲区指针变量名
sed -i 's/network_buffer_ptr_primary/network_buffer_primary/g' 05_networking.c

# 替换其他非语义化变量名
sed -i 's/network_buffer_management_handler_d8/network_buffer_context_extended/g' 05_networking.c
sed -i 's/network_buffer_management_handlere8/network_buffer_context_alternate/g' 05_networking.c

echo "变量名替换完成"