#!/bin/bash

# 美化网络系统变量名脚本
# 将剩余的包含_value后缀的变量名替换为语义化名称

# 文件路径
FILE="TaleWorlds.Native/src/05_networking.c"

# 备份原文件
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 替换变量名
sed -i 's/network_socket_reg_value_ptr/network_socket_reg_ptr/g' "$FILE"
sed -i 's/g_network_socket_handle_value_pool/g_network_socket_handle_pool/g' "$FILE"
sed -i 's/pnetwork_port_value/pnetwork_port_ptr/g' "$FILE"

echo "变量名美化完成"