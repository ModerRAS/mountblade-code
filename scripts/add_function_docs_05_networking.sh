#!/bin/bash

# 05_networking.c 文件函数文档添加脚本
# 为关键函数添加文档注释

# 在network_packet_processor_primary函数前添加文档注释
sed -i '/^uint64_t$/i\
/**\
 * @brief 网络数据包主处理器\
 * 负责处理网络数据包的核心逻辑，包括数据包解析、验证和路由\
 * 这是网络系统中数据包处理的主要入口点\
 *\
 * 功能描述：\
 * 1. 验证套接字上下文的有效性\
 * 2. 处理特殊范围的套接字句柄\
 * 3. 执行数据包处理逻辑\
 * 4. 返回处理结果状态码\
 *\
 * @param network_socket_context_address 网络套接字上下文地址数组\
 * @return uint64_t 处理结果状态码，0表示成功，非0表示错误码\
 */' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 在network_process_connection函数前添加文档注释
sed -i '/^uint64_t network_process_connection$/i\
/**\
 * @brief 网络连接处理函数\
 * 负责处理网络连接的状态更新和数据传输\
 *\
 * 功能描述：\
 * 1. 检查连接状态\
 * 2. 更新连接上下文\
 * 3. 处理数据传输\
 * 4. 返回处理结果\
 *\
 * @param network_socket_context_address 网络套接字上下文地址\
 * @return uint64_t 处理结果状态码\
 */' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 在network_socket_close函数前添加文档注释
sed -i '/^int32_t network_socket_close$/i\
/**\
 * @brief 网络套接字关闭函数\
 * 负责安全关闭网络套接字连接，释放相关资源\
 *\
 * 功能描述：\
 * 1. 验证套接字状态\
 * 2. 清理连接资源\
 * 3. 更新连接状态\
 * 4. 返回关闭结果\
 *\
 * @param network_socket_context_address 网络套接字上下文地址数组\
 * @return int32_t 关闭结果状态码，0表示成功，非0表示错误码\
 */' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "05_networking.c 文件函数文档添加完成"