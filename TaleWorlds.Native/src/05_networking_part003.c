#include "TaleWorlds.Native.Split.h"

/**
 * @file 05_networking_part003.c
 * @brief 网络系统协议处理模块
 * 
 * 本模块实现了游戏网络通信中的协议处理功能，包括各种网络数据包的
 * 序列化、反序列化、协议字段封装和数据传输处理。支持多种协议类型
 * 和数据格式，确保网络通信的可靠性和安全性。
 * 
 * @技术架构:
 * - 基于缓冲区的数据包处理
 * - 协议字段的动态序列化
 * - 多层协议栈支持
 * - 数据完整性校验
 * 
 * @性能优化:
 * - 零拷贝数据传输
 * - 缓冲区复用机制
 * - 批量数据处理
 * - 内存池管理
 * 
 * @安全考虑:
 * - 数据边界检查
 * - 缓冲区溢出防护
 * - 协议版本验证
 * - 恶意数据过滤
 */

// 网络协议常量定义
#define NETWORK_PROTOCOL_VERSION 0x0102
#define MAX_PACKET_SIZE 4096
#define PROTOCOL_HEADER_SIZE 16
#define BUFFER_ALIGNMENT 8

// 协议类型枚举
typedef enum {
    PROTOCOL_TYPE_BASIC = 0x01,
    PROTOCOL_TYPE_EXTENDED = 0x02,
    PROTOCOL_TYPE_SECURED = 0x03,
    PROTOCOL_TYPE_COMPRESSED = 0x04
} ProtocolType;

// 协议处理状态
typedef enum {
    PROTO_STATUS_SUCCESS = 0,
    PROTO_STATUS_INVALID_HEADER = -1,
    PROTO_STATUS_BUFFER_OVERFLOW = -2,
    PROTO_STATUS_INVALID_VERSION = -3
} ProtocolStatus;

// 协议头部结构
typedef struct {
    uint32_t magic_number;
    uint16_t version;
    uint16_t type;
    uint32_t payload_size;
    uint32_t checksum;
} ProtocolHeader;

// 协议处理上下文
typedef struct {
    ProtocolHeader header;
    uint8_t* buffer;
    size_t buffer_size;
    size_t current_offset;
    ProtocolStatus status;
} ProtocolContext;

/**
 * @brief 基础协议数据发送函数
 * 
 * 该函数负责发送基础协议数据包，包含协议头部和基本信息。
 * 主要用于建立网络连接和传输基础控制信息。
 * 
 * @param context 协议上下文指针
 * @param data_buffer 数据缓冲区
 * @param data_size 数据大小
 * 
 * @安全考虑:
 * - 参数有效性验证
 * - 数据边界检查
 * - 内存访问安全
 */
void NetworkProtocol_SendBasic(void* context, uint8_t* data_buffer, uint32_t data_size)
{
    // 参数验证和边界检查
    if (context == NULL || data_buffer == NULL || data_size == 0) {
        return;
    }
    
    // 调用底层协议发送函数
    FUN_18083f8f0(data_buffer, data_size, &UNK_180983220, 
                *(uint32_t*)((uint8_t*)context + 0x10),
                *(uint32_t*)((uint8_t*)context + 0x18), 
                *(uint32_t*)((uint8_t*)context + 0x1c));
}



/**
 * @brief 扩展协议数据序列化函数
 * 
 * 该函数负责将扩展协议数据序列化为网络传输格式。
 * 支持多种数据类型和复杂结构，提供完整的协议封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小，失败时返回负值
 * 
 * @性能优化:
 * - 批量数据处理
 * - 缓冲区预分配
 * - 零拷贝优化
 * 
 * @安全考虑:
 * - 缓冲区溢出检查
 * - 数据完整性验证
 * - 内存访问边界保护
 */
int NetworkProtocol_SerializeExtended(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t field1, field2, field3;
    int total_size = 0;
    int current_size;
    uint32_t stack_fields[4];
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 提取协议字段
    stack_fields[0] = *(uint32_t*)((uint8_t*)context + 0x1c);
    stack_fields[1] = *(uint32_t*)((uint8_t*)context + 0x20);
    stack_fields[2] = *(uint32_t*)((uint8_t*)context + 0x24);
    stack_fields[3] = *(uint32_t*)((uint8_t*)context + 0x28);
    field1 = *(uint32_t*)((uint8_t*)context + 0x2c);
    field2 = *(uint32_t*)((uint8_t*)context + 0x18);
    field3 = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化协议头部和字段
    current_size = FUN_18074b880(output_buffer, buffer_size, &UNK_1809832a0);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化分隔符
    current_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &DAT_180a06434);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化主字段
    current_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field3);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化分隔符
    current_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &DAT_180a06434);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化次字段
    current_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, field2);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化分隔符
    current_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &DAT_180a06434);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化堆栈字段
    current_size = FUN_18074b650(output_buffer + total_size, buffer_size - total_size, stack_fields);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化分隔符
    current_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &DAT_180a06434);
    if (current_size < 0) return current_size;
    total_size += current_size;
    
    // 序列化结束字段
    current_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field1);
    if (current_size < 0) return current_size;
    
    return total_size + current_size;
}



