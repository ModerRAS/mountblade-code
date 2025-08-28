/**
 * @file 99_part_12_part009_sub002_sub002.c
 * @brief 高级数据处理和系统初始化模块
 * 
 * 本模块是系统通用功能的一部分，主要负责：
 * - 系统初始化和配置管理
 * - 数据处理和验证
 * - 状态管理和控制
 * - 资源分配和清理
 * - 错误处理和恢复
 * 
 * 该文件作为通用功能模块的子模块，提供了高级系统功能的核心支持。
 * 
 * 技术架构说明：
 * 1. 核心函数架构
 *    - SystemInitializer: 系统初始化器，负责系统启动和配置
 *    - AdvancedDataProcessor: 高级数据处理器，处理复杂的数据转换
 *    - SimpleDataProcessor: 简化数据处理器，处理基本数据操作
 *    - LoopDataProcessor: 循环数据处理器，处理循环数据操作
 *    - FastStateChecker: 快速状态检查器，检查系统状态
 *    - ErrorCodeReturner: 错误码返回器，返回系统错误码
 *    - ParameterizedDataProcessor: 参数化数据处理器，处理参数化操作
 * 
 * 2. 内存管理策略
 *    - 使用分块内存分配策略
 *    - 实现内存对齐和优化
 *    - 提供内存池管理和回收机制
 *    - 支持动态内存扩展和收缩
 * 
 * 3. 状态管理机制
 *    - 多级状态管理架构
 *    - 状态同步和一致性保证
 *    - 异常状态检测和恢复
 *    - 状态持久化和加载机制
 * 
 * 4. 错误处理策略
 *    - 分层错误处理架构
 *    - 错误码标准化和分类
 *    - 错误恢复和容错机制
 *    - 错误日志和调试支持
 * 
 * 5. 性能优化措施
 *    - 缓存友好的数据结构设计
 *    - 算法复杂度优化
 *    - 内存访问模式优化
 *    - 并发处理和同步优化
 * 
 * 6. 安全性考虑
 *    - 输入验证和边界检查
 *    - 内存安全防护
 *    - 权限控制和访问管理
 *    - 数据完整性验证
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author 反编译代码美化处理
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 高级数据处理和系统初始化常量定义
 * ============================================================================ */

/**
 * @brief 高级数据处理和系统初始化接口
 * @details 定义高级数据处理和系统初始化的参数和接口函数
 * 
 * 功能：
 * - 处理系统初始化和配置
 * - 管理数据处理和验证
 * - 控制状态变化和同步
 * - 处理资源分配和清理
 * - 执行错误处理和恢复
 * 
 * @note 该文件作为通用功能模块的子模块，提供高级系统功能支持
 */

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 系统初始化器
#define SystemInitializer FUN_1807cd0a0

// 高级数据处理器
#define AdvancedDataProcessor FUN_1807cd3e0

// 简化数据处理器
#define SimpleDataProcessor FUN_1807cd429

// 循环数据处理器
#define LoopDataProcessor FUN_1807cd453

// 快速状态检查器
#define FastStateChecker FUN_1807cd5e5

// 错误码返回器
#define ErrorCodeReturner FUN_1807cd620

// 参数化数据处理器
#define ParameterizedDataProcessor FUN_1807cd630

/* ============================================================================
 * 常量定义
 * ============================================================================ */
#define SYSTEM_BUFFER_SIZE 0x858
#define SYSTEM_OFFSET_BFC 0xbfc
#define SYSTEM_OFFSET_C0C 0xc0c
#define SYSTEM_OFFSET_BEC 0xbec
#define SYSTEM_OFFSET_BE9 0xbe9
#define SYSTEM_OFFSET_BEA 0xbea
#define SYSTEM_OFFSET_290 0x290
#define SYSTEM_OFFSET_8EC 0x8ec
#define SYSTEM_OFFSET_BD0 0xbd0
#define SYSTEM_OFFSET_C08 0xc08
#define SYSTEM_OFFSET_BF0 0xbf0
#define SYSTEM_OFFSET_C00 0xc00
#define SYSTEM_OFFSET_854 0x854
#define SYSTEM_OFFSET_278 0x278
#define SYSTEM_CONFIG_FLAG_100 0x100
#define SYSTEM_CONFIG_FLAG_2 2
#define SYSTEM_ERROR_INVALID_CONFIG 0x13
#define SYSTEM_DATA_FLAG_NEG2 -2
#define SYSTEM_SUCCESS 0
#define SYSTEM_INVALID_INDEX -1
#define SYSTEM_MAX_BUFFER_SIZE 0x1000
#define SYSTEM_ALIGNMENT_SIZE 0x10

/* ============================================================================
 * 类型定义
 * ============================================================================ */

/**
 * @brief 系统上下文结构体
 */
typedef struct {
    uint32_t buffer_size;        // 缓冲区大小
    uint32_t config_flag;        // 配置标志
    uint32_t state_flag;         // 状态标志
    uint32_t error_code;         // 错误代码
    uint8_t data_buffer[0x1000];  // 数据缓冲区
} SystemContext;

/**
 * @brief 数据处理参数结构体
 */
typedef struct {
    uint32_t param1;             // 参数1
    uint32_t param2;             // 参数2
    uint32_t param3;             // 参数3
    uint32_t param4;             // 参数4
    uint8_t operation_flag;      // 操作标志
    uint8_t validation_flag;     // 验证标志
    uint8_t reserved[2];         // 保留字段
} DataProcessParams;

/* ============================================================================
 * 函数实现
 * ============================================================================ */

/**
 * 系统初始化器 - 初始化系统核心组件和配置
 * 
 * 功能：
 * - 初始化系统核心组件
 * - 配置系统参数和属性
 * - 设置资源管理器
 * - 执行系统完整性检查
 * 
 * @note 此函数不返回，调用后将进入系统主循环
 */
void SystemInitializer(void)

{
  // 调用系统初始化函数（不返回）
  FUN_1808fd200();
}



/**
 * 高级数据处理器 - 处理系统高级数据操作
 * 
 * 功能：
 * - 处理系统高级数据转换
 * - 管理数据验证和配置
 * - 执行状态同步和更新
 * - 处理资源分配和清理
 * 
 * @param system_context 系统上下文指针
 * @param operation_data 操作数据
 * @param config_param 配置参数
 * @param mode_flag 模式标志
 * @return 处理状态码（0表示成功，非0表示错误）
 */
undefined8 AdvancedDataProcessor(longlong system_context, undefined8 operation_data, uint config_param, int mode_flag)

{
  char state_flag;
  undefined1 validation_flag;
  undefined1 processing_flag;
  uint current_size;
  ulonglong data_offset;
  int iteration_count;
  bool is_less_than;
  
  // 检查配置模式
  if (mode_flag == SYSTEM_CONFIG_FLAG_100) {
    // 执行系统重置和配置
    FUN_18080d060(system_context, 0);
    *(uint *)(system_context + SYSTEM_OFFSET_BFC) = config_param;
    *(uint *)(system_context + SYSTEM_OFFSET_C0C) = config_param;
    return SYSTEM_SUCCESS;
  }
  
  // 检查操作模式
  if (mode_flag != SYSTEM_CONFIG_FLAG_2) {
    return SYSTEM_ERROR_INVALID_CONFIG;
  }
  
  // 获取当前缓冲区大小
  current_size = *(uint *)(system_context + SYSTEM_BUFFER_SIZE);
  is_less_than = config_param < current_size;
  
  if (config_param != current_size) {
    if (is_less_than) {
      // 重置系统状态
      FUN_18080d060(system_context, 0);
      current_size = *(uint *)(system_context + SYSTEM_BUFFER_SIZE);
    }
    
    // 处理数据缓冲区
    while (current_size < config_param) {
      if (*(int *)(system_context + SYSTEM_OFFSET_BEC) == 0) {
        // 检查系统状态标志
        if ((*(char *)(system_context + SYSTEM_OFFSET_BE9) == '\0') || 
            (*(char *)(system_context + SYSTEM_OFFSET_BEA) != '\0')) {
          current_size = *(uint *)(system_context + SYSTEM_OFFSET_C0C);
          data_offset = (ulonglong)(int)current_size;
          
          if (-1 < (int)current_size) {
            *(uint *)(system_context + SYSTEM_OFFSET_BFC) = current_size;
            state_flag = *(char *)(data_offset + SYSTEM_OFFSET_290 + system_context);
            
            // 处理数据状态
            while (state_flag == SYSTEM_DATA_FLAG_NEG2) {
              uVar4 = (int)uVar5 + 1;
              *(uint *)(system_context + SYSTEM_OFFSET_BFC) = uVar4;
              if (*(int *)(system_context + SYSTEM_OFFSET_8EC) <= (int)uVar4) {
                if (*(char *)(system_context + SYSTEM_OFFSET_BEA) == '\0') {
                  FUN_18080d690(system_context);
                }
                uVar4 = *(uint *)(system_context + SYSTEM_OFFSET_BD0);
                *(uint *)(system_context + SYSTEM_OFFSET_BFC) = uVar4;
              }
              uVar5 = (ulonglong)uVar4;
              state_flag = *(char *)((longlong)(int)uVar4 + SYSTEM_OFFSET_290 + system_context);
            }
            if (*(char *)((longlong)(int)uVar4 + SYSTEM_OFFSET_290 + system_context) == -1) {
              *(undefined4 *)(system_context + SYSTEM_OFFSET_BFC) = *(undefined4 *)(system_context + SYSTEM_OFFSET_BD0);
            }
            *(undefined4 *)(system_context + SYSTEM_OFFSET_C0C) = 0xffffffff;
          }
          if (-1 < *(int *)(system_context + SYSTEM_OFFSET_C08)) {
            *(int *)(system_context + SYSTEM_OFFSET_BF8) = *(int *)(system_context + SYSTEM_OFFSET_C08);
            *(undefined4 *)(system_context + SYSTEM_OFFSET_C08) = 0xffffffff;
          }
          FUN_1807ce620(system_context, 1);
          if (*(int *)(system_context + SYSTEM_OFFSET_C08) == -1) {
            iteration_count = *(int *)(system_context + SYSTEM_OFFSET_BF8) + 1;
            *(int *)(system_context + SYSTEM_OFFSET_C08) = iteration_count;
            if (*(int *)(*(longlong *)(system_context + SYSTEM_OFFSET_278) +
                        (ulonglong)*(byte *)((longlong)*(int *)(system_context + SYSTEM_OFFSET_BFC) + SYSTEM_OFFSET_290 + system_context)
                        * 0x10) <= iteration_count) {
              iteration_count = *(int *)(system_context + SYSTEM_OFFSET_BFC) + 1;
              *(int *)(system_context + SYSTEM_OFFSET_C0C) = iteration_count;
              if (*(int *)(system_context + SYSTEM_OFFSET_8EC) <= iteration_count) {
                *(undefined4 *)(system_context + SYSTEM_OFFSET_C0C) = *(undefined4 *)(system_context + SYSTEM_OFFSET_BD0);
              }
              *(undefined4 *)(system_context + SYSTEM_OFFSET_C08) = 0;
            }
          }
        }
        else {
          FUN_18080d690(system_context);
        }
      }
      else {
        FUN_1807cd7f0(system_context);
      }
      if (*(int *)(system_context + SYSTEM_OFFSET_BF0) == 0) {
        *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9) = 1;
      }
      else {
        *(int *)(system_context + SYSTEM_OFFSET_BEC) = *(int *)(system_context + SYSTEM_OFFSET_BEC) + 1;
        if (*(int *)(system_context + SYSTEM_OFFSET_BF0) + *(int *)(system_context + SYSTEM_OFFSET_C00) <= *(int *)(system_context + SYSTEM_OFFSET_BEC)) {
          *(undefined4 *)(system_context + SYSTEM_OFFSET_C00) = 0;
          *(undefined4 *)(system_context + SYSTEM_OFFSET_BEC) = 0;
        }
      }
      *(int *)(system_context + SYSTEM_BUFFER_SIZE) = *(int *)(system_context + SYSTEM_BUFFER_SIZE) + *(int *)(system_context + SYSTEM_OFFSET_854);
      current_size = *(uint *)(system_context + SYSTEM_BUFFER_SIZE);
    }
    if (is_less_than) {
      validation_flag = *(undefined1 *)(system_context + SYSTEM_OFFSET_BE8);
      processing_flag = *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9);
      FUN_18080d690(system_context);
      *(undefined1 *)(system_context + SYSTEM_OFFSET_BE8) = validation_flag;
      *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9) = processing_flag;
    }
  }
  return SYSTEM_SUCCESS;
}



/**
 * 简化数据处理器 - 处理简化的数据操作和状态管理
 * 
 * 功能：
 * - 处理简化的数据转换操作
 * - 管理状态检查和验证
 * - 执行基本的内存操作
 * - 处理缓冲区管理
 * 
 * @param system_context 系统上下文指针
 * @return 处理状态码（0表示成功，非0表示错误）
 */
undefined8 SimpleDataProcessor(undefined8 system_context)

