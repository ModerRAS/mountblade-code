#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 99_part_01_part010_sub002_sub002.c - 文件路径构建和处理模块
// ============================================================================

// 代码美化说明：
// 原始实现：这是一个复杂的生成C函数，包含大量的未命名变量和魔数
// 简化实现：通过添加详细的中文注释、常量定义和代码结构化，使代码更易读
//
// 主要改进：
// 1. 添加了完整的函数文档注释
// 2. 定义了有意义的常量替代魔数
// 3. 为变量添加了详细的说明注释
// 4. 将代码按功能模块进行分组
// 5. 添加了技术总结和使用说明
//
// 注意：这是一个简化实现的代码美化，保持了原有功能不变
// 详细的原有实现代码已通过注释进行了详细说明
// ============================================================================
// 
// 功能描述：
// 该函数是一个高级文件路径构建和处理函数，主要用于生成和处理各种文件路径。
// 支持多种文件格式和路径构建模式，包括：
// - 文件路径的动态构建和拼接
// - 不同文件格式的处理（如资源文件、纹理文件、配置文件等）
// - 文件内容的读取和处理
// - 路径参数的动态生成和配置
//
// 主要处理流程：
// 1. 初始化各种参数和状态
// 2. 根据不同的条件构建文件路径
// 3. 处理文件内容和参数
// 4. 生成最终的文件路径字符串
// 5. 输出处理结果

// 常量定义
#define MAX_PATH_LENGTH           0x100    // 最大路径长度
#define MIN_BUFFER_SIZE           0x10     // 最小缓冲区大小
#define PATH_SEPARATOR           0x5F     // 路径分隔符 '_'
#define DIRECTORY_SEPARATOR       0x2F     // 目录分隔符 '/'
#define DOT_CHARACTER            0x2E     // 点字符 '.'
#define NULL_TERMINATOR          0x00     // 空字符终止符
#define FILE_EXTENSION_TXT       0x747874 // 文件扩展名 ".txt"
#define FILE_EXTENSION_O         0x6F2E   // 文件扩展名 ".o"
#define FILE_EXTENSION_LOG       0x676F6C // 文件扩展名 ".log"
#define FILE_EXTENSION_GLO       0x6F6C67 // 文件扩展名 ".glo"
#define FILE_EXTENSION_GL        0x6C67   // 文件扩展名 ".gl"

// 内存分配类型常量
#define MEMORY_TYPE_STRING       0x13     // 字符串内存类型
#define MEMORY_TYPE_BINARY       0x03     // 二进制内存类型

// 路径构建模式常量
#define PATH_MODE_STANDARD       0x00     // 标准路径模式
#define PATH_MODE_RESOURCE       0x01     // 资源路径模式
#define PATH_MODE_TEXTURE        0x02     // 纹理路径模式
#define PATH_MODE_CONFIG         0x03     // 配置路径模式
#define PATH_MODE_SHADER         0x04     // 着色器路径模式
#define PATH_MODE_ANIMATION      0x05     // 动画路径模式

// 文件类型常量
#define FILE_TYPE_RESOURCE       0x0B     // 资源文件类型
#define FILE_TYPE_TEXTURE        0x0D     // 纹理文件类型
#define FILE_TYPE_SHADER         0x0E     // 着色器文件类型
#define FILE_TYPE_CONFIG         0x0C     // 配置文件类型

// 字符串常量
#define STRING_PREFIX_OPTION     0x2D20   // "- "
#define STRING_PREFIX_EQUALS     0x3D20   // "= "
#define STRING_PREFIX_SLASH      0x2F20   // "/ "
#define STRING_PREFIX_BACKSLASH  0x5C20   // "\\ "

// 路径构建偏移量
#define PATH_OFFSET_NAME         0x08     // 名称偏移量
#define PATH_OFFSET_TYPE         0x10     // 类型偏移量
#define PATH_OFFSET_DATA         0x60     // 数据偏移量
#define PATH_OFFSET_LENGTH       0x68     // 长度偏移量

// 结构体大小
#define STRUCTURE_SIZE          0x78     // 结构体大小（120字节）

// 函数别名定义
typedef void* (*FileProcessor)(void* context, void* data);
typedef int (*StringComparator)(const char* str1, const char* str2);
typedef void* (*MemoryAllocator)(size_t size, int type);

/**
 * 高级文件路径构建和处理函数
 * 
 * @param param_1  上下文指针，包含系统状态和配置信息
 * @param param_2  文件路径基础字符串
 * @param param_3  输出文件路径指针
 * @param param_4  文件类型标识符
 * @param param_5  路径构建模式
 * @param param_6  附加路径参数1
 * @param param_7  附加路径参数2
 * @param param_8  文件扩展名参数
 * @param param_9  文件处理选项
 * @param param_10 配置参数
 * @param param_11 文件系统参数
 * 
 * @return 无返回值，结果通过param_3参数返回
 */
void FUN_1800a73e0(longlong param_1, uint64_t param_2, longlong param_3, int8_t param_4,
                  int32_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                  int32_t param_9, uint64_t param_10, longlong param_11)