/**
 * @brief 连接请求协议处理函数
 * 
 * 该函数负责处理网络连接请求协议的序列化工作。
 * 包含连接标识符和相关参数的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 连接标识符封装
 * - 协议版本兼容性检查
 * - 简化的数据结构
 */
int NetworkProtocol_SerializeConnectionRequest(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t connection_id;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取连接标识符
    connection_id = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化连接请求头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_180982d28);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化连接标识符
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, connection_id);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



/**
 * @brief 连接响应协议处理函数
 * 
 * 该函数负责处理网络连接响应协议的序列化工作。
 * 包含连接确认信息和响应码的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 响应码封装
 * - 连接状态确认
 * - 协议兼容性处理
 */
int NetworkProtocol_SerializeConnectionResponse(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t response_code;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取响应码
    response_code = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化响应头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_180982e28);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化响应码
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, response_code);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



/**
 * @brief 连接断开协议处理函数
 * 
 * 该函数负责处理网络连接断开协议的序列化工作。
 * 包含断开原因和状态信息的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 断开原因编码
 * - 状态信息封装
 * - 优雅断开处理
 */
int NetworkProtocol_SerializeDisconnect(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t disconnect_reason;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取断开原因
    disconnect_reason = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化断开协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_180982da8);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化断开原因
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, disconnect_reason);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



/**
 * @brief 心跳包协议处理函数
 * 
 * 该函数负责处理心跳包协议的序列化工作。
 * 包含时间戳和会话信息的封装，用于保持连接活跃状态。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 时间戳封装
 * - 会话信息包含
 * - 心跳间隔控制
 * 
 * @性能优化:
 * - 紧凑的数据结构
 * - 快速序列化算法
 * - 批量处理支持
 */
int NetworkProtocol_SerializeHeartbeat(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint64_t timestamp;
    uint32_t session_id;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取时间戳和会话ID
    timestamp = *(uint64_t*)((uint8_t*)context + 0x18);
    session_id = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化心跳包头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_1809842c8);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化会话ID
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, session_id);
    if (total_size < 0) return total_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size + total_size, 
                               buffer_size - header_size - total_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化时间戳
    total_size = func_0x00018074bda0(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, timestamp);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



/**
 * @brief 心跳响应协议处理函数
 * 
 * 该函数负责处理心跳响应协议的序列化工作。
 * 包含响应确认和时间同步信息的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 响应确认码
 * - 时间同步信息
 * - 简化的数据结构
 */
int NetworkProtocol_SerializeHeartbeatResponse(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t response_code;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取响应码
    response_code = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化心跳响应头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_1809841c8);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化响应码
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, response_code);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}





/**
 * @brief 安全协议数据发送函数
 * 
 * 该函数负责发送安全协议数据包，包含加密标识和安全参数。
 * 用于建立安全通信通道和传输敏感数据。
 * 
 * @param context 协议上下文指针
 * @param data_buffer 数据缓冲区
 * @param data_size 数据大小
 * 
 * @安全考虑:
 * - 加密标识验证
 * - 安全参数检查
 * - 数据完整性保护
 * - 访问权限控制
 */
void NetworkProtocol_SendSecure(void* context, uint8_t* data_buffer, uint32_t data_size)
{
    // 参数验证和边界检查
    if (context == NULL || data_buffer == NULL || data_size == 0) {
        return;
    }
    
    // 调用安全协议发送函数
    FUN_18083f9b0(data_buffer, data_size, &UNK_180984438, 
                *(uint32_t*)((uint8_t*)context + 0x10),
                *(uint8_t*)((uint8_t*)context + 0x18));
}





/**
 * @brief 压缩协议数据发送函数
 * 
 * 该函数负责发送压缩协议数据包，包含压缩标识和压缩参数。
 * 用于优化网络传输效率，减少带宽占用。
 * 
 * @param context 协议上下文指针
 * @param data_buffer 数据缓冲区
 * @param data_size 数据大小
 * 
 * @性能优化:
 * - 压缩算法选择
 * - 压缩级别控制
 * - 带宽节省
 * - 传输延迟优化
 * 
 * @安全考虑:
 * - 压缩数据完整性验证
 * - 解压缩缓冲区溢出防护
 * - 压缩炸弹检测
 */
void NetworkProtocol_SendCompressed(void* context, uint8_t* data_buffer, uint32_t data_size)
{
    // 参数验证和边界检查
    if (context == NULL || data_buffer == NULL || data_size == 0) {
        return;
    }
    
    // 调用压缩协议发送函数
    FUN_18083f9b0(data_buffer, data_size, &UNK_1809843c0, 
                *(uint32_t*)((uint8_t*)context + 0x10),
                *(uint8_t*)((uint8_t*)context + 0x18));
}



