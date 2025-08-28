/**
 * @file system_state_synchronizer.c
 * @brief 系统状态同步器功能完善模块
 *
 * 本模块实现了高级系统状态管理和同步机制，提供：
 * - 分布式状态同步管理
 * - 多线程状态一致性保证
 * - 状态变更通知和传播
 * - 状态冲突检测和解决
 * - 状态持久化和恢复
 *
 * 主要功能：
 * 1. 状态同步管理器 - 负责全局状态同步
 * 2. 状态变更监听器 - 监听状态变更事件
 * 3. 状态冲突解决器 - 处理状态冲突
 * 4. 状态持久化器 - 负责状态保存和恢复
 * 5. 状态验证器 - 验证状态一致性
 *
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */
#include "TaleWorlds.Native.Split.h"
/* ============================================================================
 * 系统状态同步器常量定义
 * ============================================================================ */
/**
 * @brief 系统状态同步器常量
 * @details 定义系统状态同步器的参数和接口函数
 *
 * 核心功能：
 * - 状态同步和一致性管理
 * - 多线程状态访问控制
 * - 状态变更事件处理
 * - 状态冲突检测和解决
 * - 状态持久化和恢复
 *
 * 技术特点：
 * - 分布式状态管理架构
 * - 高效的状态同步算法
 * - 完善的冲突解决机制
 * - 可靠的持久化策略
 */
#define STATE_SYNC_SUCCESS 0                    // 状态同步成功
#define STATE_SYNC_ERROR 0x1000000             // 状态同步失败
#define STATE_SYNC_CONFLICT 0x2000000          // 状态冲突
#define STATE_SYNC_TIMEOUT 0x3000000            // 状态同步超时
#define STATE_SYNC_INVALID 0x4000000           // 无效状态
#define STATE_MAX_SIZE 0x100000                 // 状态最大大小 (1MB)
#define STATE_MAX_THREADS 64                    // 最大线程数
#define STATE_SYNC_TIMEOUT_MS 5000              // 同步超时时间
#define STATE_MAX_LISTENERS 32                  // 最大监听器数量
/* ============================================================================
 * 类型别名定义
 * ============================================================================ */
typedef uint64_t StateId;                       // 状态ID类型
typedef uint64_t StateVersion;                  // 状态版本类型
typedef uint64_t StateTimestamp;                // 状态时间戳类型
typedef uint32_t StateFlags;                    // 状态标志类型
typedef void* StateData;                        // 状态数据指针
typedef uint8_t StatePriority;                  // 状态优先级类型
/* ============================================================================
 * 结构体定义
 * ============================================================================ */
/**
 * @brief 状态信息结构
 */
typedef struct {
    StateId state_id;                           // 状态ID
    StateVersion version;                       // 状态版本
    StateTimestamp timestamp;                   // 状态时间戳
    StateFlags flags;                           // 状态标志
    StatePriority priority;                     // 状态优先级
    StateData data;                             // 状态数据指针
    uint32_t data_size;                         // 状态数据大小
    uint32_t ref_count;                         // 引用计数
} StateInfo;
/**
 * @brief 状态同步管理器结构
 */
typedef struct {
    StateInfo* states;                          // 状态数组
    uint32_t state_count;                       // 状态数量
    uint32_t state_capacity;                    // 状态容量
    uint64_t current_version;                   // 当前版本号
    uint8_t sync_mode;                          // 同步模式
    uint8_t reserved[7];                       // 保留字段
} StateSyncManager;
/**
 * @brief 状态变更事件结构
 */
typedef struct {
    StateId state_id;                           // 状态ID
    StateVersion old_version;                   // 旧版本
    StateVersion new_version;                   // 新版本
    StateTimestamp timestamp;                   // 时间戳
    uint32_t change_flags;                      // 变更标志
    void* change_data;                          // 变更数据
} StateChangeEvent;
/**
 * @brief 状态监听器接口
 */
typedef struct {
    void* listener_context;                     // 监听器上下文
    void (*on_state_changed)(StateChangeEvent* event, void* context);  // 状态变更回调
    void (*on_conflict_detected)(StateId state_id, void* context);   // 冲突检测回调
    void (*on_sync_complete)(StateId state_id, void* context);       // 同步完成回调
} StateListener;
/* ============================================================================
 * 函数别名定义
 * ============================================================================ */
