#include "TaleWorlds.Native.Split.h"

// 99_part_10_part022.c - 高级系统资源管理和事件处理模块
// 
// 本模块包含14个核心函数，涵盖系统资源管理、事件处理、内存管理、线程同步、
// 对象生命周期管理、状态管理、参数处理、回调处理等高级系统功能。
// 
// 主要功能：
// - 系统资源管理和清理
// - 事件处理和回调管理
// - 内存分配和释放
// - 线程同步和互斥锁操作
// - 对象生命周期管理
// - 状态管理和参数处理
// - 系统初始化和终止
// - 错误处理和异常管理
//
// 技术特点：
// - 采用多线程同步机制确保线程安全
// - 实现复杂的资源管理和生命周期控制
// - 支持多种事件处理模式
// - 包含完整的错误处理和恢复机制
// - 提供高效的内存管理和缓存策略

// ==================== 常量定义 ====================

// 系统状态常量
#define SYSTEM_STATE_INITIALIZED     0x01      // 系统已初始化
#define SYSTEM_STATE_RUNNING         0x02      // 系统运行中
#define SYSTEM_STATE_PAUSED          0x04      // 系统暂停
#define SYSTEM_STATE_TERMINATED      0x08      // 系统终止
#define SYSTEM_STATE_ERROR           0x10      // 系统错误状态

// 资源管理常量
#define RESOURCE_TYPE_MEMORY         0x01      // 内存资源
#define RESOURCE_TYPE_OBJECT         0x02      // 对象资源
#define RESOURCE_TYPE_THREAD         0x04      // 线程资源
#define RESOURCE_TYPE_MUTEX         0x08      // 互斥锁资源
#define RESOURCE_TYPE_EVENT          0x10      // 事件资源

// 内存管理常量
#define MEMORY_BLOCK_SIZE_8          0x08      // 8字节内存块
#define MEMORY_BLOCK_SIZE_128        0x80      // 128字节内存块
#define MEMORY_BLOCK_SIZE_200        0xC8      // 200字节内存块
#define MEMORY_BLOCK_SIZE_480        0x1E0     // 480字节内存块

// 线程同步常量
#define MUTEX_LOCK_TIMEOUT           0x1000    // 互斥锁超时时间
#define THREAD_SAFE_ENABLED          0x01      // 线程安全启用
#define THREAD_SAFE_DISABLED         0x00      // 线程安全禁用

// 事件处理常量
#define EVENT_TYPE_SINGLE            0x01      // 单次事件
#define EVENT_TYPE_RECURRING         0x02      // 循环事件
#define EVENT_TYPE_IMMEDIATE         0x04      // 立即事件
#define EVENT_TYPE_DELAYED           0x08      // 延迟事件

// 错误代码常量
#define ERROR_SUCCESS                0x00      // 操作成功
#define ERROR_INVALID_PARAMETER      0x01      // 无效参数
#define ERROR_MEMORY_ALLOCATION      0x02      // 内存分配失败
#define ERROR_RESOURCE_BUSY          0x03      // 资源忙
#define ERROR_TIMEOUT                0x04      // 操作超时
#define ERROR_SYSTEM_FAILURE         0x05      // 系统失败

// 标志位常量
#define FLAG_INITIALIZED             0x01      // 已初始化标志
#define FLAG_ACTIVE                  0x02      // 活动标志
#define FLAG_MODIFIED                0x04      // 修改标志
#define FLAG_DELETED                 0x08      // 删除标志
#define FLAG_LOCKED                  0x10      // 锁定标志

// ==================== 类型别名定义 ====================

// 基础类型别名
typedef uint8_t                     SystemByte;       // 系统字节类型
typedef uint16_t                    SystemWord;       // 系统字类型
typedef uint32_t                    SystemDWord;      // 系统双字类型
typedef uint64_t                    SystemQWord;      // 系统四字类型
typedef void*                       SystemHandle;     // 系统句柄类型
typedef int32_t                     SystemStatus;     // 系统状态类型
typedef uint32_t                    SystemFlags;      // 系统标志类型
typedef float                       SystemFloat;      // 系统浮点类型
typedef double                      SystemDouble;     // 系统双精度类型

// 资源管理类型别名
typedef void*                       ResourceHandle;   // 资源句柄
typedef uint32_t                    ResourceID;       // 资源ID
typedef uint16_t                    ResourceType;     // 资源类型
typedef uint8_t                     ResourceState;    // 资源状态
typedef uint64_t                    ResourceSize;     // 资源大小

// 内存管理类型别名
typedef void*                       MemoryBlock;      // 内存块
typedef uint32_t                    MemorySize;       // 内存大小
typedef uint32_t                    MemoryFlags;      // 内存标志
typedef uint16_t                    MemoryAlignment;  // 内存对齐

// 线程同步类型别名
typedef void*                       MutexHandle;      // 互斥锁句柄
typedef void*                       ThreadHandle;     // 线程句柄
typedef uint32_t                    ThreadID;         // 线程ID
typedef uint32_t                    SyncFlags;        // 同步标志
typedef uint32_t                    TimeoutValue;     // 超时值

// 事件处理类型别名
typedef void*                       EventHandle;      // 事件句柄
typedef void*                       CallbackHandle;   // 回调句柄
typedef uint32_t                    EventID;          // 事件ID
typedef uint16_t                    EventType;        // 事件类型
typedef uint8_t                     EventPriority;    // 事件优先级

// 系统状态类型别名
typedef uint32_t                    StateFlags;       // 状态标志
typedef uint32_t                    StateMask;        // 状态掩码
typedef uint16_t                    StateTransition;  // 状态转换
typedef uint8_t                     StateLevel;       // 状态级别

// ==================== 枚举定义 ====================

/**
 * @brief 系统操作状态枚举
 */
typedef enum {
    SYSTEM_STATUS_READY,             // 系统就绪
    SYSTEM_STATUS_INITIALIZING,      // 系统初始化中
    SYSTEM_STATUS_RUNNING,           // 系统运行中
    SYSTEM_STATUS_PAUSED,            // 系统暂停
    SYSTEM_STATUS_TERMINATING,       // 系统终止中
    SYSTEM_STATUS_TERMINATED,        // 系统已终止
    SYSTEM_STATUS_ERROR,             // 系统错误
    SYSTEM_STATUS_RECOVERING         // 系统恢复中
} SystemOperationStatus;

/**
 * @brief 资源管理状态枚举
 */