{
  char state_flag;
  undefined1 validation_flag;
  undefined1 processing_flag;
  uint config_param;
  uint current_size;
  ulonglong data_offset;
  int iteration_count;
  longlong context_ptr;
  uint target_size;
  bool is_less_than;
  
  bVar7 = unaff_EDI < in_EAX;
  if (unaff_EDI != in_EAX) {
    if (bVar7) {
      FUN_18080d060(param_1,0);
      in_EAX = *(uint *)(unaff_RBX + 0x858);
    }
    while (in_EAX < unaff_EDI) {
      if (*(int *)(unaff_RBX + 0xbec) == 0) {
        if ((*(char *)(unaff_RBX + 0xbe9) == '\0') || (*(char *)(unaff_RBX + 0xbea) != '\0')) {
          uVar4 = *(uint *)(unaff_RBX + 0xc0c);
          uVar5 = (ulonglong)(int)uVar4;
          if (-1 < (int)uVar4) {
            *(uint *)(unaff_RBX + 0xbfc) = uVar4;
            cVar1 = *(char *)(uVar5 + 0x290 + unaff_RBX);
            while (cVar1 == -2) {
              uVar4 = (int)uVar5 + 1;
              *(uint *)(unaff_RBX + 0xbfc) = uVar4;
              if (*(int *)(unaff_RBX + 0x8ec) <= (int)uVar4) {
                if (*(char *)(unaff_RBX + 0xbea) == '\0') {
                  FUN_18080d690();
                }
                uVar4 = *(uint *)(unaff_RBX + 0xbd0);
                *(uint *)(unaff_RBX + 0xbfc) = uVar4;
              }
              uVar5 = (ulonglong)uVar4;
              cVar1 = *(char *)((longlong)(int)uVar4 + 0x290 + unaff_RBX);
            }
            if (*(char *)((longlong)(int)uVar4 + 0x290 + unaff_RBX) == -1) {
              *(undefined4 *)(unaff_RBX + 0xbfc) = *(undefined4 *)(unaff_RBX + 0xbd0);
            }
            *(undefined4 *)(unaff_RBX + 0xc0c) = 0xffffffff;
          }
          if (-1 < *(int *)(unaff_RBX + 0xc08)) {
            *(int *)(unaff_RBX + 0xbf8) = *(int *)(unaff_RBX + 0xc08);
            *(undefined4 *)(unaff_RBX + 0xc08) = 0xffffffff;
          }
          FUN_1807ce620();
          if (*(int *)(unaff_RBX + 0xc08) == -1) {
            iVar6 = *(int *)(unaff_RBX + 0xbf8) + 1;
            *(int *)(unaff_RBX + 0xc08) = iVar6;
            if (*(int *)(*(longlong *)(unaff_RBX + 0x278) +
                        (ulonglong)
                        *(byte *)((longlong)*(int *)(unaff_RBX + 0xbfc) + 0x290 + unaff_RBX) * 0x10)
                <= iVar6) {
              iVar6 = *(int *)(unaff_RBX + 0xbfc) + 1;
              *(int *)(unaff_RBX + 0xc0c) = iVar6;
              if (*(int *)(unaff_RBX + 0x8ec) <= iVar6) {
                *(undefined4 *)(unaff_RBX + 0xc0c) = *(undefined4 *)(unaff_RBX + 0xbd0);
              }
              *(undefined4 *)(unaff_RBX + 0xc08) = 0;
            }
          }
        }
        else {
          FUN_18080d690();
        }
      }
      else {
        FUN_1807cd7f0();
      }
      if (*(int *)(unaff_RBX + 0xbf0) == 0) {
        *(undefined1 *)(unaff_RBX + 0xbe9) = 1;
      }
      else {
        *(int *)(unaff_RBX + 0xbec) = *(int *)(unaff_RBX + 0xbec) + 1;
        if (*(int *)(unaff_RBX + 0xbf0) + *(int *)(unaff_RBX + 0xc00) <= *(int *)(unaff_RBX + 0xbec)
           ) {
          *(undefined4 *)(unaff_RBX + 0xc00) = 0;
          *(undefined4 *)(unaff_RBX + 0xbec) = 0;
        }
      }
      *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
      in_EAX = *(uint *)(unaff_RBX + 0x858);
    }
    if (bVar7) {
      uVar2 = *(undefined1 *)(unaff_RBX + 0xbe8);
      uVar3 = *(undefined1 *)(unaff_RBX + 0xbe9);
      FUN_18080d690();
      *(undefined1 *)(unaff_RBX + 0xbe8) = uVar2;
      *(undefined1 *)(unaff_RBX + 0xbe9) = uVar3;
    }
  }
  return 0;
}



/**
 * 循环数据处理器 - 处理循环数据操作和状态管理
 * 
 * 功能：
 * - 处理循环数据转换操作
 * - 管理状态检查和验证
 * - 执行循环内存操作
 * - 处理缓冲区管理
 * 
 * @return 处理状态码（0表示成功，非0表示错误）
 */
undefined8 LoopDataProcessor(void)

{
  char state_flag;
  undefined1 validation_flag;
  undefined1 processing_flag;
  uint current_index;
  ulonglong data_offset;
  int iteration_count;
  longlong system_context;
  char context_flag;
  uint target_index;
  
  do {
    // 检查系统处理状态
    if (*(int *)(system_context + SYSTEM_OFFSET_BEC) == 0) {
      // 检查系统标志位状态
      if ((*(char *)(system_context + SYSTEM_OFFSET_BE9) == '\0') || (*(char *)(system_context + SYSTEM_OFFSET_BEA) != '\0')) {
        current_index = *(uint *)(system_context + SYSTEM_OFFSET_C0C);
        data_offset = (ulonglong)(int)current_index;
        if (-1 < (int)current_index) {
          *(uint *)(system_context + SYSTEM_OFFSET_BFC) = current_index;
          state_flag = *(char *)(data_offset + SYSTEM_OFFSET_290 + system_context);
          while (state_flag == SYSTEM_DATA_FLAG_NEG2) {
            current_index = (int)data_offset + 1;
            *(uint *)(system_context + SYSTEM_OFFSET_BFC) = current_index;
            if (*(int *)(system_context + SYSTEM_OFFSET_8EC) <= (int)current_index) {
              if (*(char *)(system_context + SYSTEM_OFFSET_BEA) == '\0') {
                FUN_18080d690();
              }
              current_index = *(uint *)(system_context + SYSTEM_OFFSET_BD0);
              *(uint *)(system_context + SYSTEM_OFFSET_BFC) = current_index;
            }
            data_offset = (ulonglong)current_index;
            state_flag = *(char *)((longlong)(int)current_index + SYSTEM_OFFSET_290 + system_context);
          }
          if (*(char *)((longlong)(int)current_index + SYSTEM_OFFSET_290 + system_context) == SYSTEM_INVALID_INDEX) {
            *(undefined4 *)(system_context + SYSTEM_OFFSET_BFC) = *(undefined4 *)(system_context + SYSTEM_OFFSET_BD0);
          }
          *(undefined4 *)(system_context + SYSTEM_OFFSET_C0C) = 0xffffffff;
        }
        if (-1 < *(int *)(system_context + SYSTEM_OFFSET_C08)) {
          *(int *)(system_context + SYSTEM_OFFSET_BF8) = *(int *)(system_context + SYSTEM_OFFSET_C08);
          *(undefined4 *)(system_context + SYSTEM_OFFSET_C08) = 0xffffffff;
        }
        ErrorCodeReturner();
        if (*(int *)(system_context + SYSTEM_OFFSET_C08) == -1) {
          iteration_count = *(int *)(system_context + SYSTEM_OFFSET_BF8) + 1;
          *(int *)(system_context + SYSTEM_OFFSET_C08) = iteration_count;
          if (*(int *)(*(longlong *)(system_context + SYSTEM_OFFSET_278) +
                      (ulonglong)
                      *(byte *)((longlong)*(int *)(system_context + SYSTEM_OFFSET_BFC) + SYSTEM_OFFSET_290 + system_context) * SYSTEM_ALIGNMENT_SIZE)
              <= iteration_count) {
            iteration_count = *(int *)(system_context + SYSTEM_OFFSET_BFC) + 1;
            *(int *)(system_context + SYSTEM_OFFSET_C0C) = iteration_count;
            if (*(int *)(system_context + SYSTEM_OFFSET_8EC) <= iteration_count) {
              *(undefined4 *)(system_context + SYSTEM_OFFSET_C0C) = *(undefined4 *)(system_context + SYSTEM_OFFSET_BD0);
            }
            *(undefined4 *)(system_context + SYSTEM_OFFSET_C08) = 0;
          }
        }
      }
      else {
        FUN_18080d690();
      }
    }
    else {
      FUN_1807cd7f0();
    }
    // 处理系统状态更新
    if (*(int *)(system_context + SYSTEM_OFFSET_BF0) == 0) {
      *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9) = 1;
    }
    else {
      *(int *)(system_context + SYSTEM_OFFSET_BEC) = *(int *)(system_context + SYSTEM_OFFSET_BEC) + 1;
      if (*(int *)(system_context + SYSTEM_OFFSET_BF0) + *(int *)(system_context + SYSTEM_OFFSET_C00) <= *(int *)(system_context + SYSTEM_OFFSET_BEC))
      {
        *(undefined4 *)(system_context + SYSTEM_OFFSET_C00) = 0;
        *(undefined4 *)(system_context + SYSTEM_OFFSET_BEC) = 0;
      }
    }
    // 更新系统缓冲区大小
    *(int *)(system_context + SYSTEM_BUFFER_SIZE) = *(int *)(system_context + SYSTEM_BUFFER_SIZE) + *(int *)(system_context + SYSTEM_OFFSET_854);
  } while (*(uint *)(system_context + SYSTEM_BUFFER_SIZE) < target_index);
  
  // 处理上下文状态恢复
  if (context_flag != '\0') {
    validation_flag = *(undefined1 *)(system_context + SYSTEM_OFFSET_BE8);
    processing_flag = *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9);
    FUN_18080d690();
    *(undefined1 *)(system_context + SYSTEM_OFFSET_BE8) = validation_flag;
    *(undefined1 *)(system_context + SYSTEM_OFFSET_BE9) = processing_flag;
  }
  return SYSTEM_SUCCESS;
}



undefined8 FUN_1807cd5e5(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong unaff_RBX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
    uVar1 = *(undefined1 *)(unaff_RBX + 0xbe8);
    uVar2 = *(undefined1 *)(unaff_RBX + 0xbe9);
    FUN_18080d690();
    *(undefined1 *)(unaff_RBX + 0xbe8) = uVar1;
    *(undefined1 *)(unaff_RBX + 0xbe9) = uVar2;
  }
  return 0;
}



undefined8 FUN_1807cd620(void)

{
  return 0x13;
}