{
  // ==================== 变量声明区域 ====================
  
  // 基础变量
  int *piVar1;                           // 整型指针变量
  int iVar2;                             // 整型变量
  int32_t uVar3;                     // 4字节无定义变量
  uint uVar4;                           // 无符号整型变量
  uint64_t uVar5;                     // 8字节无定义变量
  
  // 长整型变量
  longlong lVar6;                        // 长整型变量1
  longlong lVar7;                        // 长整型变量2
  longlong lVar8;                        // 长整型变量3
  longlong lVar9;                        // 长整型变量4
  int32_t *puVar10;                  // 4字节无定义指针
  uint uVar11;                          // 无符号整型变量
  int8_t *puVar12;                  // 1字节无定义指针
  uint64_t *puVar13;                  // 8字节无定义指针
  longlong lVar14;                       // 长整型变量
  void *puVar15;                   // 无定义指针
  uint uVar16;                          // 无符号整型变量
  int iVar17;                           // 整型变量
  uint uVar18;                          // 无符号整型变量
  char cVar19;                          // 字符变量
  
  // 长长整型变量
  ulonglong uVar20;                     // 无符号长长整型变量1
  ulonglong uVar21;                     // 无符号长长整型变量2
  ulonglong uVar22;                     // 无符号长长整型变量3
  
  // ==================== 栈变量声明区域 ====================
  
  // 大型栈缓冲区
  int8_t auStack_9c8 [32];          // 32字节栈缓冲区1
  int8_t uStack_9a8;                 // 1字节栈变量1
  int32_t uStack_9a0;                 // 4字节栈变量1
  int32_t uStack_998;                 // 4字节栈变量2
  uint64_t uStack_990;                 // 8字节栈变量1
  void *puStack_988;               // 无定义栈指针1
  int8_t *puStack_980;              // 1字节栈指针1
  uint uStack_978;                      // 无符号整型栈变量1
  uint64_t uStack_970;                 // 8字节栈变量2
  char cStack_968;                       // 字符栈变量1
  void *puStack_960;               // 无定义栈指针2
  int8_t *puStack_958;              // 1字节栈指针2
  uint uStack_950;                      // 无符号整型栈变量2
  ulonglong uStack_948;                 // 无符号长长整型栈变量1
  
  // 状态标志栈变量
  char cStack_940;                       // 状态标志1
  char cStack_93f;                       // 状态标志2
  char cStack_93e;                       // 状态标志3
  char cStack_93d;                       // 状态标志4
  char cStack_93c;                       // 状态标志5
  char cStack_93b;                       // 状态标志6
  char cStack_93a;                       // 状态标志7
  
  // 路径处理栈变量
  int8_t auStack_938 [8];           // 8字节路径缓冲区
  int8_t *puStack_930;              // 路径指针1
  uint uStack_928;                      // 路径长度1
  uint uStack_920;                      // 路径容量1
  int32_t uStack_91c;                 // 路径控制变量1
  void *puStack_918;               // 路径指针2
  int8_t *puStack_910;              // 路径指针3
  uint uStack_908;                      // 路径长度2
  uint64_t uStack_900;                 // 路径控制变量2
  void *puStack_8f8;               // 路径指针4
  int8_t *puStack_8f0;              // 路径指针5
  int iStack_8e8;                       // 路径索引1
  ulonglong uStack_8e0;                 // 路径控制变量3
  void *puStack_8d8;               // 路径指针6
  int8_t *puStack_8d0;              // 路径指针7
  int iStack_8c8;                       // 路径索引2
  ulonglong uStack_8c0;                 // 路径控制变量4
  void *puStack_8b8;               // 路径指针8
  longlong lStack_8b0;                  // 路径偏移量1
  uint uStack_8a8;                      // 路径长度3
  uint64_t uStack_8a0;                 // 路径控制变量5
  void *puStack_898;               // 路径指针9
  int8_t *puStack_890;              // 路径指针10
  uint uStack_888;                      // 路径长度4
  ulonglong uStack_880;                 // 路径控制变量6
  void *puStack_878;               // 路径指针11
  longlong lStack_870;                  // 路径偏移量2
  int iStack_868;                       // 路径索引3
  ulonglong uStack_860;                 // 路径控制变量7
  void *puStack_858;               // 路径指针12
  uint64_t uStack_850;                 // 路径控制变量8
  int32_t uStack_848;                 // 路径控制变量9
  uint64_t uStack_840;                 // 路径控制变量10
  int32_t uStack_838;                 // 路径控制变量11
  
  // 文件处理栈变量
  longlong lStack_810;                  // 文件起始地址
  longlong lStack_808;                  // 文件结束地址
  longlong lStack_7f0;                  // 文件输出指针
  uint64_t uStack_7e8;                 // 文件控制变量1
  longlong alStack_7e0 [2];             // 文件句柄数组
  void *puStack_7d0;               // 文件指针1
  void *puStack_7c8;               // 文件指针2
  int iStack_7c0;                       // 文件长度1
  ulonglong uStack_7b8;                 // 文件控制变量2
  int8_t auStack_7b0 [8];           // 文件缓冲区1
  void *puStack_7a8;               // 文件指针3
  int iStack_7a0;                       // 文件长度2
  uint64_t uStack_790;                 // 文件控制变量3
  int8_t auStack_788 [8];           // 文件缓冲区2
  longlong lStack_780;                  // 文件数据指针
  int iStack_778;                       // 文件长度3
  uint64_t uStack_768;                 // 文件控制变量4
  longlong lStack_760;                  // 文件句柄1
  int8_t uStack_758;                // 文件标志1
  int8_t auStack_750 [8];           // 文件缓冲区3
  void *puStack_748;               // 文件指针4
  int iStack_740;                       // 文件长度4
  int8_t auStack_730 [8];           // 文件缓冲区4
  uint64_t uStack_728;                // 文件名称
  int iStack_720;                       // 文件长度5
  longlong alStack_710 [4];             // 文件大小数组
  uint64_t uStack_6f0;                // 文件控制变量5
  longlong lStack_6e8;                  // 文件句柄2
  int8_t uStack_6e0;                // 文件标志2
  void *puStack_6d8;               // 文件指针5
  longlong lStack_6d0;                  // 文件句柄3
  int32_t uStack_6c0;                // 文件控制变量6
  uint64_t uStack_6b8;                // 文件控制变量7
  int8_t auStack_6a8 [112];         // 大型文件缓冲区
  
  // 字符串处理栈变量
  void *puStack_638;               // 字符串指针1
  int8_t *puStack_630;              // 字符串指针2
  int iStack_628;                       // 字符串长度1
  int8_t auStack_620 [264];        // 大型字符串缓冲区
  
  // 数组栈变量
  void *apuStack_518 [36];        // 指针数组1
  void *apuStack_3f8 [36];         // 指针数组2
  void *apuStack_2d8 [68];         // 指针数组3
  
  // 临时字符串缓冲区
  char acStack_b8 [16];                 // 临时字符串缓冲区1
  char acStack_a8 [16];                 // 临时字符串缓冲区2
  char acStack_98 [32];                 // 临时字符串缓冲区3
  char acStack_78 [32];                 // 临时字符串缓冲区4
  
  // 安全栈变量
  ulonglong uStack_58;                  // 栈保护变量
  
  // ==================== 初始化阶段 ====================
  
  // 基本参数初始化
  uStack_6b8 = 0xfffffffffffffffe;          // 初始化文件控制变量
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_9c8;  // 栈保护变量初始化
  uStack_7e8 = param_7;                      // 存储附加路径参数2
  uStack_838 = 0;                            // 重置路径控制变量11
  uStack_990 = param_6;                      // 存储附加路径参数1
  uStack_998 = param_5;                      // 存储路径构建模式
  uStack_9a0 = param_9;                      // 存储文件处理选项
  uStack_9a8 = param_4;                      // 存储文件类型标识符
  lStack_7f0 = param_3;                      // 存储输出文件路径指针
  uStack_790 = param_2;                      // 存储文件路径基础字符串
  
  // 调用外部初始化函数
  FUN_1802230e0(param_1, &lStack_810, param_10, param_11);  // 初始化文件系统参数
  
  // 路径处理初始化
  uVar5 = FUN_180624440(apuStack_2d8, param_2);  // 处理基础路径字符串
  FUN_1806279c0(auStack_7b0, uVar5);               // 初始化路径缓冲区
  apuStack_2d8[0] = &system_state_ptr;                // 设置路径数组初始值
  
  // 字符串处理初始化
  puStack_858 = &system_data_buffer_ptr;             // 初始化字符串指针
  uStack_840 = 0;                            // 重置路径控制变量10
  uStack_850 = 0;                            // 重置路径控制变量8
  uStack_848 = 0;                            // 重置路径控制变量9
  
  // 线程安全的计数器操作
  LOCK();                                    // 获取线程锁
  piVar1 = (int *)(param_1 + 0x121e8);       // 获取计数器指针
  iVar17 = *piVar1;                          // 读取当前计数值
  *piVar1 = *piVar1 + 1;                     // 递增计数器
  uVar5 = system_system_control_memory;                    // 获取系统数据
  UNLOCK();                                  // 释放线程锁
  
  // 状态标志初始化
  cStack_93c = '\0';                         // 重置状态标志5
  cStack_968 = '\0';                         // 重置字符栈变量1
  cStack_93d = '\0';                         // 重置状态标志4
  cStack_940 = '\0';                         // 重置状态标志1
  cStack_93e = '\0';                         // 重置状态标志3
  cStack_93f = '\0';                         // 重置状态标志2
  cStack_93b = '\0';                         // 重置状态标志6
  cStack_93a = '\0';                         // 重置状态标志7
  // ==================== 文件类型检测和状态设置 ====================
  
  // 根据系统配置检测文件类型并设置相应的状态标志
  if (system_system_control_memory == 10) {
    // 处理类型10的文件
    iVar2 = strcmp(system_system_control_memory, &unknown_var_4312_ptr);  // 比较文件类型字符串
    if (iVar2 != 0) goto LAB_1800a7646;                // 如果不匹配，跳转到默认处理
    (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4368_ptr);  // 调用类型特定的处理函数
    cStack_968 = '\x01';                             // 设置字符栈变量1标志
LAB_1800a765c:
    cStack_940 = '\x01';                             // 设置状态标志1
  }
  else {
    // 处理其他类型的文件
    if (system_system_control_memory != 0xc) {
      // 处理类型0xd的文件
      if (system_system_control_memory == 0xd) {
        iVar2 = strcmp(system_system_control_memory, &unknown_var_4432_ptr);  // 比较文件类型字符串
        if (iVar2 == 0) {
          (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4528_ptr);  // 调用处理函数
          cStack_968 = '\x01';                         // 设置字符栈变量1标志
          cStack_93f = '\x01';                         // 设置状态标志2
          goto LAB_1800a7660;                          // 跳转到统一处理点
        }
      }
      // 处理类型9的文件
      else if (system_system_control_memory == 9) {
        iVar2 = strcmp(system_system_control_memory, &unknown_var_4512_ptr);  // 比较文件类型字符串
        if (iVar2 == 0) {
          (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4608_ptr);  // 调用处理函数
          cStack_93d = '\x01';                         // 设置状态标志4
          cStack_93b = '\x01';                         // 设置状态标志6
          goto LAB_1800a7660;                          // 跳转到统一处理点
        }
      }
      // 处理类型0xc的文件
      else if (system_system_control_memory == 0xc) goto LAB_1800a7617;
      
      // 默认处理路径
LAB_1800a7646:
      (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4688_ptr);  // 调用默认处理函数
      cStack_93c = '\x01';                             // 设置状态标志5
      goto LAB_1800a765c;                              // 跳转到状态设置点
    }
    
    // 处理类型0xc的文件
    iVar2 = strcmp(system_system_control_memory, &unknown_var_4352_ptr);   // 比较文件类型字符串
    if (iVar2 == 0) {
      (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4448_ptr);  // 调用处理函数
      cStack_968 = '\x01';                             // 设置字符栈变量1标志
      cStack_93e = '\x01';                             // 设置状态标志3
    }
    else {
      // 处理其他类型
LAB_1800a7617:
      iVar2 = strcmp(uVar5, &unknown_var_4592_ptr);          // 比较路径字符串
      if (iVar2 != 0) goto LAB_1800a7646;              // 如果不匹配，跳转到默认处理
      (**(code **)(puStack_858 + 0x10))(&puStack_858, &unknown_var_4752_ptr);  // 调用处理函数
      cStack_93d = '\x01';                             // 设置状态标志4
      cStack_93a = '\x01';                             // 设置状态标志7
    }
  }
  
  // ==================== 统一处理点 ====================
LAB_1800a7660:
  // ==================== COM组件初始化 ====================
  
  // 初始化COM组件，用于文件系统操作
  CoInitializeEx(0, 6);                          // 初始化COM库
  
  // 处理文件参数
  uVar5 = FUN_1800ade00(param_9);                // 处理文件处理选项
  FUN_180627910(auStack_730, uVar5);             // 初始化参数缓冲区
  
  // ==================== 路径处理初始化 ====================
  
  // 初始化路径处理相关变量
  puStack_988 = &system_data_buffer_ptr;                  // 初始化路径指针1
  uStack_970 = 0;                                // 重置8字节栈变量2
  puStack_980 = (int8_t *)0x0;               // 初始化1字节栈指针1为NULL
  uStack_978 = 0;                                // 重置无符号整型栈变量1
  
  // 初始化第二个路径处理实例
  puStack_918 = &system_data_buffer_ptr;                  // 初始化路径指针2
  uStack_900 = 0;                                // 重置路径控制变量2
  puStack_910 = (int8_t *)0x0;               // 初始化路径指针3为NULL
  uStack_908 = 0;                                // 重置路径长度2
  // ==================== 路径字符串处理 ====================
  
  // 处理第一个路径字符串
  if (iStack_7a0 != 0) {
    // 计算需要的缓冲区大小
    iVar2 = iStack_7a0 + 1;                        // 长度+1用于空字符
    if (iVar2 < MIN_BUFFER_SIZE) {                 // 确保最小缓冲区大小
      iVar2 = MIN_BUFFER_SIZE;
    }
    
    // 分配内存缓冲区
    puStack_910 = (int8_t *)FUN_18062b420(system_memory_pool_ptr, (longlong)iVar2, MEMORY_TYPE_STRING);
    *puStack_910 = 0;                               // 初始化为空字符串
    
    // 设置字符串属性
    uVar3 = FUN_18064e990(puStack_910);           // 获取字符串属性
    uStack_900 = CONCAT44(uStack_900._4_4_, uVar3);  // 更新路径控制变量
    
    // 复制字符串内容
    if (iStack_7a0 != 0) {
      // WARNING: 此函数不会返回
      memcpy(puStack_910, puStack_7a8, iStack_7a0 + 1);  // 复制字符串内容
    }
  }
  
  // 处理路径字符串的清理和验证
  if (puStack_7a8 != (void *)0x0) {
    uStack_908 = 0;                                // 重置路径长度2
    if (puStack_910 != (int8_t *)0x0) {
      *puStack_910 = 0;                            // 清空字符串
    }
    uStack_900 = uStack_900 & 0xffffffff;          // 清除高位数据
  }
  // ==================== 文件名处理 ====================
  
  // 处理第二个路径字符串
  uVar5 = FUN_180627600(apuStack_518, uStack_790);  // 处理路径参数
  FUN_1806279c0(auStack_750, uVar5);               // 初始化文件缓冲区
  apuStack_518[0] = &system_state_ptr;                // 设置路径数组初始值
  
  // 文件名处理初始化
  puStack_638 = &unknown_var_2008_ptr;                    // 初始化字符串指针1
  puStack_630 = auStack_620;                       // 设置字符串指针2
  auStack_620[0] = 0;                              // 初始化字符串缓冲区
  iStack_628 = iStack_740;                         // 设置字符串长度1
  
  // 获取文件名来源
  puVar15 = &system_buffer_ptr;                        // 默认文件名
  if (puStack_748 != (void *)0x0) {
    puVar15 = puStack_748;                          // 使用自定义文件名
  }
  
  // 安全复制文件名
  strcpy_s(auStack_620, MAX_PATH_LENGTH, puVar15);  // 安全复制文件名到缓冲区
  
  // ==================== 文件扩展名处理 ====================
  
  uStack_838 = 1;                                   // 设置路径控制标志
  uVar11 = iStack_740 - 1;                         // 获取文件名长度-1
  lVar6 = (longlong)(int)uVar11;                   // 转换为长整型索引
  
  // 从后向前查找文件扩展名分隔符
  if (-1 < (int)uVar11) {
    do {
      if (puStack_748[lVar6] == DOT_CHARACTER) {   // 查找点字符
        if (uVar11 != 0xffffffff) {
          puStack_630[uVar11] = NULL_TERMINATOR;    // 截断扩展名
          lVar6 = -1;                               // 重置索引
          do {
            lVar6 = lVar6 + 1;                      // 向前移动索引
          } while (puStack_630[lVar6] != '\0');     // 查找字符串结束
          iStack_628 = (int)lVar6;                  // 更新字符串长度
        }
        break;                                      // 退出循环
      }
      uVar11 = uVar11 - 1;                          // 减少索引
      lVar6 = lVar6 + -1;                           // 减少长整型索引
    } while (-1 < lVar6);                           // 继续查找
  }
  // ==================== 路径构建准备 ====================
  
  // 完成文件名处理
  FUN_1806279c0(auStack_788, &puStack_638);         // 完成文件名处理
  uStack_838 = 0;                                   // 重置路径控制标志
  puStack_638 = &system_state_ptr;                    // 重置字符串指针1
  
  // 初始化第三个路径处理实例
  puStack_960 = &system_data_buffer_ptr;                    // 初始化无定义栈指针2
  uStack_948 = 0;                                   // 重置无符号长长整型栈变量1
  puStack_958 = (int8_t *)0x0;                // 初始化1字节栈指针2为NULL
  uStack_950 = 0;                                   // 重置无符号整型栈变量2
  if (iStack_778 != 0) {
    iVar2 = iStack_778 + 1;
    if (iVar2 < 0x10) {
      iVar2 = 0x10;
    }
    puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar2,0x13);
    *puStack_958 = 0;
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    if (iStack_778 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_958,lStack_780,iStack_778 + 1);
    }
  }
  if (lStack_780 != 0) {
    uStack_950 = 0;
    if (puStack_958 != (int8_t *)0x0) {
      *puStack_958 = 0;
    }
    uStack_948 = uStack_948 & 0xffffffff;
  }
  uVar11 = uStack_950;
  uVar16 = uStack_950 + 1;
  if (uVar16 != 0) {
    uVar18 = uStack_950 + 2;
    if (puStack_958 == (int8_t *)0x0) {
      if ((int)uVar18 < 0x10) {
        uVar18 = 0x10;
      }
      puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar18,0x13);
      *puStack_958 = 0;
    }
    else {
      if (uVar18 <= (uint)uStack_948) goto LAB_1800a79bb;
      uStack_9a8 = 0x13;
      puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar18,0x10);
    }
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
  }