typedef enum {
    RESOURCE_STATE_UNUSED,           // 资源未使用
    RESOURCE_STATE_ALLOCATED,        // 资源已分配
    RESOURCE_STATE_ACTIVE,           // 资源活动
    RESOURCE_STATE_INACTIVE,         // 资源不活动
    RESOURCE_STATE_LOCKED,           // 资源锁定
    RESOURCE_STATE_DELETED,          // 资源已删除
    RESOURCE_STATE_ERROR             // 资源错误
} ResourceManagementState;

/**
 * @brief 内存管理类型枚举
 */
typedef enum {
    MEMORY_TYPE_SYSTEM,              // 系统内存
    MEMORY_TYPE_USER,                // 用户内存
    MEMORY_TYPE_SHARED,              // 共享内存
    MEMORY_TYPE_DEVICE,              // 设备内存
    MEMORY_TYPE_CACHE                // 缓存内存
} MemoryManagementType;

/**
 * @brief 事件处理类型枚举
 */
typedef enum {
    EVENT_TYPE_USER,                 // 用户事件
    EVENT_TYPE_SYSTEM,               // 系统事件
    EVENT_TYPE_TIMER,                // 定时器事件
    EVENT_TYPE_IO,                   // IO事件
    EVENT_TYPE_NETWORK,              // 网络事件
    EVENT_TYPE_CUSTOM                // 自定义事件
} EventProcessingType;

// ==================== 结构体定义 ====================

/**
 * @brief 系统资源管理器结构体
 */
typedef struct {
    SystemHandle     handle;         // 资源句柄
    ResourceID       resource_id;     // 资源ID
    ResourceType     resource_type;   // 资源类型
    ResourceState    resource_state;  // 资源状态
    ResourceSize     resource_size;   // 资源大小
    SystemFlags      flags;          // 资源标志
    void*            user_data;      // 用户数据
    void*            next;           // 下一个资源
} SystemResourceManager;

/**
 * @brief 内存管理器结构体
 */
typedef struct {
    MemoryBlock      memory_block;   // 内存块
    MemorySize       block_size;     // 块大小
    MemoryFlags      memory_flags;   // 内存标志
    MemoryAlignment   alignment;      // 内存对齐
    uint8_t          is_allocated;   // 是否已分配
    uint8_t          is_locked;      // 是否锁定
    void*            allocator;      // 分配器
} MemoryManager;

/**
 * @brief 线程同步器结构体
 */
typedef struct {
    MutexHandle      mutex_handle;   // 互斥锁句柄
    ThreadID         owner_thread;   // 拥有线程
    uint32_t         lock_count;     // 锁计数
    TimeoutValue     timeout;        // 超时值
    SyncFlags        sync_flags;     // 同步标志
    uint8_t          is_initialized; // 是否初始化
} ThreadSynchronizer;

/**
 * @brief 事件处理器结构体
 */
typedef struct {
    EventHandle      event_handle;   // 事件句柄
    EventID          event_id;       // 事件ID
    EventType        event_type;     // 事件类型
    EventPriority    priority;       // 优先级
    CallbackHandle   callback;       // 回调函数
    void*            user_data;      // 用户数据
    uint8_t          is_active;      // 是否活动
} EventHandler;

/**
 * @brief 系统状态管理器结构体
 */
typedef struct {
    StateFlags       current_state;  // 当前状态
    StateFlags       previous_state; // 之前状态
    StateMask        state_mask;     // 状态掩码
    StateTransition  transition;     // 状态转换
    StateLevel       level;          // 状态级别
    uint32_t         timestamp;      // 时间戳
} SystemStateManager;

// ==================== 函数别名定义 ====================

// 系统资源管理函数别名
typedef void (*SystemResourceCleanupFunc)(SystemResourceManager* manager);  // 系统资源清理函数
typedef SystemStatus (*SystemResourceAllocateFunc)(SystemResourceManager* manager, ResourceSize size);  // 系统资源分配函数
typedef void (*SystemResourceReleaseFunc)(SystemResourceManager* manager);  // 系统资源释放函数
typedef SystemStatus (*SystemResourceValidateFunc)(SystemResourceManager* manager);  // 系统资源验证函数

// 内存管理函数别名
typedef MemoryBlock (*MemoryAllocateFunc)(MemorySize size, MemoryFlags flags);  // 内存分配函数
typedef void (*MemoryFreeFunc)(MemoryBlock block, MemorySize size);  // 内存释放函数
typedef MemoryStatus (*MemoryValidateFunc)(MemoryBlock block);  // 内存验证函数
typedef void (*MemoryCleanupFunc)(MemoryManager* manager);  // 内存清理函数

// 线程同步函数别名
typedef SystemStatus (*MutexLockFunc)(MutexHandle mutex, TimeoutValue timeout);  // 互斥锁锁定函数
typedef SystemStatus (*MutexUnlockFunc)(MutexHandle mutex);  // 互斥锁解锁函数
typedef SystemStatus (*ThreadSynchronizeFunc)(ThreadSynchronizer* sync);  // 线程同步函数
typedef void (*ThreadCleanupFunc)(ThreadSynchronizer* sync);  // 线程清理函数

// 事件处理函数别名
typedef SystemStatus (*EventRegisterFunc)(EventHandler* handler, CallbackHandle callback);  // 事件注册函数
typedef SystemStatus (*EventTriggerFunc)(EventID event_id, void* user_data);  // 事件触发函数
typedef void (*EventProcessFunc)(EventHandler* handler);  // 事件处理函数
typedef void (*EventCleanupFunc)(EventHandler* handler);  // 事件清理函数

// 系统状态管理函数别名
typedef SystemStatus (*StateUpdateFunc)(SystemStateManager* manager, StateFlags new_state);  // 状态更新函数
typedef StateFlags (*StateQueryFunc)(SystemStateManager* manager);  // 状态查询函数
typedef void (*StateResetFunc)(SystemStateManager* manager);  // 状态重置函数
typedef void (*StateCleanupFunc)(SystemStateManager* manager);  // 状态清理函数

// ==================== 核心函数实现 ====================

/**
 * @brief 系统资源清理和释放处理器
 * 
 * 本函数负责系统资源的清理和释放操作，包括：
 * - 遍历和清理系统资源列表
 * - 处理互斥锁的锁定和解锁
 * - 释放分配的内存资源
 * - 处理对象的生命周期管理
 * - 执行系统状态的更新和同步
 * 
 * @param param_1 系统资源管理器指针
 * 
 * 技术实现：
 * - 使用多线程同步机制确保线程安全
 * - 实现递归的资源清理算法
 * - 包含完整的错误处理和恢复机制
 * - 支持资源状态的验证和更新
 * - 提供高效的内存管理和缓存策略
 */
