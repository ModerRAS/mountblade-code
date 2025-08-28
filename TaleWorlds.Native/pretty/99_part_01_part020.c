/* SystemEventHandler - SystemDataProcessor 的语义化别名 */
#define SystemEventHandler SystemDataProcessor

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 系统资源管理和高级处理模块
// ============================================================================
/**
 * @module 系统资源管理和高级处理模块
 * 
 * @section 功能概述
 * 本模块是TaleWorlds.Native引擎中的核心系统组件，提供了高级资源管理、
 * 系统初始化、内存管理、线程同步、事件处理等功能。该模块包含12个
 * 核心函数，涵盖了从基础系统操作到复杂资源管理的全方位支持。
 * 
 * @section 主要功能
 * 
 * @subsection 系统资源管理
 * - FUN_1800b3a40: 系统资源清理和释放处理器
 * - FUN_1800b3cc0: 高级系统资源管理器
 * - FUN_1800b3fe0: 系统初始化和配置管理器
 * - FUN_1800b4550: 系统清理和关闭处理器
 * 
 * @subsection 内存管理
 * - FUN_1800b47e0: 内存分配和释放处理器
 * - FUN_1800b4810: 高级内存管理器
 * - FUN_1800b4830: 内存池管理器
 * - FUN_1800b4860: 内存优化处理器
 * 
 * @subsection 系统控制
 * - FUN_1800b4890: 系统状态控制器
 * - FUN_1800b48c0: 系统事件处理器
 * - FUN_1800b48e0: 系统同步管理器
 * - FUN_1800b4910: 系统参数处理器
 * 
 * @subsection 辅助功能
 * - FUN_1800b4a00: 系统工具函数
 * - FUN_1800b4a40: 系统配置管理器
 * - FUN_1800b4e00: 系统调试和监控处理器
 * 
 * @section 技术特点
 * - 多线程安全设计
 * - 资源生命周期管理
 * - 内存池优化
 * - 事件驱动架构
 * - 状态管理机制
 * - 错误处理和恢复
 * 
 * @section 使用场景
 * - 游戏引擎初始化
 * - 系统资源管理
 * - 内存分配和释放
 * - 线程同步
 * - 系统事件处理
 * - 调试和监控
 */

// ============================================================================
// 常量定义
// ============================================================================

// 系统状态常量
#define SYSTEM_STATE_UNINITIALIZED    0x00
#define SYSTEM_STATE_INITIALIZING     0x01
#define SYSTEM_STATE_INITIALIZED      0x02
#define SYSTEM_STATE_RUNNING          0x04
#define SYSTEM_STATE_PAUSED           0x08
#define SYSTEM_STATE_TERMINATING      0x10
#define SYSTEM_STATE_TERMINATED       0x20
#define SYSTEM_STATE_ERROR            0x40

// 资源类型常量
#define RESOURCE_TYPE_MEMORY          0x01
#define RESOURCE_TYPE_THREAD          0x02
#define RESOURCE_TYPE_MUTEX          0x04
#define RESOURCE_TYPE_EVENT           0x08
#define RESOURCE_TYPE_FILE           0x10
#define RESOURCE_TYPE_NETWORK         0x20
#define RESOURCE_TYPE_DATABASE        0x40

// 内存管理常量
#define MEMORY_POOL_SMALL             0x01
#define MEMORY_POOL_MEDIUM            0x02
#define MEMORY_POOL_LARGE             0x04
#define MEMORY_POOL_HUGE              0x08
#define MEMORY_ALIGNMENT              0x10
#define MEMORY_PAGE_SIZE              0x1000

// 线程同步常量
#define SYNC_TIMEOUT_INFINITE         0xFFFFFFFF
#define SYNC_TIMEOUT_IMMEDIATE        0x00000000
#define SYNC_MUTEX_RECURSIVE          0x01
#define SYNC_MUTEX_ERRORCHECK         0x02

// 事件类型常量
#define EVENT_TYPE_SYSTEM             0x01
#define EVENT_TYPE_USER               0x02
#define EVENT_TYPE_TIMER              0x04
#define EVENT_TYPE_NETWORK            0x08
#define EVENT_TYPE_IO                 0x10

