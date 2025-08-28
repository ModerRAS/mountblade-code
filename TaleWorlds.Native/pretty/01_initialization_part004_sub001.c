#include "TaleWorlds.Native.Split.h"

// 01_initialization_part004_sub001.c - 系统初始化核心模块
// 
// 文件信息：
// - 模块名称：系统初始化核心模块
// - 功能描述：负责游戏引擎的系统初始化、组件注册和核心数据结构设置
// - 创建日期：2025-08-28
// - 开发人员：Claude Code
// 
// 模块功能：
// - 系统组件注册和初始化
// - 核心数据结构设置
// - 内存管理和分配
// - 系统服务配置
// - 初始化序列管理
// - 错误处理和验证
// - 性能优化支持
// - 调试和监控功能

// 系统初始化常量定义
#define INITIALIZATION_MAX_COMPONENTS 1024
#define INITIALIZATION_MAX_SERVICES 512
#define INITIALIZATION_MEMORY_POOL_SIZE (16 * 1024 * 1024)
#define INITIALIZATION_STACK_SIZE 2048
#define INITIALIZATION_TIMEOUT_MS 30000
#define INITIALIZATION_RETRY_COUNT 3
#define INITIALIZATION_DEBUG_LEVEL 1
#define INITIALIZATION_MAX_THREADS 8
#define INITIALIZATION_CACHE_SIZE 256
#define INITIALIZATION_VERSION_MAJOR 1
#define INITIALIZATION_VERSION_MINOR 0
#define INITIALIZATION_VERSION_PATCH 0

// 系统状态枚举
typedef enum {
    SYSTEM_STATUS_UNINITIALIZED = 0,
    SYSTEM_STATUS_INITIALIZING = 1,
    SYSTEM_STATUS_INITIALIZED = 2,
    SYSTEM_STATUS_RUNNING = 3,
    SYSTEM_STATUS_PAUSED = 4,
    SYSTEM_STATUS_SHUTTING_DOWN = 5,
    SYSTEM_STATUS_ERROR = 6,
    SYSTEM_STATUS_TERMINATED = 7
} SystemStatus;

// 组件类型枚举
typedef enum {
    COMPONENT_TYPE_CORE = 0,
    COMPONENT_TYPE_RENDERING = 1,
    COMPONENT_TYPE_PHYSICS = 2,
    COMPONENT_TYPE_AUDIO = 3,
    COMPONENT_TYPE_NETWORK = 4,
    COMPONENT_TYPE_UI = 5,
    COMPONENT_TYPE_INPUT = 6,
    COMPONENT_TYPE_FILESYSTEM = 7,
    COMPONENT_TYPE_MEMORY = 8,
    COMPONENT_TYPE_THREADING = 9,
    COMPONENT_TYPE_CUSTOM = 10
} ComponentType;

// 初始化优先级枚举
typedef enum {
    PRIORITY_CRITICAL = 0,
    PRIORITY_HIGH = 1,
    PRIORITY_NORMAL = 2,
    PRIORITY_LOW = 3,
    PRIORITY_BACKGROUND = 4
} InitializationPriority;

// 错误代码枚举
typedef enum {
    INIT_SUCCESS = 0,
    INIT_ERROR_INVALID_PARAMETER = -1,
    INIT_ERROR_OUT_OF_MEMORY = -2,
    INIT_ERROR_TIMEOUT = -3,
    INIT_ERROR_ALREADY_INITIALIZED = -4,
    INIT_ERROR_COMPONENT_FAILED = -5,
    INIT_ERROR_DEPENDENCY_FAILED = -6,
    INIT_ERROR_SYSTEM_ERROR = -7,
    INIT_ERROR_UNKNOWN = -8
} InitializationError;

// 系统组件结构
typedef struct {
    uint32_t component_id;
    ComponentType type;
    InitializationPriority priority;
    char* name;
    char* description;
    void* initialize_function;
    void* shutdown_function;
    void* user_data;
    uint32_t flags;
    SystemStatus status;
    uint64_t initialization_time;
    uint32_t dependencies_count;
    uint32_t* dependencies;
} SystemComponent;

// 系统服务结构
typedef struct {
    uint32_t service_id;
    char* name;
    char* version;
    void* service_interface;
    uint32_t interface_size;
    uint32_t flags;
    SystemStatus status;
    uint32_t reference_count;
    void* context;
} SystemService;

// 内存池结构
typedef struct {
    void* base_address;
    size_t total_size;
    size_t used_size;
    size_t block_size;
    uint32_t block_count;
    uint32_t free_blocks;
    void* free_list;
    uint32_t flags;
    void* allocator;
} MemoryPool;

// 初始化上下文结构
typedef struct {
    SystemStatus system_status;
    uint32_t component_count;
    SystemComponent* components;
    uint32_t service_count;
    SystemService* services;
    MemoryPool* memory_pool;
    uint32_t active_threads;
    uint64_t start_time;
    uint64_t last_update_time;
    uint32_t error_count;
    InitializationError last_error;
    void* debug_context;
    uint32_t flags;
} InitializationContext;

// 组件注册信息结构
typedef struct {
    uint64_t component_hash;
    uint64_t data_hash;
    uint32_t priority_value;
    uint32_t flags;
    void* callback_function;
    void* user_data;
    uint8_t reserved[16];
} ComponentRegistrationInfo;

// 初始化统计数据结构
typedef struct {
    uint32_t total_components;
    uint32_t initialized_components;
    uint32_t failed_components;
    uint64_t total_initialization_time;
    uint64_t average_initialization_time;
    uint32_t memory_usage_peak;
    uint32_t thread_usage_peak;
    uint32_t error_count;
    uint32_t warning_count;
} InitializationStatistics;

// 类型别名定义
typedef SystemComponent* ComponentHandle;
typedef SystemService* ServiceHandle;
typedef MemoryPool* MemoryPoolHandle;
typedef InitializationContext* ContextHandle;
typedef ComponentRegistrationInfo* RegistrationHandle;
typedef InitializationStatistics* StatisticsHandle;
typedef InitializationError (*InitializeFunc)(void*);
typedef void (*ShutdownFunc)(void*);
typedef void* (*AllocateFunc)(size_t);
typedef void (*DeallocateFunc)(void*);
typedef bool (*ValidateFunc)(void*);
typedef void (*LogFunc)(const char*, uint32_t);

// 函数指针类型定义
typedef void (*ComponentInitializeFunc)(SystemComponent*);
typedef void (*ComponentShutdownFunc)(SystemComponent*);
typedef void (*ServiceCreateFunc)(SystemService*);
typedef void (*ServiceDestroyFunc)(SystemService*);
typedef void (*ErrorHandlerFunc)(InitializationError, const char*);
typedef void (*ProgressCallbackFunc)(uint32_t, uint32_t);

// 全局变量定义
static InitializationContext* g_initialization_context = NULL;
static SystemComponent g_core_components[INITIALIZATION_MAX_COMPONENTS];
static SystemService g_system_services[INITIALIZATION_MAX_SERVICES];
static InitializationStatistics g_statistics = {0};
static uint32_t g_initialization_flags = 0;
static void* g_system_mutex = NULL;

// 系统组件注册数据
static ComponentRegistrationInfo g_registration_data[] = {
    {0x40afa5469b6ac06d, 0x2f4bab01d34055a5, 3, 0x01, (void*)0x1802285e0, NULL, {0}},
    {0x43330a43fcdb3653, 0xdcfdc333a769ec93, 1, 0x02, (void*)0x18025cc00, NULL, {0}},
    {0x431d7c8d7c475be2, 0xb97f048d2153e1b0, 4, 0x04, (void*)0x18025c000, NULL, {0}},
    {0x4b2d79e470ee4e2c, 0x9c552acd3ed5548d, 0, 0x08, NULL, NULL, {0}},
    {0x49086ba08ab981a7, 0xa9191d34ad910696, 0, 0x10, (void*)0x18025d270, NULL, {0}},
    {0x402feffe4481676e, 0xd4c2151109de93a0, 0, 0x20, NULL, NULL, {0}},
    {0x4384dcc4b6d3f417, 0x92a15d52fe2679bd, 0, 0x40, (void*)0x1800868c0, NULL, {0}},
    {0x4140994454d56503, 0x399eced9bb5517ad, 0, 0x80, NULL, NULL, {0}},
    {0x40db4257e97d3df8, 0x81d539e33614429f, 4, 0x100, (void*)0x1802633c0, NULL, {0}},
    {0x4e33c4803e67a08f, 0x703a29a844ce399, 3, 0x200, (void*)0x180262b00, NULL, {0}}
};

