#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part245.c - 核心引擎线程和同步管理模块
// 本模块包含线程管理、同步原语、内存分配和任务调度相关功能

// 全局常量定义
#define MAX_THREAD_PRIORITY 0xfffffffe
#define DEFAULT_TIMEOUT 0xfffffffffffffffe
#define INVALID_HANDLE_VALUE 0
#define THREAD_STACK_SIZE 0x208
#define MUTEX_DESTROY_TIMEOUT 0x58
#define CONDITION_DESTROY_TIMEOUT 0x2a

// 全局变量引用
extern uint64_t global_var_2392_ptr;    // 虚函数表指针
extern uint64_t global_var_720_ptr;    // 线程局部存储
extern uint64_t global_var_7512_ptr;    // 内存管理器
extern uint64_t global_var_3456_ptr;    // 线程调度器
extern longlong system_memory_pool_ptr;     // 内存池标识符
extern longlong system_context_ptr;     // 同步对象标识符
extern longlong system_message_buffer;     // 锁管理器
extern longlong __tls_index;        // 线程局部存储索引
extern uint64_t ThreadLocalStoragePointer; // 线程局部存储指针

// 函数声明
void FUN_18020f940(uint64_t param_1);  // 线程启动函数
void FUN_18064e900(void);               // 错误处理函数
void FUN_18020f530(void);               // 清理函数
void FUN_1800466d0(longlong param_1);    // 初始化函数
void FUN_18005ee30(longlong param_1, int param_2, uint64_t *param_3, int32_t param_4, longlong param_5); // 内存分配
void FUN_180060fc0(longlong param_1, longlong *param_2); // 任务队列操作
void FUN_1806279c0(uint64_t *param_1, longlong *param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5); // 线程创建
void FUN_180623fd0(longlong param_1, uint64_t *param_2); // 线程设置
void FUN_18062b1e0(longlong param_1, int param_2, int param_3, int param_4, longlong param_5); // 对象创建
void FUN_1808fc418(int param_1);        // 内存分配
void FUN_180060e40(uint64_t param_1, longlong param_2, longlong **param_3); // 任务获取
void FUN_18005e110(uint64_t param_1, longlong ***param_2); // 任务处理
void FUN_180060c60(longlong *param_1, longlong **param_2, longlong *param_3, longlong *param_4, longlong param_5); // 任务调度
void FUN_18020ee40(void);               // 事件检查
void FUN_180049830(longlong *param_1);  // 对象初始化
void FUN_180046190(longlong param_1);   // 条件变量销毁
void FUN_1808fc050(longlong param_1);   // 栈清理

// 线程控制块结构体
typedef struct {
    uint64_t *vtable_ptr;          // 虚函数表指针 (0x00)
    uint64_t thread_local_storage; // 线程局部存储 (0x08)
    uint64_t *memory_manager;      // 内存管理器 (0x10)
    uint64_t *data_ptr;            // 数据指针 (0x18)
    uint64_t *next_ptr;           // 下一个指针 (0x20)
    int reference_count;             // 引用计数 (0x28)
    int flags;                       // 标志位 (0x2C)
    longlong thread_id;              // 线程ID (0x30)
    int thread_priority;             // 线程优先级 (0x38)
    int status;                      // 线程状态 (0x3C)
    longlong *task_queue;            // 任务队列 (0x40)
    longlong *queue_head;            // 队列头 (0x48)
    longlong *queue_tail;            // 队列尾 (0x50)
    int queue_size;                  // 队列大小 (0x58)
    int active_threads;              // 活动线程数 (0x5C)
    uint64_t *sync_object;         // 同步对象 (0x60)
    longlong *task_pool;             // 任务池 (0x68)
    int pool_size;                   // 池大小 (0x70)
    int pool_capacity;               // 池容量 (0x74)
    longlong *free_list;             // 空闲列表 (0x78)
    longlong *used_list;             // 使用列表 (0x80)
    longlong *pending_list;          // 待处理列表 (0x88)
    longlong *completed_list;        // 完成列表 (0x90)
    longlong mutex;                   // 互斥锁 (0x98)
    longlong condition;               // 条件变量 (0xA0)
    longlong semaphore;               // 信号量 (0xA8)
    longlong *semaphore_ptr;         // 信号量指针 (0xB0)
    longlong *semaphore_end;         // 信号量结束 (0xB8)
    longlong *current_block;         // 当前块 (0xC0)
    longlong *block_end;             // 块结束 (0xC8)
    longlong *free_blocks;           // 空闲块 (0xD0)
    longlong *used_blocks;           // 使用块 (0xD8)
    longlong block_count;             // 块计数 (0xE0)
    longlong total_blocks;           // 总块数 (0xE8)
    longlong task_mutex;             // 任务互斥锁 (0xF0)
    longlong *task_data;             // 任务数据 (0xF8)
    longlong data_size;              // 数据大小 (0x100)
    longlong data_capacity;          // 数据容量 (0x108)
    longlong *data_ptr;              // 数据指针 (0x110)
    int data_flags;                  // 数据标志 (0x118)
    int data_reference_count;        // 数据引用计数 (0x11C)
    longlong *next_data;             // 下一个数据 (0x120)
    longlong *prev_data;             // 前一个数据 (0x128)
    longlong data_mutex;             // 数据互斥锁 (0x130)
    longlong *task_list;             // 任务列表 (0x138)
    int task_count;                  // 任务计数 (0x140)
    int task_capacity;               // 任务容量 (0x144)
    longlong *task_array;            // 任务数组 (0x148)
    longlong *free_tasks;            // 空闲任务 (0x150)
    longlong *active_tasks;           // 活动任务 (0x158)
    longlong *completed_tasks;        // 完成任务 (0x160)
    longlong task_allocator;          // 任务分配器 (0x168)
    longlong task_deallocator;        // 任务释放器 (0x170)
    longlong *task_context;          // 任务上下文 (0x178)
    longlong context_size;           // 上下文大小 (0x180)
    longlong context_capacity;       // 上下文容量 (0x188)
    longlong context_mutex;          // 上下文互斥锁 (0x190)
    longlong *context_data;          // 上下文数据 (0x198)
    int context_flags;               // 上下文标志 (0x1A0)
    int context_reference_count;     // 上下文引用计数 (0x1A4)
    longlong *next_context;          // 下一个上下文 (0x1A8)
    longlong *prev_context;          // 前一个上下文 (0x1B0)
    longlong *sync_list;             // 同步列表 (0x1B8)
    int sync_count;                  // 同步计数 (0x1C0)
    int sync_capacity;               // 同步容量 (0x1C4)
    longlong *sync_array;            // 同步数组 (0x1C8)
    longlong *free_sync;             // 空闲同步 (0x1D0)
    longlong *active_sync;            // 活动同步 (0x1D8)
    longlong sync_allocator;         // 同步分配器 (0x1E0)
    longlong sync_deallocator;       // 同步释放器 (0x1E8)
    char sync_initialized;           // 同步初始化标志 (0x1F0)
    char padding[0x07];               // 填充 (0x1F1)
} ThreadControlBlock;

