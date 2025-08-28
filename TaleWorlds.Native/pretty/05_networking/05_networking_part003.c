#include "TaleWorlds.Native.Split.h"

// 05_networking_part003.c - 网络消息序列化与反序列化函数模块
// 本模块包含26个网络相关的序列化与反序列化函数
// 主要功能：处理各种网络数据包的格式化、编码和解码

/**
 * 网络消息处理器基类结构体
 * 用于存储消息处理的相关参数和状态
 */
typedef struct {
    uint32_t message_type;        // 消息类型标识符
    uint32_t buffer_size;         // 缓冲区大小
    uint32_t data_offset;         // 数据偏移量
    uint32_t flags;              // 标志位
    void* context_ptr;           // 上下文指针
} NetworkMessageHandler;

/**
 * 网络数据缓冲区结构体
 * 用于管理网络数据的读写操作
 */
typedef struct {
    uint8_t* data_ptr;           // 数据指针
    uint32_t data_size;          // 数据大小
    uint32_t capacity;           // 缓冲区容量
    uint32_t read_pos;           // 读取位置
    uint32_t write_pos;          // 写入位置
} NetworkBuffer;

// 全局常量定义
static const uint8_t NETWORK_SEPARATOR[] = {0x00, 0x00, 0x00, 0x00};  // 网络数据分隔符
static const uint32_t DEFAULT_BUFFER_SIZE = 4096;                     // 默认缓冲区大小

/**
 * 基础网络消息发送函数
 * 发送简单的网络消息包
 * 
 * @param handler 消息处理器指针
 * @param buffer 数据缓冲区
 * @param size 数据大小
 */
void NetworkMessage_SendBasic(NetworkMessageHandler* handler, void* buffer, uint32_t size)
{
    // 调用底层网络发送函数
    FUN_18083f8f0(buffer, size, &unknown_var_5248_ptr, 
                  *(uint32_t*)((uint8_t*)handler + 0x10),
                  *(uint32_t*)((uint8_t*)handler + 0x18), 
                  *(uint32_t*)((uint8_t*)handler + 0x1c));
}

/**
 * 复合网络数据包序列化函数
 * 将多个数据字段序列化为一个网络数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeComplex(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3, field4;
    uint32_t field5, field6, field7;
    int total_size = 0;
    int written_size;
    
    // 从处理器结构中提取各个字段
    field1 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x20);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x24);
    field4 = *(uint32_t*)((uint8_t*)handler + 0x28);
    field5 = *(uint32_t*)((uint8_t*)handler + 0x2c);
    field6 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field7 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    // 逐步写入各个字段
    written_size = SystemDataProcessor(buffer, size, &unknown_var_5376_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field7);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field6);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074b650((uint8_t*)buffer + total_size, size - total_size, &field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field5);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型1
 * 处理包含单个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType1(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_3976_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型2
 * 处理包含单个字段的数据包（不同的头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_4232_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型3
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType3(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_4104_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 双字段数据包序列化函数
 * 处理包含两个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeDualField(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    uint64_t field2;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint64_t*)((uint8_t*)handler + 0x18);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_9512_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074bda0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型4
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType4(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_9256_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 网络消息发送函数类型1
 * 发送包含标志位的网络消息
 * 
 * @param handler 消息处理器指针
 * @param buffer 数据缓冲区
 * @param size 数据大小
 */
void NetworkMessage_SendWithFlag(NetworkMessageHandler* handler, void* buffer, uint32_t size)
{
    FUN_18083f9b0(buffer, size, &unknown_var_9880_ptr, 
                  *(uint32_t*)((uint8_t*)handler + 0x10),
                  *(uint8_t*)((uint8_t*)handler + 0x18));
}

/**
 * 网络消息发送函数类型2
 * 发送包含标志位的网络消息（不同的目标地址）
 * 
 * @param handler 消息处理器指针
 * @param buffer 数据缓冲区
 * @param size 数据大小
 */