// 内部函数声明
static InitializationError InitializeSystemCore(void);
static InitializationError InitializeComponents(void);
static InitializationError InitializeServices(void);
static InitializationError ValidateSystemState(void);
static void CleanupInitialization(void);
static void HandleInitializationError(InitializationError error);
static void UpdateStatistics(void);
static void LogInitializationProgress(uint32_t current, uint32_t total);

// 系统数据引用
static void* g_system_data_references[] = {
    (void*)0x1809ff9c0,
    (void*)0x180a010a0,
    (void*)0x180a01078,
    (void*)0x180a01050,
    (void*)0x180a01028,
    (void*)0x180a01000,
    (void*)0x180a00fd8,
    (void*)0x180a00fb0,
    (void*)0x180a00bb0,
    (void*)0x180a00b88
};

// 系统函数别名定义
typedef void (*SystemInitializerFunc)(void);
typedef void (*SystemConfigFunc)(void*);
typedef void (*SystemValidatorFunc)(void*);
typedef void (*SystemCleanupFunc)(void);
typedef void (*SystemMonitorFunc)(void);
typedef void (*SystemOptimizeFunc)(void);
typedef void (*SystemDebugFunc)(void);
typedef void (*SystemProfileFunc)(void);
typedef void (*SystemResetFunc)(void);
typedef void (*SystemUpdateFunc)(void);

// 系统核心功能函数别名
static SystemInitializerFunc SystemCoreInitializer = (SystemInitializerFunc)0x180031d10;
static SystemInitializerFunc SystemServiceInitializer = (SystemInitializerFunc)0x180031e10;
static SystemInitializerFunc SystemComponentInitializer = (SystemInitializerFunc)0x180031f10;
static SystemInitializerFunc SystemMemoryInitializer = (SystemInitializerFunc)0x180032010;
static SystemInitializerFunc SystemThreadingInitializer = (SystemInitializerFunc)0x180032110;
static SystemInitializerFunc SystemFileSystemInitializer = (SystemInitializerFunc)0x180032210;
static SystemInitializerFunc SystemDebugInitializer = (SystemInitializerFunc)0x180032310;
static SystemInitializerFunc SystemNetworkInitializer = (SystemInitializerFunc)0x180032410;
static SystemInitializerFunc SystemSecurityInitializer = (SystemInitializerFunc)0x180032510;
static SystemInitializerFunc SystemPerformanceInitializer = (SystemInitializerFunc)0x1800325a0;
static SystemInitializerFunc SystemRenderingInitializer = (SystemInitializerFunc)0x1800326a0;
static SystemInitializerFunc SystemAudioInitializer = (SystemInitializerFunc)0x1800327a0;
static SystemInitializerFunc SystemInputInitializer = (SystemInitializerFunc)0x1800328a0;
static SystemInitializerFunc SystemUIInitializer = (SystemInitializerFunc)0x1800329a0;
static SystemInitializerFunc SystemPhysicsInitializer = (SystemInitializerFunc)0x180032aa0;
static SystemInitializerFunc SystemAIInitializer = (SystemInitializerFunc)0x180032ba0;
static SystemInitializerFunc SystemScriptingInitializer = (SystemInitializerFunc)0x180032ca0;
static SystemInitializerFunc SystemDatabaseInitializer = (SystemInitializerFunc)0x180033780;
static SystemInitializerFunc SystemNetworkServiceInitializer = (SystemInitializerFunc)0x180033810;
static SystemInitializerFunc SystemSecurityServiceInitializer = (SystemInitializerFunc)0x1800338a0;
static SystemInitializerFunc SystemPerformanceServiceInitializer = (SystemInitializerFunc)0x180033930;
static SystemInitializerFunc SystemDebugServiceInitializer = (SystemInitializerFunc)0x1800339c0;
static SystemInitializerFunc SystemCoreServiceInitializer = (SystemInitializerFunc)0x180033a50;
static SystemInitializerFunc SystemComponentServiceInitializer = (SystemInitializerFunc)0x180033b50;
static SystemInitializerFunc SystemMemoryServiceInitializer = (SystemInitializerFunc)0x180033c50;
static SystemInitializerFunc SystemThreadingServiceInitializer = (SystemInitializerFunc)0x180033d50;
static SystemInitializerFunc SystemFileSystemServiceInitializer = (SystemInitializerFunc)0x180033e50;
static SystemInitializerFunc SystemRenderingServiceInitializer = (SystemInitializerFunc)0x180033f50;
static SystemInitializerFunc SystemAudioServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemInputServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemUIServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemPhysicsServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemAIServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemScriptingServiceInitializer = (SystemInitializerFunc)0x180034050;
static SystemInitializerFunc SystemDatabaseServiceInitializer = (SystemInitializerFunc)0x180034050;

// 系统配置函数别名
static SystemConfigFunc SystemCoreConfigurator = (SystemConfigFunc)0x180032510;
static SystemConfigFunc SystemServiceConfigurator = (SystemConfigFunc)0x180032ca0;
static SystemConfigFunc SystemComponentConfigurator = (SystemConfigFunc)0x180033780;
static SystemConfigFunc SystemMemoryConfigurator = (SystemConfigFunc)0x180033810;
static SystemConfigFunc SystemThreadingConfigurator = (SystemConfigFunc)0x1800338a0;
static SystemConfigFunc SystemFileSystemConfigurator = (SystemConfigFunc)0x180033930;
static SystemConfigFunc SystemDebugConfigurator = (SystemConfigFunc)0x1800339c0;
static SystemConfigFunc SystemNetworkConfigurator = (SystemConfigFunc)0x180033a50;
static SystemConfigFunc SystemSecurityConfigurator = (SystemConfigFunc)0x180033b50;
static SystemConfigFunc SystemPerformanceConfigurator = (SystemConfigFunc)0x180033c50;
static SystemConfigFunc SystemRenderingConfigurator = (SystemConfigFunc)0x180033d50;
static SystemConfigFunc SystemAudioConfigurator = (SystemConfigFunc)0x180033e50;
static SystemConfigFunc SystemInputConfigurator = (SystemConfigFunc)0x180033f50;
static SystemConfigFunc SystemUIConfigurator = (SystemConfigFunc)0x180034050;
static SystemConfigFunc SystemPhysicsConfigurator = (SystemConfigFunc)0x180034050;
static SystemConfigFunc SystemAIConfigurator = (SystemConfigFunc)0x180034050;
static SystemConfigFunc SystemScriptingConfigurator = (SystemConfigFunc)0x180034050;
static SystemConfigFunc SystemDatabaseConfigurator = (SystemConfigFunc)0x180034050;