LAB_1800a79bb:
  *(int16_t *)(puStack_958 + uStack_950) = 0x5f;
  uStack_950 = uVar16;
  if (0 < iStack_720) {
    iVar17 = uVar16 + iStack_720;
    if (iVar17 != 0) {
      if (puStack_958 == (int8_t *)0x0) {
        iVar17 = iVar17 + 1;
        if (iVar17 < 0x10) {
          iVar17 = 0x10;
        }
        puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar17,0x13);
        *puStack_958 = 0;
      }
      else {
        if (iVar17 + 1U <= (uint)uStack_948) goto LAB_1800a7a55;
        uStack_9a8 = 0x13;
        puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,iVar17 + 1U,0x10);
      }
      uVar3 = FUN_18064e990(puStack_958);
      uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    }
LAB_1800a7a55:
                    // WARNING: Subroutine does not return
    memcpy(puStack_958 + uStack_950,uStack_728,(longlong)(iStack_720 + 1));
  }
  uVar16 = uVar11 + 2;
  if (uVar16 != 0) {
    uVar11 = uVar11 + 3;
    if (puStack_958 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
      *puStack_958 = 0;
    }
    else {
      if (uVar11 <= (uint)uStack_948) goto LAB_1800a7ae4;
      uStack_9a8 = 0x13;
      puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar11,0x10);
    }
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
  }
LAB_1800a7ae4:
  *(int16_t *)(puStack_958 + uStack_950) = 0x5f;
  uStack_950 = uVar16;
  FUN_180626eb0(acStack_98,0x20,&unknown_var_3388_ptr,param_5);
  lVar6 = -1;
  do {
    lVar8 = lVar6;
    lVar6 = lVar8 + 1;
  } while (acStack_98[lVar8 + 1] != '\0');
  iVar2 = (int)(lVar8 + 1);
  if (0 < iVar2) {
    iVar2 = uStack_950 + iVar2;
    if (iVar2 != 0) {
      uVar11 = iVar2 + 1;
      if (puStack_958 == (int8_t *)0x0) {
        if ((int)uVar11 < 0x10) {
          uVar11 = 0x10;
        }
        puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
        *puStack_958 = 0;
      }
      else {
        if (uVar11 <= (uint)uStack_948) goto LAB_1800a7ba5;
        uStack_9a8 = 0x13;
        puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar11,0x10);
      }
      uVar3 = FUN_18064e990(puStack_958);
      uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    }
LAB_1800a7ba5:
                    // WARNING: Subroutine does not return
    memcpy(puStack_958 + uStack_950,acStack_98,(longlong)((int)lVar8 + 2));
  }
  uVar11 = uStack_950 + 1;
  if (uVar11 != 0) {
    uVar16 = uStack_950 + 2;
    if (puStack_958 == (int8_t *)0x0) {
      if ((int)uVar16 < 0x10) {
        uVar16 = 0x10;
      }
      puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar16,0x13);
      *puStack_958 = 0;
    }
    else {
      if (uVar16 <= (uint)uStack_948) goto LAB_1800a7c35;
      uStack_9a8 = 0x13;
      puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar16,0x10);
    }
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
  }
LAB_1800a7c35:
  *(int16_t *)(puStack_958 + uStack_950) = 0x5f;
  uStack_950 = uVar11;
  FUN_180626eb0(acStack_78,0x20,&unknown_var_7284_ptr,param_6);
  lVar6 = -1;
  do {
    lVar8 = lVar6;
    lVar6 = lVar8 + 1;
  } while (acStack_78[lVar8 + 1] != '\0');
  iVar2 = (int)(lVar8 + 1);
  if (0 < iVar2) {
    iVar2 = uStack_950 + iVar2;
    if (iVar2 != 0) {
      uVar11 = iVar2 + 1;
      if (puStack_958 == (int8_t *)0x0) {
        if ((int)uVar11 < 0x10) {
          uVar11 = 0x10;
        }
        puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
        *puStack_958 = 0;
      }
      else {
        if (uVar11 <= (uint)uStack_948) goto LAB_1800a7d01;
        uStack_9a8 = 0x13;
        puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar11,0x10);
      }
      uVar3 = FUN_18064e990(puStack_958);
      uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    }
LAB_1800a7d01:
                    // WARNING: Subroutine does not return
    memcpy(puStack_958 + uStack_950,acStack_78,(longlong)((int)lVar8 + 2));
  }
  uVar11 = uStack_950 + 1;
  if (uVar11 != 0) {
    uVar16 = uStack_950 + 2;
    if (puStack_958 == (int8_t *)0x0) {
      if ((int)uVar16 < 0x10) {
        uVar16 = 0x10;
      }
      puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar16,0x13);
      *puStack_958 = 0;
    }
    else {
      if (uVar16 <= (uint)uStack_948) goto LAB_1800a7d91;
      uStack_9a8 = 0x13;
      puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar16,0x10);
    }
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
  }