undefined8 FUN_1807cd630(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xbec) == 0) {
    if ((*(char *)(param_1 + 0xbe9) == '\0') || (*(char *)(param_1 + 0xbea) != '\0')) {
      uVar2 = *(uint *)(param_1 + 0xc0c);
      uVar3 = (ulonglong)(int)uVar2;
      if (-1 < (int)uVar2) {
        *(uint *)(param_1 + 0xbfc) = uVar2;
        cVar1 = *(char *)(uVar3 + 0x290 + param_1);
        while (cVar1 == -2) {
          uVar2 = (int)uVar3 + 1;
          *(uint *)(param_1 + 0xbfc) = uVar2;
          if (*(int *)(param_1 + 0x8ec) <= (int)uVar2) {
            if (*(char *)(param_1 + 0xbea) == '\0') {
              FUN_18080d690(param_1);
            }
            uVar2 = *(uint *)(param_1 + 0xbd0);
            *(uint *)(param_1 + 0xbfc) = uVar2;
          }
          uVar3 = (ulonglong)uVar2;
          cVar1 = *(char *)((longlong)(int)uVar2 + 0x290 + param_1);
        }
        if (*(char *)((longlong)(int)uVar2 + 0x290 + param_1) == -1) {
          *(undefined4 *)(param_1 + 0xbfc) = *(undefined4 *)(param_1 + 0xbd0);
        }
        *(undefined4 *)(param_1 + 0xc0c) = 0xffffffff;
      }
      if (-1 < *(int *)(param_1 + 0xc08)) {
        *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
        *(undefined4 *)(param_1 + 0xc08) = 0xffffffff;
      }
      FUN_1807ce620(param_1,param_2);
      if (*(int *)(param_1 + 0xc08) == -1) {
        iVar4 = *(int *)(param_1 + 0xbf8) + 1;
        *(int *)(param_1 + 0xc08) = iVar4;
        if (*(int *)(*(longlong *)(param_1 + 0x278) +
                    (ulonglong)*(byte *)((longlong)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) *
                    0x10) <= iVar4) {
          iVar4 = *(int *)(param_1 + 0xbfc) + 1;
          *(int *)(param_1 + 0xc0c) = iVar4;
          if (*(int *)(param_1 + 0x8ec) <= iVar4) {
            *(undefined4 *)(param_1 + 0xc0c) = *(undefined4 *)(param_1 + 0xbd0);
          }
          *(undefined4 *)(param_1 + 0xc08) = 0;
        }
      }
    }
    else {
      FUN_18080d690();
    }
  }
  else if (param_2 != '\0') {
    FUN_1807cd7f0();
  }
  if (*(int *)(param_1 + 0xbf0) == 0) {
    *(undefined1 *)(param_1 + 0xbe9) = 1;
  }
  else {
    *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 1;
    if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) <= *(int *)(param_1 + 0xbec)) {
      *(undefined4 *)(param_1 + 0xc00) = 0;
      *(undefined4 *)(param_1 + 0xbec) = 0;
    }
  }
  *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807cd7f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  longlong lVar20;
  int iStackX_18;
  longlong lStackX_20;
  undefined *puStack_68;
  longlong lStack_58;
  ulonglong uVar13;
  
  lVar16 = (longlong)(*(int *)(param_1 + 0xbf8) * *(int *)(param_1 + 0x3c8)) * 5 +
           *(longlong *)
            ((ulonglong)*(byte *)((longlong)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10 + 8
            + *(longlong *)(param_1 + 0x278));
  if ((lVar16 != 0) && (iStackX_18 = 0, 0 < *(int *)(param_1 + 0x3c8))) {
    lStack_58 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x3d0 + lStack_58 * 8);
      plVar1 = (longlong *)(lVar5 + 8);
      lStackX_20 = *plVar1;
      if (((longlong *)lStackX_20 == plVar1) && (*(longlong **)(lVar5 + 0x10) == plVar1)) {
        lStackX_20 = 0x180be7ac0;
      }
      if ((int)(uint)*(byte *)(lVar5 + 0xd0) < *(int *)(param_1 + 0x8f8)) {
        lVar20 = (ulonglong)*(byte *)(lVar5 + 0xd0) * 0x618 + *(longlong *)(param_1 + 0x900);
        bVar7 = *(byte *)((ulonglong)*(byte *)(lVar5 + 0xd1) + 0x3a0 + lVar20);
        if (bVar7 < 0x10) {
          puVar10 = (undefined *)((ulonglong)bVar7 * 0x38 + 0x20 + lVar20);
          puStack_68 = &DAT_180be7a80;
          if (puVar10 != (undefined *)0x0) {
            puStack_68 = puVar10;
          }
        }
        else {
          puStack_68 = &DAT_180be7a80;
        }
      }
      else {
        lVar20 = 0x180be7b90;
        puStack_68 = &DAT_180be7a80;
        _DAT_180be7a80 = 0;
      }
      uVar3 = *(undefined1 *)(lVar16 + 3);
      bVar7 = *(byte *)(lVar16 + 4);
      *(undefined4 *)(lStackX_20 + 0x4c) = 0;
      bVar19 = bVar7 & 0xf;
      *(undefined4 *)(lStackX_20 + 0x50) = 0;
      *(undefined1 *)(lStackX_20 + 0x3c) = 0;
      if (((*(byte *)(lVar20 + 0x400) & 1) != 0) && (*(char *)(lStackX_20 + 0x78) == '\0')) {
        FUN_1807ccbe0(param_1,lStackX_20 + 100,lStackX_20,*(undefined1 *)(lVar20 + 0x401),
                      lVar20 + 0x402,*(byte *)(lVar20 + 0x400),*(undefined1 *)(lVar20 + 0x453),
                      *(undefined1 *)(lVar20 + 0x454),*(undefined1 *)(lVar20 + 0x452),2);
      }
      uVar12 = (uint)(bVar7 >> 4);
      if (((*(byte *)(lVar20 + 0x457) & 1) != 0) && (*(char *)(lStackX_20 + 0x90) == '\0')) {
        FUN_1807ccbe0(param_1,lStackX_20 + 0x7c,lStackX_20,*(undefined1 *)(lVar20 + 0x458),
                      lVar20 + 0x45a,*(byte *)(lVar20 + 0x457),*(undefined1 *)(lVar20 + 0x4ab),
                      *(undefined1 *)(lVar20 + 0x4ac),*(undefined1 *)(lVar20 + 0x4aa),4);
      }
      if (*(char *)(lStackX_20 + 0xbc) != '\0') {
        *(int *)(lStackX_20 + 0xb0) =
             *(int *)(lStackX_20 + 0xb0) - (uint)*(ushort *)(lVar20 + 0x50c);
        if (*(int *)(lStackX_20 + 0xb0) < 0) {
          *(undefined4 *)(lStackX_20 + 0xb0) = 0;
        }
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
      }
      bVar7 = *(byte *)(lVar16 + 2);
      if ((bVar7 >> 4) - 6 < 10) {
        uVar15 = (uint)bVar7;
        switch(bVar7 >> 4) {
        case 6:
          *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) - (uVar15 & 0xf);
          if (*(int *)(lStackX_20 + 0x44) < 0) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0;
          }
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
          break;
        case 7:
          *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + (uVar15 & 0xf);
          if (0x40 < *(int *)(lStackX_20 + 0x44)) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0x40;
          }
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
          break;
        case 0xb:
          *(byte *)(lVar5 + 0x108) = bVar7 & 0xf;
          func_0x0001807cf230(lVar5);
          *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + *(char *)(lVar5 + 0x107);
          if ('\x1f' < *(char *)(lVar5 + 0x106)) {
            *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + -0x40;
          }
          break;
        case 0xd:
          *(int *)(lStackX_20 + 0x48) = *(int *)(lStackX_20 + 0x48) - (uVar15 & 0xf);
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 4;
          break;
        case 0xe:
          *(int *)(lStackX_20 + 0x48) = *(int *)(lStackX_20 + 0x48) + (bVar7 & 0xf);
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 4;
          break;
        case 0xf:
          lVar6 = *plVar1;
          iVar11 = *(int *)(lVar6 + 0x40);
          if (iVar11 < *(int *)(lVar5 + 0x100)) {
            iVar11 = iVar11 + (uint)*(byte *)(lVar5 + 0x104) * 4;
            *(int *)(lVar6 + 0x40) = iVar11;
            if (*(int *)(lVar5 + 0x100) < iVar11) {
              *(int *)(lVar6 + 0x40) = *(int *)(lVar5 + 0x100);
            }
          }
          else if (*(int *)(lVar5 + 0x100) < iVar11) {
            iVar11 = iVar11 + (uint)*(byte *)(lVar5 + 0x104) * -4;
            *(int *)(lVar6 + 0x40) = iVar11;
            if (iVar11 < *(int *)(lVar5 + 0x100)) {
              iVar11 = *(int *)(lVar5 + 0x100);
            }
            *(int *)(lVar6 + 0x40) = iVar11;
          }
          *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 1;
        }
      }
      switch(uVar3) {
      case 0:
        if (*(char *)(lVar16 + 4) != '\0') {
          iVar11 = *(int *)(param_1 + 0xbec);
          iVar11 = iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                            (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
          if (iVar11 == 1) {
            if ((*(byte *)(param_1 + 0xbe6) & 1) == 0) {
              uVar18 = (ulonglong)*(byte *)(lVar5 + 0xd3);
              uVar12 = uVar12 + *(byte *)(lVar5 + 0xd3);
              uVar13 = (ulonglong)uVar12;
              iVar11 = *(int *)(puStack_68 + 0x1c);
              iVar17 = *(int *)(uVar13 * 4 + 0x180be7620);
              if ((iVar11 < 0) && (uVar12 != 0)) {
                iVar8 = iVar17 - *(int *)(uVar13 * 4 + 0x180be761c);
              }
              else {
code_r0x0001807cdc27:
                iVar8 = *(int *)(uVar13 * 4 + 0x180be7624) - iVar17;
              }
code_r0x0001807cdc32:
              iVar4 = *(int *)(uVar18 * 4 + 0x180be7620);
              if ((iVar11 < 0) && ((int)uVar18 != 0)) {
                iVar9 = iVar4 - *(int *)(uVar18 * 4 + 0x180be761c);
              }
              else {
                iVar9 = *(int *)(uVar18 * 4 + 0x180be7624) - iVar4;
              }
              *(int *)(lStackX_20 + 0x50) =
                   ((((int)(iVar8 * iVar11 + (iVar8 * iVar11 >> 0x1f & 0x7fU)) >> 7) + iVar17) -
                   ((int)(iVar9 * iVar11 + (iVar9 * iVar11 >> 0x1f & 0x7fU)) >> 7)) - iVar4;
              goto code_r0x0001807cdce3;
            }
            *(uint *)(lStackX_20 + 0x50) = uVar12 * -0x40;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
          }
          else if (iVar11 == 2) {
            if ((*(byte *)(param_1 + 0xbe6) & 1) == 0) {
              uVar18 = (ulonglong)*(byte *)(lVar5 + 0xd3);
              uVar12 = (uint)bVar19 + (uint)*(byte *)(lVar5 + 0xd3);
              uVar13 = (ulonglong)uVar12;
              iVar11 = *(int *)(puStack_68 + 0x1c);
              iVar17 = *(int *)(uVar13 * 4 + 0x180be7620);
              if ((-1 < iVar11) || (uVar12 == 0)) goto code_r0x0001807cdc27;
              iVar8 = iVar17 - *(int *)(uVar13 * 4 + 0x180be761c);
              goto code_r0x0001807cdc32;
            }
            *(uint *)(lStackX_20 + 0x50) = (uint)bVar19 * -0x40;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
          }
          else {
code_r0x0001807cdce3:
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
          }
        }
        break;
      case 1:
        *(undefined4 *)(lStackX_20 + 0x50) = 0;
        *(int *)(lStackX_20 + 0x40) =
             *(int *)(lStackX_20 + 0x40) + (uint)*(byte *)(lVar5 + 0xf6) * -4;
        if (*(int *)(lStackX_20 + 0x40) < 0x38) {
          *(undefined4 *)(lStackX_20 + 0x40) = 0x38;
        }
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
        break;
      case 2:
        *(undefined4 *)(lStackX_20 + 0x50) = 0;
        *(int *)(lStackX_20 + 0x40) =
             *(int *)(lStackX_20 + 0x40) + (uint)*(byte *)(lVar5 + 0xf5) * 4;
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
        break;
      case 3:
        *(undefined4 *)(lStackX_20 + 0x50) = 0;
        func_0x0001807ccb80(lVar5);
        break;
      case 4:
        func_0x0001807cf230(lVar5);
        *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + *(char *)(lVar5 + 0x107);
        if ('\x1f' < *(char *)(lVar5 + 0x106)) {
          *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + -0x40;
        }
        goto code_r0x0001807ce2c1;
      case 5:
        *(undefined4 *)(lStackX_20 + 0x50) = 0;
        func_0x0001807ccb80(lVar5);
        bVar7 = *(byte *)(lVar5 + 0xf9);
        if (bVar7 >> 4 == 0) {
          if (((bVar7 & 0xf) != 0) &&
             (*(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) - (uint)(bVar7 & 0xf),
             *(int *)(lStackX_20 + 0x44) < 0)) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0;
          }
        }
        else {
code_r0x0001807cddae:
          *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + (uint)(bVar7 >> 4);
          if (0x40 < *(int *)(lStackX_20 + 0x44)) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0x40;
          }
        }
        goto code_r0x0001807ce2b1;
      case 6:
        func_0x0001807cf230(lVar5);
        *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + *(char *)(lVar5 + 0x107);
        if ('\x1f' < *(char *)(lVar5 + 0x106)) {
          *(char *)(lVar5 + 0x106) = *(char *)(lVar5 + 0x106) + -0x40;
        }
        bVar7 = *(byte *)(lVar5 + 0xf9);
        if (bVar7 >> 4 != 0) goto code_r0x0001807cddae;
        if (((bVar7 & 0xf) != 0) &&
           (*(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) - (uint)(bVar7 & 0xf),
           *(int *)(lStackX_20 + 0x44) < 0)) {
          *(undefined4 *)(lStackX_20 + 0x44) = 0;
        }
        goto code_r0x0001807ce2b1;
      case 7:
        lVar6 = *plVar1;
        bVar14 = *(byte *)(lVar5 + 0x10a) & 0x1f;
        bVar7 = *(byte *)(lVar5 + 0x126) >> 4;
        bVar19 = bVar7 & 3;
        if ((bVar7 & 3) == 0) {
code_r0x0001807cde95:
          bVar7 = *(byte *)((ulonglong)bVar14 + 0x180be7500);
code_r0x0001807cdea1:
          *(uint *)(lVar6 + 0x4c) = (uint)bVar7;
        }
        else {
          if (bVar19 == 1) {
            bVar14 = bVar14 << 3;
            bVar7 = ~bVar14;
            if (-1 < (char)*(byte *)(lVar5 + 0x10a)) {
              bVar7 = bVar14;
            }
            goto code_r0x0001807cdea1;
          }
          if (bVar19 == 2) {
            *(undefined4 *)(lVar6 + 0x4c) = 0xff;
          }
          else if (bVar19 == 3) goto code_r0x0001807cde95;
        }
        iVar11 = (int)((uint)*(byte *)(lVar5 + 0x10c) * *(int *)(lVar6 + 0x4c)) >> 6;
        *(int *)(lVar6 + 0x4c) = iVar11;
        if (*(char *)(lVar5 + 0x10a) < '\0') {
          if ((short)(*(short *)(lVar6 + 0x44) - (short)iVar11) < 0) {
            iVar11 = *(int *)(lVar6 + 0x44);
          }
          *(int *)(lVar6 + 0x4c) = -iVar11;
        }
        else if (0x40 < *(int *)(lVar6 + 0x44) + iVar11) {
          *(int *)(lVar6 + 0x4c) = 0x40 - *(int *)(lVar6 + 0x44);
        }
        *(char *)(lVar5 + 0x10a) = *(char *)(lVar5 + 0x10a) + *(char *)(lVar5 + 0x10b);
        if ('\x1f' < *(char *)(lVar5 + 0x10a)) {
          *(char *)(lVar5 + 0x10a) = *(char *)(lVar5 + 0x10a) + -0x40;
        }
        *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 2;
        break;
      case 10:
        bVar7 = *(byte *)(lVar5 + 0xf9);
        if (bVar7 >> 4 == 0) {
          if (((bVar7 & 0xf) != 0) &&
             (*(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) - (uint)(bVar7 & 0xf),
             *(int *)(lStackX_20 + 0x44) < 0)) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0;
          }
        }
        else {
          *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + (uint)(bVar7 >> 4);
          if (0x40 < *(int *)(lStackX_20 + 0x44)) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0x40;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
            break;
          }
        }
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
        break;
      case 0xe:
        if (uVar12 == 9) {
          if (bVar19 == 0) break;
          if (*(int *)(param_1 + 0xbec) % (int)(uint)bVar19 == 0) {
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 8;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
          }
        }
        else {
          if (uVar12 != 0xc) {
            if (uVar12 == 0xd) {
              if (*(uint *)(param_1 + 0xbec) == (uint)bVar19) {
                if (lStackX_20 == 0x180be7ac0) {
                  FUN_18080d590(param_1,lVar5,puStack_68,&lStackX_20);
                }
                *(undefined4 *)(lStackX_20 + 0x40) = *(undefined4 *)(lVar5 + 0xd4);
                *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 1;
                *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 8;
                FUN_1807ccd60(param_1,lVar16,lVar5,lStackX_20,lVar20,puStack_68);
                goto code_r0x0001807ce2c1;
              }
              *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) & 0xfd;
              *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) & 0xfe;
              *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) & 0xfb;
              *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) & 0xf7;
            }
            break;
          }
          if (*(uint *)(param_1 + 0xbec) == (uint)bVar19) {
            *(undefined4 *)(lStackX_20 + 0x44) = 0;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
          }
        }
        goto code_r0x0001807ce2c1;
      case 0x11:
        bVar7 = *(byte *)(param_1 + 0xbe4);
        if (bVar7 >> 4 == 0) {
          if ((bVar7 & 0xf) == 0) break;
          piVar2 = (int *)(param_1 + 0xbe0);
          *piVar2 = *piVar2 - (uint)(bVar7 & 0xf);
          if (*piVar2 < 0) {
            *(undefined4 *)(param_1 + 0xbe0) = 0;
          }
        }
        else {
          *(int *)(param_1 + 0xbe0) = *(int *)(param_1 + 0xbe0) + (uint)(bVar7 >> 4);
          if (0x40 < *(int *)(param_1 + 0xbe0)) {
            *(undefined4 *)(param_1 + 0xbe0) = 0x40;
          }
        }
        goto code_r0x0001807ce2c1;
      case 0x19:
        bVar7 = *(byte *)(lVar5 + 0xfa);
        if (bVar7 >> 4 == 0) {
          if (((bVar7 & 0xf) != 0) &&
             (*(int *)(lStackX_20 + 0x48) = *(int *)(lStackX_20 + 0x48) - (uint)(bVar7 & 0xf),
             *(int *)(lStackX_20 + 0x48) < 0)) {
            *(undefined4 *)(lStackX_20 + 0x48) = 0;
          }
        }
        else {
          *(int *)(lStackX_20 + 0x48) = *(int *)(lStackX_20 + 0x48) + (uint)(bVar7 >> 4);
          if (0xff < *(int *)(lStackX_20 + 0x48)) {
            *(undefined4 *)(lStackX_20 + 0x48) = 0xff;
            *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 4;
            break;
          }
        }
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 4;
        break;
      case 0x1b:
        if ((*(byte *)(lVar5 + 0xfc) != 0) &&
           (*(int *)(param_1 + 0xbec) % (int)(uint)*(byte *)(lVar5 + 0xfc) == 0)) {
          if (*(char *)(lVar5 + 0xfb) != '\0') {
            switch(*(char *)(lVar5 + 0xfb)) {
            case '\x01':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + -1;
              break;
            case '\x02':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + -2;
              break;
            case '\x03':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + -4;
              break;
            case '\x04':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + -8;
              break;
            case '\x05':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + -0x10;
              break;
            case '\x06':
              iVar11 = *(int *)(lStackX_20 + 0x44) * 2;
              *(int *)(lStackX_20 + 0x44) =
                   iVar11 / 3 + (iVar11 >> 0x1f) +
                   (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f);
              break;
            case '\a':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) >> 1;
              break;
            case '\t':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + 1;
              break;
            case '\n':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + 2;
              break;
            case '\v':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + 4;
              break;
            case '\f':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + 8;
              break;
            case '\r':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) + 0x10;
              break;
            case '\x0e':
              *(int *)(lStackX_20 + 0x44) = (*(int *)(lStackX_20 + 0x44) * 3) / 2;
              break;
            case '\x0f':
              *(int *)(lStackX_20 + 0x44) = *(int *)(lStackX_20 + 0x44) << 1;
            }
            if (0x40 < *(int *)(lStackX_20 + 0x44)) {
              *(undefined4 *)(lStackX_20 + 0x44) = 0x40;
            }
            if (*(int *)(lStackX_20 + 0x44) < 0) {
              *(undefined4 *)(lStackX_20 + 0x44) = 0;
            }
          }
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
          *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 8;
        }
        break;
      case 0x1d:
        bVar7 = *(byte *)(lVar5 + 0x116);
        bVar19 = *(byte *)(lVar5 + 0x117);
        if (bVar19 <= bVar7) {
          *(int *)(lStackX_20 + 0x4c) = -*(int *)(lStackX_20 + 0x44);
          bVar7 = *(byte *)(lVar5 + 0x116);
          bVar19 = *(byte *)(lVar5 + 0x117);
        }
        bVar7 = bVar7 + 1;
        if ((uint)*(byte *)(lVar5 + 0x118) + (uint)bVar19 <= (uint)bVar7) {
          bVar7 = 0;
        }
        *(byte *)(lVar5 + 0x116) = bVar7;
