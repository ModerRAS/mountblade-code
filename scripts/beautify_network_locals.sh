#!/bin/bash

# 美化网络系统局部变量名脚本
# 原本实现：完全重构网络系统所有局部变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的带数字后缀的局部变量名替换为语义化名称，保持代码结构不变

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 美化网络状态变量名
sed -i 's/network_status_third/network_status_tertiary/g' 05_networking.c

# 美化网络上下文指针变量名
sed -i 's/network_context_pointer_data_septenary/network_context_ptr_data_septenary/g' 05_networking.c

# 美化网络索引变量名
sed -i 's/network_proc_index/network_processor_index/g' 05_networking.c
sed -i 's/network_stack_counter/network_stack_iter/g' 05_networking.c
sed -i 's/network_socket_index/network_socket_idx/g' 05_networking.c

# 美化网络配置参数变量名
sed -i 's/network_configuration_varParameter/network_config_param_var/g' 05_networking.c

# 美化网络循环计数器变量名
sed -i 's/network_loop_counter/network_loop_iter/g' 05_networking.c

echo "局部变量名美化完成"