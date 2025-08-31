#include "TaleWorlds.Native.Split.h"

/* 05_networking.c - 网络系统核心实现 */
/* 包含网络连接、数据传输、协议处理等核心功能 */

#define NETWORK_OFFSET_STANDARD_C NETWORK_OFFSET_STANDARD  // 标准偏移量C
#define NETWORK_OFFSET_STANDARD_B 0xb  // 标准偏移量B
#define NETWORK_OFFSET_STANDARD_D 0xd  // 标准偏移量D
#define NETWORK_OFFSET_EXTENDED_B0 NETWORK_OFFSET_EXTENDED_INFO  // 扩展偏移量B0
#define NETWORK_OFFSET_EXTENDED_C0 NETWORK_OFFSET_PROTOCOL_DATA  // 扩展偏移量C0
#define NETWORK_POINTER_NULL NETWORK_VALUE_ZERO  // 空指针
#define NETWORK_SIZE_SMALL_PACKET 0x18  // 标准大小16字节
#define NETWORK_SIZE_MEDIUM_PACKET 0x14  // 标准大小32字节
#define NETWORK_SIZE_LARGE_PACKET 0x10  // 标准大小64字节
#define NETWORK_SIZE_HUGE_PACKET NETWORK_FLAG_CONNECTION_ACTIVE  // 标准大小128字节
#define NETWORK_SIZE_EXTRA_LARGE_PACKET NETWORK_SIZE_SMALL_PACKET0  // 标准大小256字节
#define NETWORK_SIZE_MASSIVE_PACKET NETWORK_SIZE_STANDARD_BUFFER0  // 标准大小512字节
#define NETWORK_SIZE_GIGANTIC_PACKET NETWORK_SIZE_LARGE_BUFFER0  // 标准大小1024字节
#define NETWORK_SIZE_COLOSSAL_PACKET NETWORK_FLAG_CONNECTION_ACTIVE0  // 标准大小2048字节
#define NETWORK_SIZE_TITANIC_PACKET NETWORK_SIZE_SMALL_PACKET00  // 标准大小4096字节
#define LAB_NETWORK_CONNECTION_VALIDATION_START LAB_NETWORK_CONNECTION_VALIDATION_START
#define LAB_NETWORK_CONNECTION_TIMEOUT_CHECK LAB_NETWORK_CONNECTION_TIMEOUT_CHECK
#define LAB_NETWORK_SOCKET_CONFIG_VALIDATION LAB_NETWORK_SOCKET_CONFIG_VALIDATION
#define LAB_NETWORK_CONNECTION_ESTABLISHED LAB_NETWORK_CONNECTION_ESTABLISHED
#define LAB_NETWORK_CONNECTION_FAILED LAB_NETWORK_CONNECTION_FAILED
#define LAB_NETWORK_DATA_TRANSFER_START LAB_NETWORK_DATA_TRANSFER_START
#define LAB_NETWORK_DATA_TRANSFER_COMPLETE LAB_NETWORK_DATA_TRANSFER_COMPLETE
#define LAB_NETWORK_CONNECTION_CLOSE_START LAB_NETWORK_CONNECTION_CLOSE_START
#define LAB_NETWORK_CONNECTION_CLOSE_END LAB_NETWORK_CONNECTION_CLOSE_END
#define LAB_NETWORK_CONNECTION_RETRY_START LAB_NETWORK_CONNECTION_RETRY_START
#define LAB_NETWORK_CONNECTION_RETRY_END LAB_NETWORK_CONNECTION_RETRY_END
#define LAB_NETWORK_ERROR_HANDLER_START LAB_NETWORK_ERROR_HANDLER_START
#define LAB_NETWORK_CONFIG_VALIDATION_START LAB_NETWORK_CONFIG_VALIDATION_START
#define LAB_NETWORK_SOCKET_INIT_START LAB_NETWORK_SOCKET_INIT_START
#define LAB_NETWORK_DATA_PROCESS_START LAB_NETWORK_DATA_PROCESS_START
#define LAB_NETWORK_CONNECTION_STATUS_CHECK LAB_NETWORK_CONNECTION_STATUS_CHECK
#define LAB_NETWORK_CONNECTION_STATUS_RESULT LAB_NETWORK_CONNECTION_STATUS_RESULT
#define LAB_NETWORK_ERROR_HANDLING_START LAB_NETWORK_ERROR_HANDLING_START
#define LAB_NETWORK_CLEANUP_START LAB_NETWORK_CLEANUP_START
#define LAB_NETWORK_CLEANUP_END LAB_NETWORK_CLEANUP_END
#define LAB_NETWORK_FINAL_VALIDATION_START LAB_NETWORK_FINAL_VALIDATION_START
#define LAB_NETWORK_FINAL_VALIDATION_END LAB_NETWORK_FINAL_VALIDATION_END
#define LAB_NETWORK_EXIT_HANDLER_START LAB_NETWORK_EXIT_HANDLER_START
#define LAB_NETWORK_EXIT_HANDLER_END LAB_NETWORK_EXIT_HANDLER_END
#define LAB_NETWORK_SUCCESS_HANDLER_START LAB_NETWORK_SUCCESS_HANDLER_START
#define LAB_NETWORK_SUCCESS_HANDLER_END LAB_NETWORK_SUCCESS_HANDLER_END
#define LAB_NETWORK_ERROR_RECOVERY_START LAB_NETWORK_ERROR_RECOVERY_START
#define LAB_NETWORK_ERROR_RECOVERY_END LAB_NETWORK_ERROR_RECOVERY_END
#define LAB_NETWORK_RESOURCE_CLEANUP_START LAB_NETWORK_RESOURCE_CLEANUP_START
#define LAB_NETWORK_RESOURCE_CLEANUP_END LAB_NETWORK_RESOURCE_CLEANUP_END
#define network_packet_function_9300 network_packet_function_initialize  // 包初始化函数
#define network_packet_function_9310 network_packet_function_process     // 包处理函数
#define network_packet_function_9360 network_packet_function_decompress  // 包解压函数
#define NETWORK_OFFSET_STANDARD_B_PARAM 0xb  // 标准偏移量参数B
#define NETWORK_OFFSET_STANDARD_D_PARAM 0xd  // 标准偏移量参数D
#define NETWORK_OFFSET_STANDARD_C_PARAM 0xc  // 标准偏移量参数C
#define NETWORK_OFFSET_STANDARD_8_PARAM 0x8  // 标准偏移量参数8
#define NETWORK_OFFSET_STANDARD_16_PARAM 0x10  // 标准偏移量参数16
#define NETWORK_OFFSET_STANDARD_32_PARAM 0x20  // 标准偏移量参数32
#define NETWORK_OFFSET_STANDARD_64_PARAM 0x40  // 标准偏移量参数64
#define NETWORK_OFFSET_STANDARD_128_PARAM 0x80  // 标准偏移量参数128
#define NETWORK_OFFSET_STANDARD_256_PARAM 0x100  // 标准偏移量参数256
#define NETWORK_OFFSET_STANDARD_512_PARAM 0x200  // 标准偏移量参数512
#define NETWORK_OFFSET_STANDARD_1024_PARAM 0x400  // 标准偏移量参数1024
#define NETWORK_OFFSET_STANDARD_2048_PARAM 0x800  // 标准偏移量参数2048
#define NETWORK_OFFSET_POINTER_SIZE NETWORK_FLAG_BLOCKING8  // 指针大小偏移量
#define NETWORK_OFFSET_MEMORY_EXTENDED NETWORK_STATUS_CLOSING8  // 扩展内存偏移量
#define NETWORK_OFFSET_DATA_HEADER NETWORK_FLAG_BLOCKING0  // 数据头部偏移量
#define NETWORK_SIZE_BUFFER_STANDARD NETWORK_FLAG_KEEPALIVE0  // 标准缓冲区大小
#define NETWORK_SIZE_DATA_STRUCTURE NETWORK_PROTOCOL_HTTP  // 数据结构大小
#define NETWORK_STATUS_CODE_SUCCESS NETWORK_FLAG_ENABLEDc  // 成功状态码
#define NETWORK_MASK_ALIGNMENT_4BYTE NETWORK_MASK_VALIDATION_CHECK  // 4字节对齐掩码
#define NETWORK_BIT_SHIFT_FLAG NETWORK_FLAG_ENABLEDf  // 标志位偏移
#define NETWORK_OFFSET_CONFIG_DATA NETWORK_FLAG_ENABLEDa0  // 配置数据偏移量
#define NETWORK_OFFSET_PARAMETER_DATA NETWORK_OFFSET_STANDARD  // 参数数据偏移量
#define NETWORK_OFFSET_PACKET_DATA NETWORK_STATUS_CONNECTED0  // 数据包偏移量
#define NETWORK_OFFSET_CONNECTION_SIZE NETWORK_FLAG_KEEPALIVE  // 连接大小偏移量
#define NETWORK_OFFSET_CONNECTION_EXTENDED NETWORK_FLAG_ENABLED8  // 连接扩展偏移量
#define NETWORK_OFFSET_CONNECTION_FLAGS NETWORK_OFFSET_PACKET_SIZE  // 连接标志偏移量
#define NETWORK_STATUS_CODE_DISCONNECT NETWORK_FLAG_NONBLOCKINGB  // 断开连接状态码
#define NETWORK_OFFSET_HEADER_PACKET_SIZE NETWORK_FLAG_BLOCKING0200  // 包头部大小
#define NETWORK_OFFSET_PACKET_MAX_SIZE NETWORK_FLAG_BLOCKING0214  // 包最大大小
#define NETWORK_OFFSET_MEMORY_LARGE NETWORK_FLAG_ENABLEDa0  // 大内存偏移量
#define NETWORK_FUNCTION_ADDRESS_PRIMARY NETWORK_FLAG_ENABLED_PRIMARY  // 主函数地址
#define NETWORK_OFFSET_CONNECTION_STATUS NETWORK_STATUS_CLOSING0  // 连接状态偏移量
#define NETWORK_OFFSET_CONNECTION_TIMEOUT NETWORK_STATUS_DISCONNECTED8  // 连接超时偏移量
#define NETWORK_OFFSET_DATA_CONNECTION NETWORK_STATUS_DISCONNECTED0  // 连接数据偏移量
#define NETWORK_OFFSET_SOCKET_OPTIONS NETWORK_FLAG_BLOCKING_CONNECTION0  // 套接字选项偏移量
#define NETWORK_OFFSET_THREAD_DATA NETWORK_FLAG_MULTICAST  // 线程数据偏移量
#define NETWORK_OFFSET_THREAD_COUNT NETWORK_FLAG_REUSEADDR8  // 线程计数偏移量
#define NETWORK_OFFSET_SOCKET_STATE NETWORK_STATUS_BUSY8  // 套接字状态偏移量
#define NETWORK_OFFSET_SOCKET_FLAGS NETWORK_STATUS_BUSYc  // 套接字标志偏移量
#define NETWORK_OFFSET_SOCKET_TIMEOUT NETWORK_FLAG_NONBLOCKING0  // 套接字超时偏移量
#define NETWORK_OFFSET_SOCKET_ERROR NETWORK_FLAG_NONBLOCKING4  // 套接字错误偏移量
#define NETWORK_FLAG_CONNECTION_ACTIVE NETWORK_FLAG_MULTICAST  // 连接活动标志
#define NETWORK_FLAG_ENCRYPTION_ENABLED NETWORK_FLAG_MULTICAST  // 加密启用标志
#define NETWORK_ERROR_INVALID_SOCKET NETWORK_FLAG_ENABLEDf  // 无效套接字错误
#define NETWORK_ERROR_CONNECTION_FAILED NETWORK_FLAG_ENABLEDc  // 连接失败错误
#define NETWORK_SIZE_PACKET_HEADER NETWORK_FLAG_ENABLED8  // 包头部大小
#define NETWORK_SIZE_CONNECTION_DATA NETWORK_PROTOCOL_HTTP  // 连接数据大小
#define NETWORK_SIZE_SOCKET_CONFIG NETWORK_FLAG_KEEPALIVE  // 套接字配置大小
#define NETWORK_SIZE_BUFFER_EXTENDED NETWORK_FLAG_BLOCKING0  // 扩展缓冲区大小
#define NETWORK_MASK_VALIDATION_CHECK NETWORK_MASK_VALIDATION_CHECK  // 验证检查掩码
#define NETWORK_SHIFT_BIT_VALIDATION NETWORK_FLAG_ENABLEDf  // 验证位偏移
#define NETWORK_OFFSET_CONNECTION_EXTENDED_DATA NETWORK_OFFSET_CONNECTION_EXTENDED  // 连接扩展数据偏移量
#define NETWORK_MAGIC_IDENTIFIER_TSIL NETWORK_STATUS_DISCONNECTED_TSIL  // 网络魔术字 TSIL
#define NETWORK_MAGIC_IDENTIFIER_TNVE NETWORK_STATUS_DISCONNECTED_TNVE  // 网络魔术字 TNVE
#define NETWORK_MAGIC_BTVE NETWORK_FLAG_NONBLOCKING2545645  // 网络魔术字 BTVE
#define NETWORK_OFFSET_CONNECTION_ENCRYPTION_DATA NETWORK_OFFSET_ENCRYPTION_DATA  // 连接加密数据偏移量
#define NETWORK_TIMEOUT_THRESHOLD NETWORK_STATUS_BUSY1  // 超时阈值
#define NETWORK_OFFSET_CONNECTION_VALIDATION_DATA NETWORK_OFFSET_VALIDATION_DATA  // 连接验证数据偏移量
#define NETWORK_SIZE_SMALL_PACKET 0x18  // 小数据包大小
#define NETWORK_SIZE_MEDIUM_PACKET 0x14  // 中等数据包大小
#define NETWORK_SIZE_LARGE_PACKET 0x10  // 大数据包大小
#define NETWORK_OFFSET_HEADER_PACKET 0x90  // 数据包头部偏移量
#define NETWORK_OFFSET_DATA_CONNECTION 0x58  // 连接数据偏移量
#define NETWORK_OFFSET_CONFIG_SOCKET 0x50  // 套接字配置偏移量
#define NETWORK_FLAG_CONNECTION_ACTIVE_VALUE 0x80  // 连接活动标志值
#define NETWORK_ERROR_TIMEOUT_VALUE 0x1f  // 超时错误值
#define NETWORK_ERROR_DISCONNECT_VALUE 0x1c  // 断开连接错误值
#define NETWORK_MASK_ALIGNMENT_ADDRESS 0xfffffffc  // 地址对齐掩码
#define NETWORK_MASK_PACKET_SIZE_VALUE 0x1f  // 数据包大小掩码值
void *network_connection_query_function;
void *network_connection_data_function;
void *network_connection_validate_function;