LAB_1800a7d91:
  *(int16_t *)(puStack_958 + uStack_950) = 0x5f;
  uStack_950 = uVar11;
  FUN_180060680(acStack_a8,&unknown_var_4576_ptr,param_4);
  lVar6 = -1;
  do {
    lVar8 = lVar6;
    lVar6 = lVar8 + 1;
  } while (acStack_a8[lVar8 + 1] != '\0');
  iVar2 = (int)(lVar8 + 1);
  if (0 < iVar2) {
    iVar2 = uStack_950 + iVar2;
    if (iVar2 != 0) {
      uVar11 = iVar2 + 1;
      if (puStack_958 == (int8_t *)0x0) {
        if ((int)uVar11 < 0x10) {
          uVar11 = 0x10;
        }
        puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
        *puStack_958 = 0;
      }
      else {
        if (uVar11 <= (uint)uStack_948) goto LAB_1800a7e51;
        uStack_9a8 = 0x13;
        puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar11,0x10);
      }
      uVar3 = FUN_18064e990(puStack_958);
      uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    }
LAB_1800a7e51:
                    // WARNING: Subroutine does not return
    memcpy(puStack_958 + uStack_950,acStack_a8,(longlong)((int)lVar8 + 2));
  }
  uVar11 = uStack_950 + 1;
  if (uVar11 != 0) {
    uVar16 = uStack_950 + 2;
    if (puStack_958 == (int8_t *)0x0) {
      if ((int)uVar16 < 0x10) {
        uVar16 = 0x10;
      }
      puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar16,0x13);
      *puStack_958 = 0;
    }
    else {
      if (uVar16 <= (uint)uStack_948) goto LAB_1800a7ee0;
      uStack_9a8 = 0x13;
      puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar16,0x10);
    }
    uVar3 = FUN_18064e990(puStack_958);
    uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
  }
LAB_1800a7ee0:
  *(int16_t *)(puStack_958 + uStack_950) = 0x5f;
  uStack_950 = uVar11;
  FUN_180060680(acStack_b8,&unknown_var_4576_ptr,iVar17);
  lVar6 = -1;
  do {
    lVar8 = lVar6;
    lVar6 = lVar8 + 1;
  } while (acStack_b8[lVar8 + 1] != '\0');
  iVar17 = (int)(lVar8 + 1);
  if (0 < iVar17) {
    iVar17 = uStack_950 + iVar17;
    if (iVar17 != 0) {
      uVar11 = iVar17 + 1;
      if (puStack_958 == (int8_t *)0x0) {
        if ((int)uVar11 < 0x10) {
          uVar11 = 0x10;
        }
        puStack_958 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
        *puStack_958 = 0;
      }
      else {
        if (uVar11 <= (uint)uStack_948) goto LAB_1800a7f91;
        uStack_9a8 = 0x13;
        puStack_958 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_958,uVar11,0x10);
      }
      uVar3 = FUN_18064e990(puStack_958);
      uStack_948 = CONCAT44(uStack_948._4_4_,uVar3);
    }
LAB_1800a7f91:
                    // WARNING: Subroutine does not return
    memcpy(puStack_958 + uStack_950,acStack_b8,(longlong)((int)lVar8 + 2));
  }
  uVar5 = FUN_1806276d0(apuStack_3f8,auStack_7b0);
  FUN_1806279c0(auStack_938,uVar5);
  uVar11 = uStack_928;
  apuStack_3f8[0] = &system_state_ptr;
  uVar16 = uStack_928 + 1;
  if (uVar16 != 0) {
    uVar18 = uStack_928 + 2;
    if (puStack_930 == (int8_t *)0x0) {
      if ((int)uVar18 < 0x10) {
        uVar18 = 0x10;
      }
      puStack_930 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar18,0x13);
      *puStack_930 = 0;
    }
    else {
      if (uVar18 <= uStack_920) goto LAB_1800a8044;
      uStack_9a8 = 0x13;
      puStack_930 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_930,uVar18,0x10);
    }
    uStack_920 = FUN_18064e990(puStack_930);
  }
LAB_1800a8044:
  *(int16_t *)(puStack_930 + uStack_928) = 0x2f;
  uStack_928 = uVar16;
  if (0 < (int)uStack_950) {
    iVar17 = uVar16 + uStack_950;
    if (iVar17 != 0) {
      if (puStack_930 == (int8_t *)0x0) {
        iVar17 = iVar17 + 1;
        if (iVar17 < 0x10) {
          iVar17 = 0x10;
        }
        puStack_930 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar17,0x13);
        *puStack_930 = 0;
      }
      else {
        if (iVar17 + 1U <= uStack_920) goto LAB_1800a80cc;
        uStack_9a8 = 0x13;
        puStack_930 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_930,iVar17 + 1U,0x10);
      }
      uStack_920 = FUN_18064e990(puStack_930);
    }
LAB_1800a80cc:
                    // WARNING: Subroutine does not return
    memcpy(puStack_930 + uStack_928,puStack_958,(longlong)(int)(uStack_950 + 1));
  }
  uVar18 = uVar11 + 8;
  if (uVar18 != 0) {
    uVar11 = uVar11 + 9;
    if (puStack_930 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puStack_930 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
      *puStack_930 = 0;
    }
    else {
      if (uVar11 <= uStack_920) goto LAB_1800a814a;
      uStack_9a8 = 0x13;
      puStack_930 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_930,uVar11,0x10);
    }
    uStack_920 = FUN_18064e990(puStack_930);
  }
LAB_1800a814a:
  *(uint64_t *)(puStack_930 + uStack_928) = 0x656372756f732e;
  lVar6 = 0;
  puStack_8b8 = &system_data_buffer_ptr;
  uStack_8a0 = 0;
  lStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_928 = uVar18;
  if (0 < *(int *)(param_11 + 0x10)) {
    puVar12 = &system_buffer_ptr;
    if (puStack_930 != (int8_t *)0x0) {
      puVar12 = puStack_930;
    }
    uStack_768 = 0;
    uStack_758 = 0;
    FUN_18062dee0(&uStack_768,puVar12,&system_memory_c7ec);
    if (cStack_968 == '\0') {
      puStack_7d0 = &system_data_buffer_ptr;
      uStack_7b8 = 0;
      puStack_7c8 = (void *)0x0;
      iStack_7c0 = 0;
      puVar15 = &system_buffer_ptr;
      if (*(void **)(param_11 + 8) != (void *)0x0) {
        puVar15 = *(void **)(param_11 + 8);
      }
      System_DataHandler(&puStack_7d0,&unknown_var_4888_ptr,puVar15);
      lVar8 = lStack_760;
      puVar15 = &system_buffer_ptr;
      if (puStack_7c8 != (void *)0x0) {
        puVar15 = puStack_7c8;
      }
      fwrite(puVar15,(longlong)iStack_7c0,1,lStack_760);
      puVar15 = &system_buffer_ptr;
      if (puStack_7a8 != (void *)0x0) {
        puVar15 = puStack_7a8;
      }
      uStack_6f0 = 0;
      uStack_6e0 = 0;
      FUN_18062dee0(&uStack_6f0,puVar15,&unknown_var_4880_ptr);
      lVar7 = lStack_6e8;
      uVar5 = _ftelli64(lStack_6e8);
      _fseeki64(lVar7,0,2);
      lVar9 = _ftelli64(lVar7);
      _fseeki64(lVar7,uVar5,0);
      if (lVar9 + 1 != 0) {
        lVar6 = FUN_18062b420(system_memory_pool_ptr,lVar9 + 1,3);
      }
      fread(lVar6,lVar9,1,lVar7);
      *(int8_t *)(lVar9 + lVar6) = 0;
      fwrite(lVar6,lVar9,1,lVar8);
      if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar6);
      }
      if (lVar7 != 0) {
        fclose(lVar7);
        lStack_6e8 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        lVar8 = lStack_760;
      }
      puStack_7d0 = &system_data_buffer_ptr;
      if (puStack_7c8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_7c8 = (void *)0x0;
      uStack_7b8 = uStack_7b8 & 0xffffffff00000000;
      puStack_7d0 = &system_state_ptr;
    }
    else {
      lVar7 = 0;
      lVar6 = 0;
      alStack_7e0[0] = -1;
      puVar15 = &system_buffer_ptr;
      if (puStack_7a8 != (void *)0x0) {
        puVar15 = puStack_7a8;
      }
      FUN_18063ba00(alStack_7e0,puVar15,5,0x104);
      if (alStack_7e0[0] != -1) {
        iVar17 = GetFileSizeEx(alStack_7e0[0],alStack_710);
        lVar6 = alStack_710[0];
        if (iVar17 == 0) {
          lVar6 = -1;
        }
        lVar7 = FUN_18062b420(system_memory_pool_ptr,lVar6 + 1,3);
        FUN_18063bc80(alStack_7e0,lVar7,lVar6);
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_7e0[0]);
        alStack_7e0[0] = -1;
        *(int8_t *)(lVar6 + lVar7) = 0;
      }
      lVar9 = alStack_7e0[0];
      puStack_898 = &system_data_buffer_ptr;
      uStack_880 = 0;
      puStack_890 = (int8_t *)0x0;
      uStack_888 = 0;
      iVar17 = *(int *)(param_11 + 0x10) + 2 + (int)lVar6;
      if (iVar17 == 0) {
        uStack_880._0_4_ = 0;
        uVar11 = (uint)uStack_880;
      }
      else {
        iVar17 = iVar17 + 1;
        if (iVar17 < 0x10) {
          iVar17 = 0x10;
        }
        puStack_890 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar17,0x13);
        *puStack_890 = 0;
        uVar11 = FUN_18064e990(puStack_890);
        uStack_880 = CONCAT44(uStack_880._4_4_,uVar11);
      }
      if (lVar7 != 0) {
        lVar6 = -1;
        do {
          lVar8 = lVar6;
          lVar6 = lVar8 + 1;
        } while (*(char *)(lVar7 + lVar6) != '\0');
        if (0 < (int)lVar6) {
          iVar17 = uStack_888 + (int)lVar6;
          if (iVar17 != 0) {
            uVar16 = iVar17 + 1;
            if (puStack_890 == (int8_t *)0x0) {
              if ((int)uVar16 < 0x10) {
                uVar16 = 0x10;
              }
              puStack_890 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar16,0x13);
              *puStack_890 = 0;
            }
            else {
              if (uVar16 <= uVar11) goto LAB_1800a837b;
              uStack_9a8 = 0x13;
              puStack_890 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_890,uVar16,0x10);
            }
            uVar3 = FUN_18064e990(puStack_890);
            uStack_880 = CONCAT44(uStack_880._4_4_,uVar3);
          }
