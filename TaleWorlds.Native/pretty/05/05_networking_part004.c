#include "TaleWorlds.Native.Split.h"

/**
 * 05_networking_part004.c - 网络消息序列化与反序列化函数模块
 * 
 * 本文件包含26个函数，主要用于网络消息的序列化、反序列化和数据包处理。
 * 功能涵盖基础网络消息发送、复合数据包序列化、简单数据包处理、双字段数据包处理、扩展数据包处理等。
 */

// 常量定义
#define NETWORK_SEPARATOR &DAT_180a06434  // 网络数据分隔符
#define NETWORK_BUFFER_SIZE 0x100         // 网络缓冲区大小

// 函数别名定义
#define send_network_message_base FUN_18083f7b0
#define write_network_data FUN_18074b880
#define process_network_packet_4field func_0x00018074b7d0
#define process_network_packet_single func_0x00018074b800
#define process_network_packet_2field func_0x00018074b650
#define process_network_packet_8field func_0x00018088ecd0
#define process_network_packet_complex func_0x00018074bda0
#define process_network_packet_3field func_0x00018074b830
#define process_network_packet_byte func_0x00018074be90
#define process_network_data_block FUN_18088ebb0
#define process_network_address_block FUN_18088ece0
#define initialize_network_connection FUN_18088c590
#define cleanup_network_connection FUN_18088c790
#define validate_network_handle FUN_18088c740
#define serialize_network_data FUN_180879a60
#define get_network_property FUN_18088dec0
#define set_network_property FUN_18088e0d0
#define log_network_error FUN_180749ef0
#define trigger_network_assertion FUN_1808fc050
#define get_network_error_code FUN_18083fc50
#define process_network_request FUN_1808754e0

// 全局变量定义
#define NETWORK_MESSAGE_TYPE_01 &UNK_1809828f8   // 网络消息类型01
#define NETWORK_MESSAGE_TYPE_02 &UNK_180982a98   // 网络消息类型02
#define NETWORK_MESSAGE_TYPE_03 &UNK_180981fc0   // 网络消息类型03
#define NETWORK_MESSAGE_TYPE_04 &UNK_180981dc0   // 网络消息类型04
#define NETWORK_MESSAGE_TYPE_05 &UNK_180981f40   // 网络消息类型05
#define NETWORK_MESSAGE_TYPE_06 &UNK_180981d40   // 网络消息类型06
#define NETWORK_MESSAGE_TYPE_07 &UNK_180982978   // 网络消息类型07
#define NETWORK_MESSAGE_TYPE_08 &UNK_180982a08   // 网络消息类型08
#define NETWORK_MESSAGE_TYPE_09 &UNK_180982038   // 网络消息类型09
#define NETWORK_MESSAGE_TYPE_10 &UNK_180981e40   // 网络消息类型10
#define NETWORK_MESSAGE_TYPE_11 &UNK_180982670   // 网络消息类型11
#define NETWORK_MESSAGE_TYPE_12 &UNK_180982570   // 网络消息类型12
#define NETWORK_MESSAGE_TYPE_13 &UNK_1809825f0   // 网络消息类型13
#define NETWORK_MESSAGE_TYPE_14 &UNK_180982460   // 网络消息类型14
#define NETWORK_MESSAGE_TYPE_15 &UNK_1809824e8   // 网络消息类型15
#define NETWORK_MESSAGE_TYPE_16 &UNK_1809823e0   // 网络消息类型16
#define NETWORK_MESSAGE_TYPE_17 &UNK_180982128   // 网络消息类型17
#define NETWORK_MESSAGE_TYPE_18 &UNK_1809821b0   // 网络消息类型18
#define NETWORK_MESSAGE_TYPE_19 &UNK_1809822c8   // 网络消息类型19
#define NETWORK_MESSAGE_TYPE_20 &UNK_180982350   // 网络消息类型20
#define NETWORK_MESSAGE_TYPE_21 &UNK_180982770   // 网络消息类型21
#define NETWORK_MESSAGE_TYPE_22 &UNK_180984530   // 网络消息类型22
#define NETWORK_MESSAGE_TYPE_23 &UNK_180984908   // 网络消息类型23
#define NETWORK_MESSAGE_TYPE_24 &UNK_1809846b0   // 网络消息类型24
#define NETWORK_MESSAGE_TYPE_25 &UNK_180981fc0   // 网络消息类型25
#define NETWORK_MESSAGE_TYPE_26 &UNK_180957410   // 网络消息类型26
#define NETWORK_MESSAGE_TYPE_27 &UNK_1809842c8   // 网络消息类型27
#define NETWORK_MESSAGE_TYPE_28 &UNK_180984648   // 网络消息类型28
#define NETWORK_MESSAGE_TYPE_29 &UNK_180984260   // 网络消息类型29