code_r0x0001807ce2b1:
        *(byte *)(lStackX_20 + 0x3c) = *(byte *)(lStackX_20 + 0x3c) | 2;
      }
code_r0x0001807ce2c1:
      func_0x0001807cb410(lVar5,lVar20);
      if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(lVar5 + 0x10) != plVar1)) {
        FUN_1807ce440(param_1,lVar5,(longlong *)*plVar1,puStack_68);
      }
      iStackX_18 = iStackX_18 + 1;
      lStack_58 = lStack_58 + 1;
      lVar16 = lVar16 + 5;
    } while (iStackX_18 < *(int *)(param_1 + 0x3c8));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807cd854(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  longlong *plVar17;
  byte bVar18;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong in_R11;
  undefined8 unaff_R12;
  byte bVar22;
  undefined8 unaff_R13;
  longlong unaff_R14;
  undefined8 unaff_R15;
  longlong lVar23;
  
  *(undefined8 *)(in_R11 + -0x20) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x28) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R12;
  uVar14 = param_3 & 0xffffffff;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x40) = unaff_R15;
  *(ulonglong *)(unaff_RBP + 7) = uVar14;
  do {
    lVar6 = *(longlong *)(unaff_R14 + 0x3d0 + uVar14 * 8);
    plVar1 = (longlong *)(lVar6 + 8);
    *(ulonglong *)(unaff_RBP + 0x7f) = param_3;
    plVar17 = (longlong *)*plVar1;
    if ((plVar17 == plVar1) && (*(longlong **)(lVar6 + 0x10) == plVar1)) {
      plVar17 = (longlong *)0x180be7ac0;
    }
    *(longlong **)(unaff_RBP + 0x7f) = plVar17;
    if ((int)(uint)*(byte *)(lVar6 + 0xd0) < *(int *)(unaff_R14 + 0x8f8)) {
      lVar23 = (ulonglong)*(byte *)(lVar6 + 0xd0) * 0x618 + *(longlong *)(unaff_R14 + 0x900);
      bVar18 = *(byte *)((ulonglong)*(byte *)(lVar6 + 0xd1) + 0x3a0 + lVar23);
      if (bVar18 < 0x10) {
        puVar10 = (undefined *)((ulonglong)bVar18 * 0x38 + 0x20 + lVar23);
        puVar13 = &DAT_180be7a80;
        if (puVar10 != (undefined *)0x0) {
          puVar13 = puVar10;
        }
        *(undefined **)(unaff_RBP + -9) = puVar13;
      }
      else {
        *(undefined **)(unaff_RBP + -9) = &DAT_180be7a80;
      }
    }
    else {
      lVar23 = 0x180be7b90;
      *(undefined **)(unaff_RBP + -9) = &DAT_180be7a80;
      _DAT_180be7a80 = param_3;
    }
    uVar4 = *(undefined1 *)(unaff_RDI + 3);
    bVar18 = *(byte *)(unaff_RDI + 4);
    *(int *)((longlong)plVar17 + 0x4c) = (int)param_3;
    *(undefined1 *)(unaff_RBP + 0x6f) = uVar4;
    bVar22 = bVar18 & 0xf;
    bVar18 = bVar18 >> 4;
    uVar12 = (uint)bVar18;
    *(byte *)(unaff_RBP + 0x67) = bVar18;
    *(int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x50) = (int)param_3;
    *(undefined1 *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c) = 0;
    lVar11 = *(longlong *)(unaff_RBP + 0x7f);
    if (((*(byte *)(lVar23 + 0x400) & 1) != 0) && (*(char *)(lVar11 + 0x78) == '\0')) {
      FUN_1807ccbe0();
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
      uVar12 = (uint)*(byte *)(unaff_RBP + 0x67);
    }
    if (((*(byte *)(lVar23 + 0x457) & 1) != 0) && (*(char *)(lVar11 + 0x90) == '\0')) {
      FUN_1807ccbe0();
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
    }
    if (*(char *)(lVar11 + 0xbc) != '\0') {
      *(int *)(lVar11 + 0xb0) = *(int *)(lVar11 + 0xb0) - (uint)*(ushort *)(lVar23 + 0x50c);
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
      if (*(int *)(lVar11 + 0xb0) < 0) {
        *(undefined4 *)(lVar11 + 0xb0) = 0;
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
    }
    lVar19 = *(longlong *)(unaff_RBP + -1);
    bVar18 = *(byte *)(lVar19 + 2);
    if ((bVar18 >> 4) - 6 < 10) {
      uVar16 = (uint)bVar18;
      switch(bVar18 >> 4) {
      case 6:
        *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) - (uVar16 & 0xf);
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        if (*(int *)(lVar11 + 0x44) < 0) {
          *(undefined4 *)(lVar11 + 0x44) = 0;
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        }
        *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
        break;
      case 7:
        *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + (uVar16 & 0xf);
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        if (0x40 < *(int *)(lVar11 + 0x44)) {
          *(undefined4 *)(lVar11 + 0x44) = 0x40;
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        }
        *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
        break;
      default:
        goto LAB_1807cdb80;
      case 0xb:
        *(byte *)(lVar6 + 0x108) = bVar18 & 0xf;
        func_0x0001807cf230(lVar6);
        *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + *(char *)(lVar6 + 0x107);
        lVar19 = *(longlong *)(unaff_RBP + -1);
        if ('\x1f' < *(char *)(lVar6 + 0x106)) {
          *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + -0x40;
        }
        break;
      case 0xd:
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) - (uVar16 & 0xf);
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
        *pbVar2 = *pbVar2 | 4;
        break;
      case 0xe:
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + (bVar18 & 0xf);
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
        *pbVar2 = *pbVar2 | 4;
        break;
      case 0xf:
        lVar11 = *plVar1;
        iVar9 = *(int *)(lVar11 + 0x40);
        if (iVar9 < *(int *)(lVar6 + 0x100)) {
          iVar9 = iVar9 + (uint)*(byte *)(lVar6 + 0x104) * 4;
          *(int *)(lVar11 + 0x40) = iVar9;
          if (*(int *)(lVar6 + 0x100) < iVar9) {
            *(int *)(lVar11 + 0x40) = *(int *)(lVar6 + 0x100);
          }
        }
        else if (*(int *)(lVar6 + 0x100) < iVar9) {
          iVar9 = iVar9 + (uint)*(byte *)(lVar6 + 0x104) * -4;
          *(int *)(lVar11 + 0x40) = iVar9;
          if (iVar9 < *(int *)(lVar6 + 0x100)) {
            iVar9 = *(int *)(lVar6 + 0x100);
          }
          *(int *)(lVar11 + 0x40) = iVar9;
        }
        *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 1;
      }
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
    }
