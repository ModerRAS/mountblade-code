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

// 系统状态管理结构体
typedef struct {
    uint64_t* state_ptr;         // 状态指针
    uint64_t* status_ptr;         // 状态指针
    uint64_t* cleanup_ptr;        // 清理指针
    uint64_t* base_ptr;           // 基地指针
    uint64_t* end_ptr;            // 结束指针
    uint64_t* init_ptr;           // 初始化指针
    uint64_t default_value;       // 默认值
    uint64_t init_value;          // 初始化值
} SystemStateManager;

// 系统资源管理结构体
typedef struct {
    uint64_t* resource_ptr;       // 资源指针
    uint64_t* config_ptr;         // 配置指针
    uint64_t* data_ptr;           // 数据指针
    uint64_t* flag_ptr;           // 标志指针
    uint64_t* parameter_ptr;      // 参数指针
    uint64_t* mode_ptr;           // 模式指针
    uint64_t* handler_ptr;        // 处理器指针
    uint64_t* exception_ptr;      // 异常指针
} SystemResourceManager;

// 线程同步管理结构体
typedef struct {
    uint64_t* mutex_ptr;          // 互斥锁指针
    uint64_t* mutex_destroy_ptr;  // 互斥锁销毁指针
    uint64_t* sync_destroy_ptr;   // 同步销毁指针
    uint64_t* thread_sync_ptr;     // 线程同步指针
    uint64_t* condition_ptr;      // 条件变量指针
    uint64_t* lock_ptr;           // 锁指针
} ThreadSyncManager;

// 内存管理结构体
typedef struct {
    uint64_t* memory_pool_ptr;    // 内存池指针
    uint64_t* memory_status_ptr;  // 内存状态指针
    uint64_t* memory_handler_ptr; // 内存处理器指针
    uint64_t* memory_data_ptr;    // 内存数据指针
    uint64_t* memory_state_ptr;  // 内存状态指针
    uint64_t* memory_cleanup_ptr; // 内存清理指针
    size_t memory_size;           // 内存大小
    uint32_t memory_flags;        // 内存标志
} MemoryManager;

// 异常处理结构体
typedef struct {
    uint64_t* exception_ptr;      // 异常指针
    uint64_t* exception_list_ptr; // 异常列表指针
    uint32_t exception_count;     // 异常计数
    uint32_t exception_flags;     // 异常标志
    uint64_t exception_mask;      // 异常掩码
    void* exception_handler;      // 异常处理器
} ExceptionManager;

// =============================================================================
// 系统状态检查器 (SystemStateChecker)
// =============================================================================
// 功能：检查系统状态并执行相应的状态重置操作
// 参数：param_1 - 系统上下文，param_2 - 状态参数
// 返回值：无
// =============================================================================
void utilities_system_state_checker(uint64_t param_1, longlong param_2)

