#!/bin/bash

# 网络系统代码美化脚本（简化版）
# 用于批量替换变量名为语义化名称

# 处理05_networking.c文件中的变量名替换
sed -i 's/network_data_buffer_pointer0_var/network_data_buffer_primary/g' "$1"
sed -i 's/network_data_buffer_pointer1_var/network_data_buffer_secondary/g' "$1"
sed -i 's/network_connection_pointer0_var/network_connection_primary/g' "$1"
sed -i 's/network_socket_handle_index/network_socket_index/g' "$1"
sed -i 's/network_primary_connection_context/network_connection_context/g' "$1"
sed -i 's/network_context_base_pointer/network_context_base/g' "$1"
sed -i 's/network_socket_identifier/network_socket_id/g' "$1"
sed -i 's/network_status_buffer/network_status_buffer_ptr/g' "$1"
sed -i 's/network_context_pointer_param/network_context_param/g' "$1"

echo "变量名替换完成"