// 任务结构体
typedef struct {
    uint64_t *task_function;       // 任务函数指针
    uint64_t *task_data;           // 任务数据
    longlong task_id;                 // 任务ID
    int task_priority;               // 任务优先级
    int task_status;                 // 任务状态
    longlong *next_task;             // 下一个任务
    longlong *prev_task;             // 前一个任务
    longlong *task_context;          // 任务上下文
    longlong context_size;           // 上下文大小
    int context_flags;               // 上下文标志
    int reference_count;             // 引用计数
    uint64_t *sync_object;         // 同步对象
    longlong creation_time;           // 创建时间
    longlong execution_time;          // 执行时间
    longlong completion_time;        // 完成时间
    char task_type;                  // 任务类型
    char padding[0x07];              // 填充
} Task;

// 同步对象结构体
typedef struct {
    uint64_t *sync_function;       // 同步函数指针
    uint64_t *sync_data;           // 同步数据
    longlong sync_id;                 // 同步ID
    int sync_type;                   // 同步类型
    int sync_status;                 // 同步状态
    longlong *next_sync;             // 下一个同步
    longlong *prev_sync;             // 前一个同步
    longlong *sync_context;          // 同步上下文
    longlong context_size;           // 上下文大小
    int context_flags;               // 上下文标志
    int reference_count;             // 引用计数
    uint64_t *wait_object;          // 等待对象
    longlong wait_timeout;           // 等待超时
    longlong signal_count;           // 信号计数
    char sync_mode;                  // 同步模式
    char padding[0x07];              // 填充
} SyncObject;

/**
 * 初始化线程控制块
 * @param thread_block 线程控制块指针
 * @param context_size 上下文大小
 * @param memory_pool 内存池
 * @param thread_id 线程ID
 */
void initialize_thread_control_block(ThreadControlBlock *thread_block, longlong context_size, 
                                   uint64_t *memory_pool, longlong thread_id)
{
    int *piVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    uint64_t *puStackX_10;
    uint64_t uStackX_18;
    uint64_t *puStackX_20;
    
    // 初始化虚函数表
    thread_block->vtable_ptr = &global_var_2392_ptr;
    puStackX_10 = (uint64_t *)((longlong)thread_block + 0x10);
    *puStackX_10 = &global_var_720_ptr;
    lVar4 = 0;
    thread_block->data_ptr = 0;
    *(int32_t *)((longlong)thread_block + 0x20) = 0;
    *puStackX_10 = &global_var_7512_ptr;
    thread_block->data_ptr = (uint64_t *)((longlong)thread_block + 0x28);
    *(int32_t *)((longlong)thread_block + 0x20) = 0;
    *(int8_t *)((longlong)thread_block + 0x28) = 0;
    *(int32_t *)((longlong)thread_block + 0x48) = 0;
    thread_block->context_size = context_size;
    thread_block->data_capacity = 0;
    lVar3 = FUN_18005ee30(context_size, 1, &puStackX_10, context_size, DEFAULT_TIMEOUT);
    if (lVar3 != 0) {
        lVar4 = lVar3 + 8;
    }
    thread_block->data_capacity = lVar4;
    if (lVar4 != 0) {
        *(uint64_t **)(lVar4 + 0x10) = (uint64_t *)((longlong)thread_block + 0xe0);
    }
    *(int32_t *)((longlong)thread_block + 0x80) = 0;
    thread_block->context_reference_count = 0;
    thread_block->context_flags = 0;
    LOCK();
    piVar1 = (int *)(thread_id + 0x25c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)((longlong)thread_block + 0x78) = iVar2;
    *(int32_t *)((longlong)thread_block + 0x7c) = 0xffffffff;
    puStackX_20 = (uint64_t *)((longlong)thread_block + 0x98);
    memset(puStackX_20, 0, MUTEX_DESTROY_TIMEOUT);
}

/**
 * 释放线程资源
 * @param thread_handle 线程句柄
 * @param flags 释放标志
 * @return 释放后的线程句柄
 */
uint64_t release_thread_resources(uint64_t thread_handle, ulonglong flags)
{
    FUN_18020e6c0();
    if ((flags & 1) != 0) {
        free(thread_handle, THREAD_STACK_SIZE);
    }
    return thread_handle;
}

/**
 * 清理任务队列
 * @param task_queue 任务队列指针
 */
void cleanup_task_queue(longlong *task_queue)
{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint64_t *puVar4;
    
    plVar2 = (longlong *)task_queue[2];
    plVar3 = (longlong *)task_queue[4];
    puVar4 = (uint64_t *)task_queue[5];
    if (plVar2 != (longlong *)task_queue[6]) {
        do {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
                ((void (*)(void))(*(code **)(*(longlong *)*plVar2 + 0x38)))();
            }
            plVar2 = plVar2 + 1;
            if (plVar2 == plVar3) {
                puVar4 = puVar4 + 1;
                plVar2 = (longlong *)*puVar4;
                plVar3 = plVar2 + 0x20;
            }
        } while (plVar2 != (longlong *)task_queue[6]);
    }
    if (*task_queue != 0) {
        plVar3 = (longlong *)task_queue[5];
        while (plVar3 < (longlong *)(task_queue[9] + 8)) {
            lVar1 = *plVar3;
            plVar3 = plVar3 + 1;
            if (lVar1 != 0) {
                FUN_18064e900();
            }
        }
        if (*task_queue != 0) {
            FUN_18064e900();
        }
        *task_queue = 0;
    }
}

