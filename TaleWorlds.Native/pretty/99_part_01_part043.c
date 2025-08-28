/**
 * @file 99_part_01_part043.c
 * @brief 系统数据处理和状态管理模块
 * 
 * 本模块是系统核心功能的一部分，主要负责：
 * - 系统数据的处理和转换
 * - 状态管理和控制
 * - 系统配置的初始化和验证
 * - 资源分配和清理
 * - 系统级别的错误处理
 * 
 * 该文件作为系统核心模块的一个子模块，提供了数据处理和状态管理的核心支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/* ============================================================================
 * 系统数据处理和状态管理常量定义
 * ============================================================================ */

/**
 * @brief 系统数据处理和状态管理接口
 * @details 定义系统数据处理和状态管理的参数和接口函数
 * 
 * 功能：
 * - 处理系统数据转换和验证
 * - 管理系统状态和生命周期
 * - 初始化系统配置和参数
 * - 分配和释放系统资源
 * - 处理系统级别的错误和异常
 * 
 * @note 该文件作为系统核心模块的子模块，提供数据处理和状态管理支持
 */

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 系统数据处理器
#define SystemDataProcessor FUN_1800cd350

// 系统配置管理器
#define SystemConfigManager FUN_1800cd410

// 系统状态验证器
#define SystemStateValidator FUN_1802c22a0

// 系统初始化检查器
#define SystemInitChecker FUN_180178540

// 系统初始化完成器
#define SystemInitCompleter FUN_180178650

// 系统预处理器
#define SystemPreprocessor FUN_1802cb930

// 系统参数设置器
#define SystemParameterSetter FUN_1802cc890

// 系统清理器
#define SystemCleaner FUN_1808fc050

// 系统配置初始化器
#define SystemConfigInitializer FUN_1800ca380

// 系统数据管理器
#define SystemDataManager FUN_18029de40

// 系统状态处理器
#define SystemStateProcessor FUN_1802c8fe0

// 系统转换器
#define SystemTransformer FUN_1800c8190

// 系统验证器
#define SystemValidator FUN_1800c7cb0

// 系统分析器
#define SystemAnalyzer FUN_1800c89a0

// 系统优化器
#define SystemOptimizer FUN_1800c7b10

// 系统控制器
#define SystemController FUN_1800c78b0

// 系统执行器
#define SystemExecutor FUN_1800cbf90

// 系统复制器
#define SystemCopier FUN_18029fc10

// 系统锁管理器
#define SystemLockManager _Mtx_lock

// 系统锁释放器
#define SystemLockReleaser _Mtx_unlock

// 系统错误处理器
#define SystemErrorHandler __Throw_C_error_std__YAXH_Z

// 系统状态获取器
#define SystemStateGetter FUN_180244ff0

// 系统处理器
#define SystemProcessor FUN_180245280

// 系统消息处理器
#define SystemMessageProcessor FUN_18029c8a0

// 系统队列管理器
#define SystemQueueManager FUN_18029d760

// 系统缓冲区管理器
#define SystemBufferManager FUN_18029d930

// 系统安全Cookie变量 - 用于栈保护和安全检查
#define SystemSecurityCookie GET_SECURITY_COOKIE()

// 数据拼接宏 - 用于将不同位宽的数据拼接成完整数据
#define System_Concat32Low CONCAT44     // 32位数据拼接（低32位）
#define System_Concat31Bits CONCAT31     // 31位数据拼接
#define System_Concat71Bits CONCAT71     // 71位数据拼接

// 函数指针调用模式 - 用于动态函数调用
#define System_FunctionPointerCall(code) (**(code **))
#define System_MethodCall(obj, method) (**(code **)(obj + method))