// 安全栈保护变量
#define STACK_PROTECTOR _DAT_180bf00a8
#define ERROR_FLAG_ADDRESS _DAT_180be12f0

/**
 * 发送基础网络消息
 * @param network_context 网络上下文指针
 * @param target_address 目标地址
 * @param message_data 消息数据
 */
void send_basic_network_message(longlong network_context, undefined8 target_address, undefined4 message_data)
{
    uint32_t field_1 = *(uint32_t *)(network_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(network_context + 0x14);
    
    send_network_message_base(target_address, message_data, NETWORK_MESSAGE_TYPE_01, field_1, field_2);
}

/**
 * 序列化双字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_dual_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x10);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_02);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_2);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化五字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_03);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化五字段网络数据包（类型04）
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet_type04(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_04);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化五字段网络数据包（类型05）
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet_type05(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_05);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化五字段网络数据包（类型06）
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet_type06(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_06);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化双字段简化网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_simplified_dual_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_07);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入字段数据
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 发送类型08网络消息
 * @param network_context 网络上下文指针
 * @param target_address 目标地址
 * @param message_data 消息数据
 */
void send_network_message_type08(longlong network_context, undefined8 target_address, undefined4 message_data)
{
    uint32_t field_1 = *(uint32_t *)(network_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(network_context + 0x14);
    
    send_network_message_base(target_address, message_data, NETWORK_MESSAGE_TYPE_08, field_1, field_2);
}

/**
 * 序列化五字段网络数据包（类型09）
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet_type09(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_09);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化五字段网络数据包（类型10）
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_five_field_packet_type10(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x20);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_10);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_2field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入最后一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_5);
    
    return written_size + chunk_size;
}

/**
 * 序列化扩展八字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_extended_eight_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint64_t field_1 = *(uint64_t *)(packet_context + 0x10);
    uint64_t field_2 = *(uint64_t *)(packet_context + 0x18);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x4c);
    uint64_t field_4 = *(uint64_t *)(packet_context + 0x20);
    uint64_t field_5 = *(uint64_t *)(packet_context + 0x28);
    uint32_t field_6 = *(uint32_t *)(packet_context + 0x48);
    uint32_t field_7 = *(uint32_t *)(packet_context + 0x30);
    uint32_t field_8 = *(uint32_t *)(packet_context + 0x34);
    uint32_t field_9 = *(uint32_t *)(packet_context + 0x38);
    uint32_t field_10 = *(uint32_t *)(packet_context + 0x3c);
    uint64_t field_11 = *(uint64_t *)(packet_context + 0x40);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_11);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个8字节字段
    chunk_size = process_network_packet_8field(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第六个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_6);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第三个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_3);
    
    return written_size + chunk_size;
}

/**
 * 序列化四字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_four_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_12);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第三个字段（动态地址）
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0x18);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_2);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化复杂多字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_complex_multi_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x24);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x20);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x1c);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x18);
    uint64_t field_5 = *(uint64_t *)(packet_context + 0x10);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_13);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第五个字段（8字节）
    chunk_size = process_network_packet_complex(written_size + buffer, buffer_size - written_size, field_5);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第四个字段
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_4);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第三个字段
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_3);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_2);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化扩展复杂网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_extended_complex_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint64_t field_1 = *(uint64_t *)(packet_context + 0x44);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x24);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x28);
    uint32_t field_4 = *(uint32_t *)(packet_context + 0x2c);
    uint32_t field_5 = *(uint32_t *)(packet_context + 0x30);
    uint32_t field_6 = *(uint32_t *)(packet_context + 0x4c);
    uint8_t field_7 = *(uint8_t *)(packet_context + 0x50);
    uint32_t field_8 = *(uint32_t *)(packet_context + 0x10);
    uint64_t field_9 = *(uint64_t *)(packet_context + 0x14);
    uint64_t field_10 = *(uint64_t *)(packet_context + 0x1c);
    uint32_t field_11 = *(uint32_t *)(packet_context + 0x34);
    uint32_t field_12 = *(uint32_t *)(packet_context + 0x38);
    uint32_t field_13 = *(uint32_t *)(packet_context + 0x3c);
    uint32_t field_14 = *(uint32_t *)(packet_context + 0x40);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_14);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第八个字段
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_8);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第九个字段（8字节）
    chunk_size = process_network_data_block(written_size + buffer, buffer_size - written_size, &field_9);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段（8字节）
    chunk_size = process_network_address_block(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第七个字段（字节）
    chunk_size = process_network_packet_byte(written_size + buffer, buffer_size - written_size, field_7);
    
    return written_size + chunk_size;
}

/**
 * 序列化双字段三字节网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_dual_field_triple_byte_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x14);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_15);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段（三字节处理）
    chunk_size = process_network_packet_3field(written_size + buffer, buffer_size - written_size, field_2);
    
    return written_size + chunk_size;
}

/**
 * 序列化单字段简化网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_single_field_simplified_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_16);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入字段数据
    chunk_size = process_network_packet_4field(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化地址字节网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_address_byte_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint64_t field_1 = *(uint64_t *)(packet_context + 0x10);
    uint8_t field_2 = *(uint8_t *)(packet_context + 0x1c);
    uint32_t field_3 = *(uint32_t *)(packet_context + 0x18);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_17);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段（8字节地址）
    chunk_size = process_network_address_block(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第三个字段
    chunk_size = process_network_packet_3field(written_size + buffer, buffer_size - written_size, field_3);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段（字节）
    chunk_size = process_network_packet_byte(written_size + buffer, buffer_size - written_size, field_2);
    
    return written_size + chunk_size;
}

/**
 * 序列化动态地址字节网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_dynamic_address_byte_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint64_t field_1 = *(uint64_t *)(packet_context + 0x10);
    uint8_t field_2 = *(uint8_t *)(packet_context + 0x1c);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_18);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段（8字节地址）
    chunk_size = process_network_address_block(written_size + buffer, buffer_size - written_size, &field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入动态地址字段
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0x1d);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段（字节）
    chunk_size = process_network_packet_byte(written_size + buffer, buffer_size - written_size, field_2);
    
    return written_size + chunk_size;
}

/**
 * 序列化双字节网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_dual_byte_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint8_t field_1 = *(uint8_t *)(packet_context + 0x14);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x10);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_19);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入动态地址字段
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0x20);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段
    chunk_size = process_network_packet_3field(written_size + buffer, buffer_size - written_size, field_2);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段（字节）
    chunk_size = process_network_packet_byte(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化单字节多字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_single_byte_multi_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint8_t field_1 = *(uint8_t *)(packet_context + 0x14);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_20);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入动态地址字段
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0x20);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入另一个动态地址字段
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0xa0);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段（字节）
    chunk_size = process_network_packet_byte(written_size + buffer, buffer_size - written_size, field_1);
    
    return written_size + chunk_size;
}

/**
 * 序列化简化单字段网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_simplified_single_field_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_21);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入动态地址字段
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, packet_context + 0x10);
    
    return written_size + chunk_size;
}

/**
 * 序列化双字段最终网络数据包
 * @param packet_context 数据包上下文
 * @param buffer 目标缓冲区
 * @param buffer_size 缓冲区大小
 * @return 序列化的数据大小
 */
int serialize_dual_field_final_packet(longlong packet_context, longlong buffer, int buffer_size)
{
    uint32_t field_1 = *(uint32_t *)(packet_context + 0x10);
    uint32_t field_2 = *(uint32_t *)(packet_context + 0x18);
    int written_size;
    int chunk_size;
    
    // 写入消息头
    written_size = write_network_data(buffer, buffer_size, NETWORK_MESSAGE_TYPE_22);
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第一个字段
    chunk_size = process_network_packet_single(written_size + buffer, buffer_size - written_size, field_1);
    written_size += chunk_size;
    
    // 写入分隔符
    chunk_size = write_network_data(written_size + buffer, buffer_size - written_size, NETWORK_SEPARATOR);
    written_size += chunk_size;
    
    // 写入第二个字段（三字节处理）
    chunk_size = process_network_packet_3field(written_size + buffer, buffer_size - written_size, field_2);
    
    return written_size + chunk_size;
}

/**
 * 反序列化网络数据包信息
 * @param packet_id 数据包标识符
 * @param output_buffer 输出缓冲区
 */
void deserialize_network_packet_info(ulonglong packet_id, undefined8 *output_buffer)
{
    uint32_t field_1, field_2, field_3;
    uint64_t field_4;
    int result;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    undefined8 connection_handle;
    undefined8 connection_info;
    longlong connection_data;
    longlong data_offset;
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    
    // 参数验证
    if (output_buffer == (undefined8 *)0x0) {
        if ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) == 0) {
            // 触发网络断言失败
            trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
        }
        process_network_packet_complex(temp_buffer, NETWORK_BUFFER_SIZE, 0);
        buffer_ptr = temp_buffer;
        // 记录网络错误
        log_network_error(0x1f, 0xd, packet_id, NETWORK_MESSAGE_TYPE_23);
    }
    
    // 初始化连接句柄
    connection_handle = 0;
    connection_info = 0;
    connection_data = 0;
    result = initialize_network_connection(0, &connection_info);
    
    // 验证连接状态
    if (((result == 0) && (result = validate_network_handle(&connection_handle, connection_info), result == 0)) &&
        (result = initialize_network_connection(packet_id & 0xffffffff, &data_offset), result == 0)) {
        connection_data = 0;
        if (data_offset != 0) {
            connection_data = data_offset + -8;
        }
    }
    else if (result != 0) {
        // 清理连接资源
        cleanup_network_connection(&connection_handle);
    }
    
    // 提取数据包信息
    field_4 = *(uint64_t *)(connection_data + 0x40);
    *output_buffer = *(uint64_t *)(connection_data + 0x38);
    output_buffer[1] = field_4;
    field_1 = *(uint32_t *)(connection_data + 0x4c);
    field_2 = *(uint32_t *)(connection_data + 0x50);
    field_3 = *(uint32_t *)(connection_data + 0x54);
    *(uint32_t *)(output_buffer + 2) = *(uint32_t *)(connection_data + 0x48);
    *(uint32_t *)((longlong)output_buffer + 0x14) = field_1;
    *(uint32_t *)(output_buffer + 3) = field_2;
    *(uint32_t *)((longlong)output_buffer + 0x1c) = field_3;
    field_1 = *(uint32_t *)(connection_data + 0x5c);
    field_2 = *(uint32_t *)(connection_data + 0x60);
    field_3 = *(uint32_t *)(connection_data + 100);
    *(uint32_t *)(output_buffer + 4) = *(uint32_t *)(connection_data + 0x58);
    *(uint32_t *)((longlong)output_buffer + 0x24) = field_1;
    *(uint32_t *)(output_buffer + 5) = field_2;
    *(uint32_t *)((longlong)output_buffer + 0x2c) = field_3;
    
    // 清理连接资源
    cleanup_network_connection(&connection_handle);
}