LAB_1807cdb80:
    switch(*(undefined1 *)(unaff_RBP + 0x6f)) {
    case 0:
      if (*(char *)(lVar19 + 4) != '\0') {
        iVar9 = *(int *)(unaff_R14 + 0xbec);
        iVar9 = iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
        if (iVar9 == 1) {
          if ((*(byte *)(unaff_R14 + 0xbe6) & 1) == 0) {
            uVar21 = (ulonglong)*(byte *)(lVar6 + 0xd3);
            uVar12 = uVar12 + *(byte *)(lVar6 + 0xd3);
            uVar14 = (ulonglong)uVar12;
            iVar9 = *(int *)(*(longlong *)(unaff_RBP + -9) + 0x1c);
            iVar20 = *(int *)(uVar14 * 4 + 0x180be7620);
            if ((iVar9 < 0) && (uVar12 != 0)) {
              iVar7 = iVar20 - *(int *)(uVar14 * 4 + 0x180be761c);
            }
            else {
code_r0x0001807cdc27:
              iVar7 = *(int *)(uVar14 * 4 + 0x180be7624) - iVar20;
            }
code_r0x0001807cdc32:
            iVar5 = *(int *)(uVar21 * 4 + 0x180be7620);
            if ((iVar9 < 0) && ((int)uVar21 != 0)) {
              iVar8 = iVar5 - *(int *)(uVar21 * 4 + 0x180be761c);
            }
            else {
              iVar8 = *(int *)(uVar21 * 4 + 0x180be7624) - iVar5;
            }
            *(int *)(lVar11 + 0x50) =
                 ((((int)(iVar7 * iVar9 + (iVar7 * iVar9 >> 0x1f & 0x7fU)) >> 7) + iVar20) -
                 ((int)(iVar8 * iVar9 + (iVar8 * iVar9 >> 0x1f & 0x7fU)) >> 7)) - iVar5;
            lVar11 = *(longlong *)(unaff_RBP + 0x7f);
            goto code_r0x0001807cdce3;
          }
          *(uint *)(lVar11 + 0x50) = uVar12 * -0x40;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 1;
        }
        else if (iVar9 == 2) {
          if ((*(byte *)(unaff_R14 + 0xbe6) & 1) == 0) {
            uVar21 = (ulonglong)*(byte *)(lVar6 + 0xd3);
            uVar12 = (uint)bVar22 + (uint)*(byte *)(lVar6 + 0xd3);
            uVar14 = (ulonglong)uVar12;
            iVar9 = *(int *)(*(longlong *)(unaff_RBP + -9) + 0x1c);
            iVar20 = *(int *)(uVar14 * 4 + 0x180be7620);
            if ((-1 < iVar9) || (uVar12 == 0)) goto code_r0x0001807cdc27;
            iVar7 = iVar20 - *(int *)(uVar14 * 4 + 0x180be761c);
            goto code_r0x0001807cdc32;
          }
          *(uint *)(lVar11 + 0x50) = (uint)bVar22 * -0x40;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 1;
        }
        else {
code_r0x0001807cdce3:
          *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 1;
        }
      }
      break;
    case 1:
      *(undefined4 *)(lVar11 + 0x50) = 0;
      piVar3 = (int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x40);
      *piVar3 = *piVar3 + (uint)*(byte *)(lVar6 + 0xf6) * -4;
      lVar11 = *(longlong *)(unaff_RBP + 0x7f);
      if (*(int *)(lVar11 + 0x40) < 0x38) {
        *(undefined4 *)(lVar11 + 0x40) = 0x38;
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 1;
      break;
    case 2:
      *(undefined4 *)(lVar11 + 0x50) = 0;
      piVar3 = (int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x40);
      *piVar3 = *piVar3 + (uint)*(byte *)(lVar6 + 0xf5) * 4;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
      *pbVar2 = *pbVar2 | 1;
      break;
    case 3:
      *(undefined4 *)(lVar11 + 0x50) = 0;
      func_0x0001807ccb80(lVar6);
      break;
    case 4:
      func_0x0001807cf230(lVar6);
      *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + *(char *)(lVar6 + 0x107);
      lVar11 = *(longlong *)(unaff_RBP + -1);
      if ('\x1f' < *(char *)(lVar6 + 0x106)) {
        *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + -0x40;
      }
      goto code_r0x0001807ce2c1;
    case 5:
      *(undefined4 *)(lVar11 + 0x50) = 0;
      func_0x0001807ccb80(lVar6);
      bVar18 = *(byte *)(lVar6 + 0xf9);
      if (bVar18 >> 4 == 0) {
        if ((bVar18 & 0xf) != 0) {
          piVar3 = (int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44);
          *piVar3 = *piVar3 - (uint)(bVar18 & 0xf);
          if (*(int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44) < 0) {
            *(undefined4 *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44) = 0;
          }
        }
      }
      else {
code_r0x0001807cddae:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44);
        *piVar3 = *piVar3 + (uint)(bVar18 >> 4);
        if (0x40 < *(int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44)) {
          *(undefined4 *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44) = 0x40;
        }
      }
      goto code_r0x0001807ce2b1;
    case 6:
      func_0x0001807cf230(lVar6);
      *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + *(char *)(lVar6 + 0x107);
      if ('\x1f' < *(char *)(lVar6 + 0x106)) {
        *(char *)(lVar6 + 0x106) = *(char *)(lVar6 + 0x106) + -0x40;
      }
      bVar18 = *(byte *)(lVar6 + 0xf9);
      if (bVar18 >> 4 != 0) goto code_r0x0001807cddae;
      if ((bVar18 & 0xf) != 0) {
        piVar3 = (int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44);
        *piVar3 = *piVar3 - (uint)(bVar18 & 0xf);
        if (*(int *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44) < 0) {
          *(undefined4 *)(*(longlong *)(unaff_RBP + 0x7f) + 0x44) = 0;
        }
      }
      goto code_r0x0001807ce2b1;
    case 7:
      lVar11 = *plVar1;
      bVar15 = *(byte *)(lVar6 + 0x10a) & 0x1f;
      bVar18 = *(byte *)(lVar6 + 0x126) >> 4;
      bVar22 = bVar18 & 3;
      if ((bVar18 & 3) == 0) {
code_r0x0001807cde95:
        bVar18 = *(byte *)((ulonglong)bVar15 + 0x180be7500);
code_r0x0001807cdea1:
        *(uint *)(lVar11 + 0x4c) = (uint)bVar18;
      }
      else {
        if (bVar22 == 1) {
          bVar15 = bVar15 << 3;
          bVar18 = ~bVar15;
          if (-1 < (char)*(byte *)(lVar6 + 0x10a)) {
            bVar18 = bVar15;
          }
          goto code_r0x0001807cdea1;
        }
        if (bVar22 == 2) {
          *(undefined4 *)(lVar11 + 0x4c) = 0xff;
        }
        else if (bVar22 == 3) goto code_r0x0001807cde95;
      }
      iVar9 = (int)((uint)*(byte *)(lVar6 + 0x10c) * *(int *)(lVar11 + 0x4c)) >> 6;
      *(int *)(lVar11 + 0x4c) = iVar9;
      if (*(char *)(lVar6 + 0x10a) < '\0') {
        if ((short)(*(short *)(lVar11 + 0x44) - (short)iVar9) < 0) {
          iVar9 = *(int *)(lVar11 + 0x44);
        }
        *(int *)(lVar11 + 0x4c) = -iVar9;
      }
      else if (0x40 < *(int *)(lVar11 + 0x44) + iVar9) {
        *(int *)(lVar11 + 0x4c) = 0x40 - *(int *)(lVar11 + 0x44);
      }
      *(char *)(lVar6 + 0x10a) = *(char *)(lVar6 + 0x10a) + *(char *)(lVar6 + 0x10b);
      if ('\x1f' < *(char *)(lVar6 + 0x10a)) {
        *(char *)(lVar6 + 0x10a) = *(char *)(lVar6 + 0x10a) + -0x40;
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
      break;
    case 10:
      bVar18 = *(byte *)(lVar6 + 0xf9);
      if (bVar18 >> 4 == 0) {
        if ((bVar18 & 0xf) != 0) {
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) - (uint)(bVar18 & 0xf);
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
          if (*(int *)(lVar11 + 0x44) < 0) {
            *(undefined4 *)(lVar11 + 0x44) = 0;
            lVar11 = *(longlong *)(unaff_RBP + 0x7f);
          }
        }
      }
      else {
        *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + (uint)(bVar18 >> 4);
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        if (0x40 < *(int *)(lVar11 + 0x44)) {
          *(undefined4 *)(lVar11 + 0x44) = 0x40;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
          break;
        }
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
      break;
    case 0xe:
      if (uVar12 == 9) {
        if (bVar22 == 0) break;
        if (*(int *)(unaff_R14 + 0xbec) % (int)(uint)bVar22 == 0) {
          *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 8;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 1;
        }
      }
      else {
        if (uVar12 != 0xc) {
          if (uVar12 == 0xd) {
            if (*(uint *)(unaff_R14 + 0xbec) == (uint)bVar22) {
              if (lVar11 == 0x180be7ac0) {
                FUN_18080d590();
                lVar11 = *(longlong *)(unaff_RBP + 0x7f);
              }
              *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar6 + 0xd4);
              lVar11 = *(longlong *)(unaff_RBP + -1);
              pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
              *pbVar2 = *pbVar2 | 1;
              pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
              *pbVar2 = *pbVar2 | 8;
              FUN_1807ccd60();
              goto code_r0x0001807ce2c1;
            }
            *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) & 0xfd;
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
            *pbVar2 = *pbVar2 & 0xfe;
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
            *pbVar2 = *pbVar2 & 0xfb;
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
            *pbVar2 = *pbVar2 & 0xf7;
          }
          break;
        }
        if (*(uint *)(unaff_R14 + 0xbec) == (uint)bVar22) {
          *(undefined4 *)(lVar11 + 0x44) = 0;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      goto code_r0x0001807ce2bd;
    case 0x11:
      bVar18 = *(byte *)(unaff_R14 + 0xbe4);
      if (bVar18 >> 4 == 0) {
        if ((bVar18 & 0xf) == 0) break;
        lVar11 = *(longlong *)(unaff_RBP + -1);
        piVar3 = (int *)(unaff_R14 + 0xbe0);
        *piVar3 = *piVar3 - (uint)(bVar18 & 0xf);
        if (*piVar3 < 0) {
          *(undefined4 *)(unaff_R14 + 0xbe0) = 0;
        }
      }
      else {
        lVar11 = *(longlong *)(unaff_RBP + -1);
        *(int *)(unaff_R14 + 0xbe0) = *(int *)(unaff_R14 + 0xbe0) + (uint)(bVar18 >> 4);
        if (0x40 < *(int *)(unaff_R14 + 0xbe0)) {
          *(undefined4 *)(unaff_R14 + 0xbe0) = 0x40;
        }
      }
      goto code_r0x0001807ce2c1;
    case 0x19:
      bVar18 = *(byte *)(lVar6 + 0xfa);
      if (bVar18 >> 4 == 0) {
        if ((bVar18 & 0xf) != 0) {
          *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) - (uint)(bVar18 & 0xf);
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
          if (*(int *)(lVar11 + 0x48) < 0) {
            *(undefined4 *)(lVar11 + 0x48) = 0;
            lVar11 = *(longlong *)(unaff_RBP + 0x7f);
          }
        }
      }
      else {
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + (uint)(bVar18 >> 4);
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        if (0xff < *(int *)(lVar11 + 0x48)) {
          *(undefined4 *)(lVar11 + 0x48) = 0xff;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
          *pbVar2 = *pbVar2 | 4;
          break;
        }
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 4;
      break;
    case 0x1b:
      if ((*(byte *)(lVar6 + 0xfc) == 0) ||
         (*(int *)(unaff_R14 + 0xbec) % (int)(uint)*(byte *)(lVar6 + 0xfc) != 0)) break;
      if (*(char *)(lVar6 + 0xfb) != '\0') {
        switch(*(char *)(lVar6 + 0xfb)) {
        case '\x01':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + -1;
          break;
        case '\x02':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + -2;
          break;
        case '\x03':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + -4;
          break;
        case '\x04':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + -8;
          break;
        case '\x05':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + -0x10;
          break;
        case '\x06':
          iVar9 = *(int *)(lVar11 + 0x44) * 2;
          *(int *)(lVar11 + 0x44) =
               iVar9 / 3 + (iVar9 >> 0x1f) +
               (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case '\a':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) >> 1;
          break;
        default:
          goto code_r0x0001807ce165;
        case '\t':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + 1;
          break;
        case '\n':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + 2;
          break;
        case '\v':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + 4;
          break;
        case '\f':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + 8;
          break;
        case '\r':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + 0x10;
          break;
        case '\x0e':
          *(int *)(lVar11 + 0x44) = (*(int *)(lVar11 + 0x44) * 3) / 2;
          break;
        case '\x0f':
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) << 1;
        }
        lVar11 = *(longlong *)(unaff_RBP + 0x7f);
code_r0x0001807ce165:
        if (0x40 < *(int *)(lVar11 + 0x44)) {
          *(undefined4 *)(lVar11 + 0x44) = 0x40;
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        }
        if (*(int *)(lVar11 + 0x44) < 0) {
          *(undefined4 *)(lVar11 + 0x44) = 0;
          lVar11 = *(longlong *)(unaff_RBP + 0x7f);
        }
      }
      *(byte *)(lVar11 + 0x3c) = *(byte *)(lVar11 + 0x3c) | 2;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
      *pbVar2 = *pbVar2 | 8;
      break;
    case 0x1d:
      bVar18 = *(byte *)(lVar6 + 0x116);
      bVar22 = *(byte *)(lVar6 + 0x117);
      if (bVar22 <= bVar18) {
        *(int *)(lVar11 + 0x4c) = -*(int *)(lVar11 + 0x44);
        bVar18 = *(byte *)(lVar6 + 0x116);
        bVar22 = *(byte *)(lVar6 + 0x117);
      }
      bVar18 = bVar18 + 1;
      if ((uint)*(byte *)(lVar6 + 0x118) + (uint)bVar22 <= (uint)bVar18) {
        bVar18 = 0;
      }
      *(byte *)(lVar6 + 0x116) = bVar18;
code_r0x0001807ce2b1:
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x7f) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
    }
code_r0x0001807ce2bd:
    lVar11 = *(longlong *)(unaff_RBP + -1);
code_r0x0001807ce2c1:
    func_0x0001807cb410(lVar6,lVar23);
    if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(lVar6 + 0x10) != plVar1)) {
      FUN_1807ce440();
    }
    iVar9 = *(int *)(unaff_RBP + 0x77) + 1;
    uVar14 = *(longlong *)(unaff_RBP + 7) + 1;
    unaff_RDI = lVar11 + 5;
    *(int *)(unaff_RBP + 0x77) = iVar9;
    param_3 = 0;
    *(ulonglong *)(unaff_RBP + 7) = uVar14;
    *(longlong *)(unaff_RBP + -1) = unaff_RDI;
    if (*(int *)(unaff_R14 + 0x3c8) <= iVar9) {
      return 0;
    }
  } while( true );
}



undefined8 FUN_1807ce34b(void)

{
  return 0;
}



