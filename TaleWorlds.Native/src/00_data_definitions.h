#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

/**
 * @file 00_data_definitions.h
 * @brief 系统数据定义头文件 - 语义化常量定义
 * 
 * 简化实现说明：
 * - 将硬编码值替换为语义化常量，提高代码可读性
 * - 优化常量分组和注释结构
 * - 保持原有功能不变，仅改进命名和文档
 * 
 * 原本实现：
 * - 完全重构硬编码值体系，建立统一的语义化命名规范
 * - 重构所有常量定义的组织结构
 */

// ============================================================================
// 系统基础常量定义
// ============================================================================

// 系统地址基址常量
#define SYSTEM_ADDRESS_BASE 0x180000000
#define SYSTEM_ADDRESS_CODE_START 0x180050000
#define SYSTEM_ADDRESS_DATA_START 0x180a00000
#define SYSTEM_ADDRESS_HEAP_START 0x180d00000
#define SYSTEM_ADDRESS_STACK_START 0x180e00000

// 系统缓冲区分配结果常量
#define SYSTEM_BUFFER_ALLOC_RESULT_HEAP_BASE 0xb8
#define SYSTEM_BUFFER_ALLOC_RESULT_HEAP_READY 0xbc
#define SYSTEM_BUFFER_ALLOC_RESULT_HEAP_ALLOC 0xbd
#define SYSTEM_BUFFER_ALLOC_RESULT_HEAP_COMMIT 0xbe
#define SYSTEM_BUFFER_ALLOC_RESULT_HEAP_COMPLETE 0xc0

// 系统基础偏移量常量
#define SYSTEM_OFFSET_INITIALIZATION_PRIMARY 0x1d
#define SYSTEM_OFFSET_INITIALIZATION_SECONDARY 0x1e
#define SYSTEM_OFFSET_INITIALIZATION_STACK_RESERVED 0x7c

// 系统通用偏移量常量
#define SYSTEM_OFFSET_STANDARD_C 0xc
#define SYSTEM_OFFSET_NEGATIVE_C -0xc
#define SYSTEM_OFFSET_STACK_POINTER 0xc
#define SYSTEM_OFFSET_REGISTER_PARAM 0x12
#define SYSTEM_OFFSET_JUMP_INSTRUCTION 0xe8
#define SYSTEM_OFFSET_CONTROL_REGISTER 0x0d
#define SYSTEM_OFFSET_STANDARD_PARAM 0x13
#define SYSTEM_OFFSET_EXTENDED_CONTROL 0x24

// 寄存器偏移量常量
#define SYSTEM_OFFSET_REGISTER_1C 0x1c
#define SYSTEM_OFFSET_REGISTER_1D 0x1d

// ============================================================================
// 系统模块常量定义
// ============================================================================

// 系统模块偏移量常量
#define SYSTEM_MODULE_OFFSET_PRIMARY 0x17
#define SYSTEM_MODULE_OFFSET_EXTENDED_FIRST 0x21
#define SYSTEM_MODULE_OFFSET_EXTENDED_SECOND 0x22
#define SYSTEM_MODULE_OFFSET_EXTENDED_THIRD 0x23
#define SYSTEM_MODULE_OFFSET_SECONDARY_FIRST 0x25
#define SYSTEM_MODULE_OFFSET_SECONDARY_SECOND 0x26
#define SYSTEM_MODULE_OFFSET_SECONDARY_THIRD 0x27
#define SYSTEM_MODULE_OFFSET_TERTIARY_FIRST 0x29
#define SYSTEM_MODULE_OFFSET_TERTIARY_SECOND 0x2a
#define SYSTEM_MODULE_OFFSET_TERTIARY_THIRD 0x2b
#define SYSTEM_MODULE_OFFSET_CONTROL_FIRST 0x2d
#define SYSTEM_MODULE_OFFSET_CONTROL_SECOND 0x2e

// 系统句柄参数常量
#define SYSTEM_HANDLE_PARAM_PRIMARY 0x11
#define SYSTEM_HANDLE_PARAM_SECONDARY 0x12
#define SYSTEM_HANDLE_PARAM_TERTIARY 0x13
#define SYSTEM_HANDLE_PARAM_EXTENDED_FIRST 0x15
#define SYSTEM_HANDLE_PARAM_EXTENDED_SECOND 0x16
#define SYSTEM_HANDLE_PARAM_CONTROL_FIRST 0x1a
#define SYSTEM_HANDLE_PARAM_CONTROL_SECOND 0x1b