// 函数: void *network_connection_handler_primary;
void *network_connection_handler_primary;
int network_connection_primary_state;
int network_connection_secondary_state;
void *network_buffer_pool;
void *network_config_primary;
void *network_config_secondary;
int network_socket_primary;
int network_socket_secondary;
int network_socket_tertiary;
void *network_connection_handle;
unsigned long network_thread_id;
int network_error_code;
void *network_buffer_start;
void *network_buffer_end;
size_t network_buffer_size;
void *network_buffer_pointer;
size_t network_buffer_capacity;
int network_buffer_flags;
unsigned int network_packet_counter;
size_t network_packet_size;
int network_packet_type;
int network_packet_flags;
unsigned int network_packet_checksum;
unsigned int network_packet_sequence;
unsigned long network_packet_timestamp;
int network_config_timeout;
int network_config_retry_count;
int network_config_max_connections;

// 函数: void *network_connection_handler_secondary;
void *network_connection_handler_secondary;
size_t network_config_buffer_size;

// 函数: void *network_connection_handler_tertiary;
void *network_connection_handler_tertiary;

// 函数: void *network_connection_handler_extended;
void *network_connection_handler_extended;
unsigned short network_config_port;

// 函数: void *network_initialize_connection_state;
void *network_initialize_connection_state;

