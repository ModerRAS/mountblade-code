/**
 * TaleWorlds.Native 工具函数模块 - 系统状态和资源管理
 * 
 * 本文件包含工具函数模块的系统状态管理、资源清理、线程同步等核心功能。
 * 这些函数负责处理系统状态检查、资源清理、线程同步、标志位管理等关键任务。
 * 
 * 主要功能模块：
 * - 系统状态管理和检查
 * - 资源清理和释放
 * - 线程同步和锁管理
 * - 标志位和状态管理
 * - 条件检查和验证
 * 
 * 技术特点：
 * - 支持多线程环境下的安全操作
 * - 提供高效的资源管理机制
 * - 实现动态状态检查和更新
 * - 包含完整的错误处理和异常恢复
 * - 优化性能和内存使用效率
 * 
 * @file 06_utilities_part027.c
 * @version 1.0
 * @date 2024
 */

#include "TaleWorlds.Native.Split.h"

// 工具函数模块常量定义
#define UTILITIES_FLAG_NEGATIVE_0x3FFFFFFB -0x3ffffffb  // 负数标志位
#define UTILITIES_FLAG_MASK_0x3F 0x3f                    // 标志掩码
#define UTILITIES_FLAG_MASK_0x20 0x20                    // 标志掩码
#define UTILITIES_FLAG_MASK_0x40 0x40                    // 标志掩码
#define UTILITIES_FLAG_MASK_0x80 0x80                    // 标志掩码
#define UTILITIES_FLAG_MASK_0x100 0x100                  // 标志掩码
#define UTILITIES_FLAG_MASK_0x200 0x200                  // 标志掩码
#define UTILITIES_FLAG_MASK_0x400 0x400                  // 标志掩码
#define UTILITIES_FLAG_MASK_0x800 0x800                  // 标志掩码
#define UTILITIES_FLAG_MASK_0x1000 0x1000                // 标志掩码
#define UTILITIES_FLAG_MASK_0x2000 0x2000                // 标志掩码
#define UTILITIES_FLAG_MASK_0x4000 0x4000                // 标志掩码
#define UTILITIES_FLAG_MASK_0x8000 0x8000                // 标志掩码
#define UTILITIES_FLAG_MASK_0x10000 0x10000              // 标志掩码
#define UTILITIES_FLAG_MASK_0x20000 0x20000              // 标志掩码
#define UTILITIES_FLAG_MASK_0x40000 0x40000              // 标志掩码

// 工具函数模块状态码枚举
typedef enum {
    UTILITIES_SUCCESS = 0,
    UTILITIES_ERROR_INVALID_PARAM = -1,
    UTILITIES_ERROR_MEMORY = -2,
    UTILITIES_ERROR_STATE = -3,
    UTILITIES_ERROR_LOCK = -4
} UtilitiesStatusCode;

// 工具函数模块参数结构体
typedef struct {
    uint32_t state_flags;         // 状态标志
    uint32_t condition_flags;      // 条件标志
    uint64_t system_mode;         // 系统模式
    uint64_t resource_state;      // 资源状态
    void* resource_pointer;       // 资源指针
} UtilitiesParameters;

