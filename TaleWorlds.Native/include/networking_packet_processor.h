/**
 * @file networking_packet_processor.h
 * @brief 网络系统数据包处理模块头文件
 * 
 * 本模块提供了网络数据包的处理功能，包括数据包的编码、解码、
 * 压缩、加密等核心功能。支持多种数据包格式和协议处理。
 * 
 * @author TaleWorlds Engine Team
 * @version 1.0
 * @date 2025-08-28
 */

#ifndef NETWORKING_PACKET_PROCESSOR_H
#define NETWORKING_PACKET_PROCESSOR_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

/** 最大数据包大小 */
#define MAX_PACKET_SIZE         65536

/** 数据包头大小 */
#define PACKET_HEADER_SIZE      32

/** 压缩缓冲区大小 */
#define COMPRESSION_BUFFER_SIZE 4096

/** 加密密钥大小 */
#define ENCRYPTION_KEY_SIZE     256

/** 数据包类型标识符 */
#define PACKET_TYPE_NORMAL     0x01
#define PACKET_TYPE_COMPRESSED 0x02
#define PACKET_TYPE_ENCRYPTED  0x04
#define PACKET_TYPE_FRAGMENTED 0x08

/* ============================================================================
 * 数据类型定义
 * ============================================================================ */

/**
 * @brief 数据包处理上下文结构
 */
typedef struct {
    uint32_t packet_id;          /**< 数据包ID */
    uint32_t sequence_number;    /**< 序列号 */
    uint32_t flags;              /**< 标志位 */
    uint32_t checksum;           /**< 校验和 */
    uint32_t data_size;          /**< 数据大小 */
    uint32_t compressed_size;    /**< 压缩后大小 */
    uint32_t encryption_key;     /**< 加密密钥 */
    uint32_t timestamp;          /**< 时间戳 */
    void* user_data;             /**< 用户数据指针 */
} packet_context_t;

/**
 * @brief 网络连接状态枚举
 */
typedef enum {
    NETWORK_STATE_DISCONNECTED,    /**< 未连接 */
    NETWORK_STATE_CONNECTING,      /**< 连接中 */
    NETWORK_STATE_CONNECTED,       /**< 已连接 */
    NETWORK_STATE_AUTHENTICATING,  /**< 认证中 */
    NETWORK_STATE_AUTHENTICATED,   /**< 已认证 */
    NETWORK_STATE_ERROR           /**< 错误状态 */
} network_state_t;

/**
 * @brief 数据包处理结果枚举
 */
typedef enum {
    PACKET_PROCESS_SUCCESS,        /**< 处理成功 */
    PACKET_PROCESS_ERROR,          /**< 处理错误 */
    PACKET_PROCESS_INVALID,        /**< 无效数据包 */
    PACKET_PROCESS_INCOMPLETE,     /**< 数据包不完整 */
    PACKET_PROCESS_DUPLICATE,      /**< 重复数据包 */
    PACKET_PROCESS_OUT_OF_SEQUENCE /**< 序列号错误 */
} packet_process_result_t;

/**
 * @brief 压缩算法类型
 */
typedef enum {
    COMPRESSION_NONE,             /**< 无压缩 */
    COMPRESSION_ZLIB,            /**< ZLIB压缩 */
    COMPRESSION_LZ4,              /**< LZ4压缩 */
    COMPRESSION_CUSTOM           /**< 自定义压缩 */
} compression_type_t;

/**
 * @brief 加密算法类型
 */
typedef enum {
    ENCRYPTION_NONE,              /**< 无加密 */
    ENCRYPTION_AES,               /**< AES加密 */
    ENCRYPTION_RSA,               /**< RSA加密 */
    ENCRYPTION_CUSTOM            /**< 自定义加密 */
} encryption_type_t;

/* ============================================================================
 * 函数指针类型定义
 * ============================================================================ */

/**
 * @brief 数据包处理回调函数类型
 * 
 * @param context 数据包处理上下文
 * @param data 数据指针
 * @param size 数据大小
 * @return 处理结果
 */
typedef packet_process_result_t (*packet_process_callback_t)(
    packet_context_t* context, 
    const void* data, 
    size_t size
);

/**
 * @brief 网络状态变化回调函数类型
 * 
 * @param old_state 旧状态
 * @param new_state 新状态
 * @param user_data 用户数据
 */
typedef void (*network_state_callback_t)(
    network_state_t old_state, 
    network_state_t new_state, 
    void* user_data
);

/* ============================================================================
 * 核心功能函数声明
 * ============================================================================ */

/**
 * @brief 初始化网络数据包处理器
 * 
 * @param config 配置参数
 * @return 初始化结果，0表示成功，非0表示失败
 */
int network_packet_processor_init(const void* config);

/**
 * @brief 清理网络数据包处理器资源
 * 
 * @param handle 处理器句柄
 */
void network_packet_processor_cleanup(void* handle);

