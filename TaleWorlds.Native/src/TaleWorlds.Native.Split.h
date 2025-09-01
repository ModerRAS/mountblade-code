#ifndef TALEWORLDS_NATIVE_SPLIT_H
#define TALEWORLDS_NATIVE_SPLIT_H

// 包含基础DLL头文件
#include "TaleWorlds.Native.dll.h"

// 系统特定类型定义 - Split分支版本
typedef native_uint system_uint;           // 系统无符号整型
typedef native_uint64 system_uint64;       // 系统64位无符号整型
typedef native_uint32 system_uint32;       // 系统32位无符号整型
typedef native_uint16 system_uint16;       // 系统16位无符号整型
typedef native_uint8 system_uint8;         // 系统8位无符号整型

// 系统架构相关定义
#define SYSTEM_ARCHITECTURE_X64 1          // 64位架构支持
#define SYSTEM_ARCHITECTURE_X86 0          // 32位架构支持（当前未启用）

// 分支版本信息
#define SPLIT_BRANCH_VERSION_MAJOR 2       // 分支主版本号
#define SPLIT_BRANCH_VERSION_MINOR 8       // 分支次版本号
#define SPLIT_BRANCH_VERSION_PATCH 0       // 分支补丁版本号
#define SPLIT_BRANCH_VERSION_STRING "2.8.0" // 分支版本字符串
#define SPLIT_BRANCH_BUILD_DATE "2025-08-31" // 分支构建日期
#define SPLIT_BRANCH_COMMIT_ID "split-branch-latest" // 分支提交ID

// 系统配置常量
#define SYSTEM_MAX_THREADS 32              // 最大线程数
#define SYSTEM_MAX_MEMORY_GB 8             // 最大内存限制（GB）
#define SYSTEM_CACHE_SIZE_MB 256           // 缓存大小（MB）
#define SYSTEM_TIMEOUT_MS 5000             // 系统超时时间（毫秒）

// 调试和日志配置
#define SYSTEM_DEBUG_ENABLED 1             // 调试模式启用
#define SYSTEM_LOG_LEVEL_INFO 1            // 信息日志级别
#define SYSTEM_LOG_LEVEL_DEBUG 2           // 调试日志级别
#define SYSTEM_LOG_LEVEL_ERROR 3           // 错误日志级别

// 性能监控配置
#define SYSTEM_PERFORMANCE_MONITORING 1    // 性能监控启用
#define SYSTEM_PROFILING_ENABLED 0         // 性能分析禁用
#define SYSTEM_MEMORY_TRACKING 1           // 内存跟踪启用

// 网络配置常量
#define SYSTEM_NETWORK_TIMEOUT 30000       // 网络超时时间（毫秒）
#define SYSTEM_MAX_CONNECTIONS 100         // 最大连接数
#define SYSTEM_BUFFER_SIZE 8192            // 网络缓冲区大小

// 文件系统配置
#define SYSTEM_MAX_FILE_HANDLES 64         // 最大文件句柄数
#define SYSTEM_FILE_BUFFER_SIZE 4096       // 文件缓冲区大小
#define SYSTEM_TEMP_PATH "/tmp"            // 临时文件路径

// 安全配置
#define SYSTEM_SECURITY_LEVEL 2            // 安全级别
#define SYSTEM_ENCRYPTION_ENABLED 1        // 加密功能启用
#define SYSTEM_AUTHENTICATION_ENABLED 1    // 认证功能启用

// 兼容性配置
#define SYSTEM_COMPATIBILITY_MODE 0        // 兼容性模式
#define SYSTEM_LEGACY_SUPPORT 1            // 遗留系统支持

#endif // TALEWORLDS_NATIVE_SPLIT_H