/**
 * 处理网络请求
 * @param request_id 请求标识符
 * @param request_data 请求数据
 */
void process_network_request(ulonglong request_id, longlong request_data)
{
    int result;
    int error_code;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    undefined8 connection_handle;
    longlong connection_info;
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    
    // 参数验证
    if (request_data == 0) {
        if ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) != 0) {
            process_network_packet_complex(temp_buffer, NETWORK_BUFFER_SIZE, 0);
            buffer_ptr = temp_buffer;
            // 记录网络错误
            log_network_error(0x1f, 0xb, request_id, NETWORK_MESSAGE_TYPE_24);
        }
        // 触发网络断言失败
        trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
    }
    
    // 初始化连接
    connection_handle = 0;
    result = initialize_network_connection(request_id, &connection_info);
    if (result == 0) {
        if ((*(uint *)(connection_info + 0x24) >> 1 & 1) == 0) {
            // 清理连接资源
            cleanup_network_connection(&connection_handle);
        }
        error_code = validate_network_handle(&connection_handle);
        if (error_code != 0) goto cleanup_handler;
    }
    error_code = result;
cleanup_handler:
    if (error_code != 0) {
        // 清理连接资源
        cleanup_network_connection(&connection_handle);
    }
    
    // 处理网络请求
    process_network_request(connection_info, request_data);
    
    // 清理连接资源
    cleanup_network_connection(&connection_handle);
}