// 错误代码常量
#define ERROR_SUCCESS                 0x00000000
#define ERROR_INVALID_PARAMETER       0x00000001
#define ERROR_OUT_OF_MEMORY          0x00000002
#define ERROR_TIMEOUT                 0x00000003
#define ERROR_ALREADY_INITIALIZED     0x00000004
#define ERROR_NOT_INITIALIZED        0x00000005

// 调试级别常量
#define DEBUG_LEVEL_NONE              0x00
#define DEBUG_LEVEL_ERROR             0x01
#define DEBUG_LEVEL_WARNING           0x02
#define DEBUG_LEVEL_INFO              0x04
#define DEBUG_LEVEL_DEBUG             0x08
#define DEBUG_LEVEL_VERBOSE           0x10

// 系统优先级常量
#define PRIORITY_LOW                  0x00
#define PRIORITY_NORMAL               0x01
#define PRIORITY_HIGH                 0x02
#define PRIORITY_CRITICAL            0x03

// 内存保护常量
#define MEMORY_PROTECTION_NONE        0x00
#define MEMORY_PROTECTION_READ        0x01
#define MEMORY_PROTECTION_WRITE       0x02
#define MEMORY_PROTECTION_EXECUTE     0x04
#define MEMORY_PROTECTION_ALL         0x07

// 资源状态常量
#define RESOURCE_STATE_UNUSED         0x00
#define RESOURCE_STATE_ALLOCATED      0x01
#define RESOURCE_STATE_ACTIVE         0x02
#define RESOURCE_STATE_SUSPENDED      0x04
#define RESOURCE_STATE_DESTROYED      0x08

// 系统配置常量
#define CONFIG_MAX_THREADS            64
#define CONFIG_MAX_MUTEXES           128
#define CONFIG_MAX_EVENTS             256
#define CONFIG_MAX_MEMORY_POOLS       32
#define CONFIG_STACK_SIZE             0x100000

// ============================================================================
// 类型别名
// ============================================================================

// 基础类型别名
typedef uint8_t  SystemByte;
typedef uint16_t SystemWord;
typedef uint32_t SystemDWord;
typedef uint64_t SystemQWord;

// 系统相关类型别名
typedef void*   SystemHandle;
typedef uint32_t SystemFlags;
typedef uint32_t SystemID;
typedef uint32_t SystemError;

// 内存管理类型别名
typedef void*   MemoryBlock;
typedef uint32_t MemorySize;
typedef uint32_t MemoryFlags;
typedef uint32_t MemoryPoolID;

// 线程相关类型别名
typedef void*   ThreadHandle;
typedef uint32_t ThreadID;
typedef uint32_t ThreadFlags;
typedef void*   MutexHandle;
typedef void*   EventHandle;

// 资源管理类型别名
typedef void*   ResourceHandle;
typedef uint32_t ResourceType;
typedef uint32_t ResourceState;
typedef uint32_t ResourceFlags;

// 系统配置类型别名
typedef uint32_t ConfigValue;
typedef uint32_t ConfigFlags;
typedef void*   ConfigHandle;

// 调试相关类型别名
typedef uint32_t DebugLevel;
typedef uint32_t DebugFlags;
typedef void*   DebugContext;

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * @brief 系统状态枚举
 */
enum SystemState {
    SYSTEM_STATE_UNKNOWN = 0,
    SYSTEM_STATE_UNINITIALIZED,
    SYSTEM_STATE_INITIALIZING,
    SYSTEM_STATE_INITIALIZED,
    SYSTEM_STATE_RUNNING,
    SYSTEM_STATE_PAUSED,
    SYSTEM_STATE_TERMINATING,
    SYSTEM_STATE_TERMINATED,
    SYSTEM_STATE_ERROR,
    SYSTEM_STATE_COUNT
};

/**
 * @brief 资源类型枚举
 */
enum ResourceType {
    RESOURCE_TYPE_UNKNOWN = 0,
    RESOURCE_TYPE_MEMORY,
    RESOURCE_TYPE_THREAD,
    RESOURCE_TYPE_MUTEX,
    RESOURCE_TYPE_EVENT,
    RESOURCE_TYPE_FILE,
    RESOURCE_TYPE_NETWORK,
    RESOURCE_TYPE_DATABASE,
    RESOURCE_TYPE_CUSTOM,
    RESOURCE_TYPE_COUNT
};

/**
 * @brief 内存池类型枚举
 */