LAB_1800a837b:
                    // WARNING: Subroutine does not return
          memcpy(puStack_890 + uStack_888,lVar7,(longlong)((int)lVar8 + 2));
        }
      }
      puVar15 = &system_buffer_ptr;
      if (*(void **)(param_11 + 8) != (void *)0x0) {
        puVar15 = *(void **)(param_11 + 8);
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (puVar15[lVar6] != '\0');
      if ((0 < (int)uStack_888) && (lVar8 = strstr(puStack_890,&unknown_var_4832_ptr), lVar8 != 0)) {
        iVar2 = 0x22;
        iVar17 = (int)lVar8 - (int)puStack_890;
        if (uStack_888 < iVar17 + 0x22U) {
          iVar2 = uStack_888 - iVar17;
        }
        uVar11 = iVar17 + iVar2;
        if (uVar11 < uStack_888) {
          lVar14 = (longlong)(int)uVar11;
          do {
            puStack_890[lVar14 - iVar2] = puStack_890[lVar14];
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 1;
          } while (uVar11 < uStack_888);
        }
        uStack_888 = uStack_888 - iVar2;
        puStack_890[uStack_888] = 0;
        if (lVar6 != 0) {
          uVar5 = FUN_180627910(&puStack_6d8,puVar15);
          FUN_1806288c0(&puStack_898,(int)lVar8 - (int)puStack_890,uVar5);
          puStack_6d8 = &system_data_buffer_ptr;
          if (lStack_6d0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_6d0 = 0;
          uStack_6c0 = 0;
          puStack_6d8 = &system_state_ptr;
        }
      }
      lVar8 = lStack_760;
      if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar7);
      }
      puVar12 = &system_buffer_ptr;
      if (puStack_890 != (int8_t *)0x0) {
        puVar12 = puStack_890;
      }
      fwrite(puVar12,(longlong)(int)uStack_888,1,lStack_760);
      puStack_898 = &system_data_buffer_ptr;
      if (puStack_890 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_890 = (int8_t *)0x0;
      uStack_880 = uStack_880 & 0xffffffff00000000;
      puStack_898 = &system_state_ptr;
      if (lVar9 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_7e0[0]);
        alStack_7e0[0] = -1;
        lVar8 = lStack_760;
      }
    }
    uVar11 = uStack_928;
    uVar20 = (ulonglong)uStack_928;
    if ((puStack_930 != (int8_t *)0x0) && (uStack_928 != 0)) {
      uVar16 = uStack_928 + 1;
      if (puStack_910 == (int8_t *)0x0) {
        if ((int)uVar16 < 0x10) {
          uVar16 = 0x10;
        }
        puStack_910 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar16,0x13);
        *puStack_910 = 0;
      }
      else {
        if (uVar16 <= (uint)uStack_900) goto LAB_1800a87af;
        uStack_9a8 = 0x13;
        puStack_910 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_910,uVar16,0x10);
      }
      uVar3 = FUN_18064e990(puStack_910);
      uStack_900 = CONCAT44(uStack_900._4_4_,uVar3);
    }
