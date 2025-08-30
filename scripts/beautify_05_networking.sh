#!/bin/bash

# 05_networking.c 文件变量名美化脚本
# 将一些变量名替换为更语义化的名称

sed -i 's/network_temp_buffer/network_temporary_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_validation_maximum/network_validation_max_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_encryption_key_main_main/network_encryption_key_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkSocketContextArray128/network_socket_context_array_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_context_ptr_data_array_alt/network_context_ptr_data_array_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/socket_context_ptrPtr/socket_context_pointer_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_configuration_data/network_config_data_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_send_data_buffer/network_send_buffer_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_socket_context/network_socket_context_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_session_config/network_session_config_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/network_send_buffer/network_send_data_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/encryption_temp_buffer/encryption_temporary_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "05_networking.c 变量名美化完成"