/**
 * 发送三参数网络消息
 * @param message_id 消息标识符
 * @param param_1 参数1
 * @param param_2 参数2
 */
void send_triple_param_network_message(undefined8 message_id, undefined8 param_1, undefined8 param_2)
{
    int result;
    int error_code;
    int chunk_size;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    result = get_network_error_code();
    
    // 错误处理和日志记录
    if ((result != 0) && ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) != 0)) {
        error_code = write_network_data(temp_buffer, NETWORK_BUFFER_SIZE, param_1);
        chunk_size = write_network_data(temp_buffer + error_code, NETWORK_BUFFER_SIZE - error_code, NETWORK_SEPARATOR);
        process_network_packet_complex(temp_buffer + (error_code + chunk_size), NETWORK_BUFFER_SIZE - (error_code + chunk_size), param_2);
        buffer_ptr = temp_buffer;
        // 记录网络错误
        log_network_error(result, 0xb, message_id, NETWORK_MESSAGE_TYPE_25);
    }
    
    // 触发网络断言失败
    trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
}

/**
 * 发送基础网络错误消息
 */
void send_basic_network_error_message(void)
{
    int result;
    int error_code;
    undefined4 unaff_ESI;
    
    result = write_network_data(&stack0x00000030, NETWORK_BUFFER_SIZE);
    error_code = write_network_data(&stack0x00000030 + result, NETWORK_BUFFER_SIZE - result, NETWORK_SEPARATOR);
    process_network_packet_complex(&stack0x00000030 + (result + error_code), NETWORK_BUFFER_SIZE - (result + error_code));
    // 记录网络错误
    log_network_error(unaff_ESI, 0xb);
}