/* ============================================================================
 * 类型别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 基础类型别名
typedef uint64_t SystemHandle;           // 系统句柄
typedef uint64_t DataHandle;            // 数据句柄
typedef uint64_t ConfigHandle;          // 配置句柄
typedef uint64_t StateHandle;           // 状态句柄
typedef uint64_t ResourceHandle;        // 资源句柄

// 状态类型别名
typedef int32_t SystemStatus;           // 系统状态
typedef int32_t DataStatus;             // 数据状态
typedef int32_t ConfigStatus;           // 配置状态
typedef int32_t ResourceStatus;         // 资源状态

// 标志类型别名
typedef int32_t SystemFlags;            // 系统标志
typedef int32_t DataFlags;              // 数据标志
typedef int32_t ConfigFlags;            // 配置标志

// 数据类型别名
typedef int8_t SystemByte;              // 系统字节
typedef int16_t SystemWord;              // 系统字
typedef int32_t SystemDword;             // 系统双字

// 指针类型别名
typedef void* SystemContext;            // 系统上下文
typedef void* DataContext;               // 数据上下文
typedef void* ConfigContext;            // 配置上下文
typedef void* ResourceContext;          // 资源上下文

// 函数指针类型别名
typedef int (*SystemCallback)(void*);   // 系统回调函数
typedef int (*DataCallback)(void*);     // 数据回调函数
typedef int (*ConfigCallback)(void*);   // 配置回调函数

// 枚举类型别名
typedef enum {
    SYSTEM_STATE_INITIALIZING = 0,
    SYSTEM_STATE_READY = 1,
    SYSTEM_STATE_PROCESSING = 2,
    SYSTEM_STATE_COMPLETING = 3,
    SYSTEM_STATE_ERROR = 4
} SystemState;

typedef enum {
    DATA_TYPE_RAW = 0,
    DATA_TYPE_PROCESSED = 1,
    DATA_TYPE_OPTIMIZED = 2,
    DATA_TYPE_VALIDATED = 3
} DataType;

typedef enum {
    CONFIG_TYPE_DEFAULT = 0,
    CONFIG_TYPE_CUSTOM = 1,
    CONFIG_TYPE_SYSTEM = 2,
    CONFIG_TYPE_USER = 3
} ConfigType;

// 结构体类型别名
typedef struct {
    SystemHandle handle;
    DataHandle data;
    ConfigHandle config;
    SystemStatus status;
    SystemFlags flags;
    void* user_data;
} SystemInfo;

typedef struct {
    DataHandle handle;
    SystemHandle system;
    DataStatus status;
    DataFlags flags;
    void* user_data;
} DataInfo;

typedef struct {
    ConfigHandle handle;
    SystemHandle system;
    ConfigStatus status;
    void* user_data;
} ConfigInfo;

/* ============================================================================
 * 常量定义
 * ============================================================================ */
#define SYSTEM_BUFFER_SIZE 0x20
#define SYSTEM_STACK_SIZE 0x18
#define SYSTEM_FLAG_INITIALIZED 1
#define SYSTEM_FLAG_ACTIVE 2
#define SYSTEM_FLAG_SECURE 4
#define SYSTEM_FLAG_VALIDATED 8
#define SYSTEM_ERROR_INVALID_CONFIG 0x1c
#define SYSTEM_ERROR_RESOURCE_BUSY 0x76
#define SYSTEM_SUCCESS 0
#define SYSTEM_MAX_HANDLES 0x65
#define SYSTEM_MAX_QUEUE_SIZE 0x1f
#define SYSTEM_DEFAULT_TIMEOUT 0xffffffff
#define SYSTEM_CONFIG_OFFSET 0x129c1
#define SYSTEM_STATE_OFFSET 0x1bd8
#define SYSTEM_DATA_OFFSET 0x126e0

/* ============================================================================
 * 函数实现
 * ============================================================================ */

// 系统数据处理器 - 处理系统数据的转换和验证
void SystemDataProcessor(SystemHandle system_interface, longlong config_data, SystemHandle param_3, SystemHandle param_4)