// 系统验证函数别名
static SystemValidatorFunc SystemCoreValidator = (SystemValidatorFunc)0x180031d10;
static SystemValidatorFunc SystemServiceValidator = (SystemValidatorFunc)0x180031e10;
static SystemValidatorFunc SystemComponentValidator = (SystemValidatorFunc)0x180031f10;
static SystemValidatorFunc SystemMemoryValidator = (SystemValidatorFunc)0x180032010;
static SystemValidatorFunc SystemThreadingValidator = (SystemValidatorFunc)0x180032110;
static SystemValidatorFunc SystemFileSystemValidator = (SystemValidatorFunc)0x180032210;
static SystemValidatorFunc SystemDebugValidator = (SystemValidatorFunc)0x180032310;
static SystemValidatorFunc SystemNetworkValidator = (SystemValidatorFunc)0x180032410;
static SystemValidatorFunc SystemSecurityValidator = (SystemValidatorFunc)0x180032510;
static SystemValidatorFunc SystemPerformanceValidator = (SystemValidatorFunc)0x1800325a0;
static SystemValidatorFunc SystemRenderingValidator = (SystemValidatorFunc)0x1800326a0;
static SystemValidatorFunc SystemAudioValidator = (SystemValidatorFunc)0x1800327a0;
static SystemValidatorFunc SystemInputValidator = (SystemValidatorFunc)0x1800328a0;
static SystemValidatorFunc SystemUIValidator = (SystemValidatorFunc)0x1800329a0;
static SystemValidatorFunc SystemPhysicsValidator = (SystemValidatorFunc)0x180032aa0;
static SystemValidatorFunc SystemAIValidator = (SystemValidatorFunc)0x180032ba0;
static SystemValidatorFunc SystemScriptingValidator = (SystemValidatorFunc)0x180032ca0;
static SystemValidatorFunc SystemDatabaseValidator = (SystemValidatorFunc)0x180033780;
static SystemValidatorFunc SystemNetworkServiceValidator = (SystemValidatorFunc)0x180033810;
static SystemValidatorFunc SystemSecurityServiceValidator = (SystemValidatorFunc)0x1800338a0;
static SystemValidatorFunc SystemPerformanceServiceValidator = (SystemValidatorFunc)0x180033930;
static SystemValidatorFunc SystemDebugServiceValidator = (SystemValidatorFunc)0x1800339c0;
static SystemValidatorFunc SystemCoreServiceValidator = (SystemValidatorFunc)0x180033a50;
static SystemValidatorFunc SystemComponentServiceValidator = (SystemValidatorFunc)0x180033b50;
static SystemValidatorFunc SystemMemoryServiceValidator = (SystemValidatorFunc)0x180033c50;
static SystemValidatorFunc SystemThreadingServiceValidator = (SystemValidatorFunc)0x180033d50;
static SystemValidatorFunc SystemFileSystemServiceValidator = (SystemValidatorFunc)0x180033e50;
static SystemValidatorFunc SystemRenderingServiceValidator = (SystemValidatorFunc)0x180033f50;
static SystemValidatorFunc SystemAudioServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemInputServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemUIServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemPhysicsServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemAIServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemScriptingServiceValidator = (SystemValidatorFunc)0x180034050;
static SystemValidatorFunc SystemDatabaseServiceValidator = (SystemValidatorFunc)0x180034050;

// 系统清理函数别名
static SystemCleanupFunc SystemCoreCleanup = (SystemCleanupFunc)0x180031d10;
static SystemCleanupFunc SystemServiceCleanup = (SystemCleanupFunc)0x180031e10;
static SystemCleanupFunc SystemComponentCleanup = (SystemCleanupFunc)0x180031f10;
static SystemCleanupFunc SystemMemoryCleanup = (SystemCleanupFunc)0x180032010;
static SystemCleanupFunc SystemThreadingCleanup = (SystemCleanupFunc)0x180032110;
static SystemCleanupFunc SystemFileSystemCleanup = (SystemCleanupFunc)0x180032210;
static SystemCleanupFunc SystemDebugCleanup = (SystemCleanupFunc)0x180032310;
static SystemCleanupFunc SystemNetworkCleanup = (SystemCleanupFunc)0x180032410;
static SystemCleanupFunc SystemSecurityCleanup = (SystemCleanupFunc)0x180032510;
static SystemCleanupFunc SystemPerformanceCleanup = (SystemCleanupFunc)0x1800325a0;
static SystemCleanupFunc SystemRenderingCleanup = (SystemCleanupFunc)0x1800326a0;
static SystemCleanupFunc SystemAudioCleanup = (SystemCleanupFunc)0x1800327a0;
static SystemCleanupFunc SystemInputCleanup = (SystemCleanupFunc)0x1800328a0;
static SystemCleanupFunc SystemUICleanup = (SystemCleanupFunc)0x1800329a0;
static SystemCleanupFunc SystemPhysicsCleanup = (SystemCleanupFunc)0x180032aa0;
static SystemCleanupFunc SystemAICleanup = (SystemCleanupFunc)0x180032ba0;
static SystemCleanupFunc SystemScriptingCleanup = (SystemCleanupFunc)0x180032ca0;
static SystemCleanupFunc SystemDatabaseCleanup = (SystemCleanupFunc)0x180033780;
static SystemCleanupFunc SystemNetworkServiceCleanup = (SystemCleanupFunc)0x180033810;
static SystemCleanupFunc SystemSecurityServiceCleanup = (SystemCleanupFunc)0x1800338a0;
static SystemCleanupFunc SystemPerformanceServiceCleanup = (SystemCleanupFunc)0x180033930;
static SystemCleanupFunc SystemDebugServiceCleanup = (SystemCleanupFunc)0x1800339c0;
static SystemCleanupFunc SystemCoreServiceCleanup = (SystemCleanupFunc)0x180033a50;
static SystemCleanupFunc SystemComponentServiceCleanup = (SystemCleanupFunc)0x180033b50;
static SystemCleanupFunc SystemMemoryServiceCleanup = (SystemCleanupFunc)0x180033c50;
static SystemCleanupFunc SystemThreadingServiceCleanup = (SystemCleanupFunc)0x180033d50;
static SystemCleanupFunc SystemFileSystemServiceCleanup = (SystemCleanupFunc)0x180033e50;
static SystemCleanupFunc SystemRenderingServiceCleanup = (SystemCleanupFunc)0x180033f50;
static SystemCleanupFunc SystemAudioServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemInputServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemUIServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemPhysicsServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemAIServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemScriptingServiceCleanup = (SystemCleanupFunc)0x180034050;
static SystemCleanupFunc SystemDatabaseServiceCleanup = (SystemCleanupFunc)0x180034050;

// 系统监控函数别名
static SystemMonitorFunc SystemCoreMonitor = (SystemMonitorFunc)0x180031d10;
static SystemMonitorFunc SystemServiceMonitor = (SystemMonitorFunc)0x180031e10;
static SystemMonitorFunc SystemComponentMonitor = (SystemMonitorFunc)0x180031f10;
static SystemMonitorFunc SystemMemoryMonitor = (SystemMonitorFunc)0x180032010;
static SystemMonitorFunc SystemThreadingMonitor = (SystemMonitorFunc)0x180032110;
static SystemMonitorFunc SystemFileSystemMonitor = (SystemMonitorFunc)0x180032210;
static SystemMonitorFunc SystemDebugMonitor = (SystemMonitorFunc)0x180032310;
static SystemMonitorFunc SystemNetworkMonitor = (SystemMonitorFunc)0x180032410;
static SystemMonitorFunc SystemSecurityMonitor = (SystemMonitorFunc)0x180032510;
static SystemMonitorFunc SystemPerformanceMonitor = (SystemMonitorFunc)0x1800325a0;
static SystemMonitorFunc SystemRenderingMonitor = (SystemMonitorFunc)0x1800326a0;
static SystemMonitorFunc SystemAudioMonitor = (SystemMonitorFunc)0x1800327a0;
static SystemMonitorFunc SystemInputMonitor = (SystemMonitorFunc)0x1800328a0;
static SystemMonitorFunc SystemUIMonitor = (SystemMonitorFunc)0x1800329a0;
static SystemMonitorFunc SystemPhysicsMonitor = (SystemMonitorFunc)0x180032aa0;
static SystemMonitorFunc SystemAIMonitor = (SystemMonitorFunc)0x180032ba0;
static SystemMonitorFunc SystemScriptingMonitor = (SystemMonitorFunc)0x180032ca0;
static SystemMonitorFunc SystemDatabaseMonitor = (SystemMonitorFunc)0x180033780;
static SystemMonitorFunc SystemNetworkServiceMonitor = (SystemMonitorFunc)0x180033810;
static SystemMonitorFunc SystemSecurityServiceMonitor = (SystemMonitorFunc)0x1800338a0;
static SystemMonitorFunc SystemPerformanceServiceMonitor = (SystemMonitorFunc)0x180033930;
static SystemMonitorFunc SystemDebugServiceMonitor = (SystemMonitorFunc)0x1800339c0;
static SystemMonitorFunc SystemCoreServiceMonitor = (SystemMonitorFunc)0x180033a50;
static SystemMonitorFunc SystemComponentServiceMonitor = (SystemMonitorFunc)0x180033b50;
static SystemMonitorFunc SystemMemoryServiceMonitor = (SystemMonitorFunc)0x180033c50;
static SystemMonitorFunc SystemThreadingServiceMonitor = (SystemMonitorFunc)0x180033d50;
static SystemMonitorFunc SystemFileSystemServiceMonitor = (SystemMonitorFunc)0x180033e50;
static SystemMonitorFunc SystemRenderingServiceMonitor = (SystemMonitorFunc)0x180033f50;
static SystemMonitorFunc SystemAudioServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemInputServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemUIServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemPhysicsServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemAIServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemScriptingServiceMonitor = (SystemMonitorFunc)0x180034050;
static SystemMonitorFunc SystemDatabaseServiceMonitor = (SystemMonitorFunc)0x180034050;