/**
 * 清理同步对象
 * @param sync_queue 同步队列指针
 */
void cleanup_sync_queue(longlong *sync_queue)
{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint64_t *puVar4;
    
    plVar2 = (longlong *)sync_queue[2];
    plVar3 = (longlong *)sync_queue[4];
    puVar4 = (uint64_t *)sync_queue[5];
    if (plVar2 != (longlong *)sync_queue[6]) {
        do {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
                ((void (*)(void))(*(code **)(*(longlong *)*plVar2 + 0x38)))();
            }
            plVar2 = plVar2 + 1;
            if (plVar2 == plVar3) {
                puVar4 = puVar4 + 1;
                plVar2 = (longlong *)*puVar4;
                plVar3 = plVar2 + 0x20;
            }
        } while (plVar2 != (longlong *)sync_queue[6]);
    }
    if (*sync_queue != 0) {
        plVar3 = (longlong *)sync_queue[5];
        while (plVar3 < (longlong *)(sync_queue[9] + 8)) {
            lVar1 = *plVar3;
            plVar3 = plVar3 + 1;
            if (lVar1 != 0) {
                FUN_18064e900();
            }
        }
        if (*sync_queue != 0) {
            FUN_18064e900();
        }
        *sync_queue = 0;
    }
}

/**
 * 清理内存池
 * @param memory_pool 内存池指针
 */
void cleanup_memory_pool(longlong *memory_pool)
{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint64_t *puVar4;
    
    plVar2 = (longlong *)memory_pool[2];
    plVar3 = (longlong *)memory_pool[4];
    puVar4 = (uint64_t *)memory_pool[5];
    if (plVar2 != (longlong *)memory_pool[6]) {
        do {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
                ((void (*)(void))(*(code **)(*(longlong *)*plVar2 + 0x38)))();
            }
            plVar2 = plVar2 + 1;
            if (plVar2 == plVar3) {
                puVar4 = puVar4 + 1;
                plVar2 = (longlong *)*puVar4;
                plVar3 = plVar2 + 0x20;
            }
        } while (plVar2 != (longlong *)memory_pool[6]);
    }
    if (*memory_pool != 0) {
        plVar3 = (longlong *)memory_pool[5];
        while (plVar3 < (longlong *)(memory_pool[9] + 8)) {
            lVar1 = *plVar3;
            plVar3 = plVar3 + 1;
            if (lVar1 != 0) {
                FUN_18064e900();
            }
        }
        if (*memory_pool != 0) {
            FUN_18064e900();
        }
        *memory_pool = 0;
    }
}

/**
 * 创建任务控制块
 * @param task_block 任务控制块指针
 * @param context_size 上下文大小
 * @param priority 优先级
 * @param flags 标志
 * @param task_id 任务ID
 * @param parent_task 父任务
 */
void create_task_control_block(uint64_t *task_block, uint64_t context_size, 
                              uint64_t priority, int32_t flags,
                              longlong task_id, uint64_t *parent_task)
{
    int *piVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    
    lVar3 = task_id;
    *task_block = &global_var_2392_ptr;
    task_block[2] = &global_var_720_ptr;
    lVar5 = 0;
    task_block[3] = 0;
    *(int32_t *)(task_block + 4) = 0;
    task_block[2] = &global_var_7512_ptr;
    task_block[3] = task_block + 5;
    *(int32_t *)(task_block + 4) = 0;
    *(int8_t *)(task_block + 5) = 0;
    *(int32_t *)(task_block + 9) = 0;
    task_block[0xc] = task_id;
    task_block[0xd] = (longlong)parent_task;
    lVar4 = FUN_18005ee30(task_id, 1, &task_id, flags, DEFAULT_TIMEOUT);
    if (lVar4 != 0) {
        lVar5 = lVar4 + 8;
    }
    task_block[0xe] = lVar5;
    if (lVar5 != 0) {
        *(uint64_t **)(lVar5 + 0x10) = task_block + 0xe;
    }
    *(int32_t *)(task_block + 0x10) = 0;
    task_block[0x11] = 0;
    task_block[0x12] = 0;
    LOCK();
    piVar1 = (int *)(lVar3 + 0x25c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)(task_block + 0xf) = iVar2;
    *(int32_t *)((longlong)task_block + 0x7c) = 0xffffffff;
    parent_task = task_block + 0x13;
    memset(parent_task, 0, MUTEX_DESTROY_TIMEOUT);
}

/**
 * 销毁任务管理器
 * @param task_manager 任务管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void destroy_task_manager(uint64_t *task_manager, uint64_t param2, uint64_t param3, uint64_t param4)
{
    char cVar1;
    uint64_t uVar2;
    
    uVar2 = DEFAULT_TIMEOUT;
    *task_manager = &global_var_2392_ptr;
    cVar1 = FUN_18020eba0(task_manager, 1, param3, param4, DEFAULT_TIMEOUT);
    while (cVar1 != '\0') {
        cVar1 = FUN_18020eba0(task_manager, 1, param3, param4, uVar2);
    }
    if (task_manager[1] == 0) {
        task_manager[1] = 0;
        _Mtx_destroy_in_situ();
        _Cnd_destroy_in_situ(task_manager + 0x2a);
        _Mtx_destroy_in_situ();
        FUN_18020f530();
        if (task_manager[0xe] != 0) {
            *(uint64_t *)(task_manager[0xe] + 0x10) = 0;
            *(int8_t *)(task_manager[0xe] + 8) = 1;
        }
        task_manager[2] = &global_var_720_ptr;
        return;
    }
    if (*(int *)(task_manager[1] + 8) == 0) {
        FUN_18064e900();
    }
    terminate();
}

/**
 * 等待线程完成
 * @param thread_handle 线程句柄
 */
