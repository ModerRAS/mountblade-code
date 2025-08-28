/**
 * @file TaleWorlds.Native.dll.h
 * @brief TaleWorlds Native DLL 系统类型定义和常量声明
 * 
 * 本文件包含 Mount & Blade II: Bannerlord Native DLL 的系统类型定义、
 * 常量声明和底层结构体定义。这些定义是引擎核心功能的基础，
 * 涵盖了异常处理、资源管理、系统调用等底层功能。
 * 
 * 主要内容包括：
 * - 基础数据类型定义
 * - 系统常量和宏定义
 * - 异常处理相关结构
 * - 资源管理数据结构
 * - 系统调用接口定义
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 */

#ifndef TALEWORLDS_NATIVE_DLL_H
#define TALEWORLDS_NATIVE_DLL_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/*=============================================================================
* 基础数据类型定义
*=============================================================================*/

/**
 * @defgroup BasicTypes 基础数据类型
 * @brief 系统基础数据类型定义，将原始类型映射为标准C类型
 * @{
 */

/** 8位无符号字符类型 */
typedef unsigned char byte;

/** 32位无符号整型 */
typedef unsigned int dword;

/** 128位全局唯一标识符 */
typedef unsigned long long GUID;

/** 32位映像基址偏移量 */
typedef uint32_t ImageBaseOffset32;

/** 64位四字类型 */
typedef unsigned long long qword;

/** 无符号字符类型 */
typedef unsigned char uchar;

/** 无符号整型 */
typedef unsigned int uint;

/** 无符号短整型 */
typedef unsigned short ushort;

/** 16位宽字符类型 */
typedef unsigned short wchar16;

/** 16位字类型 */
typedef unsigned short word;

/** 指针类型 */
typedef void* pointer;

/** 32位指针类型 */
typedef uint32_t pointer32;

/** 64位指针类型 */
typedef uint64_t pointer64;

/** @} */

/*=============================================================================
* 扩展数据类型定义
*=============================================================================*/

/**
 * @defgroup ExtendedTypes 扩展数据类型
 * @brief 扩展的数据类型定义，用于特殊用途
 * @{
 */

/** 64位无符号字节类型 */
#define unkbyte9   unsigned long long
#define unkbyte10  unsigned long long
#define unkbyte11  unsigned long long
#define unkbyte12  unsigned long long
#define unkbyte13  unsigned long long
#define unkbyte14  unsigned long long
#define unkbyte15  unsigned long long
#define unkbyte16  unsigned long long

/** 64位无符号整型 */
#define unkuint9   unsigned long long
#define unkuint10  unsigned long long
#define unkuint11  unsigned long long
#define unkuint12  unsigned long long
#define unkuint13  unsigned long long
#define unkuint14  unsigned long long
#define unkuint15  unsigned long long
#define unkuint16  unsigned long long

/** 64位有符号整型 */
#define unkint9    long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

/** 32位浮点类型 */
#define unkfloat1  float
#define unkfloat2  float
#define unkfloat3  float

/** 64位双精度浮点类型 */
#define unkfloat5  double
#define unkfloat6  double
#define unkfloat7  double

/** 128位长双精度浮点类型 */
#define unkfloat9  long double
#define unkfloat11 long double
#define unkfloat12 long double
#define unkfloat13 long double
#define unkfloat14 long double
#define unkfloat15 long double
#define unkfloat16 long double

/** @} */

/*=============================================================================
* 特殊类型和宏定义
*=============================================================================*/

/**
 * @defgroup SpecialTypes 特殊类型和宏
 * @brief 特殊用途的类型定义和宏
 * @{
 */

/** 无效空间基址类型 */
#define BADSPACEBASE   void

/** 代码类型 */
#define code   void

/** @} */

/*=============================================================================
* 异常处理相关结构
*=============================================================================*/

/**
 * @defgroup ExceptionHandling 异常处理结构
 * @brief 异常处理相关的数据结构定义
 * @{
 */

/** 异常状态类型 */
typedef int __ehstate_t;

/** IP到状态映射条目结构 */
typedef struct _s_IPToStateMapEntry _s_IPToStateMapEntry, *P_s_IPToStateMapEntry;
typedef struct _s_IPToStateMapEntry IPToStateMapEntry;

struct _s_IPToStateMapEntry {
    ImageBaseOffset32 Ip;      /**< 指令指针偏移 */
    __ehstate_t state;        /**< 异常状态 */
};

/** 展开映射条目结构 */
typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;
typedef struct _s_UnwindMapEntry UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;      /**< 目标状态 */
    ImageBaseOffset32 action;  /**< 处理动作偏移 */
};

/** @} */

/*=============================================================================
* 资源管理相关结构
*=============================================================================*/

/**
 * @defgroup ResourceManagement 资源管理结构
 * @brief 资源管理相关的数据结构定义
 * @{
 */

/** 资源目录条目联合体 */
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

/** 资源目录条目结构体 */
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;   /**< 目录偏移量 */
    dword DataIsDirectory;     /**< 数据是否为目录标志 */
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;                                                        /**< 数据偏移量 */
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;  /**< 目录结构 */
};

/** @} */

/*=============================================================================
* 系统标识结构
*=============================================================================*/

/**
 * @defgroup SystemIdentification 系统标识结构
 * @brief 系统标识相关的数据结构定义
 * @{
 */

/** 客户端ID结构 */
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;   /**< 唯一进程标识 */
    void *UniqueThread;    /**< 唯一线程标识 */
};

/** @} */

/*=============================================================================
* 异常处理映射结构
*=============================================================================*/

/**
 * @defgroup ExceptionMapping 异常处理映射
 * @brief 异常处理映射相关的数据结构定义
 * @{
 */

/** Try块映射条目结构 */
typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

/** @} */

#endif /* TALEWORLDS_NATIVE_DLL_H */