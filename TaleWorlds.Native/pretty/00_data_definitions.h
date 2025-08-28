/**
 * 数据定义头文件
 * 
 * 本文件包含系统的数据类型定义、常量定义和结构体定义
 * 函数别名定义已迁移到 unified_function_aliases.h
 */

#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

#include <stdint.h>
#include <stddef.h>
#include "unified_function_aliases.h"

// ==========================================================================
// 数据类型定义
// ==========================================================================

// 基础类型别名
typedef uint64_t SystemHandle;
typedef uint64_t ResourceHandle;
typedef uint64_t ConfigHandle;
typedef uint64_t InterfaceHandle;

// 状态枚举
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,
    SYSTEM_STATE_INITIALIZING = 1,
    SYSTEM_STATE_INITIALIZED = 2,
    SYSTEM_STATE_RUNNING = 3,
    SYSTEM_STATE_PAUSED = 4,
    SYSTEM_STATE_STOPPED = 5,
    SYSTEM_STATE_ERROR = 6
} SystemState;

// 错误代码枚举
typedef enum {
    ERROR_SUCCESS = 0,
    ERROR_INVALID_PARAMETER = 1,
    ERROR_OUT_OF_MEMORY = 2,
    ERROR_TIMEOUT = 3,
    ERROR_NOT_FOUND = 4,
    ERROR_ALREADY_EXISTS = 5,
    ERROR_PERMISSION_DENIED = 6,
    ERROR_SYSTEM_FAILURE = 7
} ErrorCode;

// ==========================================================================
// 常量定义
// ==========================================================================

#define MAX_SYSTEM_NAME_LENGTH 256
#define MAX_CONFIG_VALUE_LENGTH 1024
#define MAX_RESOURCE_COUNT 65536
#define DEFAULT_TIMEOUT_MS 5000

// ==========================================================================
// 结构体定义
// ==========================================================================

typedef struct {
    SystemHandle handle;
    char name[MAX_SYSTEM_NAME_LENGTH];
    SystemState state;
    ErrorCode last_error;
    void* user_data;
} SystemContext;

typedef struct {
    ResourceHandle handle;
    uint32_t size;
    uint32_t flags;
    void* data;
} ResourceInfo;

#endif // DATA_DEFINITIONS_H