/**
 * 触发网络错误断言
 */
void trigger_network_error_assertion(void)
{
    ulonglong stack_param;
    
    // 触发网络断言失败
    trigger_network_assertion(stack_param ^ (ulonglong)&stack0x00000000);
}

/**
 * 设置网络属性
 * @param target_id 目标标识符
 * @param property_ptr 属性指针
 * @param property_value 属性值
 */
void set_network_property_value(undefined8 target_id, undefined4 *property_ptr, undefined8 property_value)
{
    int result;
    int error_code;
    int chunk_size;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    longlong connection_data[2];
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    result = initialize_network_connection(target_id, connection_data);
    
    // 验证连接状态和属性设置
    if ((result == 0) && ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0)) {
        result = 0x4b;
    }
    else if ((result == 0) && (result = serialize_network_data(connection_data[0], property_ptr, property_value), result == 0)) {
        goto set_property_success;
    }
    
    // 属性设置失败处理
    if (property_ptr != (undefined4 *)0x0) {
        *property_ptr = 0;
    }
    
    // 错误日志记录
    if ((result != 0) && ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) != 0)) {
        error_code = process_network_packet_complex(temp_buffer, NETWORK_BUFFER_SIZE, property_ptr);
        chunk_size = write_network_data(temp_buffer + error_code, NETWORK_BUFFER_SIZE - error_code, NETWORK_SEPARATOR);
        process_network_packet_complex(temp_buffer + (error_code + chunk_size), NETWORK_BUFFER_SIZE - (error_code + chunk_size), property_value);
        buffer_ptr = temp_buffer;
        // 记录网络错误
        log_network_error(result, 0xb, target_id, NETWORK_MESSAGE_TYPE_26);
    }
set_property_success:
    // 触发网络断言失败
    trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
}

/**
 * 发送扩展网络错误消息
 */