/**
 * @brief 处理网络数据包
 * 
 * @param context 数据包处理上下文
 * @param data 数据指针
 * @param size 数据大小
 * @return 处理结果
 */
packet_process_result_t process_network_packet(
    packet_context_t* context, 
    const void* data, 
    size_t size
);

/**
 * @brief 发送网络数据包
 * 
 * @param context 数据包处理上下文
 * @param data 数据指针
 * @param size 数据大小
 * @param flags 发送标志
 * @return 发送结果
 */
int send_network_packet(
    packet_context_t* context, 
    const void* data, 
    size_t size, 
    uint32_t flags
);

/**
 * @brief 压缩数据包数据
 * 
 * @param input 输入数据
 * @param input_size 输入大小
 * @param output 输出缓冲区
 * @param output_size 输出缓冲区大小
 * @param compression_type 压缩类型
 * @return 压缩后的大小，负值表示错误
 */
int compress_packet_data(
    const void* input, 
    size_t input_size, 
    void* output, 
    size_t output_size, 
    compression_type_t compression_type
);

/**
 * @brief 解压缩数据包数据
 * 
 * @param input 输入数据
 * @param input_size 输入大小
 * @param output 输出缓冲区
 * @param output_size 输出缓冲区大小
 * @param compression_type 压缩类型
 * @return 解压缩后的大小，负值表示错误
 */
int decompress_packet_data(
    const void* input, 
    size_t input_size, 
    void* output, 
    size_t output_size, 
    compression_type_t compression_type
);

/**
 * @brief 加密数据包数据
 * 
 * @param input 输入数据
 * @param input_size 输入大小
 * @param output 输出缓冲区
 * @param output_size 输出缓冲区大小
 * @param encryption_type 加密类型
 * @param key 加密密钥
 * @return 加密后的大小，负值表示错误
 */
int encrypt_packet_data(
    const void* input, 
    size_t input_size, 
    void* output, 
    size_t output_size, 
    encryption_type_t encryption_type, 
    const void* key
);

/**
 * @brief 解密数据包数据
 * 
 * @param input 输入数据
 * @param input_size 输入大小
 * @param output 输出缓冲区
 * @param output_size 输出缓冲区大小
 * @param encryption_type 加密类型
 * @param key 解密密钥
 * @return 解密后的大小，负值表示错误
 */
int decrypt_packet_data(
    const void* input, 
    size_t input_size, 
    void* output, 
    size_t output_size, 
    encryption_type_t encryption_type, 
    const void* key
);

/**
 * @brief 验证数据包完整性
 * 
 * @param context 数据包处理上下文
 * @param data 数据指针
 * @param size 数据大小
 * @return 验证结果，1表示有效，0表示无效
 */
int verify_packet_integrity(
    const packet_context_t* context, 
    const void* data, 
    size_t size
);

/**
 * @brief 计算数据包校验和
 * 
 * @param data 数据指针
 * @param size 数据大小
 * @return 校验和值
 */
uint32_t calculate_packet_checksum(const void* data, size_t size);

/**
 * @brief 注册数据包处理回调函数
 * 
 * @param callback 回调函数
 * @param user_data 用户数据
 * @return 注册结果
 */
int register_packet_callback(
    packet_process_callback_t callback, 
    void* user_data
);

/**
 * @brief 注册网络状态变化回调函数
 * 
 * @param callback 回调函数
 * @param user_data 用户数据
 * @return 注册结果
 */
int register_state_callback(
    network_state_callback_t callback, 
    void* user_data
);

/**
 * @brief 获取当前网络状态
 * 
 * @return 当前网络状态
 */
network_state_t get_network_state(void);

/**
 * @brief 设置网络状态
 * 
 * @param state 新状态
 * @return 设置结果
 */
int set_network_state(network_state_t state);

/**
 * @brief 获取数据包统计信息
 * 
 * @param stats 统计信息结构指针
 * @return 获取结果
 */
int get_packet_statistics(void* stats);

/* ============================================================================
 * 便捷宏定义
 * ============================================================================ */

/** 检查数据包是否为压缩类型 */
#define IS_PACKET_COMPRESSED(flags) ((flags) & PACKET_TYPE_COMPRESSED)

/** 检查数据包是否为加密类型 */
#define IS_PACKET_ENCRYPTED(flags) ((flags) & PACKET_TYPE_ENCRYPTED)

/** 检查数据包是否为分片类型 */
#define IS_PACKET_FRAGMENTED(flags) ((flags) & PACKET_TYPE_FRAGMENTED)

/** 创建数据包ID */
#define CREATE_PACKET_ID() ((uint32_t)__sync_fetch_and_add(&g_packet_id_counter, 1))

/** 获取当前时间戳 */
#define GET_CURRENT_TIMESTAMP() ((uint32_t)time(NULL))

#ifdef __cplusplus
}
#endif

#endif /* NETWORKING_PACKET_PROCESSOR_H */