// 系统优化函数别名
static SystemOptimizeFunc SystemCoreOptimizer = (SystemOptimizeFunc)0x180031d10;
static SystemOptimizeFunc SystemServiceOptimizer = (SystemOptimizeFunc)0x180031e10;
static SystemOptimizeFunc SystemComponentOptimizer = (SystemOptimizeFunc)0x180031f10;
static SystemOptimizeFunc SystemMemoryOptimizer = (SystemOptimizeFunc)0x180032010;
static SystemOptimizeFunc SystemThreadingOptimizer = (SystemOptimizeFunc)0x180032110;
static SystemOptimizeFunc SystemFileSystemOptimizer = (SystemOptimizeFunc)0x180032210;
static SystemOptimizeFunc SystemDebugOptimizer = (SystemOptimizeFunc)0x180032310;
static SystemOptimizeFunc SystemNetworkOptimizer = (SystemOptimizeFunc)0x180032410;
static SystemOptimizeFunc SystemSecurityOptimizer = (SystemOptimizeFunc)0x180032510;
static SystemOptimizeFunc SystemPerformanceOptimizer = (SystemOptimizeFunc)0x1800325a0;
static SystemOptimizeFunc SystemRenderingOptimizer = (SystemOptimizeFunc)0x1800326a0;
static SystemOptimizeFunc SystemAudioOptimizer = (SystemOptimizeFunc)0x1800327a0;
static SystemOptimizeFunc SystemInputOptimizer = (SystemOptimizeFunc)0x1800328a0;
static SystemOptimizeFunc SystemUIOptimizer = (SystemOptimizeFunc)0x1800329a0;
static SystemOptimizeFunc SystemPhysicsOptimizer = (SystemOptimizeFunc)0x180032aa0;
static SystemOptimizeFunc SystemAIOptimizer = (SystemOptimizeFunc)0x180032ba0;
static SystemOptimizeFunc SystemScriptingOptimizer = (SystemOptimizeFunc)0x180032ca0;
static SystemOptimizeFunc SystemDatabaseOptimizer = (SystemOptimizeFunc)0x180033780;
static SystemOptimizeFunc SystemNetworkServiceOptimizer = (SystemOptimizeFunc)0x180033810;
static SystemOptimizeFunc SystemSecurityServiceOptimizer = (SystemOptimizeFunc)0x1800338a0;
static SystemOptimizeFunc SystemPerformanceServiceOptimizer = (SystemOptimizeFunc)0x180033930;
static SystemOptimizeFunc SystemDebugServiceOptimizer = (SystemOptimizeFunc)0x1800339c0;
static SystemOptimizeFunc SystemCoreServiceOptimizer = (SystemOptimizeFunc)0x180033a50;
static SystemOptimizeFunc SystemComponentServiceOptimizer = (SystemOptimizeFunc)0x180033b50;
static SystemOptimizeFunc SystemMemoryServiceOptimizer = (SystemOptimizeFunc)0x180033c50;
static SystemOptimizeFunc SystemThreadingServiceOptimizer = (SystemOptimizeFunc)0x180033d50;
static SystemOptimizeFunc SystemFileSystemServiceOptimizer = (SystemOptimizeFunc)0x180033e50;
static SystemOptimizeFunc SystemRenderingServiceOptimizer = (SystemOptimizeFunc)0x180033f50;
static SystemOptimizeFunc SystemAudioServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemInputServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemUIServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemPhysicsServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemAIServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemScriptingServiceOptimizer = (SystemOptimizeFunc)0x180034050;
static SystemOptimizeFunc SystemDatabaseServiceOptimizer = (SystemOptimizeFunc)0x180034050;

// 系统调试函数别名
static SystemDebugFunc SystemCoreDebugger = (SystemDebugFunc)0x180031d10;
static SystemDebugFunc SystemServiceDebugger = (SystemDebugFunc)0x180031e10;
static SystemDebugFunc SystemComponentDebugger = (SystemDebugFunc)0x180031f10;
static SystemDebugFunc SystemMemoryDebugger = (SystemDebugFunc)0x180032010;
static SystemDebugFunc SystemThreadingDebugger = (SystemDebugFunc)0x180032110;
static SystemDebugFunc SystemFileSystemDebugger = (SystemDebugFunc)0x180032210;
static SystemDebugFunc SystemDebugDebugger = (SystemDebugFunc)0x180032310;
static SystemDebugFunc SystemNetworkDebugger = (SystemDebugFunc)0x180032410;
static SystemDebugFunc SystemSecurityDebugger = (SystemDebugFunc)0x180032510;
static SystemDebugFunc SystemPerformanceDebugger = (SystemDebugFunc)0x1800325a0;
static SystemDebugFunc SystemRenderingDebugger = (SystemDebugFunc)0x1800326a0;
static SystemDebugFunc SystemAudioDebugger = (SystemDebugFunc)0x1800327a0;
static SystemDebugFunc SystemInputDebugger = (SystemDebugFunc)0x1800328a0;
static SystemDebugFunc SystemUIDebugger = (SystemDebugFunc)0x1800329a0;
static SystemDebugFunc SystemPhysicsDebugger = (SystemDebugFunc)0x180032aa0;
static SystemDebugFunc SystemAIDebugger = (SystemDebugFunc)0x180032ba0;
static SystemDebugFunc SystemScriptingDebugger = (SystemDebugFunc)0x180032ca0;
static SystemDebugFunc SystemDatabaseDebugger = (SystemDebugFunc)0x180033780;
static SystemDebugFunc SystemNetworkServiceDebugger = (SystemDebugFunc)0x180033810;
static SystemDebugFunc SystemSecurityServiceDebugger = (SystemDebugFunc)0x1800338a0;
static SystemDebugFunc SystemPerformanceServiceDebugger = (SystemDebugFunc)0x180033930;
static SystemDebugFunc SystemDebugServiceDebugger = (SystemDebugFunc)0x1800339c0;
static SystemDebugFunc SystemCoreServiceDebugger = (SystemDebugFunc)0x180033a50;
static SystemDebugFunc SystemComponentServiceDebugger = (SystemDebugFunc)0x180033b50;
static SystemDebugFunc SystemMemoryServiceDebugger = (SystemDebugFunc)0x180033c50;
static SystemDebugFunc SystemThreadingServiceDebugger = (SystemDebugFunc)0x180033d50;
static SystemDebugFunc SystemFileSystemServiceDebugger = (SystemDebugFunc)0x180033e50;
static SystemDebugFunc SystemRenderingServiceDebugger = (SystemDebugFunc)0x180033f50;
static SystemDebugFunc SystemAudioServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemInputServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemUIServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemPhysicsServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemAIServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemScriptingServiceDebugger = (SystemDebugFunc)0x180034050;
static SystemDebugFunc SystemDatabaseServiceDebugger = (SystemDebugFunc)0x180034050;