// 函数: void *network_validate_connection_parameters;
void *network_validate_connection_parameters;

// 函数: void *network_establish_secure_connection;
void *network_establish_secure_connection;

// 函数: void *network_send_packet_data;
void *network_send_packet_data;

// 函数: void *network_receive_packet_data;
void *network_receive_packet_data;

// 函数: void *network_handle_connection_error;
void *network_handle_connection_error;

// 函数: void *network_process_connection_state;
void *network_process_connection_state;

// 函数: void *network_configure_socket_options;
void *network_configure_socket_options;

// 函数: void *network_initialize_socket_layer;
void *network_initialize_socket_layer;
int network_status_primary;
int network_status_secondary;
int network_status_connected;
int network_status_disconnected;
int network_status_connecting;
int network_status_error;
int network_status_timeout;
int network_status_busy;
int network_status_ready;
int network_status_idle;
int network_status_sending;
int network_status_receiving;
int network_status_processing;
int network_status_waiting;
int network_global_state_primary;
void *network_connection_context_primary;
void *network_connection_context_secondary;
void *network_connection_context_tertiary;
void *network_connection_context_quaternary;
void *network_connection_context_quinary;
void *network_connection_context_senary;
void *network_connection_context_septenary;
void *network_connection_context_octonary;
void *network_config_primary_data;
void *network_connection_context_nonary;
int network_config_register_primary;
int network_config_register_secondary;
int network_config_register_tertiary;
void *network_connection_context_denary;
void *network_connection_context_primary_extended;
void *network_connection_context_secondary_extended;
void *network_connection_context_tertiary_extended;
void *network_connection_context_quaternary_extended;
void *network_connection_context_quinary_extended;
void *network_connection_context_senary_extended;
void *network_connection_context_septenary_extended;

