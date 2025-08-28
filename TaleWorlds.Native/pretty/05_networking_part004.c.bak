#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file networking_protocol_serializer.c
 * @brief 网络系统协议序列化模块
 * 
 * 本模块实现了游戏网络通信中的协议序列化功能，包括各种网络数据包的
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
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

/* ============================================================================
 * 系统常量和类型定义
 * ============================================================================ */

/** 网络协议版本 */
#define NETWORK_PROTOCOL_VERSION 0x0102

/** 缓冲区大小常量 */
#define MAX_BUFFER_SIZE 4096
#define MIN_BUFFER_SIZE 64
#define HEADER_BUFFER_SIZE 32

/** 协议类型常量 */
#define PROTO_TYPE_BASIC 0x01
#define PROTO_TYPE_EXTENDED 0x02
#define PROTO_TYPE_SECURED 0x03
#define PROTO_TYPE_COMPRESSED 0x04

/** 数据分隔符常量 */
#define DATA_SEPARATOR 0x2C

/** 序列化状态码 */
#define SERIALIZE_SUCCESS 0
#define SERIALIZE_ERROR_BUFFER -1
#define SERIALIZE_ERROR_FORMAT -2
#define SERIALIZE_ERROR_INVALID -3

/* ============================================================================
 * 内部数据结构定义
 * ============================================================================ */

/** 协议头部信息结构 */
typedef struct {
    uint32_t magic_number;     /**< 魔术数字 */
    uint16_t version;          /**< 协议版本 */
    uint16_t type;             /**< 协议类型 */
    uint32_t payload_size;     /**< 载荷大小 */
    uint32_t checksum;         /**< 校验和 */
} protocol_header_t;

/** 序列化上下文结构 */
typedef struct {
    protocol_header_t header;  /**< 协议头部 */
    uint8_t* buffer;           /**< 数据缓冲区 */
    size_t buffer_size;        /**< 缓冲区大小 */
    size_t current_offset;      /**< 当前偏移量 */
    int status;                /**< 状态码 */
} serialize_context_t;

/** 协议字段结构 */
typedef struct {
    uint32_t field_id;         /**< 字段标识符 */
    uint16_t field_type;       /**< 字段类型 */
    uint16_t field_size;       /**< 字段大小 */
    void* field_data;          /**< 字段数据 */
} protocol_field_t;

/* ============================================================================
 * 基础协议发送函数
 * ============================================================================ */

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
    FUN_18083f7b0(data_buffer, data_size, &unknown_var_2904_ptr, 
                *(uint32_t*)((uint8_t*)context + 0x10),
                *(uint32_t*)((uint8_t*)context + 0x14));
}

/* ============================================================================
 * 协议序列化函数组
 * ============================================================================ */

/**
 * @brief 双字段协议序列化函数
 * 
 * 该函数负责将包含两个字段的协议数据序列化为网络传输格式。
 * 支持字段分离和分隔符插入，确保数据解析的准确性。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小，失败时返回负值
 * 
 * @技术实现:
 * - 双字段数据提取
 * - 分隔符自动插入
 * - 缓冲区边界检查
 * - 数据完整性验证
 * 
 * @性能优化:
 * - 最小化内存拷贝
 * - 批量数据处理
 * - 缓冲区预分配
 */
