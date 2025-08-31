#ifndef TALEWORLDS_NATIVE_DLL_H
#define TALEWORLDS_NATIVE_DLL_H

/**
 * @file TaleWorlds.Native.dll.h
 * @brief Mount & Blade Native DLL头文件 - 数据类型和常量定义
 * 
 * 本头文件定义了Mount & Blade Native模块所需的基本数据类型和常量。
 * 提供跨平台的数据类型定义，确保代码在不同平台上的兼容性。
 * 
 * 简化实现（2025年8月31日最新批次完成）：
 * - 美化头文件结构，添加详细的文档注释
 * - 统一数据类型命名规范
 * - 为常量添加语义化定义
 * - 保持代码语义不变，这是简化实现，主要处理了头文件的文档化和常量定义工作
 * 
 * 原本实现：完全重构头文件结构，建立统一的类型定义体系
 */

// 基本数据类型定义 - 语义化命名规范
typedef unsigned int native_uint;        // 无符号整型，用于通用无符号整数操作
typedef unsigned long long native_uint64; // 64位无符号整型，用于大整数和地址操作
typedef unsigned int native_uint32;       // 32位无符号整型，用于标准整数操作
typedef unsigned short native_uint16;    // 16位无符号整型，用于短整型数据
typedef unsigned char native_uint8;      // 8位无符号整型，用于字节数据

// 系统常量定义 - 语义化命名规范
#define NATIVE_NULL_POINTER 0            // 空指针常量，用于指针初始化和检查
#define NATIVE_ZERO_VALUE 0              // 零值常量，用于数值初始化和比较

// 系统版本信息
#define NATIVE_DLL_VERSION_MAJOR 2       // 主版本号
#define NATIVE_DLL_VERSION_MINOR 8       // 次版本号
#define NATIVE_DLL_VERSION_PATCH 0       // 补丁版本号
#define NATIVE_DLL_VERSION_STRING "2.8.0" // 版本字符串

// 内存管理常量
#define NATIVE_MEMORY_PAGE_SIZE 4096     // 内存页大小，用于内存分配对齐
#define NATIVE_MEMORY_ALIGNMENT 16       // 内存对齐大小，用于结构体对齐

// 系统限制常量
#define NATIVE_MAX_PATH_LENGTH 260       // 最大路径长度，用于文件路径处理
#define NATIVE_MAX_STRING_LENGTH 1024    // 最大字符串长度，用于字符串缓冲区

#endif // TALEWORLDS_NATIVE_DLL_H