// =============================================================================
// 系统状态检查器 (SystemStateChecker)
// =============================================================================
// 功能：检查系统状态并执行相应的状态重置操作
// 参数：param_1 - 系统上下文，param_2 - 状态参数
// 返回值：无
// =============================================================================
void FUN_18094136c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  // 变量重命名以提高可读性：
  // cVar1 -> status_flag: 状态标志
  // iVar2 -> system_check_result: 系统检查结果
  
  // 获取状态标志
  status_flag = *(char *)(param_2 + 0x40);
  system_check_result = func_0x0001808fd8d4();
  
  // 检查系统状态并执行相应操作
  if ((system_check_result != 0) && (status_flag == '\0')) {
    // 加锁并重置系统状态
    LOCK();
    _DAT_180c821d0 = 0;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统状态重置器 (SystemStateResetter)
// =============================================================================
// 功能：重置系统状态并执行相应的初始化操作
// 参数：param_1 - 系统上下文，param_2 - 状态参数
// 返回值：无
// =============================================================================
void FUN_180941383(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  // 变量重命名以提高可读性：
  // cVar1 -> reset_flag: 重置标志
  // iVar2 -> system_check_result: 系统检查结果
  
  // 执行系统初始化
  FUN_1808fc5ac();
  
  // 获取重置标志
  reset_flag = *(char *)(param_2 + 0x38);
  system_check_result = func_0x0001808fd8d4();
  
  // 检查系统状态并执行相应操作
  if ((system_check_result != 0) && (reset_flag == '\0')) {
    // 加锁并重置系统状态
    LOCK();
    _DAT_180c821d0 = 0;
    UNLOCK();
  }
  return;
}





// =============================================================================
// 系统函数调用器 (SystemFunctionInvoker)
// =============================================================================
// 功能：调用系统函数并传递相关参数
// 参数：param_1 - 函数参数数组指针，param_2 - 系统状态参数
// 返回值：无
// =============================================================================
void FUN_18094139f(undefined8 *param_1,longlong param_2)

{
  // 调用系统函数并传递相关参数
  FUN_1808fc51c(*(undefined8 *)(param_2 + 0x60),    // 资源指针1
                *(undefined4 *)(param_2 + 0x68),    // 状态标志
                *(undefined8 *)(param_2 + 0x70),    // 资源指针2
                FUN_1808fc074,                      // 回调函数
                *(undefined4 *)*param_1,            // 函数参数
                param_1);                           // 参数数组指针
  return;
}



// =============================================================================
// 系统状态验证器 (SystemStateValidator)
// =============================================================================
// 功能：验证系统状态并返回验证结果
// 参数：param_1 - 系统状态指针
// 返回值：bool - 验证结果（true表示状态有效，false表示状态无效）
// =============================================================================
bool FUN_1809413d5(undefined8 *param_1)

{
  // 检查系统状态是否为预定义的负数标志
  return *(int *)*param_1 == -0x3ffffffb;
}





// =============================================================================
// 系统资源处理器 (SystemResourceHandler)
// =============================================================================
// 功能：处理系统资源并执行相应的资源操作
// 参数：param_1 - 系统上下文，param_2 - 资源参数
// 返回值：无
// =============================================================================
void FUN_1809413ed(undefined8 param_1,longlong param_2)

{
  // 检查资源状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统资源处理函数
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x50),    // 资源指针1
                  *(undefined8 *)(param_2 + 0x58),    // 资源指针2
                  *(undefined8 *)(param_2 + 0x28),    // 资源指针3
                  *(undefined8 *)(param_2 + 0x70));   // 资源指针4
  }
  return;
}





// =============================================================================
// 系统数据处理器 (SystemDataProcessor)
// =============================================================================
// 功能：处理系统数据并执行相应的数据操作
// 参数：param_1 - 系统上下文，param_2 - 数据参数
// 返回值：无
// =============================================================================
void FUN_180941419(undefined8 param_1,longlong param_2)

{
  // 检查数据状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统数据处理函数
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x60),    // 数据指针1
                  *(undefined8 *)(param_2 + 0x68),    // 数据指针2
                  *(undefined8 *)(param_2 + 0x70),    // 数据指针3
                  *(undefined8 *)(param_2 + 0x78));   // 数据指针4
  }
  return;
}



// =============================================================================
// 系统状态初始化器 (SystemStateInitializer)
// =============================================================================
// 功能：初始化系统状态并设置相关参数
// 参数：param_1 - 系统上下文，param_2 - 状态参数
// 返回值：undefined4 - 状态码（0表示成功）
// =============================================================================
undefined4 FUN_180941445(undefined8 param_1,longlong param_2)

