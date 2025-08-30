#!/bin/bash

# 美化05_networking.c文件中的栈变量名和指针变量名
# 将数字后缀的变量名替换为语义化名称

# 美化networkPtrStack_*变量名
sed -i 's/networkPtrStack_158/network_stack_temp_buffer_158/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_138/network_stack_validation_buffer_138/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_168/network_stack_config_buffer_168/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_178/network_stack_session_buffer_178/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_188/network_stack_connection_buffer_188/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_68/network_stack_data_buffer_68/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_58/network_stack_packet_buffer_58/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_78/network_stack_cleanup_buffer_78/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_128/network_stack_auth_buffer_128/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_80/network_stack_timeout_buffer_80/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_310/network_stack_operation_buffer_310/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_2b0/network_stack_data_pointer_2b0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_288/network_stack_resource_buffer_288/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_98/network_stack_index_buffer_98/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/networkPtrStack_90/network_stack_control_buffer_90/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 美化timeout_config_ptr_*变量名
sed -i 's/timeout_config_ptr_5/timeout_config_ptr_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/timeout_config_ptr_4/timeout_config_ptr_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 美化long_pointer_*变量名
sed -i 's/long_pointer_9/long_pointer_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "网络系统变量名美化完成"