// 系统性能分析函数别名
static SystemProfileFunc SystemCoreProfiler = (SystemProfileFunc)0x180031d10;
static SystemProfileFunc SystemServiceProfiler = (SystemProfileFunc)0x180031e10;
static SystemProfileFunc SystemComponentProfiler = (SystemProfileFunc)0x180031f10;
static SystemProfileFunc SystemMemoryProfiler = (SystemProfileFunc)0x180032010;
static SystemProfileFunc SystemThreadingProfiler = (SystemProfileFunc)0x180032110;
static SystemProfileFunc SystemFileSystemProfiler = (SystemProfileFunc)0x180032210;
static SystemProfileFunc SystemDebugProfiler = (SystemProfileFunc)0x180032310;
static SystemProfileFunc SystemNetworkProfiler = (SystemProfileFunc)0x180032410;
static SystemProfileFunc SystemSecurityProfiler = (SystemProfileFunc)0x180032510;
static SystemProfileFunc SystemPerformanceProfiler = (SystemProfileFunc)0x1800325a0;
static SystemProfileFunc SystemRenderingProfiler = (SystemProfileFunc)0x1800326a0;
static SystemProfileFunc SystemAudioProfiler = (SystemProfileFunc)0x1800327a0;
static SystemProfileFunc SystemInputProfiler = (SystemProfileFunc)0x1800328a0;
static SystemProfileFunc SystemUIProfiler = (SystemProfileFunc)0x1800329a0;
static SystemProfileFunc SystemPhysicsProfiler = (SystemProfileFunc)0x180032aa0;
static SystemProfileFunc SystemAIProfiler = (SystemProfileFunc)0x180032ba0;
static SystemProfileFunc SystemScriptingProfiler = (SystemProfileFunc)0x180032ca0;
static SystemProfileFunc SystemDatabaseProfiler = (SystemProfileFunc)0x180033780;
static SystemProfileFunc SystemNetworkServiceProfiler = (SystemProfileFunc)0x180033810;
static SystemProfileFunc SystemSecurityServiceProfiler = (SystemProfileFunc)0x1800338a0;
static SystemProfileFunc SystemPerformanceServiceProfiler = (SystemProfileFunc)0x180033930;
static SystemProfileFunc SystemDebugServiceProfiler = (SystemProfileFunc)0x1800339c0;
static SystemProfileFunc SystemCoreServiceProfiler = (SystemProfileFunc)0x180033a50;
static SystemProfileFunc SystemComponentServiceProfiler = (SystemProfileFunc)0x180033b50;
static SystemProfileFunc SystemMemoryServiceProfiler = (SystemProfileFunc)0x180033c50;
static SystemProfileFunc SystemThreadingServiceProfiler = (SystemProfileFunc)0x180033d50;
static SystemProfileFunc SystemFileSystemServiceProfiler = (SystemProfileFunc)0x180033e50;
static SystemProfileFunc SystemRenderingServiceProfiler = (SystemProfileFunc)0x180033f50;
static SystemProfileFunc SystemAudioServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemInputServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemUIServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemPhysicsServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemAIServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemScriptingServiceProfiler = (SystemProfileFunc)0x180034050;
static SystemProfileFunc SystemDatabaseServiceProfiler = (SystemProfileFunc)0x180034050;

// 系统重置函数别名
static SystemResetFunc SystemCoreResetter = (SystemResetFunc)0x180031d10;
static SystemResetFunc SystemServiceResetter = (SystemResetFunc)0x180031e10;
static SystemResetFunc SystemComponentResetter = (SystemResetFunc)0x180031f10;
static SystemResetFunc SystemMemoryResetter = (SystemResetFunc)0x180032010;
static SystemResetFunc SystemThreadingResetter = (SystemResetFunc)0x180032110;
static SystemResetFunc SystemFileSystemResetter = (SystemResetFunc)0x180032210;
static SystemResetFunc SystemDebugResetter = (SystemResetFunc)0x180032310;
static SystemResetFunc SystemNetworkResetter = (SystemResetFunc)0x180032410;
static SystemResetFunc SystemSecurityResetter = (ResetFunc)0x180032510;
static SystemResetFunc SystemPerformanceResetter = (SystemResetFunc)0x1800325a0;
static SystemResetFunc SystemRenderingResetter = (SystemResetFunc)0x1800326a0;
static SystemResetFunc SystemAudioResetter = (SystemResetFunc)0x1800327a0;
static SystemResetFunc SystemInputResetter = (SystemResetFunc)0x1800328a0;
static SystemResetFunc SystemUIResetter = (SystemResetFunc)0x1800329a0;
static SystemResetFunc SystemPhysicsResetter = (SystemResetFunc)0x180032aa0;
static SystemResetFunc SystemAIResetter = (SystemResetFunc)0x180032ba0;
static SystemResetFunc SystemScriptingResetter = (SystemResetFunc)0x180032ca0;
static SystemResetFunc SystemDatabaseResetter = (SystemResetFunc)0x180033780;
static SystemResetFunc SystemNetworkServiceResetter = (SystemResetFunc)0x180033810;
static SystemResetFunc SystemSecurityServiceResetter = (SystemResetFunc)0x1800338a0;
static SystemResetFunc SystemPerformanceServiceResetter = (SystemResetFunc)0x180033930;
static SystemResetFunc SystemDebugServiceResetter = (SystemResetFunc)0x1800339c0;
static SystemResetFunc SystemCoreServiceResetter = (SystemResetFunc)0x180033a50;
static SystemResetFunc SystemComponentServiceResetter = (SystemResetFunc)0x180033b50;
static SystemResetFunc SystemMemoryServiceResetter = (SystemResetFunc)0x180033c50;
static SystemResetFunc SystemThreadingServiceResetter = (SystemResetFunc)0x180033d50;
static SystemResetFunc SystemFileSystemServiceResetter = (SystemResetFunc)0x180033e50;
static SystemResetFunc SystemRenderingServiceResetter = (SystemResetFunc)0x180033f50;
static SystemResetFunc SystemAudioServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemInputServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemUIServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemPhysicsServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemAIServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemScriptingServiceResetter = (SystemResetFunc)0x180034050;
static SystemResetFunc SystemDatabaseServiceResetter = (SystemResetFunc)0x180034050;