// 系统配置偏移量常量
#define SYSTEM_CONFIG_OFFSET_EXTENDED 0x54
#define SYSTEM_CONFIG_OFFSET_STANDARD 0x18
#define SYSTEM_CONFIG_OFFSET_ALTERNATE 0x28

// ============================================================================
// 系统数据常量定义
// ============================================================================

// 系统字符串相关常量
#define SYSTEM_STRING_LENGTH_STANDARD 0x16
#define SYSTEM_STRING_PATTERN_ERROR_MESSAGE 0x3a726f72  // 错误消息模式
#define SYSTEM_STRING_PATTERN_TERMINATOR_CHAR 0x2720   // 终止符模式
#define SYSTEM_STRING_PATTERN_USER_MESSAGE 0x2220656d  // 用户消息模式
#define SYSTEM_STRING_PATTERN_EXCLAMATION 0x21
#define SYSTEM_STRING_PATTERN_CONFIG 0x666e6f63  // "conf"

// 系统缓冲区大小常量
#define SYSTEM_BUFFER_SIZE_MINIMAL 0x13
#define SYSTEM_BUFFER_SIZE_SMALL 0x14
#define SYSTEM_BUFFER_SIZE_MEDIUM 0x15
#define SYSTEM_BUFFER_SIZE_LARGE 0x22
#define SYSTEM_BUFFER_SIZE_STANDARD 8
#define SYSTEM_BUFFER_OFFSET_STANDARD 8

// 系统浮点数常量
#define SYSTEM_FLOAT_MAX_SAFE_VALUE 0x7f7fffff3f800000

// 系统内存相关常量
#define SYSTEM_MEMORY_OFFSET_C 0xc
#define SYSTEM_MEMORY_OFFSET_D 0xd
#define SYSTEM_MEMORY_OFFSET_E 0xe
#define SYSTEM_MEMORY_OFFSET_RESERVED_PRIMARY 0x461
#define SYSTEM_MEMORY_OFFSET_RESERVED_SECONDARY 0xa3b
#define SYSTEM_OFFSET_MEMORY_SCALE_FACTOR 0x3088
#define SYSTEM_OFFSET_DATA_ALIGNMENT_FACTOR 0x282

// 系统结构体相关常量
#define SYSTEM_OFFSET_STRUCTURE_ENTRY_SIZE 0x14
#define SYSTEM_OFFSET_NEGATIVE_LARGE_BUFFER -0x400

// ============================================================================
// 系统操作常量定义
// ============================================================================

// 系统数值比较常量
#define SYSTEM_COMPARE_VALUE_TRIPLE 3
#define SYSTEM_COMPARE_VALUE_QUINTUPLE 5
#define SYSTEM_COMPARE_VALUE_SEXTUPLE 6
#define SYSTEM_COMPARE_VALUE_OCTUPLE 8

// 系统位操作常量
#define SYSTEM_BIT_SHIFT_SINGLE 1
#define SYSTEM_BIT_SHIFT_DOUBLE 2
#define SYSTEM_BIT_SHIFT_TRIPLE 3

// 系统函数偏移量常量
#define SYSTEM_FUNCTION_OFFSET_REGISTER_4F8 0x4f8

// 系统模块数据偏移量常量
#define SYSTEM_OFFSET_MODULE_DATA_3580 0x3580

// ============================================================================
// 系统路径缓冲区常量定义
// ============================================================================

// 路径缓冲区大小常量
#define SYSTEM_PATH_BUFFER_SIZE_ZERO 0
#define SYSTEM_PATH_BUFFER_SIZE_MINIMAL 8
#define SYSTEM_PATH_BUFFER_SIZE_SMALL 0x10
#define SYSTEM_PATH_BUFFER_SIZE_MEDIUM 0x19
#define SYSTEM_PATH_BUFFER_SIZE_STANDARD 0x20
#define SYSTEM_PATH_BUFFER_SIZE_LARGE 0x28
#define SYSTEM_PATH_BUFFER_SIZE_EXTENDED 0x24
#define SYSTEM_PATH_BUFFER_SIZE_EXTRA_LARGE 0x30
#define SYSTEM_PATH_BUFFER_SIZE_SPECIAL_EXTENDED 0x65

// 路径缓冲区模块签名常量
#define SYSTEM_PATH_BUFFER_SIZE_MODULE_LMX_SIGNATURE 0x4c4d58  // "LMX"
#define SYSTEM_PATH_BUFFER_SIZE_MODULE_DLU_SIGNATURE 0x646c75  // "DLU"
#define SYSTEM_PATH_BUFFER_SIZE_MODULE_TON_SIGNATURE 0x746f6e  // "TON"

#endif // DATA_DEFINITIONS_H