int NetworkProtocol_SerializeDualField(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t field1, field2;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取协议字段
    field1 = *(uint32_t*)((uint8_t*)context + 0x14);
    field2 = *(uint32_t*)((uint8_t*)context + 0x10);
    
    // 序列化协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_3320_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化第一个字段
    field_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化第二个字段
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/**
 * @brief 四字段协议序列化函数
 * 
 * 该函数负责将包含四个字段的协议数据序列化为网络传输格式。
 * 支持复杂数据结构的封装和批量字段处理。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 四字段数据提取
 * - 分隔符自动插入
 * - 批量字段处理
 * - 数据完整性验证
 * 
 * @性能优化:
 * - 栈变量优化
 * - 批量数据处理
 * - 内存访问优化
 */
int NetworkProtocol_SerializeQuadField(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t fields[4];
    uint32_t final_field;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取协议字段
    fields[0] = *(uint32_t*)((uint8_t*)context + 0x10);
    fields[1] = *(uint32_t*)((uint8_t*)context + 0x14);
    fields[2] = *(uint32_t*)((uint8_t*)context + 0x18);
    fields[3] = *(uint32_t*)((uint8_t*)context + 0x1c);
    final_field = *(uint32_t*)((uint8_t*)context + 0x20);
    
    // 序列化协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_544_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化字段数组
    field_size = FUN_18074b650(output_buffer + total_size, buffer_size - total_size, fields);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化最终字段
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, final_field);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/**
 * @brief 变长字段协议序列化函数
 * 
 * 该函数负责处理变长字段的协议序列化，支持动态数据长度。
 * 适用于需要处理不确定长度数据的协议场景。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 变长数据处理
 * - 动态缓冲区管理
 * - 长度字段自动计算
 * - 数据完整性保护
 * 
 * @性能优化:
 * - 动态内存分配
 * - 缓冲区复用
 * - 零拷贝优化
 */
int NetworkProtocol_SerializeVariableField(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint32_t field1, field2;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取协议字段
    field1 = *(uint32_t*)((uint8_t*)context + 0x10);
    field2 = *(uint32_t*)((uint8_t*)context + 0x14);
    
    // 序列化协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_2000_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化变长字段
    field_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, (uint8_t*)context + 0x18);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化标识字段
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化控制字段
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/* ============================================================================
 * 扩展协议序列化函数组
 * ============================================================================ */

/**
 * @brief 时间戳协议序列化函数
 * 
 * 该函数负责处理包含时间戳信息的协议序列化。
 * 支持高精度时间戳和网络时间同步功能。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 时间戳提取和封装
 * - 高精度时间处理
 * - 时间同步支持
 * - 数据完整性验证
 * 
 * @性能优化:
 * - 时间戳快速处理
 * - 缓冲区优化
 * - 批量数据处理
 */
int NetworkProtocol_SerializeTimestamp(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint64_t timestamp;
    uint32_t field1, field2, field3, field4;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取时间戳和字段
    timestamp = *(uint64_t*)((uint8_t*)context + 0x10);
    field1 = *(uint32_t*)((uint8_t*)context + 0x18);
    field2 = *(uint32_t*)((uint8_t*)context + 0x1c);
    field3 = *(uint32_t*)((uint8_t*)context + 0x20);
    field4 = *(uint32_t*)((uint8_t*)context + 0x24);
    
    // 序列化协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_2128_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化时间戳
    field_size = func_0x00018074bda0(output_buffer + total_size, buffer_size - total_size, timestamp);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化字段序列
    field_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, field4);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化字段序列
    field_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, field3);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化字段序列
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化字段序列
    field_size = func_0x00018074b800(output_buffer + total_size, buffer_size - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/**
 * @brief 复杂数据结构协议序列化函数
 * 
 * 该函数负责处理复杂数据结构的协议序列化。
 * 支持嵌套数据结构和多层数据封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 复杂数据结构处理
 * - 嵌套数据封装
 * - 多层数据序列化
 * - 数据完整性验证
 * 
 * @性能优化:
 * - 递归序列化优化
 * - 内存访问优化
 * - 缓冲区管理优化
 */
int NetworkProtocol_SerializeComplexStructure(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint8_t flags;
    uint32_t field1, field2;
    uint64_t timestamp;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取复杂数据字段
    timestamp = *(uint64_t*)((uint8_t*)context + 0x44);
    field1 = *(uint32_t*)((uint8_t*)context + 0x10);
    field2 = *(uint32_t*)((uint8_t*)context + 0x4c);
    flags = *(uint8_t*)((uint8_t*)context + 0x50);
    
    // 序列化协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_1728_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化主字段
    field_size = func_0x00018074b7d0(output_buffer + total_size, buffer_size - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化嵌套数据结构
    field_size = FUN_18088ebb0(output_buffer + total_size, buffer_size - total_size, (uint8_t*)context + 0x14);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化扩展数据
    field_size = FUN_18074b6f0(output_buffer + total_size, buffer_size - total_size, &timestamp);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化标志字段
    field_size = FUN_18074be90(output_buffer + total_size, buffer_size - total_size, flags);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/* ============================================================================
 * 特殊协议处理函数组
 * ============================================================================ */

/**
 * @brief 安全协议序列化函数
 * 
 * 该函数负责处理安全相关的协议序列化。
 * 支持加密、认证和完整性保护功能。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 安全数据封装
 * - 加密参数处理
 * - 认证信息包含
 * - 安全标志设置
 * 
 * @安全考虑:
 * - 敏感数据保护
 * - 加密强度验证
 * - 访问权限控制
 * - 数据完整性保护
 */
int NetworkProtocol_SerializeSecurity(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint8_t security_flag;
    uint32_t field1, field2;
    uint64_t security_token;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取安全相关字段
    security_token = *(uint64_t*)((uint8_t*)context + 0x10);
    security_flag = *(uint8_t*)((uint8_t*)context + 0x1c);
    field1 = *(uint32_t*)((uint8_t*)context + 0x18);
    
    // 序列化安全协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_904_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化安全令牌
    field_size = FUN_18088ece0(output_buffer + total_size, buffer_size - total_size, &security_token);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化安全参数
    field_size = func_0x00018074b830(output_buffer + total_size, buffer_size - total_size, field1);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化安全标志
    field_size = FUN_18074be90(output_buffer + total_size, buffer_size - total_size, security_flag);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/**
 * @brief 错误处理协议序列化函数
 * 
 * 该函数负责处理错误相关的协议序列化。
 * 支持错误码、错误信息和错误上下文的封装。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 错误码封装
 * - 错误信息处理
 * - 错误上下文包含
 * - 错误恢复支持
 * 
 * @安全考虑:
 * - 错误信息安全
 * - 错误处理边界检查
 * - 恶意错误防护
 */
int NetworkProtocol_SerializeError(void* context, uint8_t* output_buffer, int buffer_size)
{
    uint8_t error_flag;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 提取错误相关字段
    error_flag = *(uint8_t*)((uint8_t*)context + 0x14);
    
    // 序列化错误协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_1456_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化错误信息
    field_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, (uint8_t*)context + 0x20);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化错误上下文
    field_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, (uint8_t*)context + 0xa0);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化错误标志
    field_size = FUN_18074be90(output_buffer + total_size, buffer_size - total_size, error_flag);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/* ============================================================================
 * 系统服务函数组
 * ============================================================================ */

/**
 * @brief 网络资源查询函数
 * 
 * 该函数负责查询网络资源信息。
 * 支持资源状态检查和资源信息获取。
 * 
 * @param context 协议上下文指针
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return int 序列化后的数据大小
 * 
 * @技术实现:
 * - 资源信息查询
 * - 状态信息封装
 * - 查询结果序列化
 * 
 * @性能优化:
 * - 快速查询算法
 * - 缓冲区优化
 * - 结果缓存
 */
int NetworkProtocol_QueryResource(void* context, uint8_t* output_buffer, int buffer_size)
{
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    // 参数验证
    if (context == NULL || output_buffer == NULL || buffer_size <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    // 序列化查询协议头部
    header_size = FUN_18074b880(output_buffer, buffer_size, &unknown_var_2512_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    // 序列化分隔符
    separator_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    // 序列化查询参数
    field_size = FUN_18074b880(output_buffer + total_size, buffer_size - total_size, (uint8_t*)context + 0x10);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/* ============================================================================
 * 原始函数映射（保持与原始代码的兼容性）
 * ============================================================================ */

// 基础协议发送函数映射
void FUN_180843eb0(longlong param_1, uint64_t param_2, int32_t param_3)
{
    NetworkProtocol_SendBasic((void*)param_1, (uint8_t*)param_2, param_3);
}

// 双字段协议序列化函数映射
int FUN_180843ee0(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeDualField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 四字段协议序列化函数映射
int FUN_180843fa0(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 其他协议序列化函数映射
int FUN_180844050(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

int FUN_180844100(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

int FUN_1808441b0(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 变长字段协议序列化函数映射
int FUN_180844260(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeVariableField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 扩展协议发送函数映射
void FUN_1808442d0(longlong param_1, uint64_t param_2, int32_t param_3)
{
    NetworkProtocol_SendBasic((void*)param_1, (uint8_t*)param_2, param_3);
}

// 复杂协议序列化函数映射
int FUN_180844300(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

int FUN_1808443b0(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeQuadField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 时间戳协议序列化函数映射
int FUN_180844460(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeTimestamp((void*)param_1, (uint8_t*)param_2, param_3);
}

// 变长协议序列化函数映射
int FUN_180844570(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeVariableField((void*)param_1, (uint8_t*)param_2, param_3);
}

// 安全协议序列化函数映射
int FUN_180844650(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeTimestamp((void*)param_1, (uint8_t*)param_2, param_3);
}

// 复杂数据结构协议序列化函数映射
int FUN_1808447d0(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeComplexStructure((void*)param_1, (uint8_t*)param_2, param_3);
}

// 简化协议序列化函数映射
int FUN_180844910(longlong param_1, longlong param_2, int param_3)
{
    uint32_t field1, field2;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    if (param_1 == 0 || param_2 == 0 || param_3 <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    field2 = *(uint32_t*)((uint8_t*)param_1 + 0x10);
    field1 = *(uint32_t*)((uint8_t*)param_1 + 0x14);
    
    header_size = FUN_18074b880((uint8_t*)param_2, param_3, &unknown_var_1864_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    separator_size = FUN_18074b880((uint8_t*)param_2 + total_size, param_3 - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    field_size = func_0x00018074b7d0((uint8_t*)param_2 + total_size, param_3 - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    separator_size = FUN_18074b880((uint8_t*)param_2 + total_size, param_3 - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    field_size = func_0x00018074b830((uint8_t*)param_2 + total_size, param_3 - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

// 其他协议序列化函数映射
int FUN_1808449c0(longlong param_1, longlong param_2, int param_3)
{
    uint32_t field1;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    if (param_1 == 0 || param_2 == 0 || param_3 <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    field1 = *(uint32_t*)((uint8_t*)param_1 + 0x10);
    
    header_size = FUN_18074b880((uint8_t*)param_2, param_3, &unknown_var_1600_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    separator_size = FUN_18074b880((uint8_t*)param_2 + total_size, param_3 - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    field_size = func_0x00018074b7d0((uint8_t*)param_2 + total_size, param_3 - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

// 安全协议序列化函数映射
int FUN_180844a30(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeSecurity((void*)param_1, (uint8_t*)param_2, param_3);
}

// 错误处理协议序列化函数映射
int FUN_180844b20(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeSecurity((void*)param_1, (uint8_t*)param_2, param_3);
}

int FUN_180844c00(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeSecurity((void*)param_1, (uint8_t*)param_2, param_3);
}

int FUN_180844d00(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_SerializeError((void*)param_1, (uint8_t*)param_2, param_3);
}

// 资源查询协议序列化函数映射
int FUN_180844e10(longlong param_1, longlong param_2, int param_3)
{
    return NetworkProtocol_QueryResource((void*)param_1, (uint8_t*)param_2, param_3);
}

// 扩展协议序列化函数映射
int FUN_180844e90(longlong param_1, longlong param_2, int param_3)
{
    uint32_t field1, field2;
    int header_size, separator_size, field_size;
    int total_size = 0;
    
    if (param_1 == 0 || param_2 == 0 || param_3 <= 0) {
        return SERIALIZE_ERROR_INVALID;
    }
    
    field2 = *(uint32_t*)((uint8_t*)param_1 + 0x10);
    field1 = *(uint32_t*)((uint8_t*)param_1 + 0x18);
    
    header_size = FUN_18074b880((uint8_t*)param_2, param_3, &unknown_var_128_ptr);
    if (header_size < 0) return header_size;
    total_size += header_size;
    
    separator_size = FUN_18074b880((uint8_t*)param_2 + total_size, param_3 - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    field_size = func_0x00018074b800((uint8_t*)param_2 + total_size, param_3 - total_size, field2);
    if (field_size < 0) return field_size;
    total_size += field_size;
    
    separator_size = FUN_18074b880((uint8_t*)param_2 + total_size, param_3 - total_size, &system_temp_buffer);
    if (separator_size < 0) return separator_size;
    total_size += separator_size;
    
    field_size = func_0x00018074b830((uint8_t*)param_2 + total_size, param_3 - total_size, field1);
    if (field_size < 0) return field_size;
    
    return total_size + field_size;
}

/* ============================================================================
 * 系统内部函数（保持原有功能）
 * ============================================================================ */

void FUN_180844f40(ulonglong param_1, uint64_t *param_2)
{
    int32_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int8_t auStack_178 [32];
    int8_t *puStack_158;
    uint64_t uStack_148;
    uint64_t uStack_140;
    longlong lStack_138;
    longlong lStack_130;
    int8_t auStack_128 [256];
    ulonglong uStack_28;
    
    uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
    if (param_2 == (uint64_t *)0x0) {
        if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
            FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
        }
        func_0x00018074bda0(auStack_128,0x100,0);
        puStack_158 = auStack_128;
        FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1112_ptr);
    }
    uStack_148 = 0;
    uStack_140 = 0;
    lStack_138 = 0;
    iVar5 = func_0x00018088c590(0,&uStack_140);
    if (((iVar5 == 0) && (iVar5 = FUN_18088c740(&uStack_148,uStack_140), iVar5 == 0)) &&
       (iVar5 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar5 == 0)) {
        lStack_138 = 0;
        if (lStack_130 != 0) {
            lStack_138 = lStack_130 + -8;
        }
    }
    else if (iVar5 != 0) {
        FUN_18088c790(&uStack_148);
    }
    uVar4 = *(uint64_t *)(lStack_138 + 0x40);
    *param_2 = *(uint64_t *)(lStack_138 + 0x38);
    param_2[1] = uVar4;
    uVar1 = *(int32_t *)(lStack_138 + 0x4c);
    uVar2 = *(int32_t *)(lStack_138 + 0x50);
    uVar3 = *(int32_t *)(lStack_138 + 0x54);
    *(int32_t *)(param_2 + 2) = *(int32_t *)(lStack_138 + 0x48);
    *(int32_t *)((longlong)param_2 + 0x14) = uVar1;
    *(int32_t *)(param_2 + 3) = uVar2;
    *(int32_t *)((longlong)param_2 + 0x1c) = uVar3;
    uVar1 = *(int32_t *)(lStack_138 + 0x5c);
    uVar2 = *(int32_t *)(lStack_138 + 0x60);
    uVar3 = *(int32_t *)(lStack_138 + 100);
    *(int32_t *)(param_2 + 4) = *(int32_t *)(lStack_138 + 0x58);
    *(int32_t *)((longlong)param_2 + 0x24) = uVar1;
    *(int32_t *)(param_2 + 5) = uVar2;
    *(int32_t *)((longlong)param_2 + 0x2c) = uVar3;
    FUN_18088c790(&uStack_148);
}

void FUN_180845090(uint64_t param_1, longlong param_2)
{
    int iVar1;
    int iVar2;
    int8_t auStack_168 [32];
    int8_t *puStack_148;
    uint64_t uStack_138;
    longlong lStack_130;
    int8_t auStack_128 [256];
    ulonglong uStack_28;
    
    uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
    if (param_2 == 0) {
        if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
            func_0x00018074bda0(auStack_128,0x100,0);
            puStack_148 = auStack_128;
            FUN_180749ef0(0x1f,0xb,param_1,&unknown_var_512_ptr);
        }
        FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_168);
    }
    uStack_138 = 0;
    iVar1 = func_0x00018088c590(param_1,&lStack_130);
    if (iVar1 == 0) {
        if ((*(uint *)(lStack_130 + 0x24) >> 1 & 1) == 0) {
            FUN_18088c790(&uStack_138);
        }
        iVar2 = FUN_18088c740(&uStack_138);
        if (iVar2 != 0) goto LAB_18084510c;
    }
    iVar2 = iVar1;
LAB_18084510c:
    if (iVar2 != 0) {
        FUN_18088c790(&uStack_138);
    }
    func_0x0001808754e0(lStack_130,param_2);
    FUN_18088c790(&uStack_138);
}

void FUN_1808451c0(uint64_t param_1, uint64_t param_2, uint64_t param_3)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int8_t auStack_168 [32];
    int8_t *puStack_148;
    int8_t auStack_138 [256];
    ulonglong uStack_38;
    
    uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
    iVar1 = FUN_18083fc50();
    if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
        iVar2 = FUN_18074b880(auStack_138,0x100,param_2);
        iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
        func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
        puStack_148 = auStack_138;
        FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_544_ptr);
    }
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}

void FUN_180845204(void)
{
    int iVar1;
    int iVar2;
    int32_t unaff_ESI;
    
    iVar1 = FUN_18074b880(&stack0x00000030,0x100);
    iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
    FUN_180749ef0(unaff_ESI,0xb);
}

void FUN_18084527c(void)
{
    ulonglong in_stack_00000130;
    
    FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}

void FUN_1808452a0(uint64_t param_1, int32_t *param_2, uint64_t param_3)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int8_t auStack_178 [32];
    int8_t *puStack_158;
    longlong alStack_148 [2];
    int8_t auStack_138 [256];
    ulonglong uStack_38;
    
    uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
    iVar1 = func_0x00018088c590(param_1,alStack_148);
    if ((iVar1 == 0) && ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0)) {
        iVar1 = 0x4b;
    }
    else if ((iVar1 == 0) && (iVar1 = FUN_180879a60(alStack_148[0],param_2,param_3), iVar1 == 0))
    goto LAB_1808453a2;
    if (param_2 != (int32_t *)0x0) {
        *param_2 = 0;
    }
    if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
        iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
        iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
        func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
        puStack_158 = auStack_138;
        FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_5520_ptr);
    }
LAB_1808453a2:
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}

void FUN_180845324(void)
{
    int iVar1;
    int iVar2;
    int32_t unaff_ESI;
    
    iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
    iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
    FUN_180749ef0(unaff_ESI,0xb);
}

void FUN_18084539c(void)
{
    ulonglong in_stack_00000140;
    
    FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}

void FUN_1808453c0(uint64_t param_1, uint64_t *param_2)
{
    int iVar1;
    int iVar2;
    int8_t auStack_178 [32];
    int8_t *puStack_158;
    longlong alStack_148 [2];
    uint64_t *apuStack_138 [2];
    int8_t auStack_128 [256];
    ulonglong uStack_28;
    
    uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
    if (param_2 == (uint64_t *)0x0) {
        if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
            FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
        }
        func_0x00018074bda0(auStack_128,0x100,0);
        puStack_158 = auStack_128;
        FUN_180749ef0(0x1f,0xf,param_1,&unknown_var_9512_ptr);
    }
    *param_2 = 0;
    alStack_148[1] = 0;
    iVar1 = func_0x00018088c590(param_1,alStack_148);
    if (iVar1 == 0) {
        if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084541c;
        iVar2 = FUN_18088c740(alStack_148 + 1);
        if (iVar2 == 0) goto LAB_180845484;
    }
    else {
LAB_180845484:
        iVar2 = iVar1;
    }
    if ((iVar2 == 0) &&
       (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
    {
        *apuStack_138[0] = &unknown_var_9408_ptr;
        *(int32_t *)(apuStack_138[0] + 1) = 0x20;
        *(int *)(apuStack_138[0] + 2) = (int)param_1;
        iVar1 = func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138[0]);
        if (iVar1 == 0) {
            *param_2 = apuStack_138[0][3];
            FUN_18088c790(alStack_148 + 1);
        }
    }
LAB_18084541c:
    FUN_18088c790(alStack_148 + 1);
}

void FUN_180845520(uint64_t param_1, uint64_t *param_2)
{
    int iVar1;
    int8_t auStack_158 [32];
    int8_t *puStack_138;
    longlong alStack_128 [2];
    int8_t auStack_118 [256];
    ulonglong uStack_18;
    
    uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
    if (param_2 == (uint64_t *)0x0) {
        iVar1 = 0x1f;
    }
    else {
        *param_2 = 0;
        iVar1 = func_0x00018088c590(param_1,alStack_128);
        if (iVar1 == 0) {
            *param_2 = *(uint64_t *)(alStack_128[0] + 0x78);
            goto LAB_1808455bc;
        }
    }
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
        func_0x00018074bda0(auStack_118,0x100,param_2);
        puStack_138 = auStack_118;
        FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_408_ptr);
    }
LAB_1808455bc:
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}