{
  longlong validation_result;
  SystemHandle temp_handle;
  SystemContext system_context;
  ConfigContext config_context;
  SystemStatus operation_result;
  SystemByte config_flag;
  SystemStatus init_result;
  SystemByte system_buffer [SYSTEM_BUFFER_SIZE];
  
  // 初始化系统上下文
  temp_handle = system_interface;
  system_context = system_interface;
  
  // 调用系统状态验证器处理数据
  operation_result = SystemStateValidator(&temp_handle, &unknown_var_2560_ptr, param_3, param_4, 0xfffffffffffffffe);
  
  // 检查配置有效性
  if (*(char *)(config_data + SYSTEM_CONFIG_OFFSET) != '\0') {
    // 验证系统标志
    if (((*(uint *)(config_data + 4) & 0x10000000) == 0) && 
        ((*(byte *)(config_data + SYSTEM_STATE_OFFSET) & 0x20) != 0)) {
      // 执行系统初始化检查
      validation_result = SystemInitChecker();
      if (validation_result != 0) {
        SystemInitChecker();
        SystemInitCompleter();
      }
    }
    
    // 检查配置状态
    if (*(char *)(config_data + SYSTEM_CONFIG_OFFSET + 8) != '\0') {
      if (*(char *)(config_data + SYSTEM_CONFIG_OFFSET + 7) != '\0') {
        SystemPreprocessor();
      }
      SystemParameterSetter(config_data, config_data + SYSTEM_DATA_OFFSET, 
                          ~(*(byte *)(config_data + SYSTEM_STATE_OFFSET) >> 5) & 1);
    }
  }
  
  // 更新系统数据状态
  system_system_data_ui = system_system_data_ui - 1;
  
  // 执行系统调用（简化实现）
  // WARNING: Could not recover jumptable at 0x0001800cd40a. Too many branches
  // WARNING: Treating indirect jump as call
  System_FunctionPointerCall(*system_system_data_ui + 0x20)();
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cd410(uint64_t param_1,longlong param_2,char param_3,int8_t param_4)
void FUN_1800cd410(uint64_t param_1,longlong param_2,char param_3,int8_t param_4)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar27;
  longlong lVar28;
  uint64_t uVar29;
  int32_t uVar30;
  longlong alStackX_10 [2];
  char cStackX_20;
  uint8_t uStackX_21;
  int8_t auStack_a8 [24];
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  ulonglong uStack_48;
  ulonglong uVar26;
  
  _cStackX_20 = CONCAT71(uStackX_21,param_4);
  uStack_68 = 0xfffffffffffffffe;
  if (param_3 != '\0') {
    uStack_90 = 0x1800cd44e;
    FUN_1800ca380();
  }
  lVar27 = system_message_buffer;
  uVar24 = 0;
  *(uint64_t *)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83d8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83e0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83e8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83f0) = 0;
  uStack_90 = 0x1800cd4d6;
  FUN_18029de40(*(uint64_t *)(lVar27 + 0x1cd8),7);
  lVar27 = 0x8a38;
  lVar28 = 0x8438;
  uVar26 = uVar24;
  do {
    lVar20 = *(longlong *)(system_message_buffer + 0x1cd8);
    if (((*(longlong *)(lVar28 + lVar20) != 0) || (*(int *)(lVar20 + -0x200 + lVar27) != -1)) ||
       (*(int *)(lVar27 + lVar20) != 0x10)) {
      alStackX_10[0] = 0;
      uStack_90 = 0x1800cd539;
      (**(code **)(**(longlong **)(lVar20 + 0x8400) + 0x40))
                (*(longlong **)(lVar20 + 0x8400),uVar26,1,alStackX_10);
      *(uint64_t *)(lVar28 + lVar20) = 0;
      *(int32_t *)(lVar20 + -0x200 + lVar27) = 0xffffffff;
      *(int32_t *)(lVar27 + lVar20) = 0x10;
      *(int *)(lVar20 + 0x82b4) = *(int *)(lVar20 + 0x82b4) + 1;
    }
    uVar25 = (int)uVar26 + 1;
    uVar26 = (ulonglong)uVar25;
    lVar28 = lVar28 + 8;
    lVar27 = lVar27 + 4;
  } while ((int)uVar25 < 0x10);
  if (*(longlong *)(param_2 + 0x99b8) != 0) {
    uStack_90 = 0x1800cd578;
    FUN_1802c8fe0(*(longlong *)(param_2 + 0x99b8),param_2);
  }
  uStack_90 = 0x1800cd583;
  uVar29 = FUN_1800c8190(param_1,param_2);
  uStack_90 = 0x1800cd58b;
  uVar29 = FUN_1800c7cb0(uVar29,param_2);
  uStack_90 = 0x1800cd593;
  uVar29 = FUN_1800c89a0(uVar29,param_2);
  uStack_90 = 0x1800cd59b;
  uVar29 = FUN_1800c7b10(uVar29,param_2);
  uStack_90 = 0x1800cd5a3;
  FUN_1800c78b0(uVar29,param_2);
  uStack_90 = 0x1800cd5ae;
  FUN_1800cbf90(param_1,param_2);
  if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x21) != '\0')) {
                    // WARNING: Subroutine does not return
    uStack_90 = 0x1800cd5e1;
    memcpy(*(longlong *)(system_message_buffer + 0x1cd8) + 0x1f20,param_2 + 0x35c4,0x6000);
  }
  uStack_90 = 0x1800cd628;
  FUN_18029fc10(*(longlong *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c70),
                *(longlong *)(system_message_buffer + 0x1cd8) + 0x1100,0x6d0);
  lVar27 = system_system_data_ui;
  if (((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)) {
    uVar25 = *(uint *)(system_main_module_state + 0x224) & 1;
    *(uint *)(system_system_data_ui + 0x1ec) = uVar25;
    plVar22 = *(longlong **)(lVar27 + 0xc0);
    plVar23 = *(longlong **)(lVar27 + 200);
    lVar28 = system_message_buffer;
    if (plVar22 != plVar23) {
      do {
        lVar20 = *plVar22;
        lVar28 = lVar20 + 0x58;
        uStack_90 = 0x1800cd698;
        alStackX_10[0] = lVar28;
        iVar19 = _Mtx_lock(lVar28);
        if (iVar19 != 0) {
          uStack_90 = 0x1800cd6a4;
          __Throw_C_error_std__YAXH_Z(iVar19);
        }
        uStack_90 = 0x1800cd6bf;
        (**(code **)(**(longlong **)(lVar20 + 0x148) + 0xc0))
                  (*(longlong **)(lVar20 + 0x148),(uint64_t *)(lVar20 + 200));
        uStack_90 = 0x1800cd6c9;
        iVar19 = _Mtx_unlock(lVar28);
        if (iVar19 != 0) {
          uStack_90 = 0x1800cd6d5;
          __Throw_C_error_std__YAXH_Z(iVar19);
        }
        lVar28 = system_message_buffer;
        uVar29 = *(uint64_t *)(lVar20 + 0xd0);
        uVar5 = *(uint64_t *)(lVar20 + 0xd8);
        uVar6 = *(uint64_t *)(lVar20 + 0xe0);
        uVar7 = *(uint64_t *)(lVar20 + 0xe8);
        uVar8 = *(uint64_t *)(lVar20 + 0xf0);
        uVar9 = *(uint64_t *)(lVar20 + 0xf8);
        uVar10 = *(uint64_t *)(lVar20 + 0x100);
        uVar11 = *(uint64_t *)(lVar20 + 0x108);
        uVar12 = *(uint64_t *)(lVar20 + 0x110);
        uVar13 = *(uint64_t *)(lVar20 + 0x118);
        uVar14 = *(uint64_t *)(lVar20 + 0x120);
        uVar15 = *(uint64_t *)(lVar20 + 0x128);
        uVar16 = *(uint64_t *)(lVar20 + 0x130);
        uVar17 = *(uint64_t *)(lVar20 + 0x138);
        uVar18 = *(uint64_t *)(lVar20 + 0x140);
        lVar4 = *(longlong *)(system_message_buffer + 0x1cd8);
        puVar1 = (uint64_t *)(lVar4 + 0x17d0 + uVar24);
        *puVar1 = *(uint64_t *)(lVar20 + 200);
        puVar1[1] = uVar29;
        puVar1 = (uint64_t *)(lVar4 + 0x17e0 + uVar24);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1 = (uint64_t *)(lVar4 + 0x17f0 + uVar24);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1 = (uint64_t *)(lVar4 + 0x1800 + uVar24);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1 = (uint64_t *)(lVar4 + 0x1810 + uVar24);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1 = (uint64_t *)(lVar4 + 0x1820 + uVar24);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        puVar1 = (uint64_t *)(lVar4 + 0x1830 + uVar24);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        puVar1 = (uint64_t *)(lVar4 + 0x1840 + uVar24);
        *puVar1 = uVar17;
        puVar1[1] = uVar18;
        uVar24 = uVar24 + 0x80;
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar23);
      uVar25 = *(uint *)(lVar27 + 0x1ec);
    }
    *(float *)(*(longlong *)(lVar28 + 0x1cd8) + 0x19d0) = (float)(int)uVar25;
    uStack_90 = 0x1800cd799;
    FUN_18029fc10(*(longlong *)(lVar28 + 0x1cd8),*(uint64_t *)(lVar28 + 0x1cb8),
                  *(longlong *)(lVar28 + 0x1cd8) + 0x17d0,0x210);
  }
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  lVar27 = FUN_180244ff0();
  if (lVar27 != 0) {
    lVar28 = FUN_180244ff0(param_2);
    lVar27 = system_main_module_state;
    iVar19 = *(int *)(param_2 + 0x3578);
    if (*(longlong *)(lVar28 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar28 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar22 = (longlong *)
                ((longlong)(int)((uint)*(byte *)(lVar28 + 0x335) * iVar19) * 0x10 +
                *(longlong *)(lVar28 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar22 = (longlong *)0x0;
  lVar27 = system_main_module_state;
LAB_18024b24e:
  plVar23 = *(longlong **)(system_message_buffer + 0x1cd8);
  if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
    (**(code **)(*plVar23 + 0x70))(plVar23,*plVar22,1);
    lVar27 = system_main_module_state;
  }
  plVar23[0x1077] = (longlong)plVar22;
  iVar19 = 0;
  lVar28 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_2 + 0x96b8) - *(longlong *)(param_2 + 0x96b0) >> 3) <=
        (ulonglong)(longlong)iVar19) break;
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x96b0) + lVar28);
    plVar22 = *(longlong **)(lVar20 + 0x1d8);
    plVar23 = *(longlong **)(system_message_buffer + 0x1cd8);
    if (plVar22 != (longlong *)0x0) {
      if (lVar27 != 0) {
        *(longlong *)(lVar20 + 0x340) = (longlong)*(int *)(lVar27 + 0x224);
      }
      if (*plVar22 != 0) {
        (**(code **)(*plVar23 + 0x70))(plVar23,*plVar22,1);
        lVar27 = system_main_module_state;
      }
    }
    *(longlong **)((longlong)plVar23 + lVar28 + 0x83c0) = plVar22;
    iVar19 = iVar19 + 1;
    lVar28 = lVar28 + 8;
  } while (iVar19 < 4);
  lVar27 = FUN_180245280(param_2);
  if (((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x21) != '\0')) &&
     ((lVar28 = *(longlong *)(system_message_buffer + 0x1cd8), *(longlong *)(lVar28 + 0x8550) != 0 ||
      ((*(int *)(lVar28 + 0x88c4) != -1 || (*(int *)(lVar28 + 0x8ac4) != 0x10)))))) {
    uStack_78 = 0;
    (**(code **)(**(longlong **)(lVar28 + 0x8400) + 0x40))
              (*(longlong **)(lVar28 + 0x8400),0x23,1,&uStack_78);
    *(uint64_t *)(lVar28 + 0x8550) = 0;
    *(int32_t *)(lVar28 + 0x88c4) = 0xffffffff;
    *(int32_t *)(lVar28 + 0x8ac4) = 0x10;
    *(int *)(lVar28 + 0x82b4) = *(int *)(lVar28 + 0x82b4) + 1;
  }
  plVar23 = (longlong *)0x0;
  plVar22 = *(longlong **)(system_message_buffer + 0x1cd8);
  if (lVar27 != 0) {
    iVar19 = *(int *)(param_2 + 0x357c);
    if (*(longlong *)(lVar27 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar23 = (longlong *)((longlong)(iVar19 * 2 + 1) * 0x10 + *(longlong *)(lVar27 + 0x1e0));
      if ((plVar23 != (longlong *)0x0) && (*plVar23 != 0)) {
        (**(code **)(*plVar22 + 0x70))(plVar22,*plVar23,4);
      }
    }
  }
  lVar28 = system_message_buffer;
  plVar22[0x107e] = (longlong)plVar23;
  FUN_18029de40(*(uint64_t *)(lVar28 + 0x1cd8),
                (int)(*(longlong *)(param_2 + 0x96b8) - *(longlong *)(param_2 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_2 + 8) == -1) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(uint *)(param_2 + 0x18);
  }
  if ((uVar25 & 2) != 0) {
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,*(uint64_t *)(param_2 + 0x98d0));
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,*(uint64_t *)(param_2 + 0x98d8));
    uStack_80 = CONCAT31(uStack_80._1_3_,1);
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),3,0,*(uint64_t *)(param_2 + 0x98e0));
    FUN_18029d930(*(uint64_t *)(system_message_buffer + 0x1cd8),4,0,*(uint64_t *)(param_2 + 0x98f0));
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    if (((*(longlong *)(lVar28 + 0x8558) != 0) || (*(int *)(lVar28 + 0x88c8) != -1)) ||
       (lVar20 = system_message_buffer, *(int *)(lVar28 + 0x8ac8) != 0x10)) {
      uStack_78 = 0;
      (**(code **)(**(longlong **)(lVar28 + 0x8400) + 0x40))
                (*(longlong **)(lVar28 + 0x8400),0x24,1,&uStack_78);
      lVar20 = system_message_buffer;
      *(uint64_t *)(lVar28 + 0x8558) = 0;
      *(int32_t *)(lVar28 + 0x88c8) = 0xffffffff;
      *(int32_t *)(lVar28 + 0x8ac8) = 0x10;
      *(int *)(lVar28 + 0x82b4) = *(int *)(lVar28 + 0x82b4) + 1;
    }
    uStack_70 = 0;
    plVar22 = *(longlong **)(*(longlong *)(lVar20 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar22 + 0x40))(plVar22,0x42,1,&uStack_70);
  }
  uStack_60 = *(uint64_t *)(param_2 + 0x11c18);
  uStack_58 = *(uint64_t *)(param_2 + 0x11c20);
  uStack_4c = *(int32_t *)(param_2 + 0x11c2c);
  lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
  fVar2 = *(float *)(param_2 + 0x11c24);
  plVar22 = *(longlong **)(lVar28 + 0x8400);
  fVar3 = *(float *)(param_2 + 0x11c20);
  uStack_50 = *(int32_t *)(param_2 + 0x11c28);
  (**(code **)(*plVar22 + 0x160))(plVar22,1,&uStack_60);
  plVar22 = *(longlong **)(lVar28 + 0x8400);
  uVar25 = 0;
  uVar21 = 0;
  uStack_70 = 0;
  uStack_68 = CONCAT44((int)fVar2,(int)fVar3);
  (**(code **)(*plVar22 + 0x168))(plVar22,1,&uStack_70);
  if (cStackX_20 == '\0') {
    if (((*(uint *)(param_2 + 4) & 1) != 0) || (*(char *)(param_2 + 0x12c0a) != '\0')) {
      uVar21 = 1;
    }
    if ((param_3 == '\x01') && ((*(uint *)(param_2 + 4) & 2) != 0)) {
      uVar21 = uVar21 | 2;
    }
    if (((((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_2 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_ui + 0xa10) == 0)) || (*(char *)(param_2 + 0x130) == '\0')) {
      uVar30 = 0x3f800000;
    }
    else {
      uVar30 = 0;
    }
    if (uVar21 != 0) {
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar21,
                    *(int32_t *)(param_2 + 0x11cf0),uVar30);
    }
    lVar28 = system_message_buffer;
    if (((lVar27 != 0) && (*(char *)(lVar27 + 0x357) != '\0')) &&
       (*(char *)(lVar27 + 0x358) == '\0')) {
      *(int8_t *)(lVar27 + 0x358) = 1;
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(uint64_t *)(lVar28 + 0x1cd8),2,*(int32_t *)(param_2 + 0x11cf0),uVar30);
    }
  }
  if (*(int *)(param_2 + 8) != -1) {
    uVar25 = *(uint *)(param_2 + 0x18);
  }
  if ((uVar25 & 2) != 0) {
    lVar27 = *(longlong *)(param_2 + 0x98d0);
    uStack_78._0_4_ = 0xffffffff;
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98d8);
    uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98e0);
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98f0);
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar27 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x20),&uStack_78);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