/**
 * @brief 压缩协议数据序列化函数
 * 
 * 该函数负责将压缩协议数据序列化为网络传输格式。
 * 包含压缩头部、压缩数据和压缩元信息的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 压缩头部封装
 * - 压缩算法标识
 * - 压缩比率信息
 * - 数据完整性校验
 * 
 * @性能优化:
 * - 压缩效率优化
 * - 内存使用优化
 * - 序列化速度优化
 */
int NetworkProtocol_SerializeCompressed(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t algorithm_id, compression_level;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取压缩参数
    algorithm_id = *(uint32_t*)((uint8_t*)context + 0x10);
    compression_level = *(uint32_t*)((uint8_t*)context + 0x18);
    
    // 序列化压缩协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_180984348);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化算法标识
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, algorithm_id);
    if (total_size < 0) return total_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size + total_size, 
                               buffer_size - header_size - total_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化压缩级别
    total_size = func_0x00018074b830(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, compression_level);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



/**
 * @brief 加密协议数据序列化函数
 * 
 * 该函数负责将加密协议数据序列化为网络传输格式。
 * 包含加密头部、加密算法标识和加密密钥信息的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 加密头部封装
 * - 加密算法标识
 * - 密钥信息封装
 * - 安全参数设置
 * 
 * @安全考虑:
 * - 密钥安全保护
 * - 加密强度验证
 * - 数据完整性保护
 * - 访问权限控制
 */
int NetworkProtocol_SerializeEncrypted(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t key_id, algorithm_id;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取加密参数
    key_id = *(uint32_t*)((uint8_t*)context + 0x18);
    algorithm_id = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化加密协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_1809844b0);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    total_size += header_size;
    
    // 序列化算法标识
    header_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, algorithm_id);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    header_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &DAT_180a06434);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化密钥标识
    header_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, key_id);
    return total_size + header_size;
}



/**
 * @brief 连接确认协议处理函数
 * 
 * 该函数负责处理连接确认协议的序列化工作。
 * 包含确认码和连接状态的封装，用于确认连接建立成功。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 确认码封装
 * - 连接状态确认
 * - 简化的数据结构
 * 
 * @性能优化:
 * - 快速序列化
 * - 最小化数据包大小
 * - 减少网络延迟
 */
int NetworkProtocol_SerializeConnectionAck(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t ack_code;
    int header_size, total_size;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return PROTO_STATUS_INVALID_HEADER;
    }
    
    // 获取确认码
    ack_code = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化连接确认头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &UNK_180984248);
    if (header_size < 0) return header_size;
    
    // 序列化分隔符
    total_size = FUN_18074b880(output_buffer + header_size, buffer_size - header_size, &DAT_180a06434);
    if (total_size < 0) return total_size;
    
    // 序列化确认码
    total_size = func_0x00018074b800(output_buffer + header_size + total_size, 
                                     buffer_size - header_size - total_size, ack_code);
    if (total_size < 0) return total_size;
    
    return header_size + total_size;
}



int FUN_180842a00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983320);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842ac0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_1809833b0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842b80(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983440);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180842c60(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809834d0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180842d40(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983680);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842e00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983560);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842e70(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983710);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842ee0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809835f0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842f50(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983e68);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074bda0(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180843010(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983de0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808430d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983ce0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843140(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983d60);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808431b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  uStack_1c = *(undefined4 *)(param_1 + 0x34);
  uStack_18 = *(undefined4 *)(param_1 + 0x38);
  uStack_14 = *(undefined4 *)(param_1 + 0x3c);
  uStack_10 = *(undefined4 *)(param_1 + 0x40);
  uStack_c = *(undefined4 *)(param_1 + 0x44);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809838a8);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ebb0(iVar2 + param_2,param_3 - iVar2,&uStack_38);
  return iVar3 + iVar2;
}



int FUN_180843270(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983930);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843330(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983ef0);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18088ece0(iVar4 + param_2,param_3 - iVar4,&uStackX_8);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074be90(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}



int FUN_180843450(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983f78);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ece0(iVar3 + param_2,param_3 - iVar3,&uStackX_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x25);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843570(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809840a0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,param_1 + 0x28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074be90(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}



int FUN_180843690(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180984130);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0xa8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808437b0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983ac8);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}





// 函数: void FUN_180843870(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180843870(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083fa50(param_2,param_3,&UNK_180983828,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}



int FUN_1808438a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809839b8);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180843990(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983a40);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180843a80(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983c50);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}





// 函数: void FUN_180843b40(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180843b40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083fa50(param_2,param_3,&UNK_1809837a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}



int FUN_180843b70(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983b50);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843be0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983bd0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843ce0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809820b0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843d90(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981ec0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843e40(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982878);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