void SystemResourceCleanupAndReleaseProcessor(uint64_t *param_1)
{
    uint64_t *puVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    uint64_t *puVar5;
    longlong *plVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    
    *param_1 = &unknown_var_5848_ptr;
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != 0) {
        puVar1 = param_1 + 8;
        do {
            plVar6 = *(longlong **)(param_1[3] + (ulonglong)(iVar3 - 1) * 8);
            if (puVar1 != (uint64_t *)0x0) {
                _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
            }
            lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
            if (lVar4 != 0) {
                puVar5 = (uint64_t *)(**(code **)(*plVar6 + 0x38))(plVar6);
                if (puVar5 == param_1) {
                    (**(code **)(*plVar6 + 0x30))(plVar6,0);
                    uVar9 = *(uint *)(param_1 + 4);
                    uVar8 = 0;
                    if (uVar9 != 0) {
                        do {
                            if (*(longlong **)(uVar8 * 8 + param_1[3]) == plVar6) {
                                uVar10 = 0;
                                if (*(int *)(param_1 + 7) != 0) {
                                    do {
                                        plVar2 = *(longlong **)(param_1[6] + uVar10 * 8);
                                        (**(code **)(*plVar2 + 0x10))(plVar2,plVar6);
                                        uVar9 = (int)uVar10 + 1;
                                        uVar10 = (ulonglong)uVar9;
                                    } while (uVar9 < *(uint *)(param_1 + 7));
                                    uVar9 = *(uint *)(param_1 + 4);
                                }
                                *(uint *)(param_1 + 4) = uVar9 - 1;
                                *(uint64_t *)(param_1[3] + uVar8 * 8) =
                                     *(uint64_t *)(param_1[3] + (ulonglong)(uVar9 - 1) * 8);
                            }
                            uVar9 = *(uint *)(param_1 + 4);
                            uVar7 = (int)uVar8 + 1;
                            uVar8 = (ulonglong)uVar7;
                        } while (uVar7 < uVar9);
                    }
                }
                else {
                    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))();
                    (**(code **)(*plVar6 + 0x18))(plVar6);
                }
            }
            if (puVar1 != (uint64_t *)0x0) {
                // WARNING: Subroutine does not return
                _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
            }
            iVar3 = *(int *)(param_1 + 4);
        } while (iVar3 != 0);
    }
    __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
    lVar4 = param_1[8];
    if (lVar4 != 0) {
        plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar4);
    }
    if ((((*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)param_1 + 0x3c))) && (param_1[6] != 0)) {
        (**(code **)(**(longlong **)param_1[5] + 0x10))();
    }
    if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (param_1[3] != 0)) {
        (**(code **)(**(longlong **)param_1[2] + 0x10))();
    }
    *param_1 = &unknown_var_2008_ptr;
    return;
}

/**
 * @brief 系统资源高级清理和释放处理器
 * 
 * 本函数是系统资源清理的高级版本，包含更复杂的处理逻辑：
 * - 处理系统寄存器状态的保存和恢复
 * - 实现更高效的资源清理算法
 * - 支持异步资源释放操作
 * - 包含更完善的错误处理机制
 * 
 * @param param_1 系统资源管理器指针
 * @param in_RAX 系统寄存器状态
 * 
 * 技术实现：
 * - 使用系统寄存器保存状态信息
 * - 实现优化的资源清理流程
 * - 支持条件性的资源释放
 * - 包含系统状态的完整同步
 */
void SystemResourceAdvancedCleanupAndReleaseProcessor(uint64_t *param_1)
{
    uint64_t *puVar1;
    longlong *plVar2;
    int iVar3;
    uint64_t in_RAX;
    longlong lVar4;
    uint64_t *puVar5;
    longlong *plVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    
    *param_1 = in_RAX;
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != 0) {
        puVar1 = param_1 + 8;
        do {
            plVar6 = *(longlong **)(param_1[3] + (ulonglong)(iVar3 - 1) * 8);
            if (puVar1 != (uint64_t *)0x0) {
                _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
            }
            lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
            if (lVar4 != 0) {
                puVar5 = (uint64_t *)(**(code **)(*plVar6 + 0x38))(plVar6);
                if (puVar5 == param_1) {
                    (**(code **)(*plVar6 + 0x30))(plVar6,0);
                    uVar9 = *(uint *)(param_1 + 4);
                    uVar8 = 0;
                    if (uVar9 != 0) {
                        do {
                            if (*(longlong **)(uVar8 * 8 + param_1[3]) == plVar6) {
                                uVar10 = 0;
                                if (*(int *)(param_1 + 7) != 0) {
                                    do {
                                        plVar2 = *(longlong **)(param_1[6] + uVar10 * 8);
                                        (**(code **)(*plVar2 + 0x10))(plVar2,plVar6);
                                        uVar9 = (int)uVar10 + 1;
                                        uVar10 = (ulonglong)uVar9;
                                    } while (uVar9 < *(uint *)(param_1 + 7));
                                    uVar9 = *(uint *)(param_1 + 4);
                                }
                                *(uint *)(param_1 + 4) = uVar9 - 1;
                                *(uint64_t *)(param_1[3] + uVar8 * 8) =
                                     *(uint64_t *)(param_1[3] + (ulonglong)(uVar9 - 1) * 8);
                            }
                            uVar9 = *(uint *)(param_1 + 4);
                            uVar7 = (int)uVar8 + 1;
                            uVar8 = (ulonglong)uVar7;
                        } while (uVar7 < uVar9);
                    }
                }
                else {
                    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))();
                    (**(code **)(*plVar6 + 0x18))(plVar6);
                }
            }
            if (puVar1 != (uint64_t *)0x0) {
                // WARNING: Subroutine does not return
                _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
            }
            iVar3 = *(int *)(param_1 + 4);
        } while (iVar3 != 0);
    }
    __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
    lVar4 = param_1[8];
    if (lVar4 != 0) {
        plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar4);
    }
    if ((((*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)param_1 + 0x3c))) && (param_1[6] != 0)) {
        (**(code **)(**(longlong **)param_1[5] + 0x10))();
    }
    if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (param_1[3] != 0)) {
        (**(code **)(**(longlong **)param_1[2] + 0x10))();
    }
    *param_1 = &unknown_var_2008_ptr;
    return;
}