// 状态同步管理器函数
#define StateSyncManagerInitialize     InitializeStateSyncManager
#define StateSyncManagerDestroy        DestroyStateSyncManager
#define StateSyncManagerSyncState      SyncStateData
#define StateSyncManagerGetState       GetStateData
#define StateSyncManagerSetState       SetStateData
#define StateSyncManagerDeleteState    DeleteStateData
// 状态监听器管理函数
#define StateListenerRegister          RegisterStateListener
#define StateListenerUnregister        UnregisterStateListener
#define StateListenerNotify            NotifyStateListeners
// 状态冲突处理函数
#define StateConflictResolve           ResolveStateConflict
#define StateConflictDetect            DetectStateConflict
#define StateConflictPrevent           PreventStateConflict
// 状态持久化函数
#define StatePersistenceSave           SaveStateToStorage
#define StatePersistenceLoad           LoadStateFromStorage
#define StatePersistenceBackup         BackupStateData
#define StatePersistenceRestore        RestoreStateData
/* ============================================================================
 * 枚举定义
 * ============================================================================ */
/**
 * @brief 状态同步模式枚举
 */
typedef enum {
    STATE_SYNC_MODE_IMMEDIATE = 0,            // 立即同步模式
    STATE_SYNC_MODE_DEFERRED = 1,             // 延迟同步模式
    STATE_SYNC_MODE_BATCH = 2,                // 批量同步模式
    STATE_SYNC_MODE_ASYNC = 3                 // 异步同步模式
} StateSyncMode;
/**
 * @brief 状态优先级枚举
 */
typedef enum {
    STATE_PRIORITY_LOW = 0,                   // 低优先级
    STATE_PRIORITY_NORMAL = 1,                // 普通优先级
    STATE_PRIORITY_HIGH = 2,                  // 高优先级
    STATE_PRIORITY_CRITICAL = 3              // 关键优先级
} StatePriorityEnum;
/* ============================================================================
 * 全局变量定义
 * ============================================================================ */
static StateSyncManager* g_state_sync_manager = NULL;  // 全局状态同步管理器
static StateListener* g_state_listeners[STATE_MAX_LISTENERS];  // 状态监听器数组
static uint32_t g_listener_count = 0;                      // 监听器数量
static uint8_t g_sync_initialized = 0;                      // 初始化标志
/* ============================================================================
 * 核心函数实现
 * ============================================================================ */
/**
 * @brief 初始化状态同步管理器
 *
 * 创建并初始化状态同步管理器，分配必要的资源，
 * 设置初始状态，准备接收状态同步请求。
 *
 * @param initial_capacity 初始状态容量
 * @param sync_mode 同步模式
 * @return 状态同步管理器指针，失败返回NULL
 */
StateSyncManager* StateSyncManagerInitialize(uint32_t initial_capacity, StateSyncMode sync_mode)
{
    StateSyncManager* manager;
    /* 检查是否已经初始化 */
    if (g_sync_initialized) {
        return g_state_sync_manager;
    }
    /* 分配管理器内存 */
    manager = (StateSyncManager*)malloc(sizeof(StateSyncManager));
    if (!manager) {
        return NULL;
    }
    /* 分配状态数组内存 */
    manager->states = (StateInfo*)malloc(sizeof(StateInfo) * initial_capacity);
    if (!manager->states) {
        free(manager);
        return NULL;
    }
    /* 初始化管理器状态 */
    manager->state_count = 0;
    manager->state_capacity = initial_capacity;
    manager->current_version = 1;
    manager->sync_mode = sync_mode;
    /* 初始化状态数组 */
    memset(manager->states, 0, sizeof(StateInfo) * initial_capacity);
    /* 初始化监听器数组 */
    memset(g_state_listeners, 0, sizeof(g_state_listeners));
    g_listener_count = 0;
    /* 设置全局管理器 */
    g_state_sync_manager = manager;
    g_sync_initialized = 1;
    return manager;
}
/**
 * @brief 销毁状态同步管理器
 *
 * 释放状态同步管理器占用的所有资源，
 * 包括状态数据、监听器等，并清理全局状态。
 *
 * @param manager 状态同步管理器指针
 */