void wait_for_thread_completion(longlong thread_handle)
{
    uint64_t *puVar1;
    int iVar2;
    int32_t uStack_18;
    int32_t uStack_14;
    int32_t uStack_10;
    int32_t uStack_c;
    
    *(int8_t *)(thread_handle + 0x58) = 0;
    FUN_1800466d0(thread_handle + 0x150);
    puVar1 = *(uint64_t **)(thread_handle + 8);
    if (*(int *)(puVar1 + 1) == 0) {
        __Throw_Cpp_error_std__YAXH_Z(1);
        if (*(int *)(puVar1 + 1) == 0) {
            __Throw_Cpp_error_std__YAXH_Z(1);
        }
    }
    iVar2 = _Thrd_id();
    if (*(int *)(puVar1 + 1) == iVar2) {
        __Throw_Cpp_error_std__YAXH_Z(5);
    }
    uStack_18 = *(int32_t *)puVar1;
    uStack_14 = *(int32_t *)((longlong)puVar1 + 4);
    uStack_10 = *(int32_t *)(puVar1 + 1);
    uStack_c = *(int32_t *)((longlong)puVar1 + 0xc);
    iVar2 = _Thrd_join(&uStack_18, 0);
    if (iVar2 != 0) {
        __Throw_Cpp_error_std__YAXH_Z(2);
    }
    *(int32_t *)(puVar1 + 1) = 0;
    *puVar1 = 0;
}

/**
 * 启动线程执行
 * @param thread_handle 线程句柄
 */
void start_thread_execution(longlong thread_handle)
{
    uint64_t uVar1;
    int iVar2;
    longlong *plVar3;
    
    *(int8_t *)(thread_handle + 0x58) = 1;
    uVar1 = FUN_18062b1e0(system_memory_pool_ptr, 0x10, 8, 3, DEFAULT_TIMEOUT);
    plVar3 = (longlong *)FUN_1808fc418(0x10);
    *plVar3 = thread_handle;
    plVar3[1] = (longlong)&global_var_1688_ptr;
    FUN_18020f620(uVar1);
    if (plVar3 != (longlong *)0x0) {
        free();
    }
    *(uint64_t *)(thread_handle + 8) = uVar1;
    iVar2 = _Mtx_lock(thread_handle + 0x198);
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
    *(int8_t *)(thread_handle + 0x1e8) = 0;
    iVar2 = _Mtx_unlock(thread_handle + 0x198);
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
}

/**
 * 分配任务给线程
 * @param thread_handle 线程句柄
 * @param task 任务指针
 * @param param3 参数3
 * @param param4 参数4
 */
void assign_task_to_thread(longlong thread_handle, longlong *task, uint64_t param3, uint64_t param4)
{
    uint64_t *puVar1;
    int iVar2;
    longlong lVar3;
    uint64_t uVar4;
    int8_t uVar5;
    
    uVar4 = DEFAULT_TIMEOUT;
    lVar3 = thread_handle + 0xf0;
    iVar2 = _Mtx_lock();
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar5 = 1;
    FUN_180060fc0(thread_handle + 0x98, task);
    LOCK();
    *(int *)(thread_handle + 0x140) = *(int *)(thread_handle + 0x140) + 1;
    UNLOCK();
    puVar1 = *(uint64_t **)(thread_handle + 0x1f0);
    do {
        iVar2 = ReleaseSemaphore(*puVar1, 1, 0, param4, uVar4, lVar3, uVar5);
    } while (iVar2 == 0);
    FUN_1800466d0(thread_handle + 0x150);
    iVar2 = _Mtx_unlock(lVar3);
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
    if ((longlong *)*task != (longlong *)0x0) {
        ((void (*)(void))(*(code **)(*(longlong *)*task + 0x38)))();
    }
}

/**
 * 创建工作线程
 * @param thread_block 线程块指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void create_worker_thread(longlong *thread_block, uint64_t param2, uint64_t param3, uint64_t param4)
{
    int32_t uVar1;
    longlong lVar2;
    uint64_t uVar3;
    void *puStack_30;
    longlong lStack_28;
    int32_t uStack_18;
    
    uVar3 = DEFAULT_TIMEOUT;
    lVar2 = GetCurrentThread();
    thread_block[8] = lVar2;
    *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0xc) =
         (int)thread_block[10];
    FUN_1806279c0(&puStack_30, thread_block + 2, param3, param4, uVar3);
    FUN_180623fd0(thread_block[8], &puStack_30);
    puStack_30 = &global_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &global_var_720_ptr;
    lVar2 = thread_block[0x29];
    if ((lVar2 == 0) || (lVar2 == 1)) {
        uVar3 = 2;
    }
    else if (lVar2 - 3U < 2) {
        uVar3 = MAX_THREAD_PRIORITY;
    }
    else {
        uVar3 = 0;
    }
    SetThreadPriority(thread_block[8], uVar3);
    uVar1 = GetThreadId(thread_block[8]);
    *(int32_t *)(thread_block + 7) = uVar1;
    uVar1 = _Thrd_id();
    *(int32_t *)(thread_block + 9) = uVar1;
    ((void (*)(longlong *))(*(code **)(*thread_block + 0x10)))(thread_block);
}

/**
 * 执行任务循环
 * @param task_queue 任务队列指针
 */
void execute_task_loop(longlong *task_queue)
{
    char cVar1;
    
    cVar1 = (char)task_queue[0xb];
    while (cVar1 != '\0') {
        cVar1 = ((char (*)(longlong *, int))(*(code **)(*task_queue + 0x20)))(task_queue, 1);
        if (cVar1 == '\0') {
            ((void (*)(longlong *))(*(code **)(*task_queue + 0x18)))(task_queue);
        }
        cVar1 = (char)task_queue[0xb];
    }
}

/**
 * 处理任务请求
 * @param task_manager 任务管理器
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 处理结果
 */