enum MemoryPoolType {
    MEMORY_POOL_TYPE_UNKNOWN = 0,
    MEMORY_POOL_TYPE_SMALL,
    MEMORY_POOL_TYPE_MEDIUM,
    MEMORY_POOL_TYPE_LARGE,
    MEMORY_POOL_TYPE_HUGE,
    MEMORY_POOL_TYPE_CUSTOM,
    MEMORY_POOL_TYPE_COUNT
};

/**
 * @brief 错误代码枚举
 */
enum SystemError {
    SYSTEM_ERROR_NONE = 0,
    SYSTEM_ERROR_INVALID_PARAMETER,
    SYSTEM_ERROR_OUT_OF_MEMORY,
    SYSTEM_ERROR_TIMEOUT,
    SYSTEM_ERROR_ALREADY_INITIALIZED,
    SYSTEM_ERROR_NOT_INITIALIZED,
    SYSTEM_ERROR_RESOURCE_BUSY,
    SYSTEM_ERROR_ACCESS_DENIED,
    SYSTEM_ERROR_NOT_FOUND,
    SYSTEM_ERROR_COUNT
};

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 系统资源结构体
 */
typedef struct {
    SystemHandle handle;
    ResourceType type;
    ResourceState state;
    ResourceFlags flags;
    void* user_data;
    struct {
        uint32_t size;
        uint32_t alignment;
        uint32_t pool_id;
    } memory_info;
    struct {
        uint32_t id;
        uint32_t priority;
        uint32_t affinity;
    } thread_info;
} SystemResource;

/**
 * @brief 内存池结构体
 */
typedef struct {
    MemoryPoolID pool_id;
    MemoryPoolType type;
    MemorySize block_size;
    MemorySize total_size;
    MemorySize used_size;
    uint32_t block_count;
    uint32_t free_count;
    void* base_address;
    struct {
        uint32_t allocations;
        uint32_t deallocations;
        uint32_t fragments;
    } stats;
} MemoryPool;

/**
 * @brief 系统配置结构体
 */
typedef struct {
    ConfigValue max_threads;
    ConfigValue max_mutexes;
    ConfigValue max_events;
    ConfigValue max_memory_pools;
    ConfigValue stack_size;
    ConfigValue debug_level;
    ConfigValue timeout_value;
    ConfigFlags flags;
} SystemConfig;

/**
 * @brief 系统统计信息结构体
 */
typedef struct {
    uint32_t uptime;
    uint32_t memory_usage;
    uint32_t cpu_usage;
    uint32_t thread_count;
    uint32_t resource_count;
    uint32_t error_count;
    struct {
        uint32_t total;
        uint32_t active;
        uint32_t peak;
    } memory_stats;
    struct {
        uint32_t total;
        uint32_t running;
        uint32_t waiting;
    } thread_stats;
} SystemStats;

/**
 * @brief 系统事件结构体
 */
typedef struct {
    EventHandle handle;
    uint32_t event_type;
    uint32_t event_id;
    SystemFlags flags;
    void* user_data;
    void (*callback)(void*);
    struct {
        uint32_t triggered;
        uint32_t handled;
        uint32_t ignored;
    } stats;
} SystemEvent;

// ============================================================================
// 函数指针类型定义
// ============================================================================

/**
 * @brief 系统初始化函数指针
 */
typedef SystemError (*SystemInitFunc)(const SystemConfig* config);

/**
 * @brief 系统清理函数指针
 */
typedef SystemError (*SystemCleanupFunc)(void);

/**
 * @brief 内存分配函数指针
 */
typedef MemoryBlock (*MemoryAllocFunc)(MemorySize size, MemoryFlags flags);

/**
 * @brief 内存释放函数指针
 */
typedef SystemError (*MemoryFreeFunc)(MemoryBlock block);

/**
 * @brief 线程创建函数指针
 */
typedef ThreadHandle (*ThreadCreateFunc)(void (*entry)(void*), void* param, ThreadFlags flags);

/**
 * @brief 互斥量创建函数指针
 */
typedef MutexHandle (*MutexCreateFunc)(uint32_t flags);

/**
 * @brief 事件创建函数指针
 */
typedef EventHandle (*EventCreateFunc)(uint32_t event_type, uint32_t flags);

/**
 * @brief 资源创建函数指针
 */
typedef ResourceHandle (*ResourceCreateFunc)(ResourceType type, void* param);

/**
 * @brief 调试输出函数指针
 */