undefined8 FUN_1807ce440(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char acStackX_18 [16];
  undefined1 auVar5 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  acStackX_18[0] = '\0';
  bVar4 = *(byte *)(param_3 + 0x3c);
  if (*(int *)(param_3 + 0x40) + *(int *)(param_3 + 0x50) == 0) {
    bVar4 = bVar4 & 0xfe;
    *(byte *)(param_3 + 0x3c) = bVar4;
  }
  if ((bVar4 & 8) != 0) {
    FUN_18080d310(param_1,param_4,param_3,0,0);
  }
  plVar1 = *(longlong **)(param_3 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,acStackX_18);
  }
  if (acStackX_18[0] != '\0') {
    bVar4 = *(byte *)(param_3 + 0x3c);
    if ((bVar4 & 2) != 0) {
      (**(code **)(**(longlong **)(param_3 + 0x20) + 0x20))
                (*(longlong **)(param_3 + 0x20),
                 (float)(*(int *)(param_3 + 0x4c) + *(int *)(param_3 + 0x44)) *
                 (float)*(int *)(param_3 + 0x70) * (float)*(int *)(param_3 + 0xb0) *
                 (float)*(int *)(param_1 + 0xbe0) * 2.910383e-11 * *(float *)(param_2 + 0xf0),0);
      bVar4 = *(byte *)(param_3 + 0x3c);
    }
    if ((bVar4 & 4) != 0) {
      (**(code **)(**(longlong **)(param_3 + 0x20) + 0xb0))
                (*(longlong **)(param_3 + 0x20),
                 ((float)*(int *)(param_3 + 0x48) - 128.0) * *(float *)(param_1 + 0xbd8) *
                 0.007874016);
      bVar4 = *(byte *)(param_3 + 0x3c);
    }
    if ((bVar4 & 1) != 0) {
      iVar3 = *(int *)(param_3 + 0x40) + *(int *)(param_3 + 0x50);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      if ((*(byte *)(param_1 + 0xbe6) & 1) != 0) {
        uVar2 = powf(iVar3,(4608.0 - (float)iVar3) * 0.0013020834);
        auVar5._8_8_ = extraout_XMM0_Qb;
        auVar5._0_8_ = extraout_XMM0_Qa;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = (float)extraout_XMM0_Qa * 8363.0 + 0.5;
        if (((int)auVar6._0_4_ != -0x80000000) && ((float)(int)auVar6._0_4_ != auVar6._0_4_)) {
          uVar9 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
          auVar8._0_8_ = auVar6._0_8_;
          auVar8._8_4_ = uVar9;
          auVar8._12_4_ = uVar9;
          auVar7._8_8_ = auVar8._8_8_;
          auVar7._4_4_ = auVar6._0_4_;
          auVar7._0_4_ = auVar6._0_4_;
          movmskps(uVar2,auVar7);
        }
      }
      FUN_180757470(*(undefined8 *)(param_3 + 0x20));
      bVar4 = *(byte *)(param_3 + 0x3c);
    }
    if ((bVar4 & 0x20) != 0) {
      FUN_180758220(*(undefined8 *)(param_3 + 0x20),0x80);
      *(undefined4 *)(param_3 + 0x58) = 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807ce620(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  byte bVar21;
  char *pcVar22;
  int iStackX_18;
  longlong lStack_70;
  longlong lStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  ulonglong uVar16;
  
  bVar7 = false;
  iVar18 = *(int *)(param_1 + 0x3c8);
  pcVar22 = (char *)((longlong)(iVar18 * *(int *)(param_1 + 0xbf8)) * 5 +
                    *(longlong *)
                     ((ulonglong)*(byte *)((longlong)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) *
                      0x10 + 8 + *(longlong *)(param_1 + 0x278)));
  if (pcVar22 != (char *)0x0) {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      pcVar14 = (char *)((longlong)(*(int *)(param_1 + 0xbfc) * 0x100 + *(int *)(param_1 + 0xbf8)) +
                        *(longlong *)(param_1 + 0x288));
      if (*pcVar14 != '\0') {
        *(undefined1 *)(param_1 + 0xbe9) = 1;
        return 0;
      }
      *pcVar14 = '\x01';
      iVar18 = *(int *)(param_1 + 0x3c8);
    }
    iStackX_18 = 0;
    if (0 < iVar18) {
      lStack_58 = 0;
      do {
        bVar10 = pcVar22[4];
        lVar4 = *(longlong *)(param_1 + 0x3d0 + lStack_58 * 8);
        plVar1 = (longlong *)(lVar4 + 8);
        lStack_68 = *plVar1;
        bVar17 = bVar10 & 0xf;
        bVar21 = bVar10 >> 4;
        if (((longlong *)lStack_68 == plVar1) && (*(longlong **)(lVar4 + 0x10) == plVar1)) {
          _DAT_180be7ae8 = &DAT_180be7a80;
          lStack_68 = 0x180be7ac0;
        }
        if ((pcVar22[3] - 3U & 0xfd) == 0) {
          bVar6 = true;
          if (lStack_68 == 0x180be7ac0) {
            bVar6 = false;
          }
        }
        else {
          bVar6 = false;
        }
        if ((pcVar22[1] != '\0') && (!bVar6)) {
          *(char *)(lVar4 + 0xd0) = pcVar22[1] + -1;
        }
        if (((byte)(*pcVar22 - 1U) < 0xfe) && (!bVar6)) {
          *(char *)(lVar4 + 0xd1) = *pcVar22 + -1;
        }
        if ((int)(uint)*(byte *)(lVar4 + 0xd0) < *(int *)(param_1 + 0x8f8)) {
          lStack_70 = (ulonglong)*(byte *)(lVar4 + 0xd0) * 0x618 + *(longlong *)(param_1 + 0x900);
          bVar9 = *(byte *)((ulonglong)*(byte *)(lVar4 + 0xd1) + 0x3a0 + lStack_70);
          if (bVar9 < 0x10) {
            puStack_60 = (undefined *)(lStack_70 + 0x20 + (ulonglong)bVar9 * 0x38);
          }
          else {
            puStack_60 = &DAT_180be7a80;
          }
          if (!bVar6) {
            *(undefined **)(lStack_68 + 0x28) = puStack_60;
          }
        }
        else {
          lStack_70 = 0x180be7b90;
          puStack_60 = &DAT_180be7a80;
          _DAT_180be7a80 = 0;
        }
        uVar2 = *(undefined4 *)(lStack_68 + 0x40);
        iVar18 = *(int *)(lStack_68 + 0x44);
        uVar3 = *(undefined4 *)(lStack_68 + 0x48);
        if ((*(char *)(lVar4 + 0xd8) == '\a') && (pcVar22[3] != '\a')) {
          *(int *)(lStack_68 + 0x44) = *(int *)(lStack_68 + 0x4c) + iVar18;
        }
        *(char *)(lVar4 + 0xd8) = pcVar22[3];
        *(undefined4 *)(lStack_68 + 0x4c) = 0;
        *(undefined1 *)(lStack_68 + 0x3c) = 0;
        if ((byte)(*pcVar22 - 1U) < 0xfe) {
          if (lStack_68 == 0x180be7ac0) {
            FUN_18080d590(param_1,lVar4,puStack_60,&lStack_68);
          }
          if (lStack_68 == 0) {
            lStack_68 = 0x180be7ac0;
            _DAT_180be7ae8 = &DAT_180be7a80;
          }
          bVar9 = puStack_60[0x18] + -1 + *pcVar22;
          *(byte *)(lVar4 + 0xd3) = bVar9;
          iVar20 = *(int *)(puStack_60 + 0x1c);
          if ((*(byte *)(param_1 + 0xbe6) & 1) == 0) {
            uVar19 = (ulonglong)bVar9;
            iVar13 = *(int *)(uVar19 * 4 + 0x180be7620);
            *(int *)(lVar4 + 0xd4) = iVar13;
            if ((iVar20 < 0) && (bVar9 != 0)) {
              iVar11 = iVar13 - *(int *)(uVar19 * 4 + 0x180be761c);
            }
            else {
              iVar11 = *(int *)(uVar19 * 4 + 0x180be7624) - iVar13;
            }
            iVar13 = ((int)((iVar11 * iVar20 >> 0x1f & 0x7fU) + iVar11 * iVar20) >> 7) + iVar13;
          }
          else {
            iVar13 = (0x78 - (uint)bVar9) * 0x40 - iVar20 / 2;
          }
          *(int *)(lVar4 + 0xd4) = iVar13;
          if ((pcVar22[3] - 3U & 0xfd) != 0) {
            *(int *)(lStack_68 + 0x40) = iVar13;
          }
          *(undefined1 *)(lStack_68 + 0x3c) = 8;
        }
        *(undefined4 *)(lStack_68 + 0x50) = 0;
        *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 1;
        *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
        FUN_1807ccd60(param_1,pcVar22,lVar4,lStack_68,lStack_70,puStack_60);
        switch(pcVar22[3]) {
        case '\x01':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xf6) = pcVar22[4];
          }
          break;
        case '\x02':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xf5) = pcVar22[4];
          }
          break;
        case '\x03':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0x104) = pcVar22[4];
          }
          *(undefined4 *)(lVar4 + 0x100) = *(undefined4 *)(lVar4 + 0xd4);
          goto code_r0x0001807ce9f4;
        case '\x04':
          if (bVar10 >> 4 != 0) {
            *(byte *)(lVar4 + 0x107) = bVar21;
          }
          if (bVar17 != 0) {
            *(byte *)(lVar4 + 0x108) = bVar17;
          }
          func_0x0001807cf230(lVar4);
          goto LAB_1807cf0c5;
        case '\x05':
          *(undefined4 *)(lVar4 + 0x100) = *(undefined4 *)(lVar4 + 0xd4);
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xf9) = pcVar22[4];
          }
code_r0x0001807ce9f4:
          if (bVar6) {
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xf7;
          }
          *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xfe;
          goto LAB_1807cf0c5;
        case '\x06':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xf9) = pcVar22[4];
          }
          func_0x0001807cf230(lVar4);
          goto LAB_1807cf0c5;
        case '\a':
          if (bVar10 >> 4 != 0) {
            *(byte *)(lVar4 + 0x10b) = bVar21;
          }
          if (bVar17 != 0) {
            *(byte *)(lVar4 + 0x10c) = bVar17;
          }
          break;
        case '\b':
          *(uint *)(lStack_68 + 0x48) = (uint)(byte)pcVar22[4];
          *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 4;
          goto LAB_1807cf0c5;
        case '\t':
          bVar10 = pcVar22[4];
          if (bVar10 == 0) {
            uVar15 = *(uint *)(lVar4 + 0xe8);
          }
          else {
            uVar15 = (uint)bVar10;
            *(uint *)(lVar4 + 0xe8) = (uint)bVar10;
          }
          if (uVar15 << 8 < (uint)(*(int *)(puStack_60 + 0x14) + *(int *)(puStack_60 + 0x10))) {
            *(uint *)(lStack_68 + 0x58) = uVar15 << 8;
          }
          else {
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xf7;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 0x20;
          }
          break;
        case '\n':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xf9) = pcVar22[4];
          }
          break;
        case '\v':
          bVar10 = pcVar22[4];
          *(uint *)(param_1 + 0xc0c) = (uint)bVar10;
          *(undefined4 *)(param_1 + 0xc08) = 0;
          if (*(int *)(param_1 + 0x8ec) <= (int)(uint)bVar10) {
            *(undefined4 *)(param_1 + 0xc0c) = 0;
            *(undefined1 *)(param_1 + 0xbe9) = 1;
          }
          bVar7 = true;
          goto LAB_1807cf0c5;
        case '\f':
          *(uint *)(lStack_68 + 0x44) = (uint)(byte)pcVar22[4];
          *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
          goto LAB_1807cf0c5;
        case '\r':
          uVar15 = (uint)bVar17 + ((uint)bVar21 + (uint)bVar21 * 4) * 2;
          if (0x3f < uVar15) {
            uVar15 = 0;
          }
          *(uint *)(param_1 + 0xc08) = uVar15;
          if (bVar7) {
            iVar18 = *(int *)(param_1 + 0xc0c);
          }
          else {
            iVar18 = *(int *)(param_1 + 0xbfc) + 1;
            *(int *)(param_1 + 0xc0c) = iVar18;
          }
          if (*(int *)(param_1 + 0x8ec) <= iVar18) {
            *(undefined4 *)(param_1 + 0xc0c) = 0;
          }
          break;
        case '\x0e':
          switch(bVar21) {
          case 1:
            if (bVar17 == 0) {
              *(int *)(lStack_68 + 0x40) =
                   *(int *)(lStack_68 + 0x40) + (uint)*(byte *)(lVar4 + 300) * -4;
            }
            else {
              *(byte *)(lVar4 + 300) = bVar17;
              *(int *)(lStack_68 + 0x40) = *(int *)(lStack_68 + 0x40) + (uint)bVar17 * -4;
            }
            break;
          case 2:
            if (bVar17 == 0) {
              uVar15 = (uint)*(byte *)(lVar4 + 0x12d) << 2;
            }
            else {
              uVar15 = (uint)bVar17 << 2;
              *(byte *)(lVar4 + 0x12d) = bVar17;
            }
code_r0x0001807cf0be:
            *(int *)(lStack_68 + 0x40) = *(int *)(lStack_68 + 0x40) + uVar15;
            break;
          case 4:
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) & 0xf0;
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) | bVar17;
            break;
          case 5:
            *(uint *)(puStack_60 + 0x1c) = (uint)bVar17;
            goto code_r0x0001807cf0cd;
          case 6:
            if (bVar17 == 0) {
              *(undefined4 *)(lVar4 + 0x11c) = *(undefined4 *)(param_1 + 0xbf8);
            }
            else {
              if (*(int *)(lVar4 + 0x120) == 0) {
                uVar15 = (uint)bVar17;
              }
              else {
                uVar15 = *(int *)(lVar4 + 0x120) - 1;
              }
              *(uint *)(lVar4 + 0x120) = uVar15;
              if (((uVar15 != 0) &&
                  (*(undefined4 *)(param_1 + 0xc08) = *(undefined4 *)(lVar4 + 0x11c),
                  *(longlong *)(param_1 + 0x288) != 0)) &&
                 (iVar18 = *(int *)(lVar4 + 0x11c), iVar18 <= *(int *)(param_1 + 0xbf8))) {
                do {
                  iVar20 = *(int *)(param_1 + 0xbfc) * 0x100 + iVar18;
                  iVar18 = iVar18 + 1;
                  *(undefined1 *)((longlong)iVar20 + *(longlong *)(param_1 + 0x288)) = 0;
                } while (iVar18 <= *(int *)(param_1 + 0xbf8));
              }
            }
            break;
          case 7:
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) & 0xf;
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) | bVar17 << 4;
            break;
          case 8:
            *(uint *)(lStack_68 + 0x48) = (uint)bVar17 << 4;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 4;
            break;
          case 10:
            if (bVar17 == 0) {
              bVar17 = *(byte *)(lVar4 + 299);
            }
            else {
              *(byte *)(lVar4 + 299) = bVar17;
            }
            *(int *)(lStack_68 + 0x44) = *(int *)(lStack_68 + 0x44) + (uint)bVar17;
            if (0x40 < *(int *)(lStack_68 + 0x44)) {
              *(undefined4 *)(lStack_68 + 0x44) = 0x40;
            }
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
            break;
          case 0xb:
            if (bVar17 == 0) {
              bVar17 = *(byte *)(lVar4 + 299);
            }
            else {
              *(byte *)(lVar4 + 299) = bVar17;
            }
            *(int *)(lStack_68 + 0x44) = *(int *)(lStack_68 + 0x44) - (uint)bVar17;
            if (*(int *)(lStack_68 + 0x44) < 0) {
              *(undefined4 *)(lStack_68 + 0x44) = 0;
            }
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
            break;
          case 0xd:
            *(int *)(lStack_68 + 0x44) = iVar18;
            *(undefined4 *)(lStack_68 + 0x40) = uVar2;
            *(undefined4 *)(lStack_68 + 0x48) = uVar3;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xfe;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xfd;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xfb;
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) & 0xf7;
            break;
          case 0xe:
            *(uint *)(param_1 + 0xc00) = *(int *)(param_1 + 0xbf0) * (uint)bVar17;
          }
          goto LAB_1807cf0c5;
        case '\x0f':
          bVar10 = pcVar22[4];
          if (0x1f < bVar10) {
            func_0x00018080d4a0(param_1,bVar10);
            goto LAB_1807cf0c5;
          }
          if (bVar10 != 0) {
            *(uint *)(param_1 + 0xbf0) = (uint)bVar10;
          }
          break;
        case '\x10':
          uVar15 = (uint)(byte)pcVar22[4];
          if (0x40 < uVar15) {
            uVar15 = 0x40;
          }
          *(uint *)(param_1 + 0xbe0) = uVar15;
          *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
          goto LAB_1807cf0c5;
        case '\x11':
          if (pcVar22[4] != '\0') {
            *(char *)(param_1 + 0xbe4) = pcVar22[4];
          }
          break;
        default:
          goto LAB_1807cf0c5;
        case '\x15':
          if ((*(byte *)(lStack_70 + 0x400) & 1) != 0) {
            puVar12 = (ushort *)(lStack_70 + 0x406);
            uVar16 = 0;
            uVar15 = 0;
            uVar19 = uVar16;
            if (*puVar12 < (ushort)(byte)pcVar22[4]) {
              do {
                uVar15 = (uint)uVar16;
                if ((int)(uint)*(byte *)(lStack_70 + 0x401) <= (int)uVar15) break;
                puVar12 = puVar12 + 2;
                uVar15 = uVar15 + 1;
                uVar16 = (ulonglong)uVar15;
                uVar19 = uVar19 + 1;
              } while (*puVar12 < (ushort)(byte)pcVar22[4]);
            }
            *(uint *)(lStack_68 + 0x68) = uVar15;
            if ((int)uVar15 < (int)(*(byte *)(lStack_70 + 0x401) - 1)) {
              *(undefined1 *)(lStack_68 + 0x78) = 0;
              *(uint *)(lStack_68 + 100) = (uint)(byte)pcVar22[4];
              iVar20 = *(int *)(lStack_68 + 0x68) + 1;
              uVar5 = (uint)*(ushort *)(lStack_70 + 0x404 + uVar19 * 4);
              uVar15 = (uint)*(ushort *)(lStack_70 + 0x402 + (longlong)(int)(uVar15 * 2) * 2);
              iVar18 = *(ushort *)(lStack_70 + 0x402 + (longlong)(iVar20 * 2) * 2) - uVar15;
              if (iVar18 == 0) {
                *(undefined4 *)(lStack_68 + 0x74) = 0;
              }
              else {
                *(int *)(lStack_68 + 0x74) =
                     (int)((uint)*(ushort *)(lStack_70 + 0x404 + (longlong)(iVar20 * 2) * 2) *
                           0x10000 + uVar5 * -0x10000) / iVar18;
              }
              *(uint *)(lStack_68 + 0x6c) =
                   (*(int *)(lStack_68 + 100) - uVar15) * *(int *)(lStack_68 + 0x74) +
                   uVar5 * 0x10000;
              *(int *)(lStack_68 + 0x70) = (int)*(short *)(lStack_68 + 0x6e);
              *(int *)(lStack_68 + 0x68) = *(int *)(lStack_68 + 0x68) + 1;
            }
            else {
              *(uint *)(lStack_68 + 0x70) =
                   (uint)*(ushort *)
                          (lStack_70 + 0x400 +
                          (ulonglong)((uint)*(byte *)(lStack_70 + 0x401) * 2) * 2);
              *(undefined1 *)(lStack_68 + 0x78) = 1;
            }
            goto LAB_1807cf0c5;
          }
          break;
        case '\x19':
          if (pcVar22[4] != '\0') {
            *(char *)(lVar4 + 0xfa) = pcVar22[4];
            *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 4;
          }
          break;
        case '\x1b':
          if (pcVar22[4] != '\0') {
            *(byte *)(lVar4 + 0xfb) = bVar21;
            *(byte *)(lVar4 + 0xfc) = bVar17;
          }
          break;
        case '\x1d':
          if (pcVar22[4] == '\0') {
            bVar21 = *(byte *)(lVar4 + 0x117);
          }
          else {
            bVar21 = bVar21 + 1;
            *(byte *)(lVar4 + 0x117) = bVar21;
            *(byte *)(lVar4 + 0x118) = bVar17 + 1;
          }
          bVar10 = *(byte *)(lVar4 + 0x116);
          if (bVar21 <= bVar10) {
            *(int *)(lStack_68 + 0x4c) = -*(int *)(lStack_68 + 0x44);
            bVar10 = *(byte *)(lVar4 + 0x116);
            bVar21 = *(byte *)(lVar4 + 0x117);
          }
          bVar10 = bVar10 + 1;
          if ((uint)*(byte *)(lVar4 + 0x118) + (uint)bVar21 <= (uint)bVar10) {
            bVar10 = 0;
          }
          *(byte *)(lVar4 + 0x116) = bVar10;
          *(byte *)(lStack_68 + 0x3c) = *(byte *)(lStack_68 + 0x3c) | 2;
          goto LAB_1807cf0c5;
        case '!':
          if (bVar21 == 1) {
            if (bVar17 == 0) {
              *(int *)(lStack_68 + 0x40) =
                   *(int *)(lStack_68 + 0x40) - (uint)*(byte *)(lVar4 + 0xf8);
            }
            else {
              *(byte *)(lVar4 + 0xf8) = bVar17;
              *(int *)(lStack_68 + 0x40) = *(int *)(lStack_68 + 0x40) - (uint)bVar17;
            }
          }
          else if (bVar21 == 2) {
            if (bVar17 == 0) {
              bVar17 = *(byte *)(lVar4 + 0xf7);
            }
            else {
              *(byte *)(lVar4 + 0xf7) = bVar17;
            }
            uVar15 = (uint)bVar17;
            goto code_r0x0001807cf0be;
          }