uint64_t process_task_request(longlong task_manager, uint64_t param2, uint64_t param3, uint64_t param4)
{
    longlong *plVar1;
    char cVar2;
    uint64_t uVar3;
    longlong *plStackX_8;
    longlong *plStackX_10;
    longlong **pplStackX_18;
    
    plStackX_8 = (longlong *)0x0;
    WaitForSingleObject(**(uint64_t **)(task_manager + 0x1f0), 1, param3, param4, DEFAULT_TIMEOUT);
    cVar2 = FUN_180060e40(*(uint64_t *)(task_manager + 0x60), task_manager + 0x78, &plStackX_8);
    plVar1 = plStackX_8;
    uVar3 = system_context_ptr;
    if (cVar2 != '\0') {
        if (((ulonglong)plStackX_8[3] >> (*(ulonglong *)(task_manager + 0x50) & 0x3f) & 1) != 0) {
            ((void (*)(void))(*(code **)(*plStackX_8 + 0x60)))(plStackX_8);
            ((void (*)(void))(*(code **)(*plVar1 + 0x70)))(plVar1);
            uVar3 = 1;
            goto LAB_18020eb6e;
        }
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plStackX_8;
        ((void (*)(void))(*(code **)(*plStackX_8 + 0x28)))();
        FUN_18005e110(uVar3, &plStackX_10);
    }
    uVar3 = 0;
LAB_18020eb6e:
    if (plVar1 != (longlong *)0x0) {
        ((void (*)(void))(*(code **)(*plVar1 + 0x38)))(plVar1);
    }
    return uVar3;
}

/**
 * 执行任务调度
 * @param task_manager 任务管理器
 * @param force 强制标志
 * @return 调度结果
 */
uint64_t execute_task_scheduling(longlong task_manager, char force)
{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    longlong *plVar5;
    longlong ****pppplVar6;
    longlong ****pppplVar7;
    uint64_t uVar8;
    longlong ***ppplStackX_18;
    longlong ***ppplStackX_20;
    longlong ***ppplStack_48;
    longlong ***ppplStack_40;
    uint64_t uStack_38;
    longlong lStack_30;
    int8_t uStack_28;
    
    uStack_38 = DEFAULT_TIMEOUT;
    ppplStackX_18 = (longlong ***)0x0;
    if ((force == '\0') || (*(int *)(task_manager + 0x140) < 1)) {
        pppplVar7 = (longlong ****)0x0;
        cVar3 = FUN_18020ee40();
        if (cVar3 != '\0') {
            uVar8 = 1;
            goto LAB_18020ed62;
        }
        cVar3 = FUN_180060e40(*(uint64_t *)(task_manager + 0x60), task_manager + 0x78, &ppplStackX_18);
        pppplVar7 = (longlong ****)ppplStackX_18;
        uVar8 = system_context_ptr;
        if (cVar3 != '\0') {
            if (((ulonglong)ppplStackX_18[3] >> (*(ulonglong *)(task_manager + 0x50) & 0x3f) & 1) != 0) {
                ((void (*)(void))(*(code *)(*ppplStackX_18)[0xc]))(ppplStackX_18);
                ((void (*)(void))(*(code *)(*pppplVar7)[0xe]))(pppplVar7);
                uVar8 = 1;
                goto LAB_18020ed62;
            }
            ppplStackX_20 = (longlong ***)&ppplStack_48;
            ppplStack_48 = ppplStackX_18;
            ((void (*)(void))(*(code *)(*ppplStackX_18)[5]))();
            pppplVar6 = &ppplStack_48;
            goto LAB_18020ed57;
        }
    }
    else {
        lVar1 = task_manager + 0xf0;
        uStack_28 = 0;
        lStack_30 = lVar1;
        iVar4 = _Mtx_lock(lVar1);
        if (iVar4 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar4);
        }
        uStack_28 = 1;
        pppplVar7 = (longlong ****)ppplStackX_18;
        if ((*(longlong *)(task_manager + 200) - *(longlong *)(task_manager + 0xd0) >> 3) +
            ((*(longlong *)(task_manager + 0xe0) - *(longlong *)(task_manager + 0xc0) >> 3) + -1) * 0x20 +
            (*(longlong *)(task_manager + 0xb8) - (longlong)*(longlong **)(task_manager + 0xa8) >> 3) != 0) {
            pppplVar7 = (longlong ****)**(longlong **)(task_manager + 0xa8);
            if (pppplVar7 != (longlong ****)0x0) {
                ppplStack_40 = (longlong ***)pppplVar7;
                ((void (*)(void))(*(code *)(*pppplVar7)[5]))(pppplVar7);
            }
            ppplStack_40 = (longlong ***)0x0;
            plVar5 = *(longlong **)(task_manager + 0xa8);
            ppplStackX_18 = (longlong ***)pppplVar7;
            if (plVar5 + 1 == *(longlong **)(task_manager + 0xb8)) {
                if ((longlong *)*plVar5 != (longlong *)0x0) {
                    ((void (*)(void))(*(code **)(*(longlong *)*plVar5 + 0x38)))();
                }
                if (*(longlong *)(task_manager + 0xb0) != 0) {
                    FUN_18064e900();
                }
                plVar5 = (longlong *)(*(longlong *)(task_manager + 0xc0) + 8);
                *(longlong **)(task_manager + 0xc0) = plVar5;
                lVar2 = *plVar5;
                *(longlong *)(task_manager + 0xb0) = lVar2;
                *(longlong *)(task_manager + 0xb8) = lVar2 + 0x100;
                *(uint64_t *)(task_manager + 0xa8) = *(uint64_t *)(task_manager + 0xb0);
            }
            else {
                *(longlong **)(task_manager + 0xa8) = plVar5 + 1;
                if ((longlong *)*plVar5 != (longlong *)0x0) {
                    ((void (*)(void))(*(code **)(*(longlong *)*plVar5 + 0x38)))();
                }
            }
        }
        iVar4 = _Mtx_unlock(lVar1);
        if (iVar4 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar4);
        }
        uVar8 = system_context_ptr;
        if (pppplVar7 != (longlong ****)0x0) {
            if (((ulonglong)pppplVar7[3] >> (*(ulonglong *)(task_manager + 0x50) & 0x3f) & 1) != 0) {
                ((void (*)(void))(*(code *)(*pppplVar7)[0xc]))(pppplVar7);
                ((void (*)(void))(*(code *)(*pppplVar7)[0xe]))(pppplVar7);
                LOCK();
                *(int *)(task_manager + 0x140) = *(int *)(task_manager + 0x140) + -1;
                UNLOCK();
                uVar8 = 1;
                pppplVar7 = (longlong ****)ppplStackX_18;
                goto LAB_18020ed62;
            }
            ppplStack_40 = (longlong ***)&ppplStackX_20;
            ppplStackX_20 = (longlong ***)pppplVar7;
            ((void (*)(void))(*(code *)(*pppplVar7)[5]))();
            pppplVar6 = &ppplStackX_20;
LAB_18020ed57:
            FUN_18005e110(uVar8, pppplVar6);
        }
    }
    uVar8 = 0;