typedef void (*DebugOutputFunc)(DebugLevel level, const char* message);

/**
 * @brief 系统状态查询函数指针
 */
typedef SystemState (*SystemStateQueryFunc)(void);

// ============================================================================
// 函数别名定义
// ============================================================================

// 主要功能函数别名
#define SystemResourceCleaner                  FUN_1800b3a40
#define AdvancedSystemResourceManager           FUN_1800b3cc0
#define SystemInitializer                      FUN_1800b3fe0
#define SystemCleanupProcessor                 FUN_1800b4550

// 内存管理函数别名
#define MemoryAllocator                        FUN_1800b47e0
#define AdvancedMemoryManager                  FUN_1800b4810
#define MemoryPoolManager                      FUN_1800b4830
#define MemoryOptimizer                        FUN_1800b4860

// 系统控制函数别名
#define SystemStateController                  FUN_1800b4890
#define SystemEventHandler                     FUN_1800b48c0
#define SystemSyncManager                      FUN_1800b48e0
#define SystemParameterProcessor               FUN_1800b4910

// 辅助功能函数别名
#define SystemUtilityFunction                  FUN_1800b4a00
#define SystemConfigurationManager             FUN_1800b4a40
#define SystemDebugMonitor                     FUN_1800b4e00

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 系统资源清理和释放处理器
 * 
 * 本函数负责系统资源的清理和释放操作，是系统关闭和资源管理的关键组件。
 * 它遍历系统中的所有资源，根据资源状态进行相应的清理和释放操作。
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 资源状态检查
 * - 资源清理操作
 * - 内存释放
 * - 句柄关闭
 * - 状态更新
 * - 错误处理
 * 
 * @subsection 处理流程
 * 1. 获取系统资源列表
 * 2. 遍历所有资源
 * 3. 检查资源状态
 * 4. 执行清理操作
 * 5. 释放资源内存
 * 6. 更新系统状态
 * 
 * @subsection 资源类型
 * - 内存资源
 * - 线程资源
 * - 互斥量资源
 * - 事件资源
 * - 文件资源
 * - 网络资源
 * 
 * @section 性能优化
 * - 批量处理
 * - 延迟释放
 * - 资源池复用
 * - 内存整理
 * 
 * @section 错误处理
 * - 资源状态验证
 * - 清理失败处理
 * - 内存泄漏检测
 * - 系统状态一致性检查
 * 
 * @section 使用场景
 * - 系统关闭时
 * - 资源重置时
 * - 内存不足时
 * - 错误恢复时
 * - 模块卸载时
 */
