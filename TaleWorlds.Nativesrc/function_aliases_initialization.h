/**
 * @file function_aliases_initialization.h
 * @brief 初始化系统函数别名定义
 * 
 * 本文件定义了初始化系统中使用的函数别名，将原始的FUN_标记
 * 转换为语义化的函数名称，提高代码可读性和维护性。
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

#ifndef FUNCTION_ALIASES_INITIALIZATION_H
#define FUNCTION_ALIASES_INITIALIZATION_H

#include <stdint.h>
#include <stdlib.h>

// ===========================================
// 函数别名定义 - 初始化系统
// ===========================================

/**
 * @brief 获取初始化系统句柄
 * 
 * 该函数返回初始化系统的句柄，用于系统组件的初始化和配置。
 * 
 * @return void* 系统句柄指针
 */
typedef void* (*InitSystemHandleGetter)(void);
#define InitSystem_GetHandle FUN_18008d070

/**
 * @brief 计算系统内存需求大小
 * 
 * 该函数根据系统句柄计算所需的内存大小。
 * 
 * @param system_handle 系统句柄指针
 * @return size_t 所需的内存大小
 */
typedef size_t (*SystemMemorySizeCalculator)(int64_t* system_handle);
#define InitSystem_CalculateMemorySize FUN_18008f0d0

/**
 * @brief 分配系统内存块
 * 
 * 该函数为系统分配指定大小的内存块。
 * 
 * @param system_handle 系统句柄指针
 * @param target_node 目标节点指针
 * @param current_node 当前节点指针
 * @param total_size 总大小
 * @param block_size 块大小
 */
typedef void (*SystemMemoryAllocator)(int64_t* system_handle, void** target_node, 
                                     void* current_node, size_t total_size, size_t block_size);
#define InitSystem_AllocateMemoryBlock FUN_18008f140

// ===========================================
// 函数别名定义 - 系统配置管理
// ===========================================

/**
 * @brief 初始化系统配置注册管理器1
 * 
 * 该函数负责初始化系统配置注册管理器的第一个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar1)(void);
#define SystemConfig_RegisterManager1 FUN_1800400b0

/**
 * @brief 初始化系统配置注册管理器2
 * 
 * 该函数负责初始化系统配置注册管理器的第二个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar2)(void);
#define SystemConfig_RegisterManager2 FUN_1800401b0

/**
 * @brief 初始化系统配置注册管理器3
 * 
 * 该函数负责初始化系统配置注册管理器的第三个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar3)(void);
#define SystemConfig_RegisterManager3 FUN_1800402b0

/**
 * @brief 初始化系统配置注册管理器4
 * 
 * 该函数负责初始化系统配置注册管理器的第四个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar4)(void);
#define SystemConfig_RegisterManager4 FUN_1800403b0

/**
 * @brief 初始化系统配置注册管理器5
 * 
 * 该函数负责初始化系统配置注册管理器的第五个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar5)(void);
#define SystemConfig_RegisterManager5 FUN_1800404b0

/**
 * @brief 初始化系统配置注册管理器6
 * 
 * 该函数负责初始化系统配置注册管理器的第六个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar6)(void);
#define SystemConfig_RegisterManager6 FUN_1800405b0

/**
 * @brief 初始化系统配置注册管理器7
 * 
 * 该函数负责初始化系统配置注册管理器的第七个实例，
 * 进行系统配置的注册、内存分配和初始化设置。
 */
typedef void (*SystemConfigRegistrar7)(void);
#define SystemConfig_RegisterManager7 FUN_1800406b0

/**
 * @brief 获取系统配置完成回调函数
 * 
 * 该函数返回系统配置完成时的回调函数指针。
 * 
 * @return void* 回调函数指针
 */
typedef void* (*SystemConfigCallbackGetter)(void);
#define SystemConfig_GetCompletionCallback FUN_180073930

// ===========================================
// 内联函数声明
// ===========================================

/**
 * @brief 内联函数：获取系统句柄
 * 
 * @return void* 系统句柄指针
 */
static inline void* InitSystem_GetSystemHandle(void) {
    return InitSystem_GetHandle();
}

/**
 * @brief 内联函数：计算内存大小
 * 
 * @param system_handle 系统句柄指针
 * @return size_t 内存大小
 */
static inline size_t InitSystem_GetRequiredMemorySize(int64_t* system_handle) {
    return InitSystem_CalculateMemorySize(system_handle);
}

/**
 * @brief 内联函数：分配内存块
 * 
 * @param system_handle 系统句柄指针
 * @param target_node 目标节点指针
 * @param current_node 当前节点指针
 * @param total_size 总大小
 * @param block_size 块大小
 */
static inline void InitSystem_AllocateSystemMemory(int64_t* system_handle, void** target_node, 
                                                  void* current_node, size_t total_size, size_t block_size) {
    InitSystem_AllocateMemoryBlock(system_handle, target_node, current_node, total_size, block_size);
}

// ===========================================
// 函数指针类型定义
// ===========================================

/**
 * @brief 系统初始化函数指针类型
 */
typedef void (*SystemInitFunction)(void);

/**
 * @brief 系统配置注册函数指针类型
 */
typedef void (*SystemConfigRegisterFunction)(void);

/**
 * @brief 系统内存管理函数指针类型
 */
typedef void* (*SystemMemoryFunction)(void);

/**
 * @brief 系统计算函数指针类型
 */
typedef size_t (*SystemCalculateFunction)(int64_t*);

#endif // FUNCTION_ALIASES_INITIALIZATION_H