void send_extended_network_error_message(void)
{
    int result;
    int error_code;
    undefined4 unaff_ESI;
    
    result = process_network_packet_complex(&stack0x00000040, NETWORK_BUFFER_SIZE);
    error_code = write_network_data(&stack0x00000040 + result, NETWORK_BUFFER_SIZE - result, NETWORK_SEPARATOR);
    process_network_packet_complex(&stack0x00000040 + (result + error_code), NETWORK_BUFFER_SIZE - (result + error_code));
    // 记录网络错误
    log_network_error(unaff_ESI, 0xb);
}

/**
 * 触发扩展网络错误断言
 */
void trigger_extended_network_error_assertion(void)
{
    ulonglong stack_param;
    
    // 触发网络断言失败
    trigger_network_assertion(stack_param ^ (ulonglong)&stack0x00000000);
}

/**
 * 获取网络扩展属性
 * @param target_id 目标标识符
 * @param output_buffer 输出缓冲区
 */
void get_network_extended_property(undefined8 target_id, undefined8 *output_buffer)
{
    int result;
    int error_code;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    longlong connection_data[2];
    undefined8 *property_buffers[2];
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    
    // 参数验证
    if (output_buffer == (undefined8 *)0x0) {
        if ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) == 0) {
            // 触发网络断言失败
            trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
        }
        process_network_packet_complex(temp_buffer, NETWORK_BUFFER_SIZE, 0);
        buffer_ptr = temp_buffer;
        // 记录网络错误
        log_network_error(0x1f, 0xf, target_id, NETWORK_MESSAGE_TYPE_27);
    }
    
    // 初始化输出缓冲区
    *output_buffer = 0;
    connection_data[1] = 0;
    result = initialize_network_connection(target_id, connection_data);
    
    // 验证连接状态
    if (result == 0) {
        if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) goto extract_property;
        error_code = validate_network_handle(connection_data + 1);
        if (error_code == 0) goto process_property;
    }
    else {
process_property:
        error_code = result;
    }
    
    // 获取网络属性
    if ((error_code == 0) &&
        (result = get_network_property(*(uint64_t *)(connection_data[0] + 0x98), property_buffers, 0x20), result == 0)) {
        *property_buffers[0] = &NETWORK_MESSAGE_TYPE_29;
        *(uint32_t *)(property_buffers[0] + 1) = 0x20;
        *(int *)(property_buffers[0] + 2) = (int)target_id;
        result = set_network_property(*(uint64_t *)(connection_data[0] + 0x98), property_buffers[0]);
        if (result == 0) {
            *output_buffer = property_buffers[0][3];
            // 清理连接资源
            cleanup_network_connection(connection_data + 1);
        }
    }
extract_property:
    // 清理连接资源
    cleanup_network_connection(connection_data + 1);
}

/**
 * 获取网络基础属性
 * @param target_id 目标标识符
 * @param output_buffer 输出缓冲区
 */
void get_network_basic_property(undefined8 target_id, undefined8 *output_buffer)
{
    int result;
    undefined1 local_buffer[32];
    undefined1 *buffer_ptr;
    longlong connection_data[2];
    undefined1 temp_buffer[256];
    ulonglong stack_protector;
    
    // 栈保护初始化
    stack_protector = STACK_PROTECTOR ^ (ulonglong)local_buffer;
    
    // 参数验证
    if (output_buffer == (undefined8 *)0x0) {
        result = 0x1f;
    }
    else {
        *output_buffer = 0;
        result = initialize_network_connection(target_id, connection_data);
        if (result == 0) {
            *output_buffer = *(uint64_t *)(connection_data[0] + 0x78);
            goto cleanup_connection;
        }
    }
    
    // 错误日志记录
    if ((*(byte *)(ERROR_FLAG_ADDRESS + 0x10) & 0x80) != 0) {
        process_network_packet_complex(temp_buffer, NETWORK_BUFFER_SIZE, output_buffer);
        buffer_ptr = temp_buffer;
        // 记录网络错误
        log_network_error(result, 0xb, target_id, NETWORK_MESSAGE_TYPE_28);
    }
cleanup_connection:
    // 触发网络断言失败
    trigger_network_assertion(stack_protector ^ (ulonglong)local_buffer);
}