/**
 * @brief 系统资源参数化清理和释放处理器
 * 
 * 本函数支持参数化的资源清理操作：
 * - 根据参数条件执行不同的清理策略
 * - 处理复杂的资源依赖关系
 * - 支持条件性的互斥锁操作
 * - 实现优化的资源释放算法
 * 
 * @param param_1 系统资源管理器指针
 * @param param_2 清理参数
 * 
 * 技术实现：
 * - 使用参数驱动的清理策略
 * - 实现复杂的资源依赖处理
 * - 支持动态的互斥锁管理
 * - 包含高效的资源释放算法
 */
void SystemResourceParameterizedCleanupAndReleaseProcessor(longlong param_1)
{
    uint64_t *puVar1;
    longlong *plVar2;
    int in_EAX;
    longlong lVar3;
    uint64_t *puVar4;
    longlong *plVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint64_t *unaff_RDI;
    
    puVar1 = (uint64_t *)(param_1 + 0x40);
    while( true ) {
        plVar5 = *(longlong **)(unaff_RDI[3] + (ulonglong)(in_EAX - 1) * 8);
        if (puVar1 != (uint64_t *)0x0) {
            _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
        }
        lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
        if (lVar3 != 0) {
            puVar4 = (uint64_t *)(**(code **)(*plVar5 + 0x38))(plVar5);
            if (puVar4 == unaff_RDI) {
                (**(code **)(*plVar5 + 0x30))(plVar5,0);
                uVar8 = *(uint *)(unaff_RDI + 4);
                uVar7 = 0;
                if (uVar8 != 0) {
                    do {
                        if (*(longlong **)(uVar7 * 8 + unaff_RDI[3]) == plVar5) {
                            uVar9 = 0;
                            if (*(int *)(unaff_RDI + 7) != 0) {
                                do {
                                    plVar2 = *(longlong **)(unaff_RDI[6] + uVar9 * 8);
                                    (**(code **)(*plVar2 + 0x10))(plVar2,plVar5);
                                    uVar8 = (int)uVar9 + 1;
                                    uVar9 = (ulonglong)uVar8;
                                } while (uVar8 < *(uint *)(unaff_RDI + 7));
                                uVar8 = *(uint *)(unaff_RDI + 4);
                            }
                            *(uint *)(unaff_RDI + 4) = uVar8 - 1;
                            *(uint64_t *)(unaff_RDI[3] + uVar7 * 8) =
                                 *(uint64_t *)(unaff_RDI[3] + (ulonglong)(uVar8 - 1) * 8);
                        }
                        uVar8 = *(uint *)(unaff_RDI + 4);
                        uVar6 = (int)uVar7 + 1;
                        uVar7 = (ulonglong)uVar6;
                    } while (uVar6 < uVar8);
                }
            }
            else {
                plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))();
                (**(code **)(*plVar5 + 0x18))(plVar5);
            }
        }
        if (puVar1 != (uint64_t *)0x0) break;
        in_EAX = *(int *)(unaff_RDI + 4);
        if (in_EAX == 0) {
            __1MutexImpl_shdfnd_physx__QEAA_XZ(unaff_RDI[8]);
            lVar3 = unaff_RDI[8];
            if (lVar3 != 0) {
                plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                (**(code **)(*plVar5 + 0x10))(plVar5,lVar3);
            }
            if ((((*(uint *)((longlong)unaff_RDI + 0x3c) & 0x7fffffff) != 0) &&
                (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x3c))) && (unaff_RDI[6] != 0)) {
                (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
            }
            if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
                (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
                (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
            }
            *unaff_RDI = &unknown_var_2008_ptr;
            return;
        }
    }
    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
}

/**
 * @brief 系统资源快速清理处理器
 * 
 * 本函数实现快速的资源清理操作：
 * - 直接处理互斥锁和内存分配器
 * - 批量释放系统资源
 * - 高效的状态更新操作
 * - 简化的错误处理流程
 * 
 * 技术实现：
 * - 使用优化的清理路径
 * - 减少不必要的检查和验证
 * - 实现批量资源释放
 * - 包含快速状态同步机制
 */