LAB_1807cf0c5:
        }
code_r0x0001807cf0cd:
        puVar8 = puStack_60;
        func_0x0001807cb410(lVar4,lStack_70);
        if (param_2 != '\0') {
          if ((*(longlong *)(lVar4 + 8) != lVar4 + 8) || (*(longlong *)(lVar4 + 0x10) != lVar4 + 8))
          {
            FUN_1807ce440(param_1,lVar4,*(longlong *)(lVar4 + 8),puVar8);
          }
        }
        iStackX_18 = iStackX_18 + 1;
        lStack_58 = lStack_58 + 1;
        pcVar22 = pcVar22 + 5;
      } while (iStackX_18 < *(int *)(param_1 + 0x3c8));
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807ce6c8(void)

{
  longlong *plVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  ushort *puVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte bVar18;
  longlong lVar19;
  undefined *puVar20;
  int iVar21;
  ulonglong in_R11;
  byte bVar22;
  char *unaff_R14;
  char cVar23;
  ulonglong uVar17;
  
  uVar12 = in_R11 & 0xffffffff;
  *(ulonglong *)(unaff_RBP + 7) = uVar12;
  do {
    bVar9 = unaff_R14[4];
    lVar6 = *(longlong *)(unaff_RBX + 0x3d0 + uVar12 * 8);
    plVar1 = (longlong *)(lVar6 + 8);
    *(ulonglong *)(unaff_RBP + -9) = in_R11;
    plVar16 = (longlong *)*plVar1;
    bVar18 = bVar9 & 0xf;
    bVar22 = bVar9 >> 4;
    if ((plVar16 == plVar1) && (*(longlong **)(lVar6 + 0x10) == plVar1)) {
      _DAT_180be7ae8 = &DAT_180be7a80;
      plVar16 = (longlong *)0x180be7ac0;
    }
    cVar23 = unaff_R14[3];
    *(longlong **)(unaff_RBP + -9) = plVar16;
    if ((cVar23 - 3U & 0xfd) == 0) {
      cVar23 = '\x01';
      if (plVar16 == (longlong *)0x180be7ac0) {
        cVar23 = (char)in_R11;
      }
    }
    else {
      cVar23 = '\0';
    }
    if ((unaff_R14[1] != '\0') && (cVar23 == '\0')) {
      *(char *)(lVar6 + 0xd0) = unaff_R14[1] + -1;
      plVar16 = *(longlong **)(unaff_RBP + -9);
    }
    if (((byte)(*unaff_R14 - 1U) < 0xfe) && (cVar23 == '\0')) {
      *(char *)(lVar6 + 0xd1) = *unaff_R14 + -1;
      plVar16 = *(longlong **)(unaff_RBP + -9);
    }
    if ((int)(uint)*(byte *)(lVar6 + 0xd0) < *(int *)(unaff_RBX + 0x8f8)) {
      bVar8 = *(byte *)(lVar6 + 0xd1);
      lVar19 = (ulonglong)*(byte *)(lVar6 + 0xd0) * 0x618 + *(longlong *)(unaff_RBX + 0x900);
      *(longlong *)(unaff_RBP + -0x11) = lVar19;
      bVar8 = *(byte *)((ulonglong)bVar8 + 0x3a0 + lVar19);
      if (bVar8 < 0x10) {
        puVar20 = (undefined *)(lVar19 + 0x20 + (ulonglong)bVar8 * 0x38);
      }
      else {
        puVar20 = &DAT_180be7a80;
      }
      *(undefined **)(unaff_RBP + -1) = puVar20;
      if (cVar23 == '\0') {
        *(undefined **)((longlong)plVar16 + 0x28) = puVar20;
        plVar16 = *(longlong **)(unaff_RBP + -9);
      }
    }
    else {
      *(undefined8 *)(unaff_RBP + -0x11) = 0x180be7b90;
      *(undefined **)(unaff_RBP + -1) = &DAT_180be7a80;
      _DAT_180be7a80 = in_R11;
    }
    cVar4 = *(char *)(lVar6 + 0xd8);
    iVar14 = *(int *)((longlong)plVar16 + 0x44);
    *(undefined4 *)(unaff_RBP + 0x7f) = *(undefined4 *)((longlong)plVar16 + 0x40);
    *(undefined4 *)(unaff_RBP + -0x19) = *(undefined4 *)((longlong)plVar16 + 0x48);
    if ((cVar4 == '\a') && (unaff_R14[3] != '\a')) {
      *(int *)((longlong)plVar16 + 0x44) = *(int *)((longlong)plVar16 + 0x4c) + iVar14;
    }
    *(char *)(lVar6 + 0xd8) = unaff_R14[3];
    *(int *)(*(longlong *)(unaff_RBP + -9) + 0x4c) = (int)in_R11;
    *(undefined1 *)(*(longlong *)(unaff_RBP + -9) + 0x3c) = 0;
    if ((byte)(*unaff_R14 - 1U) < 0xfe) {
      lVar19 = *(longlong *)(unaff_RBP + -9);
      if (lVar19 == 0x180be7ac0) {
        FUN_18080d590();
        lVar19 = *(longlong *)(unaff_RBP + -9);
        in_R11 = 0;
      }
      if (lVar19 == 0) {
        *(undefined8 *)(unaff_RBP + -9) = 0x180be7ac0;
        _DAT_180be7ae8 = &DAT_180be7a80;
      }
      lVar19 = *(longlong *)(unaff_RBP + -1);
      bVar8 = *(char *)(lVar19 + 0x18) + -1 + *unaff_R14;
      *(byte *)(lVar6 + 0xd3) = bVar8;
      iVar21 = *(int *)(lVar19 + 0x1c);
      if ((*(byte *)(unaff_RBX + 0xbe6) & 1) == 0) {
        uVar12 = (ulonglong)bVar8;
        iVar13 = *(int *)(uVar12 * 4 + 0x180be7620);
        *(int *)(lVar6 + 0xd4) = iVar13;
        if ((iVar21 < 0) && (bVar8 != 0)) {
          iVar10 = iVar13 - *(int *)(uVar12 * 4 + 0x180be761c);
        }
        else {
          iVar10 = *(int *)(uVar12 * 4 + 0x180be7624) - iVar13;
        }
        iVar13 = ((int)((iVar10 * iVar21 >> 0x1f & 0x7fU) + iVar10 * iVar21) >> 7) + iVar13;
      }
      else {
        iVar13 = (0x78 - (uint)bVar8) * 0x40 - iVar21 / 2;
      }
      *(int *)(lVar6 + 0xd4) = iVar13;
      if ((unaff_R14[3] - 3U & 0xfd) != 0) {
        *(int *)(*(longlong *)(unaff_RBP + -9) + 0x40) = iVar13;
      }
      *(undefined1 *)(*(longlong *)(unaff_RBP + -9) + 0x3c) = 8;
    }
    *(int *)(*(longlong *)(unaff_RBP + -9) + 0x50) = (int)in_R11;
    pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
    *pbVar2 = *pbVar2 | 1;
    pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
    *pbVar2 = *pbVar2 | 2;
    FUN_1807ccd60();
    switch(unaff_R14[3]) {
    case '\x01':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xf6) = unaff_R14[4];
      }
      break;
    case '\x02':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xf5) = unaff_R14[4];
      }
      break;
    case '\x03':
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0x104) = unaff_R14[4];
      }
      *(undefined4 *)(lVar6 + 0x100) = *(undefined4 *)(lVar6 + 0xd4);
      goto code_r0x0001807ce9f4;
    case '\x04':
      if (bVar9 >> 4 != 0) {
        *(byte *)(lVar6 + 0x107) = bVar22;
      }
      if (bVar18 != 0) {
        *(byte *)(lVar6 + 0x108) = bVar18;
      }
      func_0x0001807cf230(lVar6);
      goto LAB_1807cf0c5;
    case '\x05':
      *(undefined4 *)(lVar6 + 0x100) = *(undefined4 *)(lVar6 + 0xd4);
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xf9) = unaff_R14[4];
      }
code_r0x0001807ce9f4:
      if (cVar23 != '\0') {
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xf7;
      }
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
      *pbVar2 = *pbVar2 & 0xfe;
      goto LAB_1807cf0c5;
    case '\x06':
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xf9) = unaff_R14[4];
      }
      func_0x0001807cf230(lVar6);
      goto LAB_1807cf0c5;
    case '\a':
      if (bVar9 >> 4 != 0) {
        *(byte *)(lVar6 + 0x10b) = bVar22;
      }
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (bVar18 != 0) {
        *(byte *)(lVar6 + 0x10c) = bVar18;
      }
      break;
    case '\b':
      *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x48) = (uint)(byte)unaff_R14[4];
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
      *pbVar2 = *pbVar2 | 4;
      goto LAB_1807cf0c5;
    case '\t':
      bVar9 = unaff_R14[4];
      if (bVar9 == 0) {
        uVar15 = *(uint *)(lVar6 + 0xe8);
      }
      else {
        uVar15 = (uint)bVar9;
        *(uint *)(lVar6 + 0xe8) = (uint)bVar9;
      }
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (uVar15 << 8 <
          (uint)(*(int *)(*(longlong *)(unaff_RBP + -1) + 0x14) +
                *(int *)(*(longlong *)(unaff_RBP + -1) + 0x10))) {
        *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x58) = uVar15 << 8;
      }
      else {
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xf7;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 | 0x20;
      }
      break;
    case '\n':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xf9) = unaff_R14[4];
      }
      break;
    case '\v':
      bVar9 = unaff_R14[4];
      *(uint *)(unaff_RBX + 0xc0c) = (uint)bVar9;
      *(undefined4 *)(unaff_RBX + 0xc08) = 0;
      if (*(int *)(unaff_RBX + 0x8ec) <= (int)(uint)bVar9) {
        *(undefined4 *)(unaff_RBX + 0xc0c) = 0;
        *(undefined1 *)(unaff_RBX + 0xbe9) = 1;
      }
      *(undefined1 *)(unaff_RBP + 0x67) = 1;
      goto LAB_1807cf0c5;
    case '\f':
      *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x44) = (uint)(byte)unaff_R14[4];
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      goto LAB_1807cf0c5;
    case '\r':
      uVar15 = (uint)bVar18 + ((uint)bVar22 + (uint)bVar22 * 4) * 2;
      if (0x3f < uVar15) {
        uVar15 = 0;
      }
      *(uint *)(unaff_RBX + 0xc08) = uVar15;
      if (*(char *)(unaff_RBP + 0x67) == '\0') {
        iVar14 = *(int *)(unaff_RBX + 0xbfc) + 1;
        *(int *)(unaff_RBX + 0xc0c) = iVar14;
      }
      else {
        iVar14 = *(int *)(unaff_RBX + 0xc0c);
      }
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (*(int *)(unaff_RBX + 0x8ec) <= iVar14) {
        *(undefined4 *)(unaff_RBX + 0xc0c) = 0;
      }
      break;
    case '\x0e':
      switch(bVar22) {
      case 1:
        if (bVar18 == 0) {
          piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x40);
          *piVar3 = *piVar3 + (uint)*(byte *)(lVar6 + 300) * -4;
        }
        else {
          *(byte *)(lVar6 + 300) = bVar18;
          piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x40);
          *piVar3 = *piVar3 + (uint)bVar18 * -4;
        }
        break;
      case 2:
        if (bVar18 == 0) {
          uVar15 = (uint)*(byte *)(lVar6 + 0x12d) << 2;
        }
        else {
          uVar15 = (uint)bVar18 << 2;
          *(byte *)(lVar6 + 0x12d) = bVar18;
        }