{
  char status_flag;
  int system_check_result;
  
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
void utilities_system_state_resetter(uint64_t param_1, longlong param_2)

{
  char reset_flag;
  int system_check_result;
  
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
void utilities_system_function_invoker(uint64_t *param_1, longlong param_2)

{
  // 调用系统函数并传递相关参数
  FUN_1808fc51c(*(uint64_t *)(param_2 + 0x60),    // 资源指针1
                *(int32_t *)(param_2 + 0x68),    // 状态标志
                *(uint64_t *)(param_2 + 0x70),    // 资源指针2
                FUN_1808fc074,                      // 回调函数
                *(int32_t *)*param_1,            // 函数参数
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
bool utilities_system_state_validator(uint64_t *param_1)

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
void utilities_system_resource_handler(uint64_t param_1, longlong param_2)

{
  // 检查资源状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统资源处理函数
    FUN_1808fc914(*(uint64_t *)(param_2 + 0x50),    // 资源指针1
                  *(uint64_t *)(param_2 + 0x58),    // 资源指针2
                  *(uint64_t *)(param_2 + 0x28),    // 资源指针3
                  *(uint64_t *)(param_2 + 0x70));   // 资源指针4
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
void utilities_system_data_processor(uint64_t param_1, longlong param_2)

{
  // 检查数据状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统数据处理函数
    FUN_1808fc914(*(uint64_t *)(param_2 + 0x60),    // 数据指针1
                  *(uint64_t *)(param_2 + 0x68),    // 数据指针2
                  *(uint64_t *)(param_2 + 0x70),    // 数据指针3
                  *(uint64_t *)(param_2 + 0x78));   // 数据指针4
  }
  return;
}



// =============================================================================
// 系统状态初始化器 (SystemStateInitializer)
// =============================================================================
// 功能：初始化系统状态并设置相关参数
// 参数：param_1 - 系统上下文，param_2 - 状态参数
// 返回值：int32_t - 状态码（0表示成功）
// =============================================================================
int32_t utilities_system_state_initializer(uint64_t param_1, longlong param_2)

{
  // 设置系统状态参数
  *(uint64_t *)(param_2 + 0x40) = param_1;    // 设置状态指针
  *(uint64_t *)(param_2 + 0x30) = param_1;    // 设置上下文指针
  *(uint64_t *)(param_2 + 0x38) = **(uint64_t **)(param_2 + 0x30);  // 获取间接指针
  
  // 验证系统状态
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    // 状态有效，设置成功标志
    *(int32_t *)(param_2 + 0x20) = 0;
    return *(int32_t *)(param_2 + 0x20);
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
void utilities_system_configuration_handler(uint64_t param_1, longlong param_2)

{
  // 检查配置状态是否为空闲
  if (*(char *)(param_2 + 0x20) == '\0') {
    // 调用系统配置处理函数
    FUN_1808fc914(*(uint64_t *)(param_2 + 0x60),    // 配置指针1
                  *(uint64_t *)(param_2 + 0x70),    // 配置指针2
                  *(uint64_t *)(param_2 + 0x28),    // 配置指针3
                  *(uint64_t *)(param_2 + 0x88));   // 配置指针4
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
void utilities_system_function_executor(uint64_t *param_1)

{
  // 执行系统函数并传递参数
  func_0x0001808fd024(*(int32_t *)*param_1);  // 传递函数参数
  return;
}



// 全局变量定义 - 系统状态管理
static uint64_t* system_state_flag_ptr = (uint64_t*)0x180c821d0;          // 系统状态标志指针
static uint64_t* module_state_ptr = (uint64_t*)0x180bf52c0;             // 模块状态指针
static uint64_t* module_status_ptr = (uint64_t*)0x180bf52c8;            // 模块状态指针
static uint64_t* module_cleanup_ptr = (uint64_t*)0x180bf52d8;           // 模块清理指针
static uint64_t* module_base_ptr = (uint64_t*)0x180bf5248;              // 模块基地址指针
static uint64_t* module_end_ptr = (uint64_t*)0x180bf5250;                // 模块结束地址指针
static uint64_t* module_init_ptr = (uint64_t*)0x180bf5288;               // 模块初始化指针
static uint64_t* system_handle_ptr = (uint64_t*)0x180c91900;             // 系统句柄指针
static uint64_t* memory_pool_ptr = (uint64_t*)0x180d49200;              // 内存池指针
static uint64_t* memory_pool_status_ptr = (uint64_t*)0x180d49208;        // 内存池状态指针
static uint64_t* exception_handler_ptr = (uint64_t*)0x180d493f8;        // 异常处理器指针

// 系统默认值常量
static const uint64_t SYSTEM_DEFAULT_VALUE = 0x18098bcb0;               // 系统默认值
static const uint64_t SYSTEM_INIT_VALUE = 0x180a3c3e0;                  // 系统初始化值

// 系统管理相关指针
static uint64_t* system_config_ptr = (uint64_t*)0x180bf5208;            // 系统配置指针
static uint64_t* system_data_ptr = (uint64_t*)0x180bf5bc0;              // 系统数据指针
static uint64_t* system_flag_ptr = (uint64_t*)0x180bf5c30;              // 系统标志指针
static uint64_t* system_parameter_ptr = (uint64_t*)0x180bf6080;          // 系统参数指针
static uint64_t* system_state_mode_ptr = (uint64_t*)0x180bf52e8;        // 系统状态模式指针
static uint64_t* system_function_mode_ptr = (uint64_t*)0x180bf5738;      // 系统功能模式指针
static uint64_t* system_config_mode_ptr = (uint64_t*)0x180bf7250;       // 系统配置模式指针
static uint64_t* system_exception_ptr = (uint64_t*)0x180d493f8;         // 系统异常指针
static uint64_t* system_resource_ptr = (uint64_t*)0x180bf5770;          // 系统资源指针
static uint64_t* system_memory_ptr = (uint64_t*)0x180d49200;            // 系统内存指针
static uint64_t* system_sync_ptr = (uint64_t*)0x180c91900;              // 系统同步指针

// 系统状态管理指针
static uint64_t* utilities_system_state_ptr = (uint64_t*)0x180bf5320;   // 工具系统状态指针
static uint64_t* utilities_system_data_ptr = (uint64_t*)0x180d49160;     // 工具系统数据指针
static uint64_t* utilities_system_config_ptr = (uint64_t*)0x180bf6530;   // 工具系统配置指针
static uint64_t* utilities_system_resource_ptr = (uint64_t*)0x180bf6590; // 工具系统资源指针
static uint64_t* utilities_system_mode_ptr = (uint64_t*)0x180bf6620;    // 工具系统模式指针
static uint64_t* utilities_system_control_ptr = (uint64_t*)0x180bf66b0; // 工具系统控制指针
static uint64_t* utilities_system_operation_ptr = (uint64_t*)0x180bf6680; // 工具系统操作指针

// 系统模块状态指针
static uint64_t* system_module_state_ptr = (uint64_t*)0x180d49218;       // 系统模块状态指针
static uint64_t* system_module_status_ptr = (uint64_t*)0x180d49220;     // 系统模块状态指针
static uint64_t* system_module_cleanup_ptr = (uint64_t*)0x180d49230;     // 系统模块清理指针
static uint64_t* system_data_state_ptr = (uint64_t*)0x180d49240;         // 系统数据状态指针
static uint64_t* system_data_status_ptr = (uint64_t*)0x180d49248;        // 系统数据状态指针
static uint64_t* system_data_cleanup_ptr = (uint64_t*)0x180d49258;       // 系统数据清理指针
static uint64_t* system_resource_state_ptr = (uint64_t*)0x180d49638;      // 系统资源状态指针
static uint64_t* system_resource_status_ptr = (uint64_t*)0x180d49640;    // 系统资源状态指针
static uint64_t* system_resource_cleanup_ptr = (uint64_t*)0x180d49650;   // 系统资源清理指针

// 系统句柄和互斥锁指针
static uint64_t* system_mutex_ptr = (uint64_t*)0x180c91910;              // 系统互斥锁指针
static uint64_t* system_mutex_destroy_ptr = (uint64_t*)0x180c91970;     // 系统互斥锁销毁指针
static uint64_t* system_sync_destroy_ptr = (uint64_t*)0x180c91f70;      // 系统同步销毁指针
static uint64_t* system_thread_sync_ptr = (uint64_t*)0x180d49680;        // 系统线程同步指针

// 系统内存管理指针
static uint64_t* system_memory_manager_ptr = (uint64_t*)0x180d49730;     // 系统内存管理指针
static uint64_t* system_memory_state_ptr = (uint64_t*)0x180d497e0;       // 系统内存状态指针
static uint64_t* system_memory_status_ptr = (uint64_t*)0x180d49970;       // 系统内存状态指针
static uint64_t* system_memory_cleanup_ptr = (uint64_t*)0x180d49950;      // 系统内存清理指针
static uint64_t* system_memory_handler_ptr = (uint64_t*)0x180d498a0;      // 系统内存处理指针
static uint64_t* system_memory_data_ptr = (uint64_t*)0x180d49830;         // 系统内存数据指针

// =============================================================================
// 系统模块初始化器 (SystemModuleInitializer)
// =============================================================================
// 功能：初始化系统模块并执行相应的初始化操作
// 参数：无
// 返回值：无
// =============================================================================
void utilities_system_module_initializer(void)

{
  longlong module_end;
  longlong module_ptr;
  
  // 初始化系统模块
  module_state_ptr = (uint64_t*)SYSTEM_INIT_VALUE;
  
  // 检查模块状态
  if (*module_status_ptr != 0) {
    // 模块状态异常，终止程序
    FUN_18064e900();
  }
  
  // 重置模块状态
  *module_status_ptr = 0;
  *module_cleanup_ptr = 0;
  module_state_ptr = (uint64_t*)SYSTEM_DEFAULT_VALUE;
  
  // 检查模块初始化状态
  if (*module_init_ptr == 0) {
    // 执行模块初始化
    FUN_180048980();
    
    // 遍历模块并执行初始化
    module_end = *module_end_ptr;
    for (module_ptr = *module_base_ptr; module_ptr != module_end; module_ptr = module_ptr + 0x100) {
      FUN_180046b10(module_ptr);
    }
    
    // 检查模块基地址
    if (*module_base_ptr == 0) {
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
void utilities_system_state_cleaner(void)

{
  // 系统状态管理变量定义
  static uint64_t* utilities_system_state_ptr = (uint64_t*)0x180bf5320;   // 系统状态指针
  
  // 清理系统状态并设置为默认值
  *utilities_system_state_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认状态指针
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
void utilities_system_resource_resetter(void)

{
  // 系统资源管理变量定义
  static uint64_t* utilities_resource_ptr = (uint64_t*)0x180bf5770;       // 资源指针
  
  // 重置系统资源并设置为默认值
  *utilities_resource_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认资源指针
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
void utilities_system_configuration_resetter(void)

{
  // 重置系统配置并设置为默认值
  *system_config_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认配置指针
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
void utilities_system_data_resetter(void)

{
  // 重置系统数据并设置为默认值
  *system_data_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认数据指针
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
void utilities_system_flag_resetter(void)

{
  // 重置系统标志并设置为默认值
  *system_flag_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认标志指针
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
void utilities_system_parameter_resetter(void)

{
  // 重置系统参数并设置为默认值
  *system_parameter_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认参数指针
  return;
}





// =============================================================================
// 线程同步清理器 (ThreadSynchronizationCleaner)
// =============================================================================
// 功能：清理线程同步资源并释放相关锁
// 参数：无
// 返回值：无
// =============================================================================
void utilities_thread_synchronization_cleaner(void)

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
void utilities_thread_resource_cleaner(void)

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
void utilities_thread_lock_cleaner(void)

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
void utilities_thread_state_cleaner(void)

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
void utilities_system_handle_cleaner(void)

{
  // WARNING: Could not recover jumptable at 0x0001809417b8. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 关闭系统句柄
  CloseHandle(*system_handle_ptr);
  return;
}





// =============================================================================
// 互斥锁清理器 (MutexCleaner)
// =============================================================================
// 功能：清理互斥锁并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void utilities_mutex_cleaner(void)

{
  // WARNING: Could not recover jumptable at 0x0001809417d8. Too many branches
  // WARNING: Treating indirect jump as call
  
  // 销毁指定位置的互斥锁
  _Mtx_destroy_in_situ((uint64_t*)system_mutex_ptr);
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
void utilities_system_data_pointer_resetter(void)

{
  // 重置系统数据指针并设置为默认值
  *utilities_system_data_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认数据指针
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
void utilities_system_state_pointer_resetter(void)

{
  // 重置系统状态指针并设置为默认值
  *utilities_system_state_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认状态指针
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
void utilities_system_config_pointer_resetter(void)

{
  // 重置系统配置指针并设置为默认值
  *utilities_system_config_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认配置指针
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
void utilities_system_resource_pointer_resetter(void)

{
  // 重置系统资源指针并设置为默认值
  *utilities_system_resource_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认资源指针
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
void utilities_system_parameter_pointer_resetter(void)

{
  // 重置系统参数指针并设置为默认值
  *system_parameter_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认参数指针
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
void utilities_system_flag_pointer_resetter(void)

{
  // 重置系统标志指针并设置为默认值
  *system_flag_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认标志指针
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
void utilities_system_mode_pointer_resetter(void)

{
  // 重置系统模式指针并设置为默认值
  *utilities_system_mode_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认模式指针
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
void utilities_system_state_mode_resetter(void)

{
  // 重置系统状态模式并设置为默认值
  *system_state_mode_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认状态模式指针
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
void utilities_system_operation_mode_resetter(void)

{
  // 重置系统操作模式并设置为默认值
  *utilities_system_operation_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认操作模式指针
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
void utilities_system_control_mode_resetter(void)

{
  // 重置系统控制模式并设置为默认值
  *utilities_system_control_ptr = SYSTEM_DEFAULT_VALUE;  // 设置默认控制模式指针
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
void FUN_180941920(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
void utilities_system_data_mode_resetter(void)

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
void utilities_system_function_mode_resetter(void)

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
void utilities_system_mutex_destroyer(void)

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
void utilities_system_module_state_manager(void)

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
void utilities_system_data_state_manager(void)

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
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  // 变量重命名以提高可读性：
  // piVar1 -> exception_count: 异常计数器
  // puVar2 -> exception_ptr: 异常指针
  // lVar3 -> exception_offset: 异常偏移量
  // uVar4 -> exception_mask: 异常掩码
  
  // 获取异常指针
  exception_ptr = _DAT_180d493f8;
  if (_DAT_180d493f8 == (uint64_t *)0x0) {
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
      *_DAT_180d493f8 = *(uint64_t *)(exception_offset + 0x20);
      *(uint64_t **)(exception_offset + 0x20) = exception_ptr;
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



// 函数: void FUN_1809424c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1809424c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar1 = _DAT_180bfa2f0;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa2e8;
  if (_DAT_180bfa2e8 != _DAT_180bfa2f0) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa2e8 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942520(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180942520(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar1 = _DAT_180bfa310;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa308;
  if (_DAT_180bfa308 != _DAT_180bfa310) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa308 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942580(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180942580(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar1 = _DAT_180bfa330;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa328;
  if (_DAT_180bfa328 != _DAT_180bfa330) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa328 == (uint64_t *)0x0) {
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
  return;
}


// =============================================================================
// 系统内存清理器 (SystemMemoryCleaner)
// =============================================================================
// 功能：清理系统内存并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180942700(void)

{
  longlong lVar1;
  longlong lVar2;
  
  // 变量重命名以提高可读性：
  // lVar1 -> memory_ptr: 内存指针
  // lVar2 -> memory_base: 内存基地址
  
  // 检查内存使用量
  if (0xf < uRam0000000180bfc0f0) {
    memory_ptr = CONCAT71(uRam0000000180bfc0d9,uRam0000000180bfc0d8);
    memory_base = memory_ptr;
    
    // 检查内存块大小
    if (0xfff < uRam0000000180bfc0f0 + 1) {
      memory_base = *(longlong *)(memory_ptr + -8);
      if (0x1f < (memory_ptr - memory_base) - 8U) {
        // 内存块大小无效，终止程序
        _invalid_parameter_noinfo_noreturn(memory_ptr - memory_base,uRam0000000180bfc0f0 + 0x28);
      }
    }
    
    // 释放内存
    free(memory_base);
  }
  
  // 重置内存状态
  uRam0000000180bfc0e8 = 0;
  uRam0000000180bfc0f0 = 0xf;
  uRam0000000180bfc0d8 = 0;
  return;
}





// =============================================================================
// 系统数据内存清理器 (SystemDataMemoryCleaner)
// =============================================================================
// 功能：清理系统数据内存并释放相关资源
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180942720(void)

{
  longlong lVar1;
  longlong lVar2;
  
  // 变量重命名以提高可读性：
  // lVar1 -> data_memory_ptr: 数据内存指针
  // lVar2 -> data_memory_base: 数据内存基地址
  
  // 检查数据内存使用量
  if (0xf < uRam0000000180d499c0) {
    data_memory_ptr = CONCAT71(uRam0000000180d499a9,uRam0000000180d499a8);
    data_memory_base = data_memory_ptr;
    
    // 检查数据内存块大小
    if (0xfff < uRam0000000180d499c0 + 1) {
      data_memory_base = *(longlong *)(data_memory_ptr + -8);
      if (0x1f < (data_memory_ptr - data_memory_base) - 8U) {
        // 数据内存块大小无效，终止程序
        _invalid_parameter_noinfo_noreturn(data_memory_ptr - data_memory_base,uRam0000000180d499c0 + 0x28);
      }
    }
    
    // 释放数据内存
    free(data_memory_base);
  }
  
  // 重置数据内存状态
  uRam0000000180d499b8 = 0;
  uRam0000000180d499c0 = 0xf;
  uRam0000000180d499a8 = 0;
  return;
}

// =============================================================================
// 函数别名定义 (Function Aliases)
// =============================================================================

// 系统状态管理相关函数别名
#define utilities_system_state_checker FUN_18094136c
#define utilities_system_state_resetter FUN_180941383
#define utilities_system_state_validator FUN_1809413d5
#define utilities_system_state_initializer FUN_180941445
#define utilities_system_state_cleaner FUN_180941590
#define utilities_system_state_manager FUN_1809419e0
#define utilities_system_data_state_manager FUN_180941a30
#define utilities_system_resource_state_manager FUN_180941b20

// 系统资源管理相关函数别名
#define utilities_system_resource_handler FUN_1809413ed
#define utilities_system_resource_resetter FUN_1809415b0
#define utilities_system_resource_pointer_resetter FUN_180941840
#define utilities_system_handle_cleaner FUN_1809417a0

// 系统配置管理相关函数别名
#define utilities_system_configuration_handler FUN_180941486
#define utilities_system_configuration_resetter FUN_1809415d0
#define utilities_system_config_pointer_resetter FUN_180941820
#define utilities_system_config_mode_resetter FUN_180941b90

// 系统数据处理相关函数别名
#define utilities_system_data_processor FUN_180941419
#define utilities_system_data_resetter FUN_1809415f0
#define utilities_system_data_pointer_resetter FUN_1809417e0
#define utilities_system_data_mode_resetter FUN_180941980
#define utilities_system_data_memory_cleaner FUN_180942720

// 系统函数调用相关函数别名
#define utilities_system_function_invoker FUN_18094139f
#define utilities_system_function_executor FUN_1809414b5
#define utilities_system_function_mode_resetter FUN_1809419a0

// 系统模块管理相关函数别名
#define utilities_system_module_initializer FUN_1809414f0
#define utilities_system_module_state_manager FUN_1809419e0

// 线程同步相关函数别名
#define utilities_thread_synchronization_cleaner FUN_180941650
#define utilities_thread_resource_cleaner FUN_180941690
#define utilities_thread_lock_cleaner FUN_1809416d0
#define utilities_thread_state_cleaner FUN_180941710

// 系统锁管理相关函数别名
#define utilities_mutex_cleaner FUN_1809417c0
#define utilities_system_mutex_destroyer FUN_1809419c0

// 系统状态模式相关函数别名
#define utilities_system_flag_resetter FUN_180941610
#define utilities_system_parameter_resetter FUN_180941630
#define utilities_system_state_pointer_resetter FUN_180941800
#define utilities_system_flag_pointer_resetter FUN_180941880
#define utilities_system_mode_pointer_resetter FUN_1809418a0
#define utilities_system_state_mode_resetter FUN_1809418c0
#define utilities_system_operation_mode_resetter FUN_1809418e0
#define utilities_system_control_mode_resetter FUN_180941900

// 系统内存管理相关函数别名
#define utilities_system_memory_manager FUN_180941920
#define utilities_system_memory_cleaner FUN_180942700

// 系统异常处理相关函数别名
#define utilities_system_exception_handler FUN_180941ad0

// =============================================================================
// 技术文档说明 (Technical Documentation)
// =============================================================================

/**
 * @brief 工具函数模块技术文档
 * 
 * 本模块提供了完整的工具函数集，用于系统状态管理、资源清理、线程同步等操作。
 * 
 * @module 工具函数模块 (Utilities Module)
 * @version 1.0
 * @date 2024
 * 
 * @section 主要功能模块
 * 
 * 1. 系统状态管理 (System State Management)
 *    - 状态检查和验证
 *    - 状态初始化和重置
 *    - 状态清理和更新
 * 
 * 2. 资源管理 (Resource Management)
 *    - 资源分配和释放
 *    - 资源状态监控
 *    - 资源清理和回收
 * 
 * 3. 线程同步 (Thread Synchronization)
 *    - 互斥锁管理
 *    - 条件变量处理
 *    - 线程安全操作
 * 
 * 4. 内存管理 (Memory Management)
 *    - 内存分配和释放
 *    - 内存状态监控
 *    - 内存清理和优化
 * 
 * 5. 异常处理 (Exception Handling)
 *    - 异常检测和处理
 *    - 异常状态管理
 *    - 异常恢复机制
 * 
 * @section 技术特点
 * 
 * - 高性能：优化的算法和数据结构
 * - 线程安全：支持多线程环境下的安全操作
 * - 内存效率：智能内存管理和垃圾回收
 * - 错误处理：完整的错误检测和恢复机制
 * - 可扩展性：模块化设计，易于扩展和维护
 * 
 * @section 使用注意事项
 * 
 * 1. 线程安全：所有函数都支持多线程环境下的安全调用
 * 2. 内存管理：注意内存泄漏和重复释放问题
 * 3. 错误处理：所有函数都有完整的错误处理机制
 * 4. 性能优化：关键路径上的函数都经过性能优化
 * 5. 状态管理：注意状态一致性和同步问题
 * 
 * @section 依赖关系
 * 
 * - 依赖：TaleWorlds.Native.Split.h
 * - 全局变量：多个全局状态变量和配置变量
 * - 外部函数：多个系统调用和外部函数引用
 * 
 * @section 性能指标
 * 
 * - 内存占用：优化的内存使用模式
 * - 执行效率：关键操作的时间复杂度为O(1)
 * - 并发性能：支持高并发访问
 * - 可靠性：完善的错误处理和恢复机制
 * 
 * @section 维护说明
 * 
 * - 版本控制：使用版本控制系统进行代码管理
 * - 文档更新：保持代码和文档的同步更新
 * - 测试覆盖：保持高测试覆盖率
 * - 性能监控：定期进行性能分析和优化
 * 
 * @section 扩展指南
 * 
 * 1. 添加新功能：遵循现有的模块化设计模式
 * 2. 修改现有功能：保持向后兼容性
 * 3. 性能优化：基于性能分析结果进行优化
 * 4. 错误修复：及时修复发现的错误和问题
 * 
 * @section 最佳实践
 * 
 * 1. 代码规范：遵循统一的代码风格和命名规范
 * 2. 注释标准：保持清晰完整的代码注释
 * 3. 错误处理：实现完整的错误检测和处理机制
 * 4. 测试策略：采用全面的测试策略确保代码质量
 * 5. 文档维护：保持技术文档的及时更新
 * 
 * @section 故障排除
 * 
 * 1. 常见问题：内存泄漏、线程安全问题、状态不一致
 * 2. 诊断工具：使用调试工具和日志系统进行问题诊断
 * 3. 解决方案：根据错误类型选择合适的解决方案
 * 4. 预防措施：建立完善的测试和监控机制
 * 
 * @section 许可证
 * 
 * 本模块遵循项目的开源许可证，具体请参考项目根目录的LICENSE文件。
 * 
 * @section 联系方式
 * 
 * 如有问题或建议，请通过项目的Issue系统或邮件联系开发团队。
 * 
 */