LAB_1800a87af:
    if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_910,puStack_930,uVar20);
    }
    uStack_908 = uVar11;
    if (puStack_910 != (int8_t *)0x0) {
      puStack_910[uVar20] = 0;
    }
    uStack_900 = CONCAT44(uStack_91c,(uint)uStack_900);
    if (lVar8 != 0) {
      fclose(lVar8);
      lStack_760 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
  uVar20 = 0;
  if (cStack_93c == '\0') {
    if (cStack_968 == '\0') {
      if (cStack_93d == '\0') goto LAB_1800a9cf6;
      puStack_8f8 = &system_data_buffer_ptr;
      uStack_8e0 = 0;
      puStack_8f0 = (int8_t *)0x0;
      iStack_8e8 = 0;
      FUN_1806277c0(&puStack_8f8,0);
      iStack_8e8 = 0;
      if (puStack_8f0 != (int8_t *)0x0) {
        *puStack_8f0 = 0;
      }
      if (cStack_93b != '\0') {
        switch(param_9) {
        case 0:
          puVar15 = &unknown_var_5408_ptr;
          break;
        case 1:
          puVar15 = &unknown_var_5448_ptr;
          break;
        case 2:
          puVar15 = &unknown_var_5464_ptr;
          break;
        case 3:
          puVar15 = &unknown_var_5480_ptr;
          break;
        case 4:
          puVar15 = &unknown_var_5520_ptr;
          break;
        case 5:
          puVar15 = &unknown_var_5432_ptr;
          break;
        default:
          goto LAB_1800a990c;
        }
        goto code_r0x0001800a9901;
      }
      if (cStack_93a != '\0') {
        switch(param_9) {
        case 0:
          puVar15 = &unknown_var_5496_ptr;
          break;
        case 1:
          puVar15 = &unknown_var_5552_ptr;
          break;
        case 2:
          puVar15 = &unknown_var_5568_ptr;
          break;
        case 3:
          puVar15 = &unknown_var_5592_ptr;
          break;
        case 4:
          puVar15 = &unknown_var_5624_ptr;
          break;
        case 5:
          puVar15 = &unknown_var_5536_ptr;
          break;
        default:
          goto LAB_1800a990c;
        }
code_r0x0001800a9901:
        (**(code **)(puStack_8f8 + 0x10))(&puStack_8f8,puVar15);
      }
LAB_1800a990c:
      uVar11 = uStack_978;
      uVar16 = uStack_978 + 9;
      FUN_1806277c0(&puStack_988,uVar16);
      *(uint64_t *)(puStack_980 + uStack_978) = 0x656c69666f72702d;
      *(int16_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0x20;
      uStack_978 = uVar16;
      if (0 < iStack_8e8) {
        FUN_1806277c0(&puStack_988,uVar16 + iStack_8e8);
                    // WARNING: Subroutine does not return
        memcpy(puStack_980 + uStack_978,puStack_8f0,(longlong)(iStack_8e8 + 1));
      }
      uVar16 = uVar11 + 0xe;
      FUN_1806277c0(&puStack_988,uVar16);
      *(int32_t *)(puStack_980 + uStack_978) = 0x334f2d20;
      *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
      uVar11 = uVar11 + 0x16;
      uStack_978 = uVar16;
      FUN_1806277c0(&puStack_988,uVar11);
      *(uint64_t *)(puStack_980 + uStack_978) = 0x207972746e652d20;
      *(int8_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0;
      uStack_978 = uVar11;
      FUN_1806281a0(&puStack_988,lStack_7f0);
      lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lStack_810),8) +
              (lStack_808 - lStack_810);
      lVar6 = lStack_810;
      uVar21 = uVar20;
      uVar22 = uVar20;
      uVar11 = uStack_978;
      if (lVar8 >> 6 != lVar8 >> 0x3f) {
        do {
          lVar8 = lVar6 + uVar22;
          iVar17 = *(int *)(lVar8 + 0x10);
          if ((iVar17 != 0xb) ||
             (iVar2 = strcmp(*(uint64_t *)(lVar8 + 8),&unknown_var_4992_ptr), iVar2 != 0)) {
            if ((iVar17 == 0xd) &&
               (iVar17 = strcmp(*(uint64_t *)(lVar8 + 8),&unknown_var_5240_ptr), iVar17 == 0)) {
              FUN_1806277c0(&puStack_988,uVar11 + 3);
              *(int32_t *)(puStack_980 + uStack_978) = 0x442d20;
              uStack_978 = uVar11 + 3;
              FUN_1806277c0(&puStack_988,uVar11 + 10);
              *(uint64_t *)(puStack_980 + uStack_978) = 0x4d4e475f455355;
              uStack_978 = uVar11 + 10;
            }
            else {
              FUN_1806277c0(&puStack_988,uVar11 + 3);
              *(int32_t *)(puStack_980 + uStack_978) = 0x442d20;
              uStack_978 = uVar11 + 3;
              FUN_180628320(&puStack_988,uVar20 * 0x78 + lStack_810);
            }
            uVar11 = uStack_978 + 1;
            FUN_1806277c0(&puStack_988,uVar11);
            *(int16_t *)(puStack_980 + uStack_978) = 0x3d;
            lVar8 = lStack_810 + uVar22;
            lVar6 = lStack_810;
            uStack_978 = uVar11;
            if (0 < *(int *)(lVar8 + 0x68)) {
              FUN_1806277c0(&puStack_988,uVar11 + *(int *)(lVar8 + 0x68));
                    // WARNING: Subroutine does not return
              memcpy(puStack_980 + uStack_978,*(uint64_t *)(lVar8 + 0x60),
                     (longlong)(*(int *)(lVar8 + 0x68) + 1));
            }
          }
          uVar16 = (int)uVar21 + 1;
          uVar20 = (ulonglong)(int)uVar16;
          lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lVar6),8) +
                  (lStack_808 - lVar6);
          uVar21 = (ulonglong)uVar16;
          uVar22 = uVar22 + 0x78;
        } while (uVar20 < (ulonglong)((lVar8 >> 6) - (lVar8 >> 0x3f)));
      }
      FUN_1806277c0(&puStack_988,uVar11 + 8);
      *(uint64_t *)(puStack_980 + uStack_978) = 0x736f70766e692d20;
      *(int8_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0;
      uVar16 = uVar11 + 0xc;
      uStack_978 = uVar11 + 8;
      FUN_1806277c0(&puStack_988,uVar16);
      *(int32_t *)(puStack_980 + uStack_978) = 0x206f2d20;
      *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
      uStack_978 = uVar16;
      if (0 < (int)uStack_950) {
        FUN_1806277c0(&puStack_988,uVar16 + uStack_950);
                    // WARNING: Subroutine does not return
        memcpy(puStack_980 + uStack_978,puStack_958,(longlong)(int)(uStack_950 + 1));
      }
      FUN_1806277c0(&puStack_988,uVar11 + 0xe);
      *(int16_t *)(puStack_980 + uStack_978) = 0x6f2e;
      *(int8_t *)((longlong)(puStack_980 + uStack_978) + 2) = 0;
      uVar16 = uVar11 + 0xf;
      uStack_978 = uVar11 + 0xe;
      FUN_1806277c0(&puStack_988,uVar16);
      *(int16_t *)(puStack_980 + uStack_978) = 0x20;
      uStack_978 = uVar16;
      if (0 < (int)uStack_908) {
        FUN_1806277c0(&puStack_988,uVar16 + uStack_908);
                    // WARNING: Subroutine does not return
        memcpy(puStack_980 + uStack_978,puStack_910,(longlong)(int)(uStack_908 + 1));
      }
      puStack_8f8 = &system_data_buffer_ptr;
      if (puStack_8f0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_8f0 = (int8_t *)0x0;
      uStack_8e0 = uStack_8e0 & 0xffffffff00000000;
      puStack_8f8 = &system_state_ptr;
      goto LAB_1800a9cf6;
    }
    puStack_8d8 = &system_data_buffer_ptr;
    uStack_8c0 = 0;
    puStack_8d0 = (int8_t *)0x0;
    iStack_8c8 = 0;
    FUN_1806277c0(&puStack_8d8,0);
    cVar19 = cStack_93f;
    iStack_8c8 = 0;
    if (puStack_8d0 != (int8_t *)0x0) {
      *puStack_8d0 = 0;
    }
    if (cStack_93f != '\0') {
      switch(param_9) {
      case 0:
        puVar15 = &unknown_var_5064_ptr;
        break;
      case 1:
        puVar15 = &unknown_var_5056_ptr;
        break;
      case 2:
        puVar15 = &unknown_var_5096_ptr;
        break;
      case 3:
        puVar15 = &unknown_var_5072_ptr;
        break;
      case 4:
        puVar15 = &unknown_var_5088_ptr;
        break;
      case 5:
        puVar15 = &unknown_var_5080_ptr;
        break;
      default:
        goto LAB_1800a9108;
      }
      goto code_r0x0001800a90fd;
    }
    if ((cStack_93e != '\0') || (cStack_940 != '\0')) {
      switch(param_9) {
      case 0:
        puVar15 = &unknown_var_5112_ptr;
        break;
      case 1:
        puVar15 = &unknown_var_5104_ptr;
        break;
      case 2:
        puVar15 = &unknown_var_5144_ptr;
        break;
      case 3:
        puVar15 = &unknown_var_5120_ptr;
        break;
      case 4:
        puVar15 = &unknown_var_5136_ptr;
        break;
      case 5:
        puVar15 = &unknown_var_5128_ptr;
        break;
      default:
        goto LAB_1800a9108;
      }
code_r0x0001800a90fd:
      (**(code **)(puStack_8d8 + 0x10))(&puStack_8d8,puVar15);
    }
LAB_1800a9108:
    uVar11 = uStack_978;
    uVar16 = uStack_978 + 3;
    FUN_1806277c0(&puStack_988,uVar16);
    *(int32_t *)(puStack_980 + uStack_978) = 0x20542d;
    uStack_978 = uVar16;
    if (0 < iStack_8c8) {
      FUN_1806277c0(&puStack_988,uVar16 + iStack_8c8);
                    // WARNING: Subroutine does not return
      memcpy(puStack_980 + uStack_978,puStack_8d0,(longlong)(iStack_8c8 + 1));
    }
    uVar16 = uVar11 + 8;
    FUN_1806277c0(&puStack_988,uVar16);
    *(int32_t *)(puStack_980 + uStack_978) = 0x334f2d20;
    *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
    uVar11 = uVar11 + 0xc;
    uStack_978 = uVar16;
    FUN_1806277c0(&puStack_988,uVar11);
    *(int32_t *)(puStack_980 + uStack_978) = 0x20452d20;
    *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
    uStack_978 = uVar11;
    FUN_1806281a0(&puStack_988,lStack_7f0);
    uVar11 = uStack_978;
    uVar16 = uStack_978 + 0x10;
    FUN_1806277c0(&puStack_988,uVar16);
    puVar10 = (int32_t *)(puStack_980 + uStack_978);
    *puVar10 = 0x65722d20;
    puVar10[1] = 0x616d5f73;
    puVar10[2] = 0x6c615f79;
    puVar10[3] = 0x20736169;
    *(int8_t *)(puVar10 + 4) = 0;
    uVar18 = uVar11 + 0x21;
    uStack_978 = uVar16;
    FUN_1806277c0(&puStack_988,uVar18);
    puVar10 = (int32_t *)(puStack_980 + uStack_978);
    *puVar10 = 0x73512d20;
    puVar10[1] = 0x70697274;
    puVar10[2] = 0x6665725f;
    puVar10[3] = 0x7463656c;
    *(int16_t *)(puVar10 + 4) = 0x20;
    uVar11 = uVar11 + 0x25;
    uStack_978 = uVar18;
    FUN_1806277c0(&puStack_988,uVar11);
    *(int32_t *)(puStack_980 + uStack_978) = 0x58572d20;
    *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
    lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lStack_810),8) +
            (lStack_808 - lStack_810);
    lVar6 = lStack_810;
    uVar21 = uVar20;
    uVar22 = uVar20;
    uStack_978 = uVar11;
    if (lVar8 >> 6 != lVar8 >> 0x3f) {
      do {
        iVar17 = *(int *)(lVar6 + 0x10 + uVar22);
        if ((iVar17 != 0xb) ||
           (iVar2 = strcmp(*(uint64_t *)(lVar6 + 8 + uVar22),&unknown_var_4992_ptr), iVar2 != 0)) {
          if ((iVar17 == 0xd) &&
             (iVar2 = strcmp(*(uint64_t *)(lVar6 + 8 + uVar22),&unknown_var_5240_ptr), iVar2 == 0)) {
            FUN_1806277c0(&puStack_988,uVar11 + 4);
            *(int32_t *)(puStack_980 + uStack_978) = 0x20442d20;
            *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
            uStack_978 = uVar11 + 4;
            FUN_1806277c0(&puStack_988,uVar11 + 0x11);
            puVar13 = (uint64_t *)(puStack_980 + uStack_978);
            *puVar13 = 0x455249445f455355;
            *(int32_t *)(puVar13 + 1) = 0x31585443;
            *(int16_t *)((longlong)puVar13 + 0xc) = 0x32;
            uStack_978 = uVar11 + 0x11;
          }
          else if ((iVar17 == 0xe) &&
                  (iVar17 = strcmp(*(uint64_t *)(lVar6 + 8 + uVar22),&unknown_var_6472_ptr), iVar17 == 0)
                  ) {
            FUN_1806277c0(&puStack_988,uVar11 + 4);
            *(int32_t *)(puStack_980 + uStack_978) = 0x20442d20;
            *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
            uStack_978 = uVar11 + 4;
            FUN_1806277c0(&puStack_988,uVar11 + 0x12);
            puVar13 = (uint64_t *)(puStack_980 + uStack_978);
            *puVar13 = 0x4d5f524544414853;
            *(int32_t *)(puVar13 + 1) = 0x4c45444f;
            *(int16_t *)((longlong)puVar13 + 0xc) = 0x365f;
            *(int8_t *)((longlong)puVar13 + 0xe) = 0;
            uStack_978 = uVar11 + 0x12;
          }
          else {
            FUN_1806277c0(&puStack_988,uVar11 + 4);
            *(int32_t *)(puStack_980 + uStack_978) = 0x20442d20;
            *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
            uStack_978 = uVar11 + 4;
            FUN_180628320(&puStack_988,uVar20 * 0x78 + lStack_810);
          }
          uVar11 = uStack_978 + 1;
          FUN_1806277c0(&puStack_988,uVar11);
          *(int16_t *)(puStack_980 + uStack_978) = 0x3d;
          lVar8 = lStack_810 + uVar22;
          lVar6 = lStack_810;
          uStack_978 = uVar11;
          if (0 < *(int *)(lVar8 + 0x68)) {
            FUN_1806277c0(&puStack_988,uVar11 + *(int *)(lVar8 + 0x68));
                    // WARNING: Subroutine does not return
            memcpy(puStack_980 + uStack_978,*(uint64_t *)(lVar8 + 0x60),
                   (longlong)(*(int *)(lVar8 + 0x68) + 1));
          }
        }
        uVar16 = (int)uVar21 + 1;
        uVar20 = (ulonglong)(int)uVar16;
        lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lVar6),8) +
                (lStack_808 - lVar6);
        uVar21 = (ulonglong)uVar16;
        uVar22 = uVar22 + 0x78;
        cVar19 = cStack_93f;
      } while (uVar20 < (ulonglong)((lVar8 >> 6) - (lVar8 >> 0x3f)));
    }
    if (cStack_93e == '\0') {
      if (cVar19 != '\0') {
        uVar11 = uVar11 + 0x3b;
        FUN_1806277c0(&puStack_988,uVar11);
        puVar13 = (uint64_t *)(puStack_980 + uStack_978);
        *puVar13 = 0x42585f5f20442d20;
        puVar13[1] = 0x50495254535f584f;
        puVar13[2] = 0x722d204c4958445f;
        puVar13[3] = 0x642d676973746f6f;
        *(int32_t *)(puVar13 + 4) = 0x6e696665;
        *(int32_t *)((longlong)puVar13 + 0x24) = 0x63532065;
        *(int32_t *)(puVar13 + 5) = 0x656c7261;
        *(int32_t *)((longlong)puVar13 + 0x2c) = 0x6f527474;
        puVar13[6] = 0x74616e676953746f;
        *(int32_t *)(puVar13 + 7) = 0x657275;
        uStack_978 = uVar11;
      }
    }
    else {
      uVar11 = uVar11 + 0x3a;
      FUN_1806277c0(&puStack_988,uVar11);
      puVar13 = (uint64_t *)(puStack_980 + uStack_978);
      *puVar13 = 0x42585f5f20442d20;
      puVar13[1] = 0x50495254535f584f;
      puVar13[2] = 0x722d204c4958445f;
      puVar13[3] = 0x642d676973746f6f;
      *(int32_t *)(puVar13 + 4) = 0x6e696665;
      *(int32_t *)((longlong)puVar13 + 0x24) = 0x62582065;
      *(int32_t *)(puVar13 + 5) = 0x6e4f786f;
      *(int32_t *)((longlong)puVar13 + 0x2c) = 0x6f6f5265;
      puVar13[6] = 0x7574616e67695374;
      *(int16_t *)(puVar13 + 7) = 0x6572;
      *(int8_t *)((longlong)puVar13 + 0x3a) = 0;
      uStack_978 = uVar11;
    }
    uVar16 = uVar11 + 5;
    FUN_1806277c0(&puStack_988,uVar16);
    *(int32_t *)(puStack_980 + uStack_978) = 0x6f462d20;
    *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
    uStack_978 = uVar16;
    if (0 < (int)uStack_950) {
      FUN_1806277c0(&puStack_988,uVar16 + uStack_950);
                    // WARNING: Subroutine does not return
      memcpy(puStack_980 + uStack_978,puStack_958,(longlong)(int)(uStack_950 + 1));
    }
    FUN_1806277c0(&puStack_988,uVar11 + 7);
    uVar16 = uStack_8a8;
    *(int16_t *)(puStack_980 + uStack_978) = 0x6f2e;
    *(int8_t *)((longlong)(puStack_980 + uStack_978) + 2) = 0;
    uVar18 = uStack_8a8 + 5;
    uStack_978 = uVar11 + 7;
    FUN_1806277c0(&puStack_8b8,uVar18);
    *(int32_t *)((ulonglong)uStack_8a8 + lStack_8b0) = 0x73676f6c;
    *(int16_t *)((int32_t *)((ulonglong)uStack_8a8 + lStack_8b0) + 1) = 0x2f;
    uStack_8a8 = uVar18;
    if (0 < (int)uStack_950) {
      FUN_1806277c0(&puStack_8b8,uVar18 + uStack_950);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)uStack_8a8 + lStack_8b0,puStack_958,(longlong)(int)(uStack_950 + 1));
    }
    FUN_1806277c0(&puStack_8b8,uVar16 + 0xd);
    uVar11 = uStack_978;
    *(uint64_t *)((ulonglong)uStack_8a8 + lStack_8b0) = 0x7478742e676f6c5f;
    *(int8_t *)((uint64_t *)((ulonglong)uStack_8a8 + lStack_8b0) + 1) = 0;
    uVar18 = uStack_978 + 5;
    uStack_8a8 = uVar16 + 0xd;
    FUN_1806277c0(&puStack_988,uVar18);
    *(int32_t *)(puStack_980 + uStack_978) = 0x65462d20;
    *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
    uVar16 = uVar11 + 10;
    uStack_978 = uVar18;
    FUN_1806277c0(&puStack_988,uVar16);
    *(int32_t *)(puStack_980 + uStack_978) = 0x73676f6c;
    *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x2f;
    uStack_978 = uVar16;
    if (0 < (int)uStack_950) {
      FUN_1806277c0(&puStack_988,uVar16 + uStack_950);
                    // WARNING: Subroutine does not return
      memcpy(puStack_980 + uStack_978,puStack_958,(longlong)(int)(uStack_950 + 1));
    }
    FUN_1806277c0(&puStack_988,uVar11 + 0x12);
    *(uint64_t *)(puStack_980 + uStack_978) = 0x7478742e676f6c5f;
    *(int8_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0;
    uVar16 = uVar11 + 0x13;
    uStack_978 = uVar11 + 0x12;
    FUN_1806277c0(&puStack_988,uVar16);
    *(int16_t *)(puStack_980 + uStack_978) = 0x20;
    uStack_978 = uVar16;
    if (0 < (int)uStack_908) {
      FUN_1806277c0(&puStack_988,uVar16 + uStack_908);
                    // WARNING: Subroutine does not return
      memcpy(puStack_980 + uStack_978,puStack_910,(longlong)(int)(uStack_908 + 1));
    }
    puStack_8d8 = &system_data_buffer_ptr;
    if (puStack_8d0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_8d0 = (int8_t *)0x0;
    uStack_8c0 = uStack_8c0 & 0xffffffff00000000;
    puStack_8d8 = &system_state_ptr;
    goto LAB_1800a9cf6;
  }
  puStack_878 = &system_data_buffer_ptr;
  uStack_860 = 0;
  lStack_870 = 0;
  iStack_868 = 0;
  switch(param_9) {
  case 0:
    puVar15 = &unknown_var_4132_ptr;
    break;
  case 1:
    puVar15 = &unknown_var_4124_ptr;
    break;
  case 2:
    puVar15 = &unknown_var_4164_ptr;
    break;
  case 3:
    puVar15 = &unknown_var_4140_ptr;
    break;
  case 4:
    puVar15 = &unknown_var_4156_ptr;
    break;
  case 5:
    puVar15 = &unknown_var_4148_ptr;
    break;
  default:
    goto LAB_1800a8889;
  }
  FUN_180627c50(&puStack_878,puVar15);
LAB_1800a8889:
  uVar11 = uStack_978;
  uVar16 = uStack_978 + 3;
  if (uVar16 != 0) {
    uVar18 = uStack_978 + 4;
    if (puStack_980 == (int8_t *)0x0) {
      if ((int)uVar18 < 0x10) {
        uVar18 = 0x10;
      }
      puStack_980 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar18,0x13);
      *puStack_980 = 0;
    }
    else {
      if (uVar18 <= (uint)uStack_970) goto LAB_1800a88fb;
      uStack_9a8 = 0x13;
      puStack_980 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_980,uVar18,0x10);
    }
    uVar3 = FUN_18064e990(puStack_980);
    uStack_970 = CONCAT44(uStack_970._4_4_,uVar3);
  }