LAB_18020ed62:
    if (pppplVar7 != (longlong ****)0x0) {
        ((void (*)(void))(*(code *)(*pppplVar7)[7]))(pppplVar7);
    }
    return uVar8;
}

/**
 * 检查任务事件
 * @param task_manager 任务管理器
 * @return 事件状态
 */
ulonglong check_task_events(longlong task_manager)
{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint64_t *puVar4;
    longlong lVar5;
    longlong *plVar6;
    bool bVar7;
    char cVar8;
    ulonglong in_RAX;
    longlong *plVar9;
    longlong *plVar10;
    ulonglong uVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong *plVar15;
    longlong *plVar16;
    longlong *plVar17;
    longlong *plStackX_8;
    longlong *plStackX_10;
    longlong *plStackX_18;
    
    if (*(longlong *)(task_manager + 0x148) == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    plVar17 = (longlong *)0x0;
    plStackX_8 = (longlong *)0x0;
    puVar4 = *(uint64_t **)(task_manager + 0x68);
    plVar10 = plVar17;
    plVar6 = plStackX_18;
    if (puVar4 != (uint64_t *)0x0) {
        plVar12 = (longlong *)*puVar4;
        plVar14 = plVar17;
        plVar15 = plVar17;
        do {
            plVar13 = plVar10;
            plVar16 = plVar15;
            if (plVar12 == (longlong *)0x0) break;
            plVar9 = (longlong *)(plVar12[4] - plVar12[5]);
            if ((ulonglong)(plVar12[5] - plVar12[4]) < 0x8000000000000001) {
                plVar9 = plVar17;
            }
            if ((plVar9 != (longlong *)0x0) &&
               (plVar14 = (longlong *)((longlong)plVar14 + 1), plVar13 = plVar9, plVar16 = plVar12,
               plVar9 <= plVar10)) {
                plVar13 = plVar10;
                plVar16 = plVar15;
            }
            plVar10 = plVar12 + 1;
            plVar12 = (longlong *)(*plVar10 + -8);
            if (*plVar10 == 0) {
                plVar12 = plVar17;
            }
            plVar10 = plVar13;
            plVar15 = plVar16;
        } while (plVar14 < (longlong *)0x3);
        plVar10 = plStackX_8;
        if (plVar14 != (longlong *)0x0) {
            cVar8 = FUN_180060c60(plVar16, &plStackX_8, plVar12, plVar13, DEFAULT_TIMEOUT);
            plVar10 = plStackX_8;
            if (cVar8 != '\0') {
LAB_18020f107:
                ((void (*)(void))(*(code **)(*plVar10 + 0x60)))(plVar10);
                ((void (*)(void))(*(code **)(*plVar10 + 0x70)))(plVar10);
                uVar11 = 1;
                goto LAB_18020f126;
            }
            plVar12 = (longlong *)*puVar4;
            plVar14 = plStackX_8;
            plVar6 = plStackX_18;
            while (plStackX_18 = plVar14, plStackX_8 = plStackX_18, plVar12 != (longlong *)0x0) {
                if (plVar12 != plVar16) {
                    lVar5 = plVar12[7];
                    if ((char)plVar12[9] == '\0') {
                        if ((ulonglong)((plVar12[6] - lVar5) - plVar12[4]) < 0x8000000000000001)
                        goto LAB_18020f0dd;
                        LOCK();
                        plVar10 = plVar12 + 6;
                        lVar2 = *plVar10;
                        *plVar10 = *plVar10 + 1;
                        UNLOCK();
                        if ((ulonglong)((lVar2 - plVar12[4]) - lVar5) < 0x8000000000000001) goto LAB_18020f0d2;
                        LOCK();
                        puVar1 = (ulonglong *)(plVar12 + 5);
                        uVar11 = *puVar1;
                        *puVar1 = *puVar1 + 1;
                        UNLOCK();
                        plVar10 = (longlong *)plVar12[0xc];
                        lVar5 = *(longlong *)
                                 (plVar10[3] +
                                 (plVar10[1] +
                                  ((uVar11 & 0xffffffffffffffe0) - **(longlong **)(plVar10[3] + plVar10[1] * 8)
                                  >> 5) & *plVar10 - 1U) * 8);
                        lVar2 = *(longlong *)(lVar5 + 8);
                        plVar10 = (longlong *)(lVar2 + (ulonglong)((uint)uVar11 & 0x1f) * 8);
                        plStackX_8 = (longlong *)*plVar10;
                        *plVar10 = 0;
                        if (plStackX_18 != (longlong *)0x0) {
                            ((void (*)(void))(*(code **)(*plStackX_18 + 0x38)))(plStackX_18);
                        }
                        if ((longlong *)*plVar10 != (longlong *)0x0) {
                            ((void (*)(void))(*(code **)(*(longlong *)*plVar10 + 0x38)))(plVar10);
                        }
                        LOCK();
                        plVar10 = (longlong *)(lVar2 + 0x108);
                        lVar3 = *plVar10;
                        *plVar10 = *plVar10 + 1;
                        UNLOCK();
                        if (lVar3 == 0x1f) {
                            *(uint64_t *)(lVar5 + 8) = 0;
                            func_0x000180060c10(plVar12[10], lVar2);
                        }
                        bVar7 = true;
                        plVar10 = plStackX_8;
                    }
                    else {
                        if (0x8000000000000000 < (ulonglong)((plVar12[6] - lVar5) - plVar12[4])) {
                            LOCK();
                            plVar10 = plVar12 + 6;
                            lVar2 = *plVar10;
                            *plVar10 = *plVar10 + 1;
                            UNLOCK();
                            if (0x8000000000000000 < (ulonglong)((lVar2 - plVar12[4]) - lVar5)) {
                                LOCK();
                                puVar1 = (ulonglong *)(plVar12 + 5);
                                uVar11 = *puVar1;
                                *puVar1 = *puVar1 + 1;
                                UNLOCK();
                                plVar10 = (longlong *)plVar12[0xb];
                                lVar5 = *(longlong *)
                                         (plVar10[2] + 8 +
                                         (((uVar11 & 0xffffffffffffffe0) -
                                           *(longlong *)(plVar10[2] + plVar10[1] * 0x10) >> 5) + plVar10[1] &
                                         *plVar10 - 1U) * 0x10);
                                uVar11 = (ulonglong)((uint)uVar11 & 0x1f);
                                plVar10 = *(longlong **)(lVar5 + uVar11 * 8);
                                *(uint64_t *)(lVar5 + uVar11 * 8) = 0;
                                plStackX_8 = plVar10;
                                plStackX_10 = plStackX_18;
                                if (plStackX_18 != (longlong *)0x0) {
                                    lVar2 = *plStackX_18;
                                    plStackX_18 = plVar6;
                                    ((void (*)(void))(*(code **)(lVar2 + 0x38)))(plStackX_18);
                                    plVar6 = plStackX_18;
                                }
                                plStackX_18 = plVar6;
                                plVar6 = *(longlong **)(lVar5 + uVar11 * 8);
                                if (plVar6 != (longlong *)0x0) {
                                    ((void (*)(void))(*(code **)(*plVar6 + 0x38)))(plVar6);
                                }
                                *(int8_t *)((lVar5 - uVar11) + 0x12f) = 1;
                                bVar7 = true;
                                goto LAB_18020f0e4;
                            }
LAB_18020f0d2:
                            LOCK();
                            plVar12[7] = plVar12[7] + 1;
                            UNLOCK();
                        }
LAB_18020f0dd:
                        bVar7 = false;
                        plVar10 = plStackX_18;
                        plStackX_18 = plVar6;
                    }
LAB_18020f0e4:
                    plVar6 = plStackX_18;
                    if (bVar7) goto LAB_18020f107;
                }
                plStackX_18 = plVar6;
                plVar15 = plVar12 + 1;
                plVar12 = (longlong *)(*plVar15 + -8);
                plVar14 = plStackX_8;
                plVar6 = plStackX_18;
                if (*plVar15 == 0) {
                    plVar12 = plVar17;
                    plVar14 = plStackX_8;
                }
            }
        }
    }
    plStackX_18 = plVar6;
    uVar11 = 0;
LAB_18020f126:
    if (plVar10 != (longlong *)0x0) {
        ((void (*)(void))(*(code **)(*plVar10 + 0x38)))(plVar10);
    }
    return uVar11;
}

/**
 * 创建任务执行环境
 * @param context_ptr 上下文指针
 */
void create_task_execution_environment(uint64_t *context_ptr)
{
    code *pcVar1;
    longlong *plVar2;
    int8_t auStack_f8 [32];
    longlong *plStack_d8;
    longlong **pplStack_d0;
    uint64_t uStack_c8;
    longlong *plStack_c0;
    longlong alStack_b8 [9];
    longlong alStack_70 [10];
    int8_t uStack_20;
    ulonglong uStack_18;
    
    uStack_c8 = DEFAULT_TIMEOUT;
    uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
    plStack_d8 = alStack_b8;
    _Cnd_init_in_situ(alStack_b8);
    plStack_d8 = alStack_70;
    _Mtx_init_in_situ(alStack_70, 2);
    uStack_20 = 0;
    plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr, 200, 8, 3);
    plStack_d8 = plVar2;
    FUN_180049830(plVar2);
    *plVar2 = (longlong)&global_var_2248_ptr;
    plVar2[0x18] = (longlong)alStack_b8;
    plStack_c0 = plVar2;
    ((void (*)(longlong *))(*(code **)(*plVar2 + 0x28)))(plVar2);
    pcVar1 = *(code **)*context_ptr;
    pplStack_d0 = &plStack_d8;
    plStack_d8 = plVar2;
    ((void (*)(longlong *))(*(code **)(*plVar2 + 0x28)))(plVar2);
    (*pcVar1)(context_ptr, &plStack_d8);
    FUN_180046190(alStack_b8);
    ((void (*)(longlong *))(*(code **)(*plVar2 + 0x38)))(plVar2);
    pplStack_d0 = (longlong **)alStack_70;
    _Mtx_destroy_in_situ(alStack_70);
    pplStack_d0 = (longlong **)alStack_b8;
    _Cnd_destroy_in_situ(alStack_b8);
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_f8);
}