// 系统更新函数别名
static SystemUpdateFunc SystemCoreUpdater = (SystemUpdateFunc)0x180031d10;
static SystemUpdateFunc SystemServiceUpdater = (SystemUpdateFunc)0x180031e10;
static SystemUpdateFunc SystemComponentUpdater = (SystemUpdateFunc)0x180031f10;
static SystemUpdateFunc SystemMemoryUpdater = (SystemUpdateFunc)0x180032010;
static SystemUpdateFunc SystemThreadingUpdater = (SystemUpdateFunc)0x180032110;
static SystemUpdateFunc SystemFileSystemUpdater = (SystemUpdateFunc)0x180032210;
static SystemUpdateFunc SystemDebugUpdater = (SystemUpdateFunc)0x180032310;
static SystemUpdateFunc SystemNetworkUpdater = (SystemUpdateFunc)0x180032410;
static SystemUpdateFunc SystemSecurityUpdater = (SystemUpdateFunc)0x180032510;
static SystemUpdateFunc SystemPerformanceUpdater = (SystemUpdateFunc)0x1800325a0;
static SystemUpdateFunc SystemRenderingUpdater = (SystemUpdateFunc)0x1800326a0;
static SystemUpdateFunc SystemAudioUpdater = (SystemUpdateFunc)0x1800327a0;
static SystemUpdateFunc SystemInputUpdater = (SystemUpdateFunc)0x1800328a0;
static SystemUpdateFunc SystemUIUpdater = (SystemUpdateFunc)0x1800329a0;
static SystemUpdateFunc SystemPhysicsUpdater = (SystemUpdateFunc)0x180032aa0;
static SystemUpdateFunc SystemAIUpdater = (SystemUpdateFunc)0x180032ba0;
static SystemUpdateFunc SystemScriptingUpdater = (SystemUpdateFunc)0x180032ca0;
static SystemUpdateFunc SystemDatabaseUpdater = (SystemUpdateFunc)0x180033780;
static SystemUpdateFunc SystemNetworkServiceUpdater = (SystemUpdateFunc)0x180033810;
static SystemUpdateFunc SystemSecurityServiceUpdater = (SystemUpdateFunc)0x1800338a0;
static SystemUpdateFunc SystemPerformanceServiceUpdater = (SystemUpdateFunc)0x180033930;
static SystemUpdateFunc SystemDebugServiceUpdater = (SystemUpdateFunc)0x1800339c0;
static SystemUpdateFunc SystemCoreServiceUpdater = (SystemUpdateFunc)0x180033a50;
static SystemUpdateFunc SystemComponentServiceUpdater = (SystemUpdateFunc)0x180033b50;
static SystemUpdateFunc SystemMemoryServiceUpdater = (SystemUpdateFunc)0x180033c50;
static SystemUpdateFunc SystemThreadingServiceUpdater = (SystemUpdateFunc)0x180033d50;
static SystemUpdateFunc SystemFileSystemServiceUpdater = (SystemUpdateFunc)0x180033e50;
static SystemUpdateFunc SystemRenderingServiceUpdater = (SystemUpdateFunc)0x180033f50;
static SystemUpdateFunc SystemAudioServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemInputServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemUIServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemPhysicsServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemAIServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemScriptingServiceUpdater = (SystemUpdateFunc)0x180034050;
static SystemUpdateFunc SystemDatabaseServiceUpdater = (SystemUpdateFunc)0x180034050;

// 系统初始化主函数
InitializationError SystemInitialization_Main(uint32_t flags, void* config)
{
    InitializationError result = INIT_SUCCESS;
    
    // 检查系统是否已经初始化
    if (g_initialization_context != NULL) {
        return INIT_ERROR_ALREADY_INITIALIZED;
    }
    
    // 初始化全局统计信息
    memset(&g_statistics, 0, sizeof(InitializationStatistics));
    g_initialization_flags = flags;
    
    // 创建初始化上下文
    g_initialization_context = (InitializationContext*)malloc(sizeof(InitializationContext));
    if (g_initialization_context == NULL) {
        return INIT_ERROR_OUT_OF_MEMORY;
    }
    
    memset(g_initialization_context, 0, sizeof(InitializationContext));
    g_initialization_context->system_status = SYSTEM_STATUS_INITIALIZING;
    g_initialization_context->start_time = GetSystemTime();
    
    // 执行初始化序列
    result = InitializeSystemCore();
    if (result != INIT_SUCCESS) {
        HandleInitializationError(result);
        CleanupInitialization();
        return result;
    }
    
    result = InitializeComponents();
    if (result != INIT_SUCCESS) {
        HandleInitializationError(result);
        CleanupInitialization();
        return result;
    }
    
    result = InitializeServices();
    if (result != INIT_SUCCESS) {
        HandleInitializationError(result);
        CleanupInitialization();
        return result;
    }
    
    result = ValidateSystemState();
    if (result != INIT_SUCCESS) {
        HandleInitializationError(result);
        CleanupInitialization();
        return result;
    }
    
    // 更新系统状态
    g_initialization_context->system_status = SYSTEM_STATUS_INITIALIZED;
    g_initialization_context->last_update_time = GetSystemTime();
    
    // 更新统计信息
    UpdateStatistics();
    
    return INIT_SUCCESS;
}

// 系统核心初始化
static InitializationError InitializeSystemCore(void)
{
    // 调用核心初始化函数
    SystemCoreInitializer();
    SystemServiceInitializer();
    SystemComponentInitializer();
    SystemMemoryInitializer();
    SystemThreadingInitializer();
    SystemFileSystemInitializer();
    SystemDebugInitializer();
    SystemNetworkInitializer();
    SystemSecurityInitializer();
    SystemPerformanceInitializer();
    
    return INIT_SUCCESS;
}

// 系统组件初始化
static InitializationError InitializeComponents(void)
{
    // 初始化渲染系统
    SystemRenderingInitializer();
    SystemAudioInitializer();
    SystemInputInitializer();
    SystemUIInitializer();
    SystemPhysicsInitializer();
    SystemAIInitializer();
    SystemScriptingInitializer();
    SystemDatabaseInitializer();
    
    return INIT_SUCCESS;
}

// 系统服务初始化
static InitializationError InitializeServices(void)
{
    // 初始化系统服务
    SystemNetworkServiceInitializer();
    SystemSecurityServiceInitializer();
    SystemPerformanceServiceInitializer();
    SystemDebugServiceInitializer();
    SystemCoreServiceInitializer();
    SystemComponentServiceInitializer();
    SystemMemoryServiceInitializer();
    SystemThreadingServiceInitializer();
    SystemFileSystemServiceInitializer();
    SystemRenderingServiceInitializer();
    SystemAudioServiceInitializer();
    SystemInputServiceInitializer();
    SystemUIServiceInitializer();
    SystemPhysicsServiceInitializer();
    SystemAIServiceInitializer();
    SystemScriptingServiceInitializer();
    SystemDatabaseServiceInitializer();
    
    return INIT_SUCCESS;
}

// 系统状态验证
static InitializationError ValidateSystemState(void)
{
    // 验证核心系统状态
    SystemCoreValidator();
    SystemServiceValidator();
    SystemComponentValidator();
    SystemMemoryValidator();
    SystemThreadingValidator();
    SystemFileSystemValidator();
    SystemDebugValidator();
    SystemNetworkValidator();
    SystemSecurityValidator();
    SystemPerformanceValidator();
    
    // 验证组件状态
    SystemRenderingValidator();
    SystemAudioValidator();
    SystemInputValidator();
    SystemUIValidator();
    SystemPhysicsValidator();
    SystemAIValidator();
    SystemScriptingValidator();
    SystemDatabaseValidator();
    
    return INIT_SUCCESS;
}

// 初始化清理
static void CleanupInitialization(void)
{
    if (g_initialization_context != NULL) {
        // 执行清理序列
        SystemCoreCleanup();
        SystemServiceCleanup();
        SystemComponentCleanup();
        SystemMemoryCleanup();
        SystemThreadingCleanup();
        SystemFileSystemCleanup();
        SystemDebugCleanup();
        SystemNetworkCleanup();
        SystemSecurityCleanup();
        SystemPerformanceCleanup();
        SystemRenderingCleanup();
        SystemAudioCleanup();
        SystemInputCleanup();
        SystemUICleanup();
        SystemPhysicsCleanup();
        SystemAICleanup();
        SystemScriptingCleanup();
        SystemDatabaseCleanup();
        
        // 释放初始化上下文
        free(g_initialization_context);
        g_initialization_context = NULL;
    }
}

// 处理初始化错误
static void HandleInitializationError(InitializationError error)
{
    g_initialization_context->last_error = error;
    g_initialization_context->error_count++;
    g_initialization_context->system_status = SYSTEM_STATUS_ERROR;
    
    // 记录错误日志
    switch (error) {
        case INIT_ERROR_INVALID_PARAMETER:
            LogError("System initialization failed: Invalid parameter");
            break;
        case INIT_ERROR_OUT_OF_MEMORY:
            LogError("System initialization failed: Out of memory");
            break;
        case INIT_ERROR_TIMEOUT:
            LogError("System initialization failed: Timeout");
            break;
        case INIT_ERROR_COMPONENT_FAILED:
            LogError("System initialization failed: Component initialization failed");
            break;
        case INIT_ERROR_DEPENDENCY_FAILED:
            LogError("System initialization failed: Dependency initialization failed");
            break;
        case INIT_ERROR_SYSTEM_ERROR:
            LogError("System initialization failed: System error");
            break;
        default:
            LogError("System initialization failed: Unknown error");
            break;
    }
}