// 函数: void *network_initialize_data_transfer;
void *network_initialize_data_transfer;
void *network_buffer_primary;
void *network_buffer_secondary;
void *network_buffer_tertiary;
void *network_buffer_quaternary;
void *network_buffer_quinary;
void *network_buffer_senary;
void *network_buffer_septenary;
void *network_buffer_static_primary;
void *network_buffer_static_secondary;
void *network_buffer_static_tertiary;
void *network_buffer_static_quaternary;
int network_connection_state_primary;
int network_connection_state_secondary;
int network_connection_state_tertiary;
int network_connection_state_quaternary;
int network_connection_state_quinary;
int network_connection_state_senary;
void *network_data_transfer_primary;
void *network_data_transfer_secondary;
void *network_data_transfer_tertiary;
void *network_data_transfer_quaternary;
void *network_data_transfer_quinary;
void *network_config_extended_primary;
void *network_config_extended_secondary;
void *network_config_extended_tertiary;
void *network_config_extended_quaternary;
void *network_config_extended_quinary;
void *network_config_extended_senary;
void *network_protocol_handler_primary;
void *network_protocol_handler_secondary;
void *network_protocol_handler_tertiary;
void *network_protocol_handler_quaternary;
int network_socket_extended_primary;
int network_socket_extended_secondary;
int network_socket_extended_tertiary;
int network_socket_extended_quaternary;
int network_socket_extended_quinary;
int network_timeout_primary;
int network_timeout_secondary;
int network_timeout_tertiary;
int network_timeout_quaternary;
void *network_error_handler_primary;
void *network_error_handler_secondary;
void *network_error_handler_tertiary;
void *network_error_handler_quaternary;
void *network_queue_primary;
void *network_queue_secondary;
void *network_queue_tertiary;
void *network_queue_quaternary;
void *network_queue_quinary;
void *network_event_primary;
void *network_event_secondary;
void *network_event_tertiary;
void *network_event_quaternary;
void *network_thread_primary;
void *network_thread_secondary;
void *network_thread_tertiary;
int network_status_extended_primary;
int network_status_extended_secondary;
int network_status_extended_tertiary;
int network_status_extended_quaternary;
int network_flag_primary;
int network_flag_secondary;
int network_flag_tertiary;
int network_flag_quaternary;
void *network_buffer_management_primary;
void *network_buffer_management_secondary;
void *network_buffer_management_tertiary;
void *network_buffer_management_quaternary;
void *network_packet_extended_primary;
void *network_packet_extended_secondary;
void *network_connection_context_extended;
void *network_packet_extended_tertiary;
void *network_packet_extended_quaternary;
void *network_connection_pool_primary;
void *network_connection_pool_secondary;
void *network_security_primary;
void *network_security_secondary;
void *network_security_tertiary;
void *network_compression_primary;
void *network_validation_primary;
void *network_validation_secondary;
void *network_validation_tertiary;
void *network_validation_quaternary;
void *network_authentication_primary;
void *network_authentication_secondary;

// 函数: void network_system_initialize_primary(void)