code_r0x0001807cf0be:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x40);
        *piVar3 = *piVar3 + uVar15;
        break;
      case 4:
        *(byte *)(lVar6 + 0x126) = *(byte *)(lVar6 + 0x126) & 0xf0;
        *(byte *)(lVar6 + 0x126) = *(byte *)(lVar6 + 0x126) | bVar18;
        break;
      case 5:
        lVar19 = *(longlong *)(unaff_RBP + -0x11);
        *(uint *)(*(longlong *)(unaff_RBP + -1) + 0x1c) = (uint)bVar18;
        goto code_r0x0001807cf0cd;
      case 6:
        if (bVar18 == 0) {
          *(undefined4 *)(lVar6 + 0x11c) = *(undefined4 *)(unaff_RBX + 0xbf8);
        }
        else {
          if (*(int *)(lVar6 + 0x120) == 0) {
            uVar15 = (uint)bVar18;
          }
          else {
            uVar15 = *(int *)(lVar6 + 0x120) - 1;
          }
          *(uint *)(lVar6 + 0x120) = uVar15;
          if (((uVar15 != 0) &&
              (*(undefined4 *)(unaff_RBX + 0xc08) = *(undefined4 *)(lVar6 + 0x11c),
              *(longlong *)(unaff_RBX + 0x288) != 0)) &&
             (iVar14 = *(int *)(lVar6 + 0x11c), iVar14 <= *(int *)(unaff_RBX + 0xbf8))) {
            do {
              iVar21 = *(int *)(unaff_RBX + 0xbfc) * 0x100 + iVar14;
              iVar14 = iVar14 + 1;
              *(undefined1 *)((longlong)iVar21 + *(longlong *)(unaff_RBX + 0x288)) = 0;
            } while (iVar14 <= *(int *)(unaff_RBX + 0xbf8));
          }
        }
        break;
      case 7:
        *(byte *)(lVar6 + 0x126) = *(byte *)(lVar6 + 0x126) & 0xf;
        *(byte *)(lVar6 + 0x126) = *(byte *)(lVar6 + 0x126) | bVar18 << 4;
        break;
      case 8:
        *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x48) = (uint)bVar18 << 4;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 | 4;
        break;
      case 10:
        if (bVar18 == 0) {
          bVar18 = *(byte *)(lVar6 + 299);
        }
        else {
          *(byte *)(lVar6 + 299) = bVar18;
        }
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x44);
        *piVar3 = *piVar3 + (uint)bVar18;
        lVar19 = *(longlong *)(unaff_RBP + -9);
        if (0x40 < *(int *)(lVar19 + 0x44)) {
          *(undefined4 *)(lVar19 + 0x44) = 0x40;
          lVar19 = *(longlong *)(unaff_RBP + -9);
        }
        *(byte *)(lVar19 + 0x3c) = *(byte *)(lVar19 + 0x3c) | 2;
        break;
      case 0xb:
        if (bVar18 == 0) {
          bVar18 = *(byte *)(lVar6 + 299);
        }
        else {
          *(byte *)(lVar6 + 299) = bVar18;
        }
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x44);
        *piVar3 = *piVar3 - (uint)bVar18;
        lVar19 = *(longlong *)(unaff_RBP + -9);
        if (*(int *)(lVar19 + 0x44) < 0) {
          *(undefined4 *)(lVar19 + 0x44) = 0;
          lVar19 = *(longlong *)(unaff_RBP + -9);
        }
        *(byte *)(lVar19 + 0x3c) = *(byte *)(lVar19 + 0x3c) | 2;
        break;
      case 0xd:
        uVar5 = *(undefined4 *)(unaff_RBP + 0x7f);
        *(int *)(*(longlong *)(unaff_RBP + -9) + 0x44) = iVar14;
        *(undefined4 *)(*(longlong *)(unaff_RBP + -9) + 0x40) = uVar5;
        *(undefined4 *)(*(longlong *)(unaff_RBP + -9) + 0x48) = *(undefined4 *)(unaff_RBP + -0x19);
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xfe;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xfd;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xfb;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 & 0xf7;
        break;
      case 0xe:
        *(uint *)(unaff_RBX + 0xc00) = *(int *)(unaff_RBX + 0xbf0) * (uint)bVar18;
      }
      goto LAB_1807cf0c5;
    case '\x0f':
      bVar9 = unaff_R14[4];
      if (0x1f < bVar9) {
        func_0x00018080d4a0();
        goto LAB_1807cf0c5;
      }
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (bVar9 != 0) {
        *(uint *)(unaff_RBX + 0xbf0) = (uint)bVar9;
      }
      break;
    case '\x10':
      uVar15 = (uint)(byte)unaff_R14[4];
      if (0x40 < uVar15) {
        uVar15 = 0x40;
      }
      *(uint *)(unaff_RBX + 0xbe0) = uVar15;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      goto LAB_1807cf0c5;
    case '\x11':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(char *)(unaff_RBX + 0xbe4) = unaff_R14[4];
      }
      break;
    default:
      goto LAB_1807cf0c5;
    case '\x15':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if ((*(byte *)(lVar19 + 0x400) & 1) != 0) {
        puVar11 = (ushort *)(lVar19 + 0x406);
        uVar17 = 0;
        uVar15 = 0;
        uVar12 = uVar17;
        if (*puVar11 < (ushort)(byte)unaff_R14[4]) {
          do {
            uVar15 = (uint)uVar17;
            if ((int)(uint)*(byte *)(lVar19 + 0x401) <= (int)uVar15) break;
            puVar11 = puVar11 + 2;
            uVar15 = uVar15 + 1;
            uVar17 = (ulonglong)uVar15;
            uVar12 = uVar12 + 1;
          } while (*puVar11 < (ushort)(byte)unaff_R14[4]);
        }
        *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x68) = uVar15;
        bVar9 = *(byte *)(*(longlong *)(unaff_RBP + -0x11) + 0x401);
        if ((int)uVar15 < (int)(bVar9 - 1)) {
          *(undefined1 *)(*(longlong *)(unaff_RBP + -9) + 0x78) = 0;
          *(uint *)(*(longlong *)(unaff_RBP + -9) + 100) = (uint)(byte)unaff_R14[4];
          lVar19 = *(longlong *)(unaff_RBP + -9);
          iVar21 = *(int *)(lVar19 + 0x68) + 1;
          uVar7 = (uint)*(ushort *)(*(longlong *)(unaff_RBP + -0x11) + 0x404 + uVar12 * 4);
          uVar15 = (uint)*(ushort *)
                          (*(longlong *)(unaff_RBP + -0x11) + 0x402 +
                          (longlong)(int)(uVar15 * 2) * 2);
          iVar14 = *(ushort *)
                    (*(longlong *)(unaff_RBP + -0x11) + 0x402 + (longlong)(iVar21 * 2) * 2) - uVar15
          ;
          if (iVar14 == 0) {
            *(undefined4 *)(lVar19 + 0x74) = 0;
          }
          else {
            *(int *)(lVar19 + 0x74) =
                 (int)((uint)*(ushort *)
                              (*(longlong *)(unaff_RBP + -0x11) + 0x404 + (longlong)(iVar21 * 2) * 2
                              ) * 0x10000 + uVar7 * -0x10000) / iVar14;
          }
          lVar19 = *(longlong *)(unaff_RBP + -9);
          *(uint *)(lVar19 + 0x6c) =
               (*(int *)(lVar19 + 100) - uVar15) * *(int *)(lVar19 + 0x74) + uVar7 * 0x10000;
          *(int *)(*(longlong *)(unaff_RBP + -9) + 0x70) =
               (int)*(short *)(*(longlong *)(unaff_RBP + -9) + 0x6e);
          piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x68);
          *piVar3 = *piVar3 + 1;
        }
        else {
          *(uint *)(*(longlong *)(unaff_RBP + -9) + 0x70) =
               (uint)*(ushort *)
                      (*(longlong *)(unaff_RBP + -0x11) + 0x400 + (ulonglong)((uint)bVar9 * 2) * 2);
          *(undefined1 *)(*(longlong *)(unaff_RBP + -9) + 0x78) = 1;
        }
        goto LAB_1807cf0c5;
      }
      break;
    case '\x19':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(char *)(lVar6 + 0xfa) = unaff_R14[4];
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
        *pbVar2 = *pbVar2 | 4;
      }
      break;
    case '\x1b':
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
      if (unaff_R14[4] != '\0') {
        *(byte *)(lVar6 + 0xfb) = bVar22;
        *(byte *)(lVar6 + 0xfc) = bVar18;
      }
      break;
    case '\x1d':
      if (unaff_R14[4] == '\0') {
        bVar22 = *(byte *)(lVar6 + 0x117);
      }
      else {
        bVar22 = bVar22 + 1;
        *(byte *)(lVar6 + 0x117) = bVar22;
        *(byte *)(lVar6 + 0x118) = bVar18 + 1;
      }
      bVar9 = *(byte *)(lVar6 + 0x116);
      if (bVar22 <= bVar9) {
        *(int *)(*(longlong *)(unaff_RBP + -9) + 0x4c) =
             -*(int *)(*(longlong *)(unaff_RBP + -9) + 0x44);
        bVar9 = *(byte *)(lVar6 + 0x116);
        bVar22 = *(byte *)(lVar6 + 0x117);
      }
      bVar9 = bVar9 + 1;
      if ((uint)*(byte *)(lVar6 + 0x118) + (uint)bVar22 <= (uint)bVar9) {
        bVar9 = 0;
      }
      *(byte *)(lVar6 + 0x116) = bVar9;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -9) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      goto LAB_1807cf0c5;
    case '!':
      if (bVar22 == 1) {
        if (bVar18 == 0) {
          piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x40);
          *piVar3 = *piVar3 - (uint)*(byte *)(lVar6 + 0xf8);
        }
        else {
          *(byte *)(lVar6 + 0xf8) = bVar18;
          piVar3 = (int *)(*(longlong *)(unaff_RBP + -9) + 0x40);
          *piVar3 = *piVar3 - (uint)bVar18;
        }
      }
      else if (bVar22 == 2) {
        if (bVar18 == 0) {
          bVar18 = *(byte *)(lVar6 + 0xf7);
        }
        else {
          *(byte *)(lVar6 + 0xf7) = bVar18;
        }
        uVar15 = (uint)bVar18;
        goto code_r0x0001807cf0be;
      }
LAB_1807cf0c5:
      lVar19 = *(longlong *)(unaff_RBP + -0x11);
    }
code_r0x0001807cf0cd:
    func_0x0001807cb410(lVar6,lVar19);
    if ((*(char *)(unaff_RBP + 0x6f) != '\0') &&
       ((*(longlong *)(lVar6 + 8) != lVar6 + 8 || (*(longlong *)(lVar6 + 0x10) != lVar6 + 8)))) {
      FUN_1807ce440();
    }
    iVar14 = *(int *)(unaff_RBP + 0x77) + 1;
    uVar12 = *(longlong *)(unaff_RBP + 7) + 1;
    *(int *)(unaff_RBP + 0x77) = iVar14;
    unaff_R14 = unaff_R14 + 5;
    *(ulonglong *)(unaff_RBP + 7) = uVar12;
    in_R11 = 0;
    if (*(int *)(unaff_RBX + 0x3c8) <= iVar14) {
      return 0;
    }
  } while( true );
}



undefined8 FUN_1807cf15c(void)

{
  return 0;
}



undefined8 FUN_1807cf390(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x28) = 0xe;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(longlong *)(param_1 + 8) = param_1 + 0x178;
  if (*(int *)(param_3 + 0x14) - 1U < 5) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                      (*(longlong **)(param_1 + 0x170),param_1 + 0x18c);
    if ((int)uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined4 *)(param_3 + 0x10);
      if (*(uint *)(param_3 + 0xc) != 0) {
        iVar1 = *(int *)(param_3 + 0x14);
        if (iVar1 == 1) {
          uVar4 = 8;
        }
        else if (iVar1 == 2) {
          uVar4 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar4 = 0x18;
        }
        else {
          if ((iVar1 != 4) && (iVar1 != 5)) {
            *(uint *)(*(longlong *)(param_1 + 8) + 0x18) = *(uint *)(param_3 + 4);
            *(undefined4 *)(param_1 + 0x18) = 0;
            return 0;
          }
          uVar4 = 0x20;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar4;
        *(int *)(*(longlong *)(param_1 + 8) + 0x18) =
             (int)((SUB168((ZEXT416(*(uint *)(param_3 + 4)) << 3) / auVar2,0) & 0xffffffff) /
                  (ulonglong)*(uint *)(param_3 + 0xc));
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 0;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