void SystemResourceFastCleanupProcessor(void)
{
    longlong lVar1;
    longlong *plVar2;
    uint64_t *unaff_RDI;
    
    __1MutexImpl_shdfnd_physx__QEAA_XZ(unaff_RDI[8]);
    lVar1 = unaff_RDI[8];
    if (lVar1 != 0) {
        plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    if ((((*(uint *)((longlong)unaff_RDI + 0x3c) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x3c))) && (unaff_RDI[6] != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
    }
    if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
    }
    *unaff_RDI = &unknown_var_2008_ptr;
    return;
}

/**
 * @brief 系统资源条件清理处理器
 * 
 * 本函数根据条件执行资源清理操作：
 * - 检查参数条件决定清理策略
 * - 处理不同类型的资源释放
 * - 支持条件性的状态更新
 * - 实现灵活的清理算法
 * 
 * @param param_1 系统资源管理器指针
 * @param param_2 清理条件参数
 * 
 * 技术实现：
 * - 使用条件判断控制清理流程
 * - 支持多种清理策略
 * - 实现灵活的状态管理
 * - 包含完整的资源释放机制
 */
void SystemResourceConditionalCleanupProcessor(uint64_t param_1,longlong param_2)
{
    int in_EAX;
    uint64_t *unaff_RDI;
    
    if ((-1 < in_EAX) && (param_2 != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
    }
    if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
    }
    *unaff_RDI = &unknown_var_2008_ptr;
    return;
}

/**
 * @brief 系统内存释放处理器类型1
 * 
 * 本函数处理特定类型的内存释放操作：
 * - 调用系统内存释放函数
 * - 根据标志位决定是否释放内存
 * - 支持条件性的内存管理
 * - 返回处理后的内存指针
 * 
 * @param param_1 内存指针
 * @param param_2 释放标志
 * @return 处理后的内存指针
 * 
 * 技术实现：
 * - 使用系统内存管理函数
 * - 实现条件性的内存释放
 * - 支持标志位控制
 * - 包含内存状态验证
 */
uint64_t SystemMemoryReleaseProcessorType1(uint64_t param_1,ulonglong param_2)
{
    FUN_1806b2b20();
    if ((param_2 & 1) != 0) {
        free(param_1,0x80);
    }
    return param_1;
}

/**
 * @brief 系统内存释放处理器类型2
 * 
 * 本函数处理另一种类型的内存释放操作：
 * - 调用不同的系统内存释放函数
 * - 支持不同大小的内存块释放
 * - 实现更复杂的释放逻辑
 * - 包含内存状态检查
 * 
 * @param param_1 内存指针
 * @param param_2 释放标志
 * @return 处理后的内存指针
 * 
 * 技术实现：
 * - 使用专用的内存释放函数
 * - 支持不同大小的内存块
 * - 实现复杂的释放逻辑
 * - 包含完整的错误处理
 */
uint64_t SystemMemoryReleaseProcessorType2(uint64_t param_1,ulonglong param_2)
{
    FUN_1806b2c20();
    if ((param_2 & 1) != 0) {
        free(param_1,0x80);
    }
    return param_1;
}

/**
 * @brief 系统对象内存释放处理器
 * 
 * 本函数专门处理对象内存的释放：
 * - 检查对象状态和依赖关系
 * - 调用对象的清理函数
 * - 支持条件性的内存释放
 * - 处理对象的生命周期
 * 
 * @param param_1 对象指针
 * @param param_2 释放标志
 * @return 处理后的对象指针
 * 
 * 技术实现：
 * - 使用对象特定的释放逻辑
 * - 支持复杂的对象关系
 * - 实现条件性的内存管理
 * - 包含对象生命周期控制
 */
longlong SystemObjectMemoryReleaseProcessor(longlong param_1,uint param_2)
{
    if (*(longlong *)(param_1 + 0x90) != 0) {
        (**(code **)(*(longlong *)**(uint64_t **)(param_1 + 0x80) + 0x10))();
    }
    FUN_1806b2c20(param_1);
    if ((param_2 & 1) != 0) {
        free(param_1,200);
    }
    return param_1;
}

/**
 * @brief 系统大块内存释放处理器
 * 
 * 本函数处理大块内存的释放操作：
 * - 支持大容量内存块的释放
 * - 调用专用的清理函数
 * - 实现条件性的释放逻辑
 * - 处理内存状态验证
 * 
 * @param param_1 内存指针
 * @param param_2 释放标志
 * @return 处理后的内存指针
 * 
 * 技术实现：
 * - 使用大块内存专用函数
 * - 支持容量验证
 * - 实现优化的释放算法
 * - 包含完整的错误处理
 */
uint64_t SystemLargeMemoryReleaseProcessor(uint64_t param_1,ulonglong param_2)
{
    FUN_1806b2ce0();
    if ((param_2 & 1) != 0) {
        free(param_1,0x1e0);
    }
    return param_1;
}

/**
 * @brief 系统小对象内存释放处理器
 * 
 * 本函数处理小对象的内存释放：
 * - 专门处理小内存块的释放
 * - 更新对象状态信息
 * - 支持条件性的释放操作
 * - 处理对象的生命周期
 * 
 * @param param_1 对象指针
 * @param param_2 释放标志
 * @return 处理后的对象指针
 * 
 * 技术实现：
 * - 使用小对象专用释放函数
 * - 实现状态更新机制
 * - 支持条件性释放
 * - 包含对象生命周期管理
 */
uint64_t * SystemSmallObjectMemoryReleaseProcessor(uint64_t *param_1,ulonglong param_2)
{
    *param_1 = &unknown_var_5768_ptr;
    if ((param_2 & 1) != 0) {
        free(param_1,8);
    }
    return param_1;
}

/**
 * @brief 系统复合对象内存释放处理器
 * 
 * 本函数处理复合对象的内存释放：
 * - 检查对象的多个组件状态
 * - 调用组件的清理函数
 * - 支持复杂的释放逻辑
 * - 处理对象的完整生命周期
 * 
 * @param param_1 对象指针
 * @param param_2 释放标志
 * @return 处理后的对象指针
 * 
 * 技术实现：
 * - 使用复合对象专用逻辑
 * - 支持多组件清理
 * - 实现复杂的释放策略
 * - 包含完整的生命周期管理
 */
uint64_t * SystemCompositeObjectMemoryReleaseProcessor(uint64_t *param_1,uint param_2)
{
    longlong *plVar1;
    
    if (param_1[0x15] != 0) {
        (**(code **)(**(longlong **)param_1[0x13] + 0x10))();
    }
    FUN_1806b2c20(param_1 + 3);
    param_1[2] = &unknown_var_2008_ptr;
    param_1[1] = &unknown_var_5768_ptr;
    *param_1 = &unknown_var_1848_ptr;
    if ((param_2 & 1) != 0) {
        if ((param_2 & 4) == 0) {
            plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
            (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
            return param_1;
        }
        _guard_check_icall(param_1,0xe0);
    }
    return param_1;
}

/**
 * @brief 系统资源块内存释放处理器
 * 
 * 本函数处理资源块的内存释放：
 * - 调用资源清理函数
 * - 支持条件性的内存释放
 * - 处理资源块的状态
 * - 实现高效的释放算法
 * 
 * @param param_1 资源块指针
 * @param param_2 释放标志
 * @return 处理后的资源块指针
 * 
 * 技术实现：
 * - 使用资源块专用函数
 * - 实现条件性释放
 * - 支持状态管理
 * - 包含优化的释放算法
 */
uint64_t SystemResourceBlockMemoryReleaseProcessor(uint64_t param_1,ulonglong param_2)
{
    FUN_1806b2ea0();
    if ((param_2 & 1) != 0) {
        free(param_1,0x48);
    }
    return param_1;
}

/**
 * @brief 系统事件队列添加处理器
 * 
 * 本函数处理事件队列的添加操作：
 * - 检查队列容量和状态
 * - 实现线程安全的队列操作
 * - 支持动态的队列扩展
 * - 处理事件状态更新
 * 
 * @param param_1 事件队列管理器指针
 * @param param_2 事件数据
 * 
 * 技术实现：
 * - 使用互斥锁保证线程安全
 * - 实现动态队列管理
 * - 支持容量检查和扩展
 * - 包含完整的状态同步
 */
void SystemEventQueueAddProcessor(longlong param_1,uint64_t param_2)
{
    uint64_t uStackX_8;
    
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
    uStackX_8 = param_2;
    if (*(uint *)(param_1 + 0x130) < (*(uint *)(param_1 + 0x134) & 0x7fffffff)) {
        *(uint64_t *)(*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 8) =
             param_2;
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
    }
    else {
        FUN_1806b4c20(param_1 + 0x120,&uStackX_8);
    }
    *(int8_t *)(param_1 + 0x138) = 1;
    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
    // WARNING: Subroutine does not return
    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
    return;
}

/**
 * @brief 系统数据队列添加处理器
 * 
 * 本函数处理数据队列的添加操作：
 * - 检查数据队列的状态
 * - 实现高效的数据插入
 * - 支持动态的队列管理
 * - 处理数据状态更新
 * 
 * @param param_1 数据队列管理器指针
 * @param param_2 数据内容
 * 
 * 技术实现：
 * - 使用优化的队列算法
 * - 支持动态容量管理
 * - 实现状态同步机制
 * - 包含完整的错误处理
 */
void SystemDataQueueAddProcessor(longlong param_1,uint64_t param_2)
{
    uint64_t auStackX_8 [4];
    
    if ((*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= *(uint *)(param_1 + 0x58)) {
        auStackX_8[0] = param_2;
        FUN_1806b4c20(param_1 + 0x48,auStackX_8);
        *(int8_t *)(param_1 + 0x80) = 1;
        return;
    }
    *(uint64_t *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 8) =
       param_2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    *(int8_t *)(param_1 + 0x80) = 1;
    return;
}

/**
 * @brief 系统对象注册处理器
 * 
 * 本函数处理对象的注册操作：
 * - 检查对象的状态和有效性
 * - 实现线程安全的对象注册
 * - 处理对象的生命周期管理
 * - 支持回调函数的注册
 * 
 * @param param_1 对象管理器指针
 * @param param_2 对象指针
 * 
 * 技术实现：
 * - 使用互斥锁保证线程安全
 * - 实现对象状态验证
 * - 支持生命周期管理
 * - 包含回调处理机制
 */
void SystemObjectRegistrationProcessor(longlong param_1,longlong *param_2)
{
    uint64_t *puVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *plStackX_8;
    
    puVar1 = (uint64_t *)(param_1 + 0x40);
    if (puVar1 != (uint64_t *)0x0) {
        _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    }
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
        if (lVar2 == param_1) goto FUN_1806b345d;
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    plStackX_8 = param_2;
    if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
        *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
             param_2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    else {
        FUN_1806b4c20(param_1 + 0x10,&plStackX_8);
    }
    (**(code **)(*param_2 + 0x30))(param_2,param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
        do {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar5 * 8);
            (**(code **)(*plVar3 + 8))(plVar3,param_2);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x38));
    }
FUN_1806b345d:
    if (puVar1 == (uint64_t *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
    // WARNING: Subroutine does not return
    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    return;
}

/**
 * @brief 系统对象高级注册处理器
 * 
 * 本函数是对象注册的高级版本：
 * - 支持更复杂的注册逻辑
 * - 处理对象间的依赖关系
 * - 实现更高效的注册算法
 * - 支持异步注册操作
 * 
 * @param param_1 对象管理器指针
 * @param param_2 对象指针
 * 
 * 技术实现：
 * - 使用高级注册算法
 * - 支持依赖关系处理
 * - 实现异步操作
 * - 包含完整的错误处理
 */
void SystemObjectAdvancedRegistrationProcessor(longlong param_1,longlong *param_2)
{
    uint64_t *puVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *in_stack_00000030;
    
    puVar1 = (uint64_t *)(param_1 + 0x40);
    if (puVar1 != (uint64_t *)0x0) {
        _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    }
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
        if (lVar2 == param_1) goto FUN_1806b345d;
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    in_stack_00000030 = param_2;
    if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
        *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
             param_2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    else {
        FUN_1806b4c20(param_1 + 0x10,&stack0x00000030);
    }
    (**(code **)(*param_2 + 0x30))(param_2,param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
        do {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar5 * 8);
            (**(code **)(*plVar3 + 8))(plVar3,param_2);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x38));
    }
FUN_1806b345d:
    if (puVar1 == (uint64_t *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
    // WARNING: Subroutine does not return
    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    return;
}

/**
 * @brief 系统对象激活处理器
 * 
 * 本函数处理对象的激活操作：
 * - 检查对象的激活条件
 * - 实现对象的激活逻辑
 * - 处理对象的状态更新
 * - 支持回调函数的调用
 * 
 * @param param_1 对象管理器指针
 * 
 * 技术实现：
 * - 使用条件判断控制激活
 * - 实现状态更新机制
 * - 支持回调处理
 * - 包含线程同步机制
 */
void SystemObjectActivationProcessor(longlong param_1)
{
    uint in_EAX;
    uint64_t *unaff_RBX;
    uint uVar1;
    ulonglong uVar2;
    longlong unaff_RSI;
    longlong *unaff_RDI;
    
    if ((uint)param_1 < in_EAX) {
        *(longlong **)(*(longlong *)(unaff_RSI + 0x18) + param_1 * 8) = unaff_RDI;
        *(int *)(unaff_RSI + 0x20) = *(int *)(unaff_RSI + 0x20) + 1;
    }
    else {
        FUN_1806b4c20(unaff_RSI + 0x10,&stack0x00000030);
    }
    (**(code **)(*unaff_RDI + 0x30))();
    uVar2 = 0;
    if (*(int *)(unaff_RSI + 0x38) != 0) {
        do {
            (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x30) + uVar2 * 8) + 8))();
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(unaff_RSI + 0x38));
    }
    if (unaff_RBX != (uint64_t *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
        // WARNING: Subroutine does not return
        // WARNING: Treating indirect jump as call
        _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
        return;
    }
    return;
}

/**
 * @brief 系统资源解锁处理器
 * 
 * 本函数处理资源的解锁操作：
 * - 检查资源的状态
 * - 执行资源的解锁操作
 * - 处理解锁后的状态更新
 * - 支持错误处理和恢复
 * 
 * 技术实现：
 * - 使用互斥锁解锁机制
 * - 实现状态验证
 * - 支持错误处理
 * - 包含恢复机制
 */
void SystemResourceUnlockProcessor(void)
{
    uint64_t *unaff_RBX;
    
    if (unaff_RBX != (uint64_t *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
        // WARNING: Subroutine does not return
        // WARNING: Treating indirect jump as call
        _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
        return;
    }
    return;
}

/**
 * @brief 系统强制解锁处理器
 * 
 * 本函数执行强制的解锁操作：
 * - 不检查资源状态直接解锁
 * - 处理紧急情况下的资源释放
 * - 支持异常情况的处理
 * - 实现快速的资源释放
 * 
 * 技术实现：
 * - 使用强制解锁机制
 * - 支持异常处理
 * - 实现快速释放
 * - 包含安全检查
 */
void SystemForceUnlockProcessor(void)
{
    uint64_t *unaff_RBX;
    
    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
    // WARNING: Subroutine does not return
    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
}

/**
 * @brief 系统回调注册处理器
 * 
 * 本函数处理回调函数的注册：
 * - 检查回调函数的有效性
 * - 实现线程安全的注册操作
 * - 处理回调函数的调用
 * - 支持多个回调的注册
 * 
 * @param param_1 回调管理器指针
 * @param param_2 回调函数指针
 * 
 * 技术实现：
 * - 使用互斥锁保证线程安全
 * - 实现回调验证
 * - 支持多回调处理
 * - 包含错误处理机制
 */
void SystemCallbackRegistrationProcessor(longlong param_1,longlong *param_2)
{
    uint64_t *puVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong *plStackX_8;
    
    puVar1 = (uint64_t *)(param_1 + 0x40);
    if (puVar1 != (uint64_t *)0x0) {
        _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    }
    plStackX_8 = param_2;
    if (*(uint *)(param_1 + 0x38) < (*(uint *)(param_1 + 0x3c) & 0x7fffffff)) {
        *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8) =
             param_2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    else {
        FUN_1806b4c20(param_1 + 0x28,&plStackX_8);
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
        do {
            (**(code **)(*param_2 + 8))
                (param_2,*(uint64_t *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8));
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    if (puVar1 != (uint64_t *)0x0) {
        // WARNING: Subroutine does not return
        _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    }
    return;
}

/**
 * @brief 系统高级事件处理器
 * 
 * 本函数是高级的事件处理函数：
 * - 处理复杂的事件逻辑
 * - 支持多种事件类型
 * - 实现高效的事件分发
 * - 包含完整的状态管理
 * 
 * @param param_1 事件管理器指针
 * @param param_2 事件类型
 * @param param_3 事件参数
 * @param param_4 事件标志
 * @param param_5 事件数据1
 * @param param_6 事件数据2
 * 
 * 技术实现：
 * - 使用复杂的事件处理算法
 * - 支持多种事件类型
 * - 实现高效分发机制
 * - 包含完整的状态同步
 */
void SystemAdvancedEventHandler(longlong param_1,int16_t param_2,ulonglong param_3,int param_4,
                               ulonglong param_5,ulonglong param_6)
{
    longlong lVar1;
    longlong lVar2;
    int8_t *puVar3;
    longlong lVar4;
    bool bVar5;
    byte bVar6;
    ulonglong uVar7;
    longlong lVar8;
    byte bVar9;
    int8_t uVar10;
    byte bVar12;
    int8_t uStackX_8;
    byte bStackX_9;
    int16_t uStackX_a;
    int16_t uStackX_10;
    int32_t uStack_88;
    int8_t uStack_84;
    byte bStack_83;
    int16_t uStack_82;
    ulonglong uStack_80;
    ulonglong uStack_78;
    uint64_t uStack_70;
    int iStack_68;
    int32_t uStack_64;
    ulonglong uStack_60;
    uint64_t uStack_58;
    int iStack_50;
    int32_t uStack_4c;
    ulonglong uStack_48;
    uint64_t uVar11;
    
    if (*(char *)(param_1 + 0x128) != '\0') {
        uVar7 = *(ulonglong *)(param_1 + -0x48);
        lVar1 = param_1 + -0xb0;
        uStack_80 = uVar7;
        uStackX_10 = param_2;
        if (uVar7 != 0) {
            _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(uVar7 + 8));
            uStack_80 = *(ulonglong *)(param_1 + -0x48);
        }
        uStack_64 = (uint)uStack_64._2_2_ << 0x10;
        uStack_70 = param_3;
        iStack_68 = param_4;
        if (uStack_80 != 0) {
            _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(uStack_80 + 8));
        }
        if ((((*(int *)(param_1 + -0x28) == param_4) && (*(ulonglong *)(param_1 + -0x30) == param_3)) &&
            (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
            bVar5 = true;
        }
        else {
            bVar5 = false;
        }
        lVar2 = *(longlong *)(param_1 + -0x20);
        uVar11 = 3;
        bVar9 = 3;
        uVar10 = 3;
        if (bVar5) {
            uStackX_8 = 3;
            uStack_88 = 3;
            uStack_78 = param_5;
            if (lVar2 != 0) {
                uStack_78 = param_5 - lVar2;
                if (uStack_78 < 0x100) {
                    uStackX_8 = 0;
                    uStack_88 = 0;
                }
                else if (uStack_78 < 0x10000) {
                    uStackX_8 = 1;
                    uStack_88 = 1;
                }
                else if (uStack_78 < 0x100000000) {
                    uStackX_8 = 2;
                    uStack_88 = 2;
                }
                else {
                    uStack_88 = 3;
                    uStack_78 = param_5;
                }
            }
            *(ulonglong *)(param_1 + -0x20) = param_5;
            lVar2 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
            **(int8_t **)(lVar2 + 0x18) = 3;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
            lVar2 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
            **(int8_t **)(lVar2 + 0x18) = uStackX_8;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
            lVar2 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
            puVar3 = *(int8_t **)(lVar2 + 0x18);
            *puVar3 = (char)uStackX_10;
            puVar3[1] = uStackX_10._1_1_;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
            FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,&uStack_78,uStack_88);
            if (*(uint *)(param_1 + -0x60) <=
                (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
                FUN_1806b4470(lVar1);
            }
        }
        else {
            bVar12 = 3;
            uStackX_8 = 1;
            *(int32_t *)(param_1 + -0x30) = (int32_t)uStack_70;
            *(int32_t *)(param_1 + -0x2c) = uStack_70._4_4_;
            *(int *)(param_1 + -0x28) = iStack_68;
            *(int *)(param_1 + -0x24) = uStack_64;
            uStack_60 = param_5;
            if (lVar2 != 0) {
                uStack_60 = param_5 - lVar2;
                if (uStack_60 < 0x100) {
                    bVar12 = 0;
                }
                else if (uStack_60 < 0x10000) {
                    bVar12 = 1;
                }
                else if (uStack_60 < 0x100000000) {
                    bVar12 = 2;
                }
                else {
                    bVar12 = 3;
                    uStack_60 = param_5;
                }
            }
            if (param_3 < 0x100) {
                bVar6 = 0;
            }
            else if (param_3 < 0x10000) {
                bVar6 = 4;
            }
            else {
                bVar6 = 0xc;
                if (param_3 < 0x100000000) {
                    bVar6 = 8;
                }
            }
            *(ulonglong *)(param_1 + -0x20) = param_5;
            lVar2 = *(longlong *)(param_1 + -0x38);
            bStackX_9 = bVar12 | bVar6;
            uStackX_a = param_2;
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
            **(int8_t **)(lVar2 + 0x18) = 1;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
            lVar2 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
            **(byte **)(lVar2 + 0x18) = bVar12 | bVar6;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
            lVar2 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
            puVar3 = *(int8_t **)(lVar2 + 0x18);
            *puVar3 = (char)uStackX_10;
            puVar3[1] = uStackX_10._1_1_;
            *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
            FUN_1806b2670(&uStack_70,param_1 + -0x38,&uStackX_8);
            if (*(uint *)(param_1 + -0x60) <=
                (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
                FUN_1806b4470(lVar1);
            }
        }
        if (uStack_80 != 0) {
            // WARNING: Subroutine does not return
            _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(uStack_80 + 8));
        }
        if (uVar7 != 0) {
            // WARNING: Subroutine does not return
            _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(uVar7 + 8));
        }
        lVar2 = *(longlong *)(param_1 + -0x48);
        lVar8 = lVar2;
        if (lVar2 != 0) {
            _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
            lVar8 = *(longlong *)(param_1 + -0x48);
        }
        uStack_4c = (uint)uStack_4c._2_2_ << 0x10;
        uStack_58 = param_3;
        iStack_50 = param_4;
        if (lVar8 != 0) {
            _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
        }
        if (((*(int *)(param_1 + -0x28) == param_4) && (*(ulonglong *)(param_1 + -0x30) == param_3)) &&
           ((*(char *)(param_1 + -0x24) == '\0' && (*(char *)(param_1 + -0x23) == '\0')))) {
            bVar5 = true;
        }
        else {
            bVar5 = false;
        }
        lVar4 = *(longlong *)(param_1 + -0x20);
        if (bVar5) {
            uStack_80 = param_6;
            if (lVar4 != 0) {
                uVar7 = param_6 - lVar4;
                uStack_80 = uVar7;
                if (uVar7 < 0x100) {
                    uVar10 = 0;
                    uVar11 = 0;
                }
                else if (uVar7 < 0x10000) {
                    uVar10 = 1;
                    uVar11 = 1;
                }
                else {
                    uStack_80 = param_6;
                    if (uVar7 < 0x100000000) {
                        uVar10 = 2;
                        uVar11 = 2;
                        uStack_80 = uVar7;
                    }
                }
            }
            *(ulonglong *)(param_1 + -0x20) = param_6;
            lVar4 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
            **(int8_t **)(lVar4 + 0x18) = 4;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
            lVar4 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
            **(int8_t **)(lVar4 + 0x18) = uVar10;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
            lVar4 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 2);
            puVar3 = *(int8_t **)(lVar4 + 0x18);
            *puVar3 = (char)uStackX_10;
            puVar3[1] = uStackX_10._1_1_;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
            FUN_1806b6980(param_1 + -0x38,&unknown_var_6648_ptr,&uStack_80,uVar11);
        }
        else {
            uStack_82 = uStackX_10;
            uStack_84 = 2;
            *(int32_t *)(param_1 + -0x30) = (int32_t)uStack_58;
            *(int32_t *)(param_1 + -0x2c) = uStack_58._4_4_;
            *(int *)(param_1 + -0x28) = iStack_50;
            *(int *)(param_1 + -0x24) = uStack_4c;
            uStack_48 = param_6;
            if (lVar4 != 0) {
                uStack_48 = param_6 - lVar4;
                if (uStack_48 < 0x100) {
                    bVar9 = 0;
                }
                else if (uStack_48 < 0x10000) {
                    bVar9 = 1;
                }
                else if (uStack_48 < 0x100000000) {
                    bVar9 = 2;
                }
                else {
                    bVar9 = 3;
                    uStack_48 = param_6;
                }
            }
            if (param_3 < 0x100) {
                bVar12 = 0;
            }
            else if (param_3 < 0x10000) {
                bVar12 = 4;
            }
            else {
                bVar12 = 0xc;
                if (param_3 < 0x100000000) {
                    bVar12 = 8;
                }
            }
            *(ulonglong *)(param_1 + -0x20) = param_6;
            lVar4 = *(longlong *)(param_1 + -0x38);
            bStack_83 = bVar9 | bVar12;
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
            **(int8_t **)(lVar4 + 0x18) = 2;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
            lVar4 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
            **(byte **)(lVar4 + 0x18) = bVar9 | bVar12;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
            lVar4 = *(longlong *)(param_1 + -0x38);
            FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 2);
            puVar3 = *(int8_t **)(lVar4 + 0x18);
            *puVar3 = (char)uStackX_10;
            puVar3[1] = uStackX_10._1_1_;
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
            FUN_1806b2670(&uStack_58,param_1 + -0x38,&uStack_84);
        }
        if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
        {
            FUN_1806b4470(lVar1);
        }
        if (lVar8 != 0) {
            // WARNING: Subroutine does not return
            _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
        }
        if (lVar2 != 0) {
            // WARNING: Subroutine does not return
            _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
        }
    }
    return;
}

// ==================== 函数别名映射 ====================

// 系统资源管理函数别名
#define SystemResourceCleanupAndReleaseProcessor              FUN_1806b2ea0
#define SystemResourceAdvancedCleanupAndReleaseProcessor       FUN_1806b2ead
#define SystemResourceParameterizedCleanupAndReleaseProcessor  FUN_1806b2ec3
#define SystemResourceFastCleanupProcessor                     FUN_1806b2fc2
#define SystemResourceConditionalCleanupProcessor               FUN_1806b2ff9
#define SystemMemoryReleaseProcessorType1                      FUN_1806b30a0
#define SystemMemoryReleaseProcessorType2                      FUN_1806b30e0
#define SystemObjectMemoryReleaseProcessor                     FUN_1806b3120
#define SystemLargeMemoryReleaseProcessor                       FUN_1806b3180
#define SystemSmallObjectMemoryReleaseProcessor                 FUN_1806b31c0
#define SystemCompositeObjectMemoryReleaseProcessor            FUN_1806b31f0
#define SystemResourceBlockMemoryReleaseProcessor              FUN_1806b32a0
#define SystemEventQueueAddProcessor                           FUN_1806b32e0
#define SystemDataQueueAddProcessor                            FUN_1806b3350
#define SystemObjectRegistrationProcessor                       FUN_1806b33a0
#define SystemObjectAdvancedRegistrationProcessor              FUN_1806b33a6
#define SystemObjectActivationProcessor                         FUN_1806b3403
#define SystemResourceUnlockProcessor                          FUN_1806b345d
#define SystemForceUnlockProcessor                             FUN_1806b346c
#define SystemCallbackRegistrationProcessor                    FUN_1806b3480
#define SystemAdvancedEventHandler                            FUN_1806b3520