/**
 * 处理任务完成
 * @param task_manager 任务管理器
 * @param force 强制标志
 * @return 处理结果
 */
uint64_t process_task_completion(longlong task_manager, char force)
{
    char cVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    uint64_t uVar6;
    longlong *plStackX_18;
    longlong *plStackX_20;
    
    plStackX_18 = (longlong *)0x0;
    if (force == '\0') {
        cVar1 = FUN_180060e40(*(uint64_t *)(task_manager + 0x60), task_manager + 0x78, &plStackX_18);
        plVar4 = plStackX_18;
        uVar6 = system_context_ptr;
        if (cVar1 != '\0') {
            if (((ulonglong)plStackX_18[3] >> (*(ulonglong *)(task_manager + 0x50) & 0x3f) & 1) != 0) {
                ((void (*)(void))(*(code **)(*plStackX_18 + 0x60)))(plStackX_18);
                ((void (*)(void))(*(code **)(*plVar4 + 0x70)))(plVar4);
                uVar6 = 1;
                goto LAB_18020f50e;
            }
            plStackX_20 = plStackX_18;
            ((void (*)(void))(*(code **)(*plStackX_18 + 0x28)))();
            FUN_18005e110(uVar6, &plStackX_20);
        }
    }
    else {
        plVar4 = plStackX_18;
        if (0 < *(int *)(task_manager + 0x140)) {
            iVar2 = _Mtx_lock(task_manager + 0xf0);
            if (iVar2 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar2);
            }
            plVar4 = plStackX_18;
            if ((*(longlong *)(task_manager + 200) - *(longlong *)(task_manager + 0xd0) >> 3) +
                ((*(longlong *)(task_manager + 0xe0) - *(longlong *)(task_manager + 0xc0) >> 3) + -1) * 0x20 +
                (*(longlong *)(task_manager + 0xb8) - (longlong)*(longlong **)(task_manager + 0xa8) >> 3) != 0) {
                plVar4 = (longlong *)**(longlong **)(task_manager + 0xa8);
                if (plVar4 != (longlong *)0x0) {
                    ((void (*)(void))(*(code **)(*plVar4 + 0x28)))(plVar4);
                }
                plVar3 = *(longlong **)(task_manager + 0xa8);
                plStackX_18 = plVar4;
                if (plVar3 + 1 == *(longlong **)(task_manager + 0xb8)) {
                    if ((longlong *)*plVar3 != (longlong *)0x0) {
                        ((void (*)(void))(*(code **)(*(longlong *)*plVar3 + 0x38)))(plVar3);
                    }
                    if (*(longlong *)(task_manager + 0xb0) != 0) {
                        FUN_18064e900();
                    }
                    plVar3 = (longlong *)(*(longlong *)(task_manager + 0xc0) + 8);
                    *(longlong **)(task_manager + 0xc0) = plVar3;
                    lVar5 = *plVar3;
                    *(longlong *)(task_manager + 0xb0) = lVar5;
                    *(longlong *)(task_manager + 0xb8) = lVar5 + 0x100;
                    *(uint64_t *)(task_manager + 0xa8) = *(uint64_t *)(task_manager + 0xb0);
                }
                else {
                    *(longlong **)(task_manager + 0xa8) = plVar3 + 1;
                    if ((longlong *)*plVar3 != (longlong *)0x0) {
                        ((void (*)(void))(*(code **)(*(longlong *)*plVar3 + 0x38)))(plVar3);
                    }
                }
            }
            iVar2 = _Mtx_unlock(task_manager + 0xf0);
            if (iVar2 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar2);
            }
            if (plVar4 != (longlong *)0x0) {
                lVar5 = system_message_buffer + 0x20;
                iVar2 = _Mtx_lock(lVar5);
                if (iVar2 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar2);
                }
                ((void (*)(void))(*(code **)(*plVar4 + 0x60)))(plVar4);
                ((void (*)(void))(*(code **)(*plVar4 + 0x70)))(plVar4);
                LOCK();
                *(int *)(task_manager + 0x140) = *(int *)(task_manager + 0x140) + -1;
                UNLOCK();
                iVar2 = _Mtx_unlock(lVar5);
                if (iVar2 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar2);
                }
                uVar6 = 1;
                plVar4 = plStackX_18;
                goto LAB_18020f50e;
            }
        }
    }
    uVar6 = 0;