{
  // 设置系统状态参数
  *(undefined8 *)(param_2 + 0x40) = param_1;    // 设置状态指针
  *(undefined8 *)(param_2 + 0x30) = param_1;    // 设置上下文指针
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x30);  // 获取间接指针
  
  // 验证系统状态
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    // 状态有效，设置成功标志
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  
  // 状态无效，终止程序
  terminate();
}





// =============================================================================
// 系统配置处理器 (SystemConfigurationHandler)
// =============================================================================
// 功能：处理系统配置并执行相应的配置操作
// 参数：param_1 - 系统上下文，param_2 - 配置参数
// 返回值：无
// =============================================================================
void FUN_180941486(undefined8 param_1,longlong param_2)

{
  // 检查配置状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统配置处理函数
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x60),    // 配置指针1
                  *(undefined8 *)(param_2 + 0x70),    // 配置指针2
                  *(undefined8 *)(param_2 + 0x28),    // 配置指针3
                  *(undefined8 *)(param_2 + 0x88));   // 配置指针4
  }
  return;
}





// =============================================================================
// 系统函数执行器 (SystemFunctionExecutor)
// =============================================================================
// 功能：执行系统函数并传递相关参数
// 参数：param_1 - 函数参数数组指针
// 返回值：无
// =============================================================================
void FUN_1809414b5(undefined8 *param_1)

