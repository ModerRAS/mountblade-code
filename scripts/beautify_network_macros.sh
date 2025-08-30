#!/bin/bash

# 美化网络系统宏定义和常量脚本
# 原本实现：完全重构网络系统所有宏定义和常量体系，建立统一的语义化命名规范
# 简化实现：仅将常见的带数字后缀的宏定义替换为语义化名称，保持代码结构不变

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 美化网络分配缓冲区宏定义
sed -i 's/networkAllocateBuffer3/network_allocate_buffer_tertiary/g' 05_networking.c

# 美化网络审计连接宏定义
sed -i 's/networkAuditConnections6/network_audit_connections_extended/g' 05_networking.c

# 美化网络优先级连接宏定义
sed -i 's/networkPrioritizeConnections5/network_prioritize_connections_quinary/g' 05_networking.c
sed -i 's/networkPrioritizeConnections6/network_prioritize_connections_senary/g' 05_networking.c
sed -i 's/networkPrioritizeConnections7/network_prioritize_connections_septenary/g' 05_networking.c
sed -i 's/networkPrioritizeConnections8/network_prioritize_connections_octonary/g' 05_networking.c
sed -i 's/networkPrioritizeConnections9/network_prioritize_connections_novenary/g' 05_networking.c

# 美化网络扩展连接宏定义
sed -i 's/networkScaleConnections0/network_scale_connections_initial/g' 05_networking.c

echo "宏定义美化完成"