// 更新统计信息
static void UpdateStatistics(void)
{
    if (g_initialization_context != NULL) {
        g_statistics.total_components = g_initialization_context->component_count;
        g_statistics.initialized_components = g_initialization_context->component_count;
        g_statistics.total_initialization_time = g_initialization_context->last_update_time - g_initialization_context->start_time;
        g_statistics.error_count = g_initialization_context->error_count;
    }
}

// 记录初始化进度
static void LogInitializationProgress(uint32_t current, uint32_t total)
{
    if (g_initialization_flags & INITIALIZATION_DEBUG_LEVEL) {
        char message[256];
        snprintf(message, sizeof(message), "Initialization progress: %d/%d (%.1f%%)", 
                current, total, (float)current / total * 100.0f);
        LogInfo(message);
    }
}

// 系统组件注册函数
InitializationError SystemComponent_Register(SystemComponent* component)
{
    if (g_initialization_context == NULL) {
        return INIT_ERROR_SYSTEM_ERROR;
    }
    
    if (component == NULL) {
        return INIT_ERROR_INVALID_PARAMETER;
    }
    
    if (g_initialization_context->component_count >= INITIALIZATION_MAX_COMPONENTS) {
        return INIT_ERROR_OUT_OF_MEMORY;
    }
    
    // 复制组件信息
    memcpy(&g_core_components[g_initialization_context->component_count], 
           component, sizeof(SystemComponent));
    
    g_initialization_context->component_count++;
    
    return INIT_SUCCESS;
}

// 系统服务注册函数
InitializationError SystemService_Register(SystemService* service)
{
    if (g_initialization_context == NULL) {
        return INIT_ERROR_SYSTEM_ERROR;
    }
    
    if (service == NULL) {
        return INIT_ERROR_INVALID_PARAMETER;
    }
    
    if (g_initialization_context->service_count >= INITIALIZATION_MAX_SERVICES) {
        return INIT_ERROR_OUT_OF_MEMORY;
    }
    
    // 复制服务信息
    memcpy(&g_system_services[g_initialization_context->service_count], 
           service, sizeof(SystemService));
    
    g_initialization_context->service_count++;
    
    return INIT_SUCCESS;
}

// 系统关闭函数
void SystemInitialization_Shutdown(void)
{
    if (g_initialization_context != NULL) {
        g_initialization_context->system_status = SYSTEM_STATUS_SHUTTING_DOWN;
        
        // 执行清理序列
        CleanupInitialization();
        
        // 重置全局变量
        g_initialization_context = NULL;
        memset(&g_statistics, 0, sizeof(InitializationStatistics));
        g_initialization_flags = 0;
    }
}

// 获取系统状态
SystemStatus SystemInitialization_GetStatus(void)
{
    if (g_initialization_context == NULL) {
        return SYSTEM_STATUS_UNINITIALIZED;
    }
    
    return g_initialization_context->system_status;
}

// 获取统计信息
const InitializationStatistics* SystemInitialization_GetStatistics(void)
{
    return &g_statistics;
}

// 系统配置函数
InitializationError SystemConfiguration_Apply(void* config, uint32_t config_size)
{
    if (config == NULL || config_size == 0) {
        return INIT_ERROR_INVALID_PARAMETER;
    }
    
    // 应用系统配置
    SystemCoreConfigurator(config);
    SystemServiceConfigurator(config);
    SystemComponentConfigurator(config);
    SystemMemoryConfigurator(config);
    SystemThreadingConfigurator(config);
    SystemFileSystemConfigurator(config);
    SystemDebugConfigurator(config);
    SystemNetworkConfigurator(config);
    SystemSecurityConfigurator(config);
    SystemPerformanceConfigurator(config);
    SystemRenderingConfigurator(config);
    SystemAudioConfigurator(config);
    SystemInputConfigurator(config);
    SystemUIConfigurator(config);
    SystemPhysicsConfigurator(config);
    SystemAIConfigurator(config);
    SystemScriptingConfigurator(config);
    SystemDatabaseConfigurator(config);
    
    return INIT_SUCCESS;
}

// 系统监控函数
void SystemMonitoring_Start(void)
{
    SystemCoreMonitor();
    SystemServiceMonitor();
    SystemComponentMonitor();
    SystemMemoryMonitor();
    SystemThreadingMonitor();
    SystemFileSystemMonitor();
    SystemDebugMonitor();
    SystemNetworkMonitor();
    SystemSecurityMonitor();
    SystemPerformanceMonitor();
    SystemRenderingMonitor();
    SystemAudioMonitor();
    SystemInputMonitor();
    SystemUIMonitor();
    SystemPhysicsMonitor();
    SystemAIMonitor();
    SystemScriptingMonitor();
    SystemDatabaseMonitor();
}

// 系统优化函数
void SystemOptimization_Perform(void)
{
    SystemCoreOptimizer();
    SystemServiceOptimizer();
    SystemComponentOptimizer();
    SystemMemoryOptimizer();
    SystemThreadingOptimizer();
    SystemFileSystemOptimizer();
    SystemDebugOptimizer();
    SystemNetworkOptimizer();
    SystemSecurityOptimizer();
    SystemPerformanceOptimizer();
    SystemRenderingOptimizer();
    SystemAudioOptimizer();
    SystemInputOptimizer();
    SystemUIOptimizer();
    SystemPhysicsOptimizer();
    SystemAIOptimizer();
    SystemScriptingOptimizer();
    SystemDatabaseOptimizer();
}

// 系统调试函数
void SystemDebugging_Enable(void)
{
    SystemCoreDebugger();
    SystemServiceDebugger();
    SystemComponentDebugger();
    SystemMemoryDebugger();
    SystemThreadingDebugger();
    SystemFileSystemDebugger();
    SystemDebugDebugger();
    SystemNetworkDebugger();
    SystemSecurityDebugger();
    SystemPerformanceDebugger();
    SystemRenderingDebugger();
    SystemAudioDebugger();
    SystemInputDebugger();
    SystemUIDebugger();
    SystemPhysicsDebugger();
    SystemAIDebugger();
    SystemScriptingDebugger();
    SystemDatabaseDebugger();
}

// 系统性能分析函数
void SystemProfiling_Start(void)
{
    SystemCoreProfiler();
    SystemServiceProfiler();
    SystemComponentProfiler();
    SystemMemoryProfiler();
    SystemThreadingProfiler();
    SystemFileSystemProfiler();
    SystemDebugProfiler();
    SystemNetworkProfiler();
    SystemSecurityProfiler();
    SystemPerformanceProfiler();
    SystemRenderingProfiler();
    SystemAudioProfiler();
    SystemInputProfiler();
    SystemUIProfiler();
    SystemPhysicsProfiler();
    SystemAIProfiler();
    SystemScriptingProfiler();
    SystemDatabaseProfiler();
}

// 系统重置函数
void SystemReset_Perform(void)
{
    SystemCoreResetter();
    SystemServiceResetter();
    SystemComponentResetter();
    SystemMemoryResetter();
    SystemThreadingResetter();
    SystemFileSystemResetter();
    SystemDebugResetter();
    SystemNetworkResetter();
    SystemSecurityResetter();
    SystemPerformanceResetter();
    SystemRenderingResetter();
    SystemAudioResetter();
    SystemInputResetter();
    SystemUIResetter();
    SystemPhysicsResetter();
    SystemAIResetter();
    SystemScriptingResetter();
    SystemDatabaseResetter();
}

// 系统更新函数
void SystemUpdate_Perform(void)
{
    SystemCoreUpdater();
    SystemServiceUpdater();
    SystemComponentUpdater();
    SystemMemoryUpdater();
    SystemThreadingUpdater();
    SystemFileSystemUpdater();
    SystemDebugUpdater();
    SystemNetworkUpdater();
    SystemSecurityUpdater();
    SystemPerformanceUpdater();
    SystemRenderingUpdater();
    SystemAudioUpdater();
    SystemInputUpdater();
    SystemUIUpdater();
    SystemPhysicsUpdater();
    SystemAIUpdater();
    SystemScriptingUpdater();
    SystemDatabaseUpdater();
}