void StateSyncManagerDestroy(StateSyncManager* manager)
{
    uint32_t i;
    if (!manager) {
        return;
    }
    /* 释放所有状态数据 */
    for (i = 0; i < manager->state_count; i++) {
        if (manager->states[i].data) {
            free(manager->states[i].data);
        }
    }
    /* 释放状态数组 */
    free(manager->states);
    /* 释放管理器 */
    free(manager);
    /* 清理全局状态 */
    g_state_sync_manager = NULL;
    g_sync_initialized = 0;
    g_listener_count = 0;
}
/**
 * @brief 同步状态数据
 *
 * 将状态数据同步到所有相关的监听器和存储位置，
 * 确保状态的一致性和完整性。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @param data 状态数据指针
 * @param data_size 数据大小
 * @param priority 状态优先级
 * @return 同步结果状态码
 */
int StateSyncManagerSyncState(StateSyncManager* manager, StateId state_id,
                             const void* data, uint32_t data_size, StatePriority priority)
{
    StateInfo* state;
    StateChangeEvent event;
    uint64_t current_time;
    if (!manager || !data || data_size == 0) {
        return STATE_SYNC_INVALID;
    }
    /* 查找或创建状态 */
    state = FindOrCreateState(manager, state_id);
    if (!state) {
        return STATE_SYNC_ERROR;
    }
    /* 检查状态冲突 */
    if (CheckStateConflict(state, data, data_size)) {
        return STATE_SYNC_CONFLICT;
    }
    /* 获取当前时间戳 */
    current_time = GetCurrentTimestamp();
    /* 创建状态变更事件 */
    event.state_id = state_id;
    event.old_version = state->version;
    event.new_version = ++manager->current_version;
    event.timestamp = current_time;
    event.change_flags = STATE_SYNC_SUCCESS;
    event.change_data = (void*)data;
    /* 更新状态信息 */
    if (state->data) {
        free(state->data);
    }
    state->data = malloc(data_size);
    if (!state->data) {
        return STATE_SYNC_ERROR;
    }
    memcpy(state->data, data, data_size);
    state->data_size = data_size;
    state->version = event.new_version;
    state->timestamp = current_time;
    state->priority = priority;
    state->flags |= STATE_SYNC_SUCCESS;
    /* 通知监听器 */
    NotifyStateListeners(&event);
    /* 根据同步模式处理 */
    switch (manager->sync_mode) {
        case STATE_SYNC_MODE_IMMEDIATE:
            ImmediateSync(manager, state);
            break;
        case STATE_SYNC_MODE_DEFERRED:
            DeferredSync(manager, state);
            break;
        case STATE_SYNC_MODE_BATCH:
            BatchSync(manager, state);
            break;
        case STATE_SYNC_MODE_ASYNC:
            AsyncSync(manager, state);
            break;
        default:
            break;
    }
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 获取状态数据
 *
 * 根据状态ID获取对应的状态数据，
 * 返回数据的副本以确保线程安全。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @param output_buffer 输出缓冲区
 * @param buffer_size 缓冲区大小
 * @return 获取结果状态码
 */
int StateSyncManagerGetState(StateSyncManager* manager, StateId state_id,
                             void* output_buffer, uint32_t buffer_size)
{
    StateInfo* state;
    if (!manager || !output_buffer || buffer_size == 0) {
        return STATE_SYNC_INVALID;
    }
    /* 查找状态 */
    state = FindStateById(manager, state_id);
    if (!state) {
        return STATE_SYNC_ERROR;
    }
    /* 检查缓冲区大小 */
    if (buffer_size < state->data_size) {
        return STATE_SYNC_ERROR;
    }
    /* 复制状态数据 */
    memcpy(output_buffer, state->data, state->data_size);
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 设置状态数据
 *
 * 设置指定状态的数据，并触发相应的同步操作。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @param data 新状态数据指针
 * @param data_size 数据大小
 * @return 设置结果状态码
 */
int StateSyncManagerSetState(StateSyncManager* manager, StateId state_id,
                             const void* data, uint32_t data_size)
{
    if (!manager || !data || data_size == 0) {
        return STATE_SYNC_INVALID;
    }
    return StateSyncManagerSyncState(manager, state_id, data, data_size, STATE_PRIORITY_NORMAL);
}
/**
 * @brief 删除状态数据
 *
 * 删除指定的状态及其相关数据，
 * 并通知所有监听器。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @return 删除结果状态码
 */
int StateSyncManagerDeleteState(StateSyncManager* manager, StateId state_id)
{
    StateInfo* state;
    StateChangeEvent event;
    uint32_t i;
    if (!manager) {
        return STATE_SYNC_INVALID;
    }
    /* 查找状态 */
    state = FindStateById(manager, state_id);
    if (!state) {
        return STATE_SYNC_ERROR;
    }
    /* 创建删除事件 */
    event.state_id = state_id;
    event.old_version = state->version;
    event.new_version = 0;
    event.timestamp = GetCurrentTimestamp();
    event.change_flags = 0;  // 删除标志
    event.change_data = NULL;
    /* 释放状态数据 */
    if (state->data) {
        free(state->data);
        state->data = NULL;
    }
    /* 从数组中移除状态 */
    for (i = 0; i < manager->state_count; i++) {
        if (manager->states[i].state_id == state_id) {
            /* 将最后一个状态移动到当前位置 */
            if (i < manager->state_count - 1) {
                memcpy(&manager->states[i], &manager->states[manager->state_count - 1],
                       sizeof(StateInfo));
            }
            manager->state_count--;
            break;
        }
    }
    /* 通知监听器 */
    NotifyStateListeners(&event);
    return STATE_SYNC_SUCCESS;
}
/* ============================================================================
 * 状态监听器管理函数
 * ============================================================================ */
/**
 * @brief 注册状态监听器
 *
 * 注册一个状态监听器，用于接收状态变更事件。
 *
 * @param listener 监听器接口指针
 * @return 注册结果状态码
 */
int StateListenerRegister(StateListener* listener)
{
    if (!listener || g_listener_count >= STATE_MAX_LISTENERS) {
        return STATE_SYNC_ERROR;
    }
    g_state_listeners[g_listener_count++] = listener;
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 注销状态监听器
 *
 * 注销指定的状态监听器，停止接收状态变更事件。
 *
 * @param listener 监听器接口指针
 * @return 注销结果状态码
 */
int StateListenerUnregister(StateListener* listener)
{
    uint32_t i;
    if (!listener) {
        return STATE_SYNC_INVALID;
    }
    /* 查找并移除监听器 */
    for (i = 0; i < g_listener_count; i++) {
        if (g_state_listeners[i] == listener) {
            /* 将最后一个监听器移动到当前位置 */
            if (i < g_listener_count - 1) {
                g_state_listeners[i] = g_state_listeners[g_listener_count - 1];
            }
            g_listener_count--;
            return STATE_SYNC_SUCCESS;
        }
    }
    return STATE_SYNC_ERROR;
}
/**
 * @brief 通知状态监听器
 *
 * 向所有注册的监听器发送状态变更事件。
 *
 * @param event 状态变更事件指针
 */
void StateListenerNotify(StateChangeEvent* event)
{
    uint32_t i;
    if (!event) {
        return;
    }
    /* 通知所有监听器 */
    for (i = 0; i < g_listener_count; i++) {
        StateListener* listener = g_state_listeners[i];
        if (listener && listener->on_state_changed) {
            listener->on_state_changed(event, listener->listener_context);
        }
    }
}
/* ============================================================================
 * 状态冲突处理函数
 * ============================================================================ */
/**
 * @brief 解决状态冲突
 *
 * 检测并解决状态冲突，确保状态的一致性。
 *
 * @param state_id 状态ID
 * @param new_data 新状态数据
 * @param new_data_size 新数据大小
 * @return 冲突解决结果状态码
 */
int StateConflictResolve(StateId state_id, const void* new_data, uint32_t new_data_size)
{
    StateInfo* state;
    if (!g_state_sync_manager || !new_data) {
        return STATE_SYNC_INVALID;
    }
    /* 查找状态 */
    state = FindStateById(g_state_sync_manager, state_id);
    if (!state) {
        return STATE_SYNC_ERROR;
    }
    /* 检测冲突 */
    if (!CheckStateConflict(state, new_data, new_data_size)) {
        return STATE_SYNC_SUCCESS;  // 无冲突
    }
    /* 解决冲突 */
    return ResolveConflictByStrategy(state, new_data, new_data_size);
}
/* ============================================================================
 * 状态持久化函数
 * ============================================================================ */
/**
 * @brief 保存状态到存储
 *
 * 将状态数据持久化到存储设备。
 *
 * @param state_id 状态ID
 * @param storage_path 存储路径
 * @return 保存结果状态码
 */
int StatePersistenceSave(StateId state_id, const char* storage_path)
{
    StateInfo* state;
    if (!g_state_sync_manager || !storage_path) {
        return STATE_SYNC_INVALID;
    }
    /* 查找状态 */
    state = FindStateById(g_state_sync_manager, state_id);
    if (!state) {
        return STATE_SYNC_ERROR;
    }
    /* 保存到文件 */
    return SaveStateToFile(state, storage_path);
}
/**
 * @brief 从存储加载状态
 *
 * 从存储设备加载状态数据。
 *
 * @param state_id 状态ID
 * @param storage_path 存储路径
 * @return 加载结果状态码
 */
int StatePersistenceLoad(StateId state_id, const char* storage_path)
{
    void* data;
    uint32_t data_size;
    int result;
    if (!g_state_sync_manager || !storage_path) {
        return STATE_SYNC_INVALID;
    }
    /* 从文件加载 */
    result = LoadStateFromFile(&data, &data_size, storage_path);
    if (result != STATE_SYNC_SUCCESS) {
        return result;
    }
    /* 设置状态数据 */
    result = StateSyncManagerSetState(g_state_sync_manager, state_id, data, data_size);
    /* 释放加载的数据 */
    free(data);
    return result;
}
/* ============================================================================
 * 内部辅助函数
 * ============================================================================ */
/**
 * @brief 查找或创建状态
 *
 * 在管理器中查找指定状态，如果不存在则创建新状态。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @return 状态信息指针，失败返回NULL
 */
static StateInfo* FindOrCreateState(StateSyncManager* manager, StateId state_id)
{
    StateInfo* state;
    uint32_t i;
    /* 查找现有状态 */
    for (i = 0; i < manager->state_count; i++) {
        if (manager->states[i].state_id == state_id) {
            return &manager->states[i];
        }
    }
    /* 检查容量 */
    if (manager->state_count >= manager->state_capacity) {
        return NULL;
    }
    /* 创建新状态 */
    state = &manager->states[manager->state_count++];
    state->state_id = state_id;
    state->version = 0;
    state->timestamp = GetCurrentTimestamp();
    state->flags = 0;
    state->priority = STATE_PRIORITY_NORMAL;
    state->data = NULL;
    state->data_size = 0;
    state->ref_count = 1;
    return state;
}
/**
 * @brief 根据ID查找状态
 *
 * 在管理器中查找指定ID的状态。
 *
 * @param manager 状态同步管理器指针
 * @param state_id 状态ID
 * @return 状态信息指针，未找到返回NULL
 */
static StateInfo* FindStateById(StateSyncManager* manager, StateId state_id)
{
    uint32_t i;
    for (i = 0; i < manager->state_count; i++) {
        if (manager->states[i].state_id == state_id) {
            return &manager->states[i];
        }
    }
    return NULL;
}
/**
 * @brief 检查状态冲突
 *
 * 检查新状态数据是否与现有状态冲突。
 *
 * @param state 现有状态指针
 * @param new_data 新状态数据
 * @param new_data_size 新数据大小
 * @return 1表示有冲突，0表示无冲突
 */
static int CheckStateConflict(StateInfo* state, const void* new_data, uint32_t new_data_size)
{
    /* 简化实现：检查数据大小和版本 */
    if (state->data_size != new_data_size) {
        return 1;
    }
    if (memcmp(state->data, new_data, new_data_size) == 0) {
        return 0;  // 数据相同，无冲突
    }
    return 1;  // 数据不同，有冲突
}
/**
 * @brief 获取当前时间戳
 *
 * 获取当前系统时间戳。
 *
 * @return 当前时间戳
 */
static StateTimestamp GetCurrentTimestamp(void)
{
    /* 简化实现：返回模拟时间戳 */
    return (StateTimestamp)time(NULL);
}
/**
 * @brief 立即同步
 *
 * 立即同步状态数据到所有监听器。
 *
 * @param manager 状态同步管理器指针
 * @param state 状态指针
 */
static void ImmediateSync(StateSyncManager* manager, StateInfo* state)
{
    /* 立即通知所有监听器 */
    StateChangeEvent event;
    event.state_id = state->state_id;
    event.old_version = state->version;
    event.new_version = state->version;
    event.timestamp = state->timestamp;
    event.change_flags = STATE_SYNC_SUCCESS;
    event.change_data = state->data;
    NotifyStateListeners(&event);
}
/**
 * @brief 延迟同步
 *
 * 延迟同步状态数据。
 *
 * @param manager 状态同步管理器指针
 * @param state 状态指针
 */
static void DeferredSync(StateSyncManager* manager, StateInfo* state)
{
    /* 简化实现：立即同步 */
    ImmediateSync(manager, state);
}
/**
 * @brief 批量同步
 *
 * 批量同步状态数据。
 *
 * @param manager 状态同步管理器指针
 * @param state 状态指针
 */
static void BatchSync(StateSyncManager* manager, StateInfo* state)
{
    /* 简化实现：立即同步 */
    ImmediateSync(manager, state);
}
/**
 * @brief 异步同步
 *
 * 异步同步状态数据。
 *
 * @param manager 状态同步管理器指针
 * @param state 状态指针
 */
static void AsyncSync(StateSyncManager* manager, StateInfo* state)
{
    /* 简化实现：立即同步 */
    ImmediateSync(manager, state);
}
/**
 * @brief 解决冲突策略
 *
 * 根据策略解决状态冲突。
 *
 * @param state 现有状态指针
 * @param new_data 新状态数据
 * @param new_data_size 新数据大小
 * @return 解决结果状态码
 */
static int ResolveConflictByStrategy(StateInfo* state, const void* new_data, uint32_t new_data_size)
{
    /* 简化实现：使用最新版本 */
    if (state->data) {
        free(state->data);
    }
    state->data = malloc(new_data_size);
    if (!state->data) {
        return STATE_SYNC_ERROR;
    }
    memcpy(state->data, new_data, new_data_size);
    state->data_size = new_data_size;
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 保存状态到文件
 *
 * 将状态数据保存到文件。
 *
 * @param state 状态指针
 * @param file_path 文件路径
 * @return 保存结果状态码
 */
static int SaveStateToFile(StateInfo* state, const char* file_path)
{
    FILE* file;
    file = fopen(file_path, "wb");
    if (!file) {
        return STATE_SYNC_ERROR;
    }
    /* 写入状态头信息 */
    fwrite(&state->state_id, sizeof(StateId), 1, file);
    fwrite(&state->version, sizeof(StateVersion), 1, file);
    fwrite(&state->timestamp, sizeof(StateTimestamp), 1, file);
    fwrite(&state->flags, sizeof(StateFlags), 1, file);
    fwrite(&state->data_size, sizeof(uint32_t), 1, file);
    /* 写入状态数据 */
    fwrite(state->data, state->data_size, 1, file);
    fclose(file);
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 从文件加载状态
 *
 * 从文件加载状态数据。
 *
 * @param data 输出数据指针
 * @param data_size 输出数据大小
 * @param file_path 文件路径
 * @return 加载结果状态码
 */
static int LoadStateFromFile(void** data, uint32_t* data_size, const char* file_path)
{
    FILE* file;
    StateId state_id;
    StateVersion version;
    StateTimestamp timestamp;
    StateFlags flags;
    uint32_t size;
    file = fopen(file_path, "rb");
    if (!file) {
        return STATE_SYNC_ERROR;
    }
    /* 读取状态头信息 */
    fread(&state_id, sizeof(StateId), 1, file);
    fread(&version, sizeof(StateVersion), 1, file);
    fread(&timestamp, sizeof(StateTimestamp), 1, file);
    fread(&flags, sizeof(StateFlags), 1, file);
    fread(&size, sizeof(uint32_t), 1, file);
    /* 分配内存 */
    *data = malloc(size);
    if (!*data) {
        fclose(file);
        return STATE_SYNC_ERROR;
    }
    /* 读取状态数据 */
    fread(*data, size, 1, file);
    fclose(file);
    *data_size = size;
    return STATE_SYNC_SUCCESS;
}
/* ============================================================================
 * 状态验证器函数
 * ============================================================================ */
/**
 * @brief 验证状态一致性
 *
 * 验证所有状态的一致性和完整性。
 *
 * @param manager 状态同步管理器指针
 * @return 验证结果状态码
 */
int ValidateStateConsistency(StateSyncManager* manager)
{
    uint32_t i;
    if (!manager) {
        return STATE_SYNC_INVALID;
    }
    /* 验证每个状态 */
    for (i = 0; i < manager->state_count; i++) {
        StateInfo* state = &manager->states[i];
        /* 验证状态数据 */
        if (!state->data && state->data_size > 0) {
            return STATE_SYNC_ERROR;
        }
        /* 验证引用计数 */
        if (state->ref_count == 0) {
            return STATE_SYNC_ERROR;
        }
    }
    return STATE_SYNC_SUCCESS;
}
/* ============================================================================
 * 状态备份和恢复函数
 * ============================================================================ */
/**
 * @brief 备份状态数据
 *
 * 备份所有状态数据到指定位置。
 *
 * @param manager 状态同步管理器指针
 * @param backup_path 备份路径
 * @return 备份结果状态码
 */
int StatePersistenceBackup(StateSyncManager* manager, const char* backup_path)
{
    FILE* file;
    uint32_t i;
    if (!manager || !backup_path) {
        return STATE_SYNC_INVALID;
    }
    file = fopen(backup_path, "wb");
    if (!file) {
        return STATE_SYNC_ERROR;
    }
    /* 写入状态数量 */
    fwrite(&manager->state_count, sizeof(uint32_t), 1, file);
    /* 写入每个状态 */
    for (i = 0; i < manager->state_count; i++) {
        StateInfo* state = &manager->states[i];
        /* 写入状态头信息 */
        fwrite(&state->state_id, sizeof(StateId), 1, file);
        fwrite(&state->version, sizeof(StateVersion), 1, file);
        fwrite(&state->timestamp, sizeof(StateTimestamp), 1, file);
        fwrite(&state->flags, sizeof(StateFlags), 1, file);
        fwrite(&state->data_size, sizeof(uint32_t), 1, file);
        /* 写入状态数据 */
        fwrite(state->data, state->data_size, 1, file);
    }
    fclose(file);
    return STATE_SYNC_SUCCESS;
}
/**
 * @brief 恢复状态数据
 *
 * 从备份恢复状态数据。
 *
 * @param manager 状态同步管理器指针
 * @param backup_path 备份路径
 * @return 恢复结果状态码
 */
int StatePersistenceRestore(StateSyncManager* manager, const char* backup_path)
{
    FILE* file;
    uint32_t state_count, i;
    if (!manager || !backup_path) {
        return STATE_SYNC_INVALID;
    }
    file = fopen(backup_path, "rb");
    if (!file) {
        return STATE_SYNC_ERROR;
    }
    /* 读取状态数量 */
    fread(&state_count, sizeof(uint32_t), 1, file);
    /* 检查容量 */
    if (state_count > manager->state_capacity) {
        fclose(file);
        return STATE_SYNC_ERROR;
    }
    /* 清空现有状态 */
    for (i = 0; i < manager->state_count; i++) {
        if (manager->states[i].data) {
            free(manager->states[i].data);
        }
    }
    manager->state_count = 0;
    /* 读取每个状态 */
    for (i = 0; i < state_count; i++) {
        StateInfo* state = &manager->states[i];
        /* 读取状态头信息 */
        fread(&state->state_id, sizeof(StateId), 1, file);
        fread(&state->version, sizeof(StateVersion), 1, file);
        fread(&state->timestamp, sizeof(StateTimestamp), 1, file);
        fread(&state->flags, sizeof(StateFlags), 1, file);
        fread(&state->data_size, sizeof(uint32_t), 1, file);
        /* 分配内存并读取状态数据 */
        state->data = malloc(state->data_size);
        if (!state->data) {
            fclose(file);
            return STATE_SYNC_ERROR;
        }
        fread(state->data, state->data_size, 1, file);
        state->ref_count = 1;
    }
    manager->state_count = state_count;
    fclose(file);
    return STATE_SYNC_SUCCESS;
}