void NetworkMessage_SendWithFlagAlt(NetworkMessageHandler* handler, void* buffer, uint32_t size)
{
    FUN_18083f9b0(buffer, size, &unknown_var_9760_ptr, 
                  *(uint32_t*)((uint8_t*)handler + 0x10),
                  *(uint8_t*)((uint8_t*)handler + 0x18));
}

/**
 * 双字段数据包序列化函数类型2
 * 处理包含两个字段的数据包（不同的头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeDualFieldType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_9640_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b830((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 双字段数据包序列化函数类型3
 * 处理包含两个字段的数据包（字段顺序相反）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeDualFieldType3(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_0_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型5
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType5(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_9384_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型1
 * 处理包含三个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType1(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_5504_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型2
 * 处理包含三个字段的数据包（不同的编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_5648_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 四字段数据包序列化函数类型1
 * 处理包含四个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeQuadFieldType1(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_5792_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 四字段数据包序列化函数类型2
 * 处理包含四个字段的数据包（不同的编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeQuadFieldType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_5936_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 双字段数据包序列化函数类型4
 * 处理包含两个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeDualFieldType4(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_6368_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型6
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType6(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_6080_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型7
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType7(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_6512_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型8
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType8(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_6224_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 双字段数据包序列化函数类型5
 * 处理包含两个字段的数据包（64位字段）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeDualFieldType5(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    uint64_t field2;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint64_t*)((uint8_t*)handler + 0x18);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8392_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074bda0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型3
 * 处理包含三个字段的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType3(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8256_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型9
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType9(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8000_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型10
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType10(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8128_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 复杂数据包序列化函数
 * 处理包含多个字段和复杂数据结构的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeComplexData(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    uint64_t field2, field3;
    uint32_t field4, field5, field6, field7, field8, field9;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint64_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint64_t*)((uint8_t*)handler + 0x20);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field4 = *(uint32_t*)((uint8_t*)handler + 0x28);
    field5 = *(uint32_t*)((uint8_t*)handler + 0x2c);
    field6 = *(uint32_t*)((uint8_t*)handler + 0x30);
    field7 = *(uint32_t*)((uint8_t*)handler + 0x34);
    field8 = *(uint32_t*)((uint8_t*)handler + 0x38);
    field9 = *(uint32_t*)((uint8_t*)handler + 0x3c);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_6920_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18088ebb0((uint8_t*)buffer + total_size, size - total_size, &field2);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型4
 * 处理包含三个字段的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType4(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7056_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 扩展数据包序列化函数
 * 处理包含扩展字段和标志位的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeExtended(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    uint8_t field3;
    uint64_t field4;
    int total_size = 0;
    int written_size;
    
    field4 = *(uint64_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint8_t*)((uint8_t*)handler + 0x24);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x20);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8528_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18088ece0((uint8_t*)buffer + total_size, size - total_size, &field4);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b830((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074be90((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    return total_size;
}

/**
 * 扩展数据包序列化函数类型2
 * 处理包含扩展字段和标志位的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeExtendedType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint8_t field1;
    uint32_t field2;
    uint64_t field3;
    int total_size = 0;
    int written_size;
    
    field3 = *(uint64_t*)((uint8_t*)handler + 0x18);
    field1 = *(uint8_t*)((uint8_t*)handler + 0x24);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8664_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18088ece0((uint8_t*)buffer + total_size, size - total_size, &field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, (uint8_t*)handler + 0x25);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074be90((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 扩展数据包序列化函数类型3
 * 处理包含扩展字段和标志位的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeExtendedType3(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    uint8_t field2;
    uint32_t field3;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint8_t*)((uint8_t*)handler + 0x1c);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_8960_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, (uint8_t*)handler + 0x28);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b830((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074be90((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    return total_size;
}

/**
 * 扩展数据包序列化函数类型4
 * 处理包含扩展字段和标志位的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeExtendedType4(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint8_t field1;
    uint32_t field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint8_t*)((uint8_t*)handler + 0x1c);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_9104_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, (uint8_t*)handler + 0x28);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, (uint8_t*)handler + 0xa8);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074be90((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型11
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType11(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint8_t field1;
    uint32_t field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint8_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7464_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074be90((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 网络消息发送函数类型3
 * 发送包含双字段的网络消息
 * 
 * @param handler 消息处理器指针
 * @param buffer 数据缓冲区
 * @param size 数据大小
 */