{
  // 执行系统函数并传递参数
  func_0x0001808fd024(*(undefined4 *)*param_1);  // 传递函数参数
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统模块初始化器 (SystemModuleInitializer)
// =============================================================================
// 功能：初始化系统模块并执行相应的初始化操作
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809414f0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  // 变量重命名以提高可读性：
  // lVar1 -> module_end: 模块结束地址
  // lVar2 -> module_ptr: 模块指针
  
  // 初始化系统模块
  _DAT_180bf52c0 = &UNK_180a3c3e0;
  
  // 检查模块状态
  if (_DAT_180bf52c8 != 0) {
    // 模块状态异常，终止程序
    FUN_18064e900();
  }
  
  // 重置模块状态
  _DAT_180bf52c8 = 0;
  _DAT_180bf52d8 = 0;
  _DAT_180bf52c0 = &UNK_18098bcb0;
  
  // 检查模块初始化状态
  if (_DAT_180bf5288 == 0) {
    // 执行模块初始化
    FUN_180048980();
    
    // 遍历模块并执行初始化
    module_end = _DAT_180bf5250;
    for (module_ptr = _DAT_180bf5248; module_ptr != module_end; module_ptr = module_ptr + 0x100) {
      FUN_180046b10(module_ptr);
    }
    
    // 检查模块基地址
    if (_DAT_180bf5248 == 0) {
      return;
    }
    
    // 模块初始化失败，终止程序
    FUN_18064e900();
  }
  
  // 模块初始化失败，终止程序
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统状态清理器 (SystemStateCleaner)
// =============================================================================
// 功能：清理系统状态并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941590(void)

{
  // 清理系统状态并设置为默认值
  _DAT_180bf5320 = &UNK_18098bcb0;  // 设置默认状态指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统资源重置器 (SystemResourceResetter)
// =============================================================================
// 功能：重置系统资源并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809415b0(void)

{
  // 重置系统资源并设置为默认值
  _DAT_180bf5770 = &UNK_18098bcb0;  // 设置默认资源指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统配置重置器 (SystemConfigurationResetter)
// =============================================================================
// 功能：重置系统配置并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809415d0(void)

{
  // 重置系统配置并设置为默认值
  _DAT_180bf5208 = &UNK_18098bcb0;  // 设置默认配置指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统数据重置器 (SystemDataResetter)
// =============================================================================
// 功能：重置系统数据并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809415f0(void)

{
  // 重置系统数据并设置为默认值
  _DAT_180bf5bc0 = &UNK_18098bcb0;  // 设置默认数据指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统标志重置器 (SystemFlagResetter)
// =============================================================================
// 功能：重置系统标志并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941610(void)

{
  // 重置系统标志并设置为默认值
  _DAT_180bf5c30 = &UNK_18098bcb0;  // 设置默认标志指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统参数重置器 (SystemParameterResetter)
// =============================================================================
// 功能：重置系统参数并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941630(void)

{
  // 重置系统参数并设置为默认值
  _DAT_180bf6080 = &UNK_18098bcb0;  // 设置默认参数指针
  return;
}





// =============================================================================
// 线程同步清理器 (ThreadSynchronizationCleaner)
// =============================================================================
// 功能：清理线程同步资源并释放相关锁
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941650(void)

{
  // 销毁互斥锁
  _Mtx_destroy_in_situ();
  
  // WARNING: Could not recover jumptable at 0x000180941680. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁条件变量
  _Cnd_destroy_in_situ();
  return;
}





// =============================================================================
// 线程资源清理器 (ThreadResourceCleaner)
// =============================================================================
// 功能：清理线程资源并释放相关同步对象
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941690(void)

{
  // 销毁互斥锁
  _Mtx_destroy_in_situ();
  
  // WARNING: Could not recover jumptable at 0x0001809416c0. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁条件变量
  _Cnd_destroy_in_situ();
  return;
}





// =============================================================================
// 线程锁清理器 (ThreadLockCleaner)
// =============================================================================
// 功能：清理线程锁并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809416d0(void)

{
  // 销毁互斥锁
  _Mtx_destroy_in_situ();
  
  // WARNING: Could not recover jumptable at 0x000180941700. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁条件变量
  _Cnd_destroy_in_situ();
  return;
}





// =============================================================================
// 线程状态清理器 (ThreadStateCleaner)
// =============================================================================
// 功能：清理线程状态并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941710(void)

{
  // 销毁互斥锁
  _Mtx_destroy_in_situ();
  
  // WARNING: Could not recover jumptable at 0x000180941740. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁条件变量
  _Cnd_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统句柄清理器 (SystemHandleCleaner)
// =============================================================================
// 功能：清理系统句柄并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809417a0(void)

{
  // WARNING: Could not recover jumptable at 0x0001809417b8. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 关闭系统句柄
  CloseHandle(_DAT_180c91900);
  return;
}





// =============================================================================
// 互斥锁清理器 (MutexCleaner)
// =============================================================================
// 功能：清理互斥锁并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809417c0(void)

{
  // WARNING: Could not recover jumptable at 0x0001809417d8. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁指定位置的互斥锁
  _Mtx_destroy_in_situ(0x180c91910);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统数据指针重置器 (SystemDataPointerResetter)
// =============================================================================
// 功能：重置系统数据指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809417e0(void)

{
  // 重置系统数据指针并设置为默认值
  _DAT_180d49160 = &UNK_18098bcb0;  // 设置默认数据指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统状态指针重置器 (SystemStatePointerResetter)
// =============================================================================
// 功能：重置系统状态指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941800(void)

{
  // 重置系统状态指针并设置为默认值
  _DAT_180bf64d0 = &UNK_18098bcb0;  // 设置默认状态指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统配置指针重置器 (SystemConfigPointerResetter)
// =============================================================================
// 功能：重置系统配置指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941820(void)

{
  // 重置系统配置指针并设置为默认值
  _DAT_180bf6530 = &UNK_18098bcb0;  // 设置默认配置指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统资源指针重置器 (SystemResourcePointerResetter)
// =============================================================================
// 功能：重置系统资源指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941840(void)

{
  // 重置系统资源指针并设置为默认值
  _DAT_180bf6590 = &UNK_18098bcb0;  // 设置默认资源指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统参数指针重置器 (SystemParameterPointerResetter)
// =============================================================================
// 功能：重置系统参数指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941860(void)

{
  // 重置系统参数指针并设置为默认值
  _DAT_180bf65c0 = &UNK_18098bcb0;  // 设置默认参数指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统标志指针重置器 (SystemFlagPointerResetter)
// =============================================================================
// 功能：重置系统标志指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941880(void)

{
  // 重置系统标志指针并设置为默认值
  _DAT_180bf65f0 = &UNK_18098bcb0;  // 设置默认标志指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统模式指针重置器 (SystemModePointerResetter)
// =============================================================================
// 功能：重置系统模式指针并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809418a0(void)

{
  // 重置系统模式指针并设置为默认值
  _DAT_180bf6620 = &UNK_18098bcb0;  // 设置默认模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统状态模式重置器 (SystemStateModeResetter)
// =============================================================================
// 功能：重置系统状态模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809418c0(void)

{
  // 重置系统状态模式并设置为默认值
  _DAT_180bf6650 = &UNK_18098bcb0;  // 设置默认状态模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统操作模式重置器 (SystemOperationModeResetter)
// =============================================================================
// 功能：重置系统操作模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809418e0(void)

{
  // 重置系统操作模式并设置为默认值
  _DAT_180bf6680 = &UNK_18098bcb0;  // 设置默认操作模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统控制模式重置器 (SystemControlModeResetter)
// =============================================================================
// 功能：重置系统控制模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941900(void)

{
  // 重置系统控制模式并设置为默认值
  _DAT_180bf66b0 = &UNK_18098bcb0;  // 设置默认控制模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统内存管理器 (SystemMemoryManager)
// =============================================================================
// 功能：管理系统内存并执行相应的内存操作
// 参数：param_1 - 内存参数1，param_2 - 内存参数2，param_3 - 内存参数3，param_4 - 内存参数4
// 返回值：无
// =============================================================================
void FUN_180941920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  // 变量重命名以提高可读性：
  // plVar1 -> memory_ptr: 内存指针
  
  // 获取内存指针
  memory_ptr = _DAT_180d49200;
  
  // 调用内存处理函数
  FUN_18008d1f0(param_1,               // 内存参数1
                _DAT_180d49200[1],    // 内存参数2
                param_3,               // 内存参数3
                param_4,               // 内存参数4
                0xfffffffffffffffe);  // 内存标志
  
  // 更新内存指针状态
  _DAT_180d49200[1] = (longlong)memory_ptr;
  *_DAT_180d49200 = (longlong)memory_ptr;
  _DAT_180d49200[2] = (longlong)memory_ptr;
  _DAT_180d49208 = 0;
  
  // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 释放内存
  free(_DAT_180d49200,0x58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统数据模式重置器 (SystemDataModeResetter)
// =============================================================================
// 功能：重置系统数据模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941980(void)

{
  // 重置系统数据模式并设置为默认值
  _DAT_180bf52e8 = &UNK_18098bcb0;  // 设置默认数据模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统功能模式重置器 (SystemFunctionModeResetter)
// =============================================================================
// 功能：重置系统功能模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809419a0(void)

{
  // 重置系统功能模式并设置为默认值
  _DAT_180bf5738 = &UNK_18098bcb0;  // 设置默认功能模式指针
  return;
}





// =============================================================================
// 系统互斥锁销毁器 (SystemMutexDestroyer)
// =============================================================================
// 功能：销毁系统互斥锁并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809419c0(void)

{
  // WARNING: Could not recover jumptable at 0x0001809419d8. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁指定位置的互斥锁
  _Mtx_destroy_in_situ(0x180c91970);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统模块状态管理器 (SystemModuleStateManager)
// =============================================================================
// 功能：管理系统模块状态并执行相应的状态操作
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1809419e0(void)

{
  // 初始化系统模块状态
  _DAT_180d49218 = &UNK_180a3c3e0;
  
  // 检查模块状态
  if (_DAT_180d49220 != 0) {
    // 模块状态异常，终止程序
    FUN_18064e900();
  }
  
  // 重置模块状态
  _DAT_180d49220 = 0;
  _DAT_180d49230 = 0;
  _DAT_180d49218 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统数据状态管理器 (SystemDataStateManager)
// =============================================================================
// 功能：管理系统数据状态并执行相应的状态操作
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941a30(void)

{
  // 初始化系统数据状态
  _DAT_180d49240 = &UNK_180a3c3e0;
  
  // 检查数据状态
  if (_DAT_180d49248 != 0) {
    // 数据状态异常，终止程序
    FUN_18064e900();
  }
  
  // 重置数据状态
  _DAT_180d49248 = 0;
  _DAT_180d49258 = 0;
  _DAT_180d49240 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统异常处理器 (SystemExceptionHandler)
// =============================================================================
// 功能：处理系统异常并执行相应的异常处理操作
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941ad0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  // 变量重命名以提高可读性：
  // piVar1 -> exception_count: 异常计数器
  // puVar2 -> exception_ptr: 异常指针
  // lVar3 -> exception_offset: 异常偏移量
  // uVar4 -> exception_mask: 异常掩码
  
  // 获取异常指针
  exception_ptr = _DAT_180d493f8;
  if (_DAT_180d493f8 == (undefined8 *)0x0) {
    return;
  }
  
  // 计算异常掩码
  exception_mask = (ulonglong)_DAT_180d493f8 & 0xffffffffffc00000;
  if (exception_mask != 0) {
    // 计算异常偏移量
    exception_offset = exception_mask + 0x80 + ((longlong)_DAT_180d493f8 - exception_mask >> 0x10) * 0x50;
    exception_offset = exception_offset - (ulonglong)*(uint *)(exception_offset + 4);
    
    // 检查异常列表状态
    if ((*(void ***)(exception_mask + 0x70) == &ExceptionList) && (*(char *)(exception_offset + 0xe) == '\0')) {
      // 处理异常链表
      *_DAT_180d493f8 = *(undefined8 *)(exception_offset + 0x20);
      *(undefined8 **)(exception_offset + 0x20) = exception_ptr;
      exception_count = (int *)(exception_offset + 0x18);
      *exception_count = *exception_count + -1;
      
      // 检查异常计数器
      if (*exception_count == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      // 调用异常处理函数
      func_0x00018064e870(exception_mask,
                          CONCAT71(0xff000000,*(void ***)(exception_mask + 0x70) == &ExceptionList),
                          _DAT_180d493f8,
                          exception_mask,
                          0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统资源状态管理器 (SystemResourceStateManager)
// =============================================================================
// 功能：管理系统资源状态并执行相应的状态操作
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941b20(void)

{
  // 初始化系统资源状态
  _DAT_180d49638 = &UNK_180a3c3e0;
  
  // 检查资源状态
  if (_DAT_180d49640 != 0) {
    // 资源状态异常，终止程序
    FUN_18064e900();
  }
  
  // 重置资源状态
  _DAT_180d49640 = 0;
  _DAT_180d49650 = 0;
  _DAT_180d49638 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 系统配置模式重置器 (SystemConfigModeResetter)
// =============================================================================
// 功能：重置系统配置模式并设置默认值
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180941b90(void)

{
  // 重置系统配置模式并设置为默认值
  _DAT_180bf7250 = &UNK_18098bcb0;  // 设置默认配置模式指针
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bb0(void)
void FUN_180941bb0(void)

{
  _DAT_180bf72b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bd0(void)
void FUN_180941bd0(void)

{
  _DAT_180bf7310 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bf0(void)
void FUN_180941bf0(void)

{
  if (DAT_180c91d50 != '\0') {
    FUN_18005a050();
    if ((1 < _DAT_180c91d30) && (_DAT_180c91d28 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (_DAT_180c91d18 != (longlong *)0x0) {
      (**(code **)(*_DAT_180c91d18 + 0x38))();
    }
    if (_DAT_180c91cf0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ();
    FUN_180059ee0(0x180c919f0);


// 函数: void FUN_180941d00(void)
void FUN_180941d00(void)

{
  _DAT_180bf90b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941d20(void)
void FUN_180941d20(void)

{
  _DAT_180bf5b88 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941d50(void)
void FUN_180941d50(void)

{
  _DAT_180d48db8 = &UNK_180a3c3e0;
  if (_DAT_180d48dc0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d48dc0 = 0;
  _DAT_180d48dd0 = 0;
  _DAT_180d48db8 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180941da0(void)
void FUN_180941da0(void)

{
                    // WARNING: Could not recover jumptable at 0x000180941db8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180d49680);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941dd0(void)
void FUN_180941dd0(void)

{
  _DAT_180d49730 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941e00(void)
void FUN_180941e00(void)

{
  FUN_180320e20(0x180d497e0);
  if (_DAT_180d49970 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (_DAT_180d49950 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180320b20(0x180d498a0);
  _DAT_180d49830 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941e90(void)
void FUN_180941e90(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (_DAT_180c91f18 != 0) {
    uVar2 = _DAT_180c91f28 - _DAT_180c91f18 & 0xfffffffffffffff8;
    lVar1 = _DAT_180c91f18;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(_DAT_180c91f18 + -8);
      uVar2 = uVar2 + 0x27;
      if (0x1f < (_DAT_180c91f18 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar1,uVar2);
    _DAT_180c91f28 = 0;
    _DAT_180c91f18 = 0;
    uRam0000000180c91f20 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f00(void)
void FUN_180941f00(void)

{
  _DAT_180bf91b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f20(void)
void FUN_180941f20(void)

{
  _DAT_180bf9210 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f40(void)
void FUN_180941f40(void)

{
  _DAT_180bf9270 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f60(void)
void FUN_180941f60(void)

{
  _DAT_180bf92d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f80(void)
void FUN_180941f80(void)

{
  _DAT_180bf9330 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fa0(void)
void FUN_180941fa0(void)

{
  _DAT_180bf9390 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fc0(void)
void FUN_180941fc0(void)

{
  _DAT_180bf93f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fe0(void)
void FUN_180941fe0(void)

{
  _DAT_180bf9450 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942000(void)
void FUN_180942000(void)

{
  _DAT_180bf94b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942020(void)
void FUN_180942020(void)

{
  _DAT_180bf9510 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942040(void)
void FUN_180942040(void)

{
  _DAT_180bf9570 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942060(void)
void FUN_180942060(void)

{
  _DAT_180bf95d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942080(void)
void FUN_180942080(void)

{
  _DAT_180bf9630 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420a0(void)
void FUN_1809420a0(void)

{
  _DAT_180bf9690 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420c0(void)
void FUN_1809420c0(void)

{
  _DAT_180bf96f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420e0(void)
void FUN_1809420e0(void)

{
  _DAT_180bf9750 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942100(void)
void FUN_180942100(void)

{
  _DAT_180bf97b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942120(void)
void FUN_180942120(void)

{
  _DAT_180bf9810 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942140(void)
void FUN_180942140(void)

{
  _DAT_180bf9870 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942160(void)
void FUN_180942160(void)

{
  _DAT_180bf98d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942180(void)
void FUN_180942180(void)

{
  _DAT_180bf9930 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421a0(void)
void FUN_1809421a0(void)

{
  _DAT_180bf9990 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421c0(void)
void FUN_1809421c0(void)

{
  _DAT_180bf99f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421e0(void)
void FUN_1809421e0(void)

{
  _DAT_180bf9a50 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942200(void)
void FUN_180942200(void)

{
  _DAT_180bf9ab0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942220(void)
void FUN_180942220(void)

{
  _DAT_180bf9b10 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942240(void)
void FUN_180942240(void)

{
  _DAT_180bf9b70 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942260(void)
void FUN_180942260(void)

{
  _DAT_180bf9bd0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942280(void)
void FUN_180942280(void)

{
  _DAT_180bf9c30 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422a0(void)
void FUN_1809422a0(void)

{
  _DAT_180bf9c90 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422c0(void)
void FUN_1809422c0(void)

{
  _DAT_180bf9cf0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422e0(void)
void FUN_1809422e0(void)

{
  _DAT_180bf9d50 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942300(void)
void FUN_180942300(void)

{
  _DAT_180bf9db0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942320(void)
void FUN_180942320(void)

{
  _DAT_180bf9e10 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942340(void)
void FUN_180942340(void)

{
  _DAT_180bf9e70 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942360(void)
void FUN_180942360(void)

{
  _DAT_180bf9ed0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942380(void)
void FUN_180942380(void)

{
  _DAT_180bf9f30 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423a0(void)
void FUN_1809423a0(void)

{
  _DAT_180bf9f90 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423c0(void)
void FUN_1809423c0(void)

{
  _DAT_180bf9ff0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423e0(void)
void FUN_1809423e0(void)

{
  _DAT_180bfa050 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942400(void)
void FUN_180942400(void)

{
  _DAT_180bfa0b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942420(void)
void FUN_180942420(void)

{
  _DAT_180bfa110 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942440(void)
void FUN_180942440(void)

{
  _DAT_180bfa170 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942460(void)
void FUN_180942460(void)

{
  _DAT_180bfa1d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942480(void)
void FUN_180942480(void)

{
  _DAT_180bfa230 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809424a0(void)
void FUN_1809424a0(void)

{
  _DAT_180bfa290 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809424c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1809424c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa2f0;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa2e8;
  if (_DAT_180bfa2e8 != _DAT_180bfa2f0) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa2e8 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa310;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa308;
  if (_DAT_180bfa308 != _DAT_180bfa310) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa308 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa330;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa328;
  if (_DAT_180bfa328 != _DAT_180bfa330) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa328 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1809425e0(void)
void FUN_1809425e0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001809425f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c91f70);
  return;
}





// 函数: void FUN_180942660(void)
void FUN_180942660(void)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180067070(&DAT_180bfc140);
  if (0xf < uRam0000000180bfc138) {
    lVar1 = CONCAT71(uRam0000000180bfc121,uRam0000000180bfc120);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180bfc138 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180bfc138 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180bfc130 = 0;
  uRam0000000180bfc138 = 0xf;
  uRam0000000180bfc120 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942690(void)
void FUN_180942690(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < _DAT_180bfc118) {
    lVar1 = CONCAT71(uRam0000000180bfc101,DAT_180bfc100);
    lVar2 = lVar1;
    if (0xfff < _DAT_180bfc118 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,_DAT_180bfc118 + 0x28);
      }
    }
    free(lVar2);
  }
  _DAT_180bfc110 = 0;
  _DAT_180bfc118 = 0xf;


// 函数: void FUN_180942700(void)
void FUN_180942700(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < uRam0000000180bfc0f0) {
    lVar1 = CONCAT71(uRam0000000180bfc0d9,uRam0000000180bfc0d8);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180bfc0f0 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180bfc0f0 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180bfc0e8 = 0;
  uRam0000000180bfc0f0 = 0xf;
  uRam0000000180bfc0d8 = 0;
  return;
}





// 函数: void FUN_180942720(void)
void FUN_180942720(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < uRam0000000180d499c0) {
    lVar1 = CONCAT71(uRam0000000180d499a9,uRam0000000180d499a8);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180d499c0 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180d499c0 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180d499b8 = 0;
  uRam0000000180d499c0 = 0xf;
  uRam0000000180d499a8 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