LAB_18020f50e:
    if (plVar4 != (longlong *)0x0) {
        ((void (*)(void))(*(code **)(*plVar4 + 0x38)))(plVar4);
    }
    return uVar6;
}

/**
 * 清理任务管理器资源
 * @param task_manager 任务管理器指针
 */
void cleanup_task_manager_resources(longlong *task_manager)
{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint64_t *puVar4;
    
    plVar2 = (longlong *)task_manager[2];
    plVar3 = (longlong *)task_manager[4];
    puVar4 = (uint64_t *)task_manager[5];
    if (plVar2 != (longlong *)task_manager[6]) {
        do {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
                ((void (*)(void))(*(code **)(*(longlong *)*plVar2 + 0x38)))();
            }
            plVar2 = plVar2 + 1;
            if (plVar2 == plVar3) {
                puVar4 = puVar4 + 1;
                plVar2 = (longlong *)*puVar4;
                plVar3 = plVar2 + 0x20;
            }
        } while (plVar2 != (longlong *)task_manager[6]);
    }
    if (*task_manager != 0) {
        plVar3 = (longlong *)task_manager[5];
        while (plVar3 < (longlong *)(task_manager[9] + 8)) {
            lVar1 = *plVar3;
            plVar3 = plVar3 + 1;
            if (lVar1 != 0) {
                FUN_18064e900();
            }
        }
        if (*task_manager != 0) {
            FUN_18064e900();
        }
        *task_manager = 0;
    }
}

/**
 * 启动线程任务
 * @param thread_func 线程函数
 * @param task_data 任务数据
 * @param param3 参数3
 * @param param4 参数4
 */
void start_thread_task(uint64_t thread_func, longlong *task_data, uint64_t param3, uint64_t param4)
{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    void *puStack_30;
    uint64_t uStack_28;
    uint64_t uStack_20;
    char cStack_18;
    longlong lStack_10;
    
    uVar3 = DEFAULT_TIMEOUT;
    iVar1 = _Cnd_init(&uStack_28);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    uVar5 = uStack_28;
    iVar1 = _Mtx_init(&uStack_20, 1);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    cStack_18 = '\0';
    uVar4 = uStack_20;
    iVar1 = _Mtx_lock(uStack_20);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    puStack_30 = &global_var_2232_ptr;
    lStack_10 = *task_data;
    *task_data = 0;
    iVar2 = _Thrd_start(thread_func, FUN_18020f940, &puStack_30, param4, uVar3, 0, uVar4, 0, uVar5);
    iVar1 = 1;
    if (iVar2 != 4) {
        iVar1 = iVar2;
    }
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    while (cStack_18 == '\0') {
        iVar1 = _Cnd_wait(uStack_28, uStack_20);
        if (iVar1 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar1);
        }
    }
    if (lStack_10 != 0) {
        free(lStack_10, 0x10);
    }
    iVar1 = _Mtx_unlock(uStack_20);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    _Mtx_destroy(uStack_20);
    _Cnd_destroy(uStack_28);
}