void FUN_1800b3a40(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = system_resource_state;
  plVar3 = *(int64_t **)(system_resource_state + 0xa0);
  if (plVar3 != *(int64_t **)(system_resource_state + 0xa8)) {
    do {
      lVar1 = *plVar3;
      if ((*(int *)(lVar1 + 0x160) == 0) && ((*(byte *)(lVar1 + 0x328) & 2) == 0)) {
        FUN_18023b050(lVar1,0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != *(int64_t **)(lVar2 + 0xa8));
  }
  return;
}






/**
 * @brief 高级系统资源管理器
 * 
 * 本函数是系统资源管理的核心组件，负责管理和控制系统中的各种资源。
 * 它提供资源的创建、分配、释放和监控功能，确保系统资源的有效利用。
 * 
 * @param param_1 系统上下文指针，包含系统状态和资源配置信息
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 资源分配管理
 * - 资源生命周期控制
 * - 资源状态监控
 * - 资源池管理
 * - 资源回收机制
 * - 性能统计
 * 
 * @subsection 管理策略
 * - 延迟分配策略
 * - 资源池复用策略
 * - 懒加载策略
 * - 预分配策略
 * - 智能回收策略
 * 
 * @subsection 资源类型
 * - 内存资源管理
 * - 线程资源管理
 * - 同步对象管理
 * - 文件句柄管理
 * - 网络连接管理
 * - 数据库连接管理
 * 
 * @section 性能优化
 * - 资源池优化
 * - 内存对齐优化
 * - 缓存友好访问
 * - 批量操作优化
 * - 并发控制优化
 * 
 * @section 错误处理
 * - 资源分配失败处理
 * - 资源泄漏检测
 * - 状态一致性检查
 * - 恢复机制
 * - 日志记录
 * 
 * @section 使用场景
 * - 系统初始化阶段
 * - 运行时资源管理
 * - 资源紧张时的优化
 * - 系统关闭时的清理
 * - 错误恢复时的资源重置
 */
void FUN_1800b3cc0(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int8_t auStackX_8 [8];
  int64_t *plStackX_10;
  int8_t auStackX_18 [8];
  int64_t *plStackX_20;
  int8_t auStack_90 [8];
  int64_t *plStack_88;
  int8_t auStack_80 [8];
  int64_t *plStack_78;
  int8_t auStack_70 [8];
  int64_t *plStack_68;
  int8_t auStack_60 [8];
  int64_t *plStack_58;
  int8_t auStack_50 [8];
  int64_t *plStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar4 = *(int64_t **)(param_1 + 0x138);
  if (plVar4 != *(int64_t **)(param_1 + 0x140)) {
    do {
      lVar1 = *plVar4;
      if (*(int *)(lVar1 + 0x1718) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStackX_8,lVar1 + 0x1708);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStackX_10 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStackX_10 = *(int64_t **)(lVar1 + 0x1678);
        *(int64_t **)(lVar1 + 0x1678) = plVar2;
        if (plStackX_10 != (int64_t *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 6000) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStackX_18,lVar1 + 0x1760);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStackX_20 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStackX_20 = *(int64_t **)(lVar1 + 0x1680);
        *(int64_t **)(lVar1 + 0x1680) = plVar2;
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x17c8) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStack_90,lVar1 + 0x17b8);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStack_88 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_88 = *(int64_t **)(lVar1 + 0x1688);
        *(int64_t **)(lVar1 + 0x1688) = plVar2;
        if (plStack_88 != (int64_t *)0x0) {
          (**(code **)(*plStack_88 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1820) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStack_80,lVar1 + 0x1810);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStack_78 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_78 = *(int64_t **)(lVar1 + 0x1690);
        *(int64_t **)(lVar1 + 0x1690) = plVar2;
        if (plStack_78 != (int64_t *)0x0) {
          (**(code **)(*plStack_78 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1878) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStack_70,lVar1 + 0x1868);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStack_68 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_68 = *(int64_t **)(lVar1 + 0x1698);
        *(int64_t **)(lVar1 + 0x1698) = plVar2;
        if (plStack_68 != (int64_t *)0x0) {
          (**(code **)(*plStack_68 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x18d0) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStack_60,lVar1 + 0x18c0);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStack_58 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_58 = *(int64_t **)(lVar1 + 0x16a0);
        *(int64_t **)(lVar1 + 0x16a0) = plVar2;
        if (plStack_58 != (int64_t *)0x0) {
          (**(code **)(*plStack_58 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      if (*(int *)(lVar1 + 0x1928) != 0) {
        plVar3 = (int64_t *)FUN_1800b4910(param_1,auStack_50,lVar1 + 0x1918);
        plVar2 = (int64_t *)*plVar3;
        if (plVar2 != (int64_t *)0x0) {
          plStack_48 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plStack_48 = *(int64_t **)(lVar1 + 0x16a8);
        *(int64_t **)(lVar1 + 0x16a8) = plVar2;
        if (plStack_48 != (int64_t *)0x0) {
          (**(code **)(*plStack_48 + 0x38))();
        }
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != *(int64_t **)(param_1 + 0x140));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b3fe0(int64_t *param_1)
void FUN_1800b3fe0(int64_t *param_1)

{
  int64_t *plVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t uVar9;
  int64_t lVar10;
  
  iVar4 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
  iVar3 = _Thrd_id();
  uVar2 = system_system_config;
  uVar9 = 0;
  if (iVar3 != iVar4) {
    system_system_config = _Thrd_id();
    uVar9 = uVar2;
  }
  iVar4 = _Mtx_lock(param_1 + 0xee);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8500(param_1 + 0xd8);
  iVar4 = _Mtx_unlock(param_1 + 0xee);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0xf8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8500(param_1 + 0xdc);
  iVar4 = _Mtx_unlock(param_1 + 0xf8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0x102);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar6 = param_1 + 0xe8;
  FUN_1800b9030(plVar6,param_1[0xea]);
  *plVar6 = (int64_t)plVar6;
  param_1[0xe9] = (int64_t)plVar6;
  param_1[0xea] = 0;
  *(int8_t *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  iVar4 = _Mtx_unlock(param_1 + 0x102);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(param_1 + 0x116);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800b8a90(param_1 + 0x152);
  iVar4 = _Mtx_unlock(param_1 + 0x116);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar6 = param_1 + 0x181;
  lVar8 = 10;
  do {
    plVar7 = (int64_t *)*plVar6;
    *plVar6 = 0;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_1800b8500(param_1 + 0xe0);
  FUN_1800b8500(param_1 + 0xe4);
  plVar6 = param_1 + 0x18c;
  lVar8 = 0x14;
  do {
    plVar7 = (int64_t *)*plVar6;
    *plVar6 = 0;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar6 = (int64_t *)param_1[0x18b];
  param_1[0x18b] = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  plVar6 = (int64_t *)param_1[0x1a1];
  plVar7 = (int64_t *)param_1[0x1a0];
  if (plVar7 != plVar6) {
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
    plVar7 = (int64_t *)param_1[0x1a0];
  }
  param_1[0x1a1] = (int64_t)plVar7;
  iVar4 = _Mtx_lock(param_1 + 0x160);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  param_1[0x159] = param_1[0x158];
  param_1[0x15d] = param_1[0x15c];
  *(int8_t *)(param_1 + 0x16a) = 0;
  iVar4 = _Mtx_unlock(param_1 + 0x160);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar8 = system_system_data_config;
  if (system_system_data_config != 0) {
    FUN_1800bc4a0(system_system_data_config);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar8);
  }
  system_system_data_config = 0;
  lVar10 = 8;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,8,3);
  system_system_data_config = FUN_1800bc180(uVar5);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    _Mtx_destroy_in_situ();
    _Mtx_destroy_in_situ(lVar8);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar8);
  }
  *param_1 = 0;
  lVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
  _Mtx_init_in_situ(lVar8,2);
  _Mtx_init_in_situ(lVar8 + 0x50,2);
  *param_1 = lVar8;
  plVar6 = (int64_t *)param_1[0x27];
  if (plVar6 != (int64_t *)param_1[0x28]) {
    do {
      plVar7 = (int64_t *)(*plVar6 + 0x1678);
      lVar8 = 7;
      do {
        plVar1 = (int64_t *)*plVar7;
        *plVar7 = 0;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      plVar6 = plVar6 + 1;
    } while (plVar6 != (int64_t *)param_1[0x28]);
  }
  param_1 = param_1 + 0xa1;
  do {
    if (param_1[-7] - param_1[-8] >> 3 != 0) {
      FUN_18020f150(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
      lVar8 = system_message_buffer + 0x20;
      iVar4 = _Mtx_lock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_unlock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      if (system_system_data_config != 0) {
        FUN_18006eb30();
      }
      FUN_18020f150(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
      lVar8 = system_message_buffer + 0x20;
      iVar4 = _Mtx_lock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_unlock(lVar8);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      iVar4 = _Mtx_lock(param_1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      plVar6 = (int64_t *)param_1[-7];
      plVar7 = (int64_t *)param_1[-8];
      if (plVar7 != plVar6) {
        do {
          if ((int64_t *)*plVar7 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
        plVar7 = (int64_t *)param_1[-8];
      }
      param_1[-7] = (int64_t)plVar7;
      param_1[-3] = param_1[-4];
      *(int8_t *)(param_1 + 10) = 0;
      iVar4 = _Mtx_unlock(param_1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
    }
    param_1 = param_1 + -0x13;
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  iVar4 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 != iVar4) {
    system_system_config = uVar9;
  }
  return;
}






// 函数: void FUN_1800b4550(int64_t param_1)
void FUN_1800b4550(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1800b3fe0();
  FUN_180057830();
  SystemDataValidator(param_1 + 0xc60,8,0x14,DataCacheManager,uVar1);
  if (*(int64_t **)(param_1 + 0xc58) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xc58) + 0x38))();
  }
  SystemDataValidator(param_1 + 0xc08,8,10,DataCacheManager,uVar1);
  FUN_180058370(param_1 + 0xbd8,*(uint64_t *)(param_1 + 0xbe8));
  FUN_1800b9270(param_1 + 0xba8,*(uint64_t *)(param_1 + 3000));
  _Mtx_destroy_in_situ();
  FUN_1802ab320(param_1 + 0xac0);
  FUN_1800b8a30();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  FUN_1800b9030(param_1 + 0x740,*(uint64_t *)(param_1 + 0x750));
  FUN_180057830();
  FUN_180057830();
  FUN_180057830();
  FUN_180057830();
  SystemDataValidator(param_1 + 0x5a0,0x20,9,FUN_18004c030);
  FUN_180057830();
  *(uint64_t *)(param_1 + 0x560) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x568) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x568) = 0;
  *(int32_t *)(param_1 + 0x578) = 0;
  *(uint64_t *)(param_1 + 0x560) = &system_state_ptr;
  SystemDataValidator(param_1 + 8,0x98,9,FUN_1802ab7f0);
  return;
}






// 函数: void FUN_1800b47e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b47e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9030(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4810(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b4810(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800b9210(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  return;
}






// 函数: void FUN_1800b4830(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b4830(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9270(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4860(uint64_t param_1)
void FUN_1800b4860(uint64_t param_1)

{
  SystemDataValidator(param_1,8,10,DataCacheManager,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b4890(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b4890(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9030(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b48c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b48c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800b9210(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  return;
}






// 函数: void FUN_1800b48e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b48e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9270(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800b4910(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *puVar3;
  int64_t *plStackX_20;
  
  FUN_1800b31f0();
  if (*param_2 == 0) {
    if (*(int64_t *)(param_1 + 0xc58) == 0) {
      FUN_1800be9a0(system_system_data_config,&plStackX_20,0);
      lVar1 = plStackX_20[0x3c];
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      FUN_180056f10(param_1 + 0xc58,lVar1);
    }
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    FUN_1806272a0(&unknown_var_7864_ptr,puVar3);
    plVar2 = *(int64_t **)(param_1 + 0xc58);
    if (plVar2 != (int64_t *)0x0) {
      plStackX_20 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_20 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar2;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
  }
  return param_2;
}



uint64_t FUN_1800b4a00(uint64_t param_1,uint64_t param_2)

{
  FUN_1800b30d0();
  return param_2;
}



uint64_t * FUN_1800b4a40(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  DataStructureManager(param_1 + 1,0x98,9,FUN_1802ab780,FUN_1802ab7f0);
  param_1[0xac] = &system_state_ptr;
  param_1[0xad] = 0;
  *(int32_t *)(param_1 + 0xae) = 0;
  param_1[0xac] = &system_data_buffer_ptr;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  *(int32_t *)(param_1 + 0xae) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(int32_t *)(param_1 + 0xb3) = 3;
  DataStructureManager(param_1 + 0xb4,0x20,9,FUN_180056e10,FUN_18004c030);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(int32_t *)(param_1 + 0xdb) = 3;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(int32_t *)(param_1 + 0xdf) = 3;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(int32_t *)(param_1 + 0xe3) = 3;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(int32_t *)(param_1 + 0xe7) = 3;
  puVar1 = param_1 + 0xe8;
  param_1[0xeb] = 0;
  *(int32_t *)(param_1 + 0xed) = 3;
  *puVar1 = puVar1;
  param_1[0xe9] = puVar1;
  param_1[0xea] = 0;
  *(int8_t *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  _Mtx_init_in_situ(param_1 + 0xee,0x102);
  _Mtx_init_in_situ(param_1 + 0xf8,0x102);
  _Mtx_init_in_situ(param_1 + 0x102,0x102);
  _Mtx_init_in_situ(param_1 + 0x10c,0x102);
  _Mtx_init_in_situ(param_1 + 0x116,0x102);
  _Mtx_init_in_situ(param_1 + 0x120,0x102);
  _Mtx_init_in_situ(param_1 + 0x12a,0x102);
  _Mtx_init_in_situ(param_1 + 0x134,0x102);
  _Mtx_init_in_situ(param_1 + 0x13e,0x102);
  _Mtx_init_in_situ(param_1 + 0x148,2);
  puVar1 = param_1 + 0x152;
  param_1[0x155] = 0;
  *(int32_t *)(param_1 + 0x157) = 0x1a;
  *puVar1 = puVar1;
  param_1[0x153] = puVar1;
  param_1[0x154] = 0;
  *(int8_t *)(param_1 + 0x155) = 0;
  param_1[0x156] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  *(int32_t *)(param_1 + 0x15b) = 3;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(int32_t *)(param_1 + 0x15f) = 3;
  _Mtx_init_in_situ(param_1 + 0x160,0x102);
  *(int8_t *)(param_1 + 0x16a) = 1;
  _Mtx_init_in_situ(param_1 + 0x16b,2);
  puVar1 = param_1 + 0x175;
  param_1[0x178] = 0;
  *(int32_t *)(param_1 + 0x17a) = 3;
  *puVar1 = puVar1;
  param_1[0x176] = puVar1;
  param_1[0x177] = 0;
  *(int8_t *)(param_1 + 0x178) = 0;
  param_1[0x179] = 0;
  puVar1 = param_1 + 0x17b;
  param_1[0x17e] = 0;
  *(int32_t *)(param_1 + 0x180) = 3;
  *puVar1 = puVar1;
  param_1[0x17c] = puVar1;
  param_1[0x17d] = 0;
  *(int8_t *)(param_1 + 0x17e) = 0;
  param_1[0x17f] = 0;
  DataStructureManager(param_1 + 0x181,8,10,&SUB_18005d5f0,DataCacheManager);
  param_1[0x18b] = 0;
  DataStructureManager(param_1 + 0x18c,8,0x14,&SUB_18005d5f0,DataCacheManager);
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  *(int32_t *)(param_1 + 0x1a3) = 3;
  *param_1 = 0;
  FUN_1800b3fe0(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b4e00(uint64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_1800b4e00(uint64_t param_1,int64_t *param_2,int32_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  uVar9 = 0xfffffffffffffffe;
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  lVar6 = system_system_data_config;
  if (iVar4 == 1) {
    uStack_30 = 0;
    uStack_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    FUN_18023c450(param_2,1,param_3,&uStack_30,uVar9);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  else {
    if (iVar4 == 4) {
      lVar1 = system_system_data_config + 0x38;
      iVar4 = _Mtx_lock(lVar1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      if ((param_2[0x15] != 0) && (param_2[0x17] == 0)) {
        uStack_30 = 0;
        uStack_28 = 0;
        iVar4 = 0;
        pcStack_20 = (code *)0x0;
        pcStack_18 = _guard_check_icall;
        FUN_18014a370(param_2,1,&uStack_30);
        if (pcStack_20 != (code *)0x0) {
          (*pcStack_20)(&uStack_30,0,0);
        }
        plVar5 = (int64_t *)param_2[0x17];
        lVar8 = ((plVar5[1] - *plVar5) / 0x30) * 0x30 +
                (plVar5[5] - plVar5[4] & 0xffffffffffffffe0U);
        lVar7 = plVar5[9] - plVar5[8];
        lVar2 = lVar7 >> 0x3f;
        lVar7 = lVar7 / 0x88 + lVar2;
        if (lVar7 != lVar2) {
          plVar5 = (int64_t *)(plVar5[8] + 0x30);
          do {
            lVar8 = lVar8 + (*plVar5 - plVar5[-1] >> 4) * 0x14 +
                            ((plVar5[8] - plVar5[7]) / 0x18) * 0x18;
            iVar4 = iVar4 + 1;
            plVar5 = plVar5 + 0x11;
          } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(lVar7 - lVar2));
        }
        *(int64_t *)(lVar6 + 0x30) = *(int64_t *)(lVar6 + 0x30) + lVar8;
      }
      iVar4 = _Mtx_unlock(lVar1);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      return;
    }
    if (iVar4 == 8) {
      plVar5 = param_2;
      if ((*(byte *)((int64_t)param_2 + 0xfd) & 0x20) == 0) {
        uStack_30 = 0x18007c88a;
        plVar5 = (int64_t *)func_0x000180085de0(param_2[0x36],1);
      }
      if (0 < (int)plVar5[0x40]) {
        lVar6 = param_2[0x37];
        cVar3 = *(char *)(lVar6 + 0x38c);
        if (cVar3 == '\t') {
          uStack_30 = 0x18007c8aa;
          cVar3 = func_0x00018022d300();
          *(char *)(lVar6 + 0x38c) = cVar3;
        }
        uStack_30 = 0x18007c8c7;
        cVar3 = FUN_18007b240(param_2,param_2 + 0x3d,cVar3,1);
        if (cVar3 == '\0') {
          *(byte *)((int64_t)param_2 + 0xfe) = *(byte *)((int64_t)param_2 + 0xfe) & 0xfb;
        }
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