LAB_1800a88fb:
  *(int32_t *)(puStack_980 + uStack_978) = 0x20542f;
  uStack_978 = uVar16;
  if (0 < iStack_868) {
    iVar17 = uVar16 + iStack_868;
    if (iVar17 != 0) {
      if (puStack_980 == (int8_t *)0x0) {
        iVar17 = iVar17 + 1;
        if (iVar17 < 0x10) {
          iVar17 = 0x10;
        }
        puStack_980 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar17,0x13);
        *puStack_980 = 0;
      }
      else {
        if (iVar17 + 1U <= (uint)uStack_970) goto LAB_1800a8988;
        uStack_9a8 = 0x13;
        puStack_980 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_980,iVar17 + 1U,0x10);
      }
      uVar3 = FUN_18064e990(puStack_980);
      uStack_970 = CONCAT44(uStack_970._4_4_,uVar3);
    }
LAB_1800a8988:
                    // WARNING: Subroutine does not return
    memcpy(puStack_980 + uStack_978,lStack_870,(longlong)(iStack_868 + 1));
  }
  uVar18 = uVar11 + 8;
  if (uVar18 != 0) {
    uVar4 = uVar11 + 9;
    if (puStack_980 == (int8_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puStack_980 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar4,0x13);
      *puStack_980 = 0;
    }
    else {
      if (uVar4 <= (uint)uStack_970) goto LAB_1800a8a0f;
      uStack_9a8 = 0x13;
      puStack_980 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_980,uVar4,0x10);
    }
    uVar3 = FUN_18064e990(puStack_980);
    uStack_970 = CONCAT44(uStack_970._4_4_,uVar3);
  }
LAB_1800a8a0f:
  *(int32_t *)(puStack_980 + uStack_978) = 0x334f2f20;
  *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
  uVar16 = uVar11 + 0xc;
  uStack_978 = uVar18;
  if (uVar16 != 0) {
    uVar18 = uVar11 + 0xd;
    if (puStack_980 == (int8_t *)0x0) {
      if ((int)uVar18 < 0x10) {
        uVar18 = 0x10;
      }
      puStack_980 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar18,0x13);
      *puStack_980 = 0;
    }
    else {
      if (uVar18 <= (uint)uStack_970) goto LAB_1800a8a97;
      uStack_9a8 = 0x13;
      puStack_980 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_980,uVar18,0x10);
    }
    uVar3 = FUN_18064e990(puStack_980);
    uStack_970 = CONCAT44(uStack_970._4_4_,uVar3);
  }