// 原始函数实现 - 保留反编译的原始逻辑
void FUN_180031d10(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_1802285e0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_1809ff9c0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809ff9c0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x40afa5469b6ac06d;
    puVar7[7] = 0x2f4bab01d34055a5;
    puVar7[8] = &UNK_1809ff990;
    puVar7[9] = 3;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180031e10(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025cc00;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a010a0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x43330a43fcdb3653;
    puVar7[7] = 0xdcfdc333a769ec93;
    puVar7[8] = &UNK_180a00370;
    puVar7[9] = 1;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180031f10(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025c000;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01078, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x431d7c8d7c475be2;
    puVar7[7] = 0xb97f048d2153e1b0;
    puVar7[8] = &UNK_180a00388;
    puVar7[9] = 4;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180032010(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01050, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4b2d79e470ee4e2c;
    puVar7[7] = 0x9c552acd3ed5548d;
    puVar7[8] = &UNK_180a003a0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180032110(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025d270;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01028, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x49086ba08ab981a7;
    puVar7[7] = 0xa9191d34ad910696;
    puVar7[8] = &UNK_180a003b8;
    puVar7[9] = 0;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180032210(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01000, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x402feffe4481676e;
    puVar7[7] = 0xd4c2151109de93a0;
    puVar7[8] = &UNK_180a003d0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180032310(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined *puStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    puStackX_18 = &UNK_1800868c0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00fd8, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fd8, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4384dcc4b6d3f417;
    puVar7[7] = 0x92a15d52fe2679bd;
    puVar7[8] = &UNK_180a003e8;
    puVar7[9] = 0;
    puVar7[10] = puStackX_18;
    return;
}

void FUN_180032410(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00fb0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fb0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4140994454d56503;
    puVar7[7] = 0x399eced9bb5517ad;
    puVar7[8] = &UNK_180a00400;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180032510(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0xb;
    strcpy_s(auStack_88, 0x80, &UNK_180a13a98, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d54 = FUN_180623800(&puStack_a0);
    return;
}

void FUN_1800325a0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025cc00;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a010a0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x43330a43fcdb3653;
    puVar7[7] = 0xdcfdc333a769ec93;
    puVar7[8] = &UNK_180a00370;
    puVar7[9] = 1;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_1800326a0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025c000;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01078, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x431d7c8d7c475be2;
    puVar7[7] = 0xb97f048d2153e1b0;
    puVar7[8] = &UNK_180a00388;
    puVar7[9] = 4;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_1800327a0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01050, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4b2d79e470ee4e2c;
    puVar7[7] = 0x9c552acd3ed5548d;
    puVar7[8] = &UNK_180a003a0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_1800328a0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025d270;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01028, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x49086ba08ab981a7;
    puVar7[7] = 0xa9191d34ad910696;
    puVar7[8] = &UNK_180a003b8;
    puVar7[9] = 0;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_1800329a0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01000, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x402feffe4481676e;
    puVar7[7] = 0xd4c2151109de93a0;
    puVar7[8] = &UNK_180a003d0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180032aa0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined *puStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    puStackX_18 = &UNK_1800868c0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00fd8, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fd8, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4384dcc4b6d3f417;
    puVar7[7] = 0x92a15d52fe2679bd;
    puVar7[8] = &UNK_180a003e8;
    puVar7[9] = 0;
    puVar7[10] = puStackX_18;
    return;
}

void FUN_180032ba0(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00fb0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fb0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4140994454d56503;
    puVar7[7] = 0x399eced9bb5517ad;
    puVar7[8] = &UNK_180a00400;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180032ca0(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 10;
    strcpy_s(auStack_88, 0x80, &UNK_180a13e48, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d5c = FUN_180623800(&puStack_a0);
    return;
}

int FUN_180032d30(void)
{
    longlong lVar1;
    undefined8 in_R9;
    
    _DAT_180bf7e90 = &UNK_1809fcc58;
    _DAT_180bf7e98 = &DAT_180bf7ea8;
    return 0;
}

void FUN_180033780(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 9;
    strcpy_s(auStack_88, 0x80, &UNK_180a140f8, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d60 = FUN_180623800(&puStack_a0);
    return;
}

void FUN_180033810(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0xf;
    strcpy_s(auStack_88, 0x80, &UNK_180a14290, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d64 = FUN_180623800(&puStack_a0);
    return;
}

void FUN_1800338a0(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0xc;
    strcpy_s(auStack_88, 0x80, &UNK_180a14668, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d68 = FUN_180623800(&puStack_a0);
    return;
}

void FUN_180033930(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 7;
    strcpy_s(auStack_88, 0x80, &DAT_180a14640, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d6c = FUN_180623800(&puStack_a0);
    return;
}

void FUN_1800339c0(void)
{
    undefined8 in_R9;
    undefined *puStack_a0;
    undefined1 *puStack_98;
    undefined4 uStack_90;
    undefined1 auStack_88 [136];
    
    puStack_a0 = &UNK_1809fcc28;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0x13;
    strcpy_s(auStack_88, 0x80, &UNK_180a14840, in_R9, 0xfffffffffffffffe);
    _DAT_180c91d70 = FUN_180623800(&puStack_a0);
    return;
}

void FUN_180033a50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_1802633c0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00bb0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00bb0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x40db4257e97d3df8;
    puVar7[7] = 0x81d539e33614429f;
    puVar7[8] = &UNK_180a004a8;
    puVar7[9] = 4;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180033b50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_180262b00;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a00b88, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00b88, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4e33c4803e67a08f;
    puVar7[7] = 0x703a29a844ce399;
    puVar7[8] = &UNK_180a004c0;
    puVar7[9] = 3;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180033c50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025cc00;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a010a0, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x43330a43fcdb3653;
    puVar7[7] = 0xdcfdc333a769ec93;
    puVar7[8] = &UNK_180a00370;
    puVar7[9] = 1;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180033d50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025c000;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01078, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x431d7c8d7c475be2;
    puVar7[7] = 0xb97f048d2153e1b0;
    puVar7[8] = &UNK_180a00388;
    puVar7[9] = 4;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180033e50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01050, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x4b2d79e470ee4e2c;
    puVar7[7] = 0x9c552acd3ed5548d;
    puVar7[8] = &UNK_180a003a0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}

void FUN_180033f50(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    code *pcStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    pcStackX_18 = FUN_18025d270;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01028, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x49086ba08ab981a7;
    puVar7[7] = 0xa9191d34ad910696;
    puVar7[8] = &UNK_180a003b8;
    puVar7[9] = 0;
    puVar7[10] = pcStackX_18;
    return;
}

void FUN_180034050(void)
{
    char cVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puStackX_10;
    undefined8 uStackX_18;
    
    plVar4 = (longlong *)FUN_18008d070();
    puVar2 = (undefined8 *)*plVar4;
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    uStackX_18 = 0;
    puVar7 = puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
        iVar3 = memcmp(puVar6 + 4, &DAT_180a01000, 0x10);
        if (iVar3 < 0) {
            puVar8 = (undefined8 *)puVar6[2];
            puVar6 = puVar7;
        }
        else {
            puVar8 = (undefined8 *)*puVar6;
        }
        puVar7 = puVar6;
        puVar6 = puVar8;
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000, puVar7 + 4, 0x10), iVar3 < 0)) {
        lVar5 = FUN_18008f0d0(plVar4);
        FUN_18008f140(plVar4, &puStackX_10, puVar7, lVar5 + 0x20, lVar5);
        puVar7 = puStackX_10;
    }
    puVar7[6] = 0x402feffe4481676e;
    puVar7[7] = 0xd4c2151109de93a0;
    puVar7[8] = &UNK_180a003d0;
    puVar7[9] = 0;
    puVar7[10] = uStackX_18;
    return;
}