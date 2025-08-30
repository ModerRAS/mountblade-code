#!/bin/bash

# 网络系统变量名语义化美化脚本
# 用于批量替换非语义化变量名为语义化名称

echo "开始网络系统变量名语义化美化..."

# 替换变量名
sed -i 's/network_op_code_tertiary_perf/network_operation_code_tertiary_performance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_stack_char_data_primary_first/network_stack_char_data_primary_initial/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_stack_character_primary/network_stack_character_data_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_stack_char_data_primary_second/network_stack_char_data_primary_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_timeout_ptr_tertiary/network_timeout_pointer_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_timeout_current/network_timeout_current_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_status_tertiary/network_status_code_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_error_detail_code/network_error_code_detailed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_proc_idx_ptr/network_processor_index_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_packet_temp_size/network_packet_temporary_size/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_calculated_freq_value/network_calculated_frequency_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_socket_id/network_socket_identifier/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_data_ptr/network_data_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_status_ptr/network_status_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "网络系统变量名语义化美化完成！"