void NetworkMessage_SendDualField(NetworkMessageHandler* handler, void* buffer, uint32_t size)
{
    FUN_18083fa50(buffer, size, &unknown_var_6792_ptr, 
                  *(uint32_t*)((uint8_t*)handler + 0x10),
                  *(uint32_t*)((uint8_t*)handler + 0x18));
}

/**
 * 五字段数据包序列化函数
 * 处理包含五个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializePentaField(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7192_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b830((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 五字段数据包序列化函数类型2
 * 处理包含五个字段的数据包（不同的头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializePentaFieldType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3;
    int total_size = 0;
    int written_size;
    
    field2 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field1 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7328_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field3);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b830((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型5
 * 处理包含三个字段的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType5(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7856_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 网络消息发送函数类型4
 * 发送包含双字段的网络消息（不同的目标地址）
 * 
 * @param handler 消息处理器指针
 * @param buffer 数据缓冲区
 * @param size 数据大小
 */
void NetworkMessage_SendDualFieldAlt(NetworkMessageHandler* handler, void* buffer, uint32_t size)
{
    FUN_18083fa50(buffer, size, &unknown_var_6656_ptr, 
                  *(uint32_t*)((uint8_t*)handler + 0x10),
                  *(uint32_t*)((uint8_t*)handler + 0x18));
}

/**
 * 简单数据包序列化函数类型12
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType12(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7600_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 三字段数据包序列化函数类型6
 * 处理包含三个字段的数据包（另一种编码方式）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeTripleFieldType6(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_7728_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field2);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}

/**
 * 多字段数据包序列化函数
 * 处理包含多个字段的数据包
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeMultiField(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3, field4;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x14);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field4 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_784_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074b650((uint8_t*)buffer + total_size, size - total_size, &field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field4);
    total_size += written_size;
    
    return total_size;
}

/**
 * 多字段数据包序列化函数类型2
 * 处理包含多个字段的数据包（不同的头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeMultiFieldType2(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1, field2, field3, field4;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    field2 = *(uint32_t*)((uint8_t*)handler + 0x14);
    field3 = *(uint32_t*)((uint8_t*)handler + 0x18);
    field4 = *(uint32_t*)((uint8_t*)handler + 0x1c);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_288_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = FUN_18074b650((uint8_t*)buffer + total_size, size - total_size, &field1);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b800((uint8_t*)buffer + total_size, size - total_size, field4);
    total_size += written_size;
    
    return total_size;
}

/**
 * 简单数据包序列化函数类型13
 * 处理包含单个字段的数据包（另一种头部标识）
 * 
 * @param handler 消息处理器指针
 * @param buffer 目标缓冲区
 * @param size 缓冲区大小
 * @return 实际写入的字节数
 */
int NetworkMessage_SerializeSimpleType13(NetworkMessageHandler* handler, void* buffer, int size)
{
    uint32_t field1;
    int total_size = 0;
    int written_size;
    
    field1 = *(uint32_t*)((uint8_t*)handler + 0x10);
    
    written_size = SystemDataProcessor(buffer, size, &unknown_var_2776_ptr);
    total_size += written_size;
    
    written_size = SystemDataProcessor((uint8_t*)buffer + total_size, size - total_size, NETWORK_SEPARATOR);
    total_size += written_size;
    
    written_size = func_0x00018074b7d0((uint8_t*)buffer + total_size, size - total_size, field1);
    total_size += written_size;
    
    return total_size;
}