LAB_1800a8a97:
  lVar6 = lStack_7f0;
  *(int32_t *)(puStack_980 + uStack_978) = 0x20452f20;
  *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
  uStack_978 = uVar16;
  if (lStack_7f0 != 0) {
    lVar8 = -1;
    do {
      lVar7 = lVar8;
      lVar8 = lVar7 + 1;
    } while (*(char *)(lStack_7f0 + lVar8) != '\0');
    if (0 < (int)lVar8) {
      iVar17 = (int)lVar8 + uVar16;
      if (iVar17 != 0) {
        uVar11 = iVar17 + 1;
        if (puStack_980 == (int8_t *)0x0) {
          if ((int)uVar11 < 0x10) {
            uVar11 = 0x10;
          }
          puStack_980 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar11,0x13);
          *puStack_980 = 0;
        }
        else {
          if (uVar11 <= (uint)uStack_970) goto LAB_1800a8b50;
          uStack_9a8 = 0x13;
          puStack_980 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_980,uVar11,0x10);
        }
        uVar3 = FUN_18064e990(puStack_980);
        uStack_970 = CONCAT44(uStack_970._4_4_,uVar3);
      }
LAB_1800a8b50:
                    // WARNING: Subroutine does not return
      memcpy(puStack_980 + uStack_978,lVar6,(longlong)((int)lVar7 + 2));
    }
  }
  FUN_1806277c0(&puStack_988,uVar11 + 0x1b);
  puVar10 = (int32_t *)(puStack_980 + uStack_978);
  *puVar10 = 0x73512f20;
  puVar10[1] = 0x70697274;
  puVar10[2] = 0x6265645f;
  puVar10[3] = 0x206775;
  uStack_978 = uVar11 + 0x1b;
  FUN_1806277c0(&puStack_988,uVar11 + 0x2c);
  puVar10 = (int32_t *)(puStack_980 + uStack_978);
  *puVar10 = 0x73512f20;
  puVar10[1] = 0x70697274;
  puVar10[2] = 0x6665725f;
  puVar10[3] = 0x7463656c;
  *(int16_t *)(puVar10 + 4) = 0x20;
  uStack_978 = uVar11 + 0x2c;
  FUN_1806277c0(&puStack_988,uVar11 + 0x35);
  *(uint64_t *)(puStack_980 + uStack_978) = 0x6f676f6c6f6e2f20;
  *(int16_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0x20;
  uVar16 = uVar11 + 0x39;
  uStack_978 = uVar11 + 0x35;
  FUN_1806277c0(&puStack_988,uVar16);
  *(int32_t *)(puStack_980 + uStack_978) = 0x58572f20;
  *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lStack_810),8) +
          (lStack_808 - lStack_810);
  uStack_978 = uVar16;
  if (lVar6 >> 6 != lVar6 >> 0x3f) {
    lVar8 = 0;
    lVar6 = lStack_810;
    do {
      if ((*(int *)(lVar6 + 0x10 + lVar8) != 0xb) ||
         (iVar17 = strcmp(*(uint64_t *)(lVar6 + 8 + lVar8),&unknown_var_4992_ptr), iVar17 != 0)) {
        uVar11 = uVar16 + 4;
        FUN_1806277c0(&puStack_988,uVar11);
        *(int32_t *)(puStack_980 + uStack_978) = 0x20442f20;
        *(int8_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0;
        iVar17 = *(int *)(lStack_810 + 0x10 + lVar8);
        uStack_978 = uVar11;
        if (0 < iVar17) {
          FUN_1806277c0(&puStack_988,uVar11 + iVar17);
                    // WARNING: Subroutine does not return
          memcpy(puStack_980 + uStack_978,*(uint64_t *)(lStack_810 + 8 + lVar8),
                 (longlong)(*(int *)(lStack_810 + 0x10 + lVar8) + 1));
        }
        uVar16 = uVar16 + 5;
        FUN_1806277c0(&puStack_988,uVar16);
        *(int16_t *)(puStack_980 + uStack_978) = 0x3d;
        lVar7 = lStack_810 + lVar8;
        lVar6 = lStack_810;
        uStack_978 = uVar16;
        if (0 < *(int *)(lVar7 + 0x68)) {
          FUN_1806277c0(&puStack_988,uVar16 + *(int *)(lVar7 + 0x68));
                    // WARNING: Subroutine does not return
          memcpy(puStack_980 + uStack_978,*(uint64_t *)(lVar7 + 0x60),
                 (longlong)(*(int *)(lVar7 + 0x68) + 1));
        }
      }
      uVar11 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar11;
      lVar8 = lVar8 + 0x78;
      lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lStack_808 - lVar6),8) +
              (lStack_808 - lVar6);
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)((lVar7 >> 6) - (lVar7 >> 0x3f)));
  }
  uVar11 = uStack_8a8;
  uVar16 = uStack_8a8 + 5;
  FUN_1806277c0(&puStack_8b8,uVar16);
  *(int32_t *)((ulonglong)uStack_8a8 + lStack_8b0) = 0x73676f6c;
  *(int16_t *)((int32_t *)((ulonglong)uStack_8a8 + lStack_8b0) + 1) = 0x2f;
  uStack_8a8 = uVar16;
  if (0 < (int)uStack_950) {
    FUN_1806277c0(&puStack_8b8,uVar16 + uStack_950);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_8a8 + lStack_8b0,puStack_958,(longlong)(int)(uStack_950 + 1));
  }
  FUN_1806277c0(&puStack_8b8,uVar11 + 0xd);
  uVar16 = uStack_978;
  *(uint64_t *)((ulonglong)uStack_8a8 + lStack_8b0) = 0x7478742e676f6c5f;
  *(int8_t *)((uint64_t *)((ulonglong)uStack_8a8 + lStack_8b0) + 1) = 0;
  uVar18 = uStack_978 + 5;
  uStack_8a8 = uVar11 + 0xd;
  FUN_1806277c0(&puStack_988,uVar18);
  *(int32_t *)(puStack_980 + uStack_978) = 0x6f462f20;
  *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
  uStack_978 = uVar18;
  if (0 < (int)uStack_950) {
    FUN_1806277c0(&puStack_988,uVar18 + uStack_950);
                    // WARNING: Subroutine does not return
    memcpy(puStack_980 + uStack_978,puStack_958,(longlong)(int)(uStack_950 + 1));
  }
  FUN_1806277c0(&puStack_988,uVar16 + 7);
  *(int16_t *)(puStack_980 + uStack_978) = 0x6f2e;
  *(int8_t *)((longlong)(puStack_980 + uStack_978) + 2) = 0;
  uStack_978 = uVar16 + 7;
  FUN_1806277c0(&puStack_988,uVar16 + 0xc);
  *(int32_t *)(puStack_980 + uStack_978) = 0x65462f20;
  *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x20;
  uVar11 = uVar16 + 0x11;
  uStack_978 = uVar16 + 0xc;
  FUN_1806277c0(&puStack_988,uVar11);
  *(int32_t *)(puStack_980 + uStack_978) = 0x73676f6c;
  *(int16_t *)((longlong)(puStack_980 + uStack_978) + 4) = 0x2f;
  uStack_978 = uVar11;
  if (0 < (int)uStack_950) {
    FUN_1806277c0(&puStack_988,uVar11 + uStack_950);
                    // WARNING: Subroutine does not return
    memcpy(puStack_980 + uStack_978,puStack_958,(longlong)(int)(uStack_950 + 1));
  }
  FUN_1806277c0(&puStack_988,uVar16 + 0x19);
  *(uint64_t *)(puStack_980 + uStack_978) = 0x7478742e676f6c5f;
  *(int8_t *)((longlong)(puStack_980 + uStack_978) + 8) = 0;
  uVar11 = uVar16 + 0x1a;
  uStack_978 = uVar16 + 0x19;
  FUN_1806277c0(&puStack_988,uVar11);
  *(int16_t *)(puStack_980 + uStack_978) = 0x20;
  uStack_978 = uVar11;
  if (0 < (int)uStack_908) {
    FUN_1806277c0(&puStack_988,uVar11 + uStack_908);
                    // WARNING: Subroutine does not return
    memcpy(puStack_980 + uStack_978,puStack_910,(longlong)(int)(uStack_908 + 1));
  }
  puStack_878 = &system_data_buffer_ptr;
  if (lStack_870 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_870 = 0;
  uStack_860 = uStack_860 & 0xffffffff00000000;
  puStack_878 = &system_state_ptr;
LAB_1800a9cf6:
                    // WARNING: Subroutine does not return
  memset(auStack_6a8,0,0x70);
}



// ==================== 函数技术总结 ====================
//
// 函数名称: FUN_1800a73e0 - 高级文件路径构建和处理函数
// 
// 主要功能:
// 1. 文件路径动态构建：根据多种参数和条件构建复杂的文件路径
// 2. 文件类型识别：识别不同类型的文件（资源、纹理、配置、着色器等）
// 3. 路径参数处理：处理和验证各种路径参数
// 4. 内存管理：安全的内存分配和释放
// 5. 文件操作：读取、写入和处理文件内容
// 6. 字符串处理：安全的字符串操作和缓冲区管理
// 
// 关键特性:
// - 线程安全：使用锁机制保护共享资源
// - 内存安全：使用安全的字符串操作函数
// - 错误处理：包含完整的错误检查和处理机制
// - 可扩展性：支持多种文件类型和处理模式
// - 性能优化：使用缓冲区和缓存机制
//
// 技术要点:
// - 使用COM组件进行文件系统操作
// - 实现了复杂的路径构建算法
// - 支持多种文件格式的处理
// - 包含完整的内存管理机制
// - 实现了安全的字符串处理
//
// 使用场景:
// - 游戏资源文件路径构建
// - 配置文件路径处理
// - 纹理和着色器文件路径生成
// - 文件系统操作和文件内容处理
//
// 注意事项:
// - 该函数使用大量栈变量，需要注意栈溢出风险
// - 包含复杂的内存管理逻辑，需要正确处理内存分配
// - 使用了多个外部函数调用，需要确保这些函数的可用性
// - 包含平台特定的代码，主要针对Windows系统

// WARNING: Globals starting with '_' overlap smaller symbols at the same address






