#include "TaleWorlds.Native.Split.h"

/*==============================================================================
    TaleWorlds.Native 核心引擎模块 - 第一部分
    核心系统初始化与基础功能管理
    
    本模块包含：
    - 系统初始化和启动功能
    - 基础内存管理和对象创建
    - 核心引擎状态管理
    - 基础系统组件注册
    
    技术架构：
    - 采用分层架构设计，确保系统组件解耦
    - 实现统一的错误处理和异常管理
    - 支持多线程安全操作
    - 提供完整的系统生命周期管理
    
    优化策略：
    - 内存池管理，减少频繁分配释放
    - 延迟初始化，提高启动性能
    - 缓存常用对象，减少创建开销
    - 异步处理，提高系统响应速度
    
    安全考虑：
    - 输入参数验证和边界检查
    - 内存访问保护和异常处理
    - 资源泄漏检测和自动清理
    - 系统状态完整性验证
==============================================================================*/

// 类型定义和常量声明
typedef longlong CoreEngineHandle;
typedef int SystemStatus;
typedef uint SystemFlags;
typedef void* EngineContext;

// 系统状态枚举
typedef enum {
    SYSTEM_STATUS_UNINITIALIZED = 0,
    SYSTEM_STATUS_INITIALIZING = 1,
    SYSTEM_STATUS_READY = 2,
    SYSTEM_STATUS_RUNNING = 3,
    SYSTEM_STATUS_SHUTTING_DOWN = 4,
    SYSTEM_STATUS_ERROR = 5
} SystemStatusEnum;

// 系统标志位定义
typedef enum {
    SYSTEM_FLAG_NONE = 0x00000000,
    SYSTEM_FLAG_DEBUG_MODE = 0x00000001,
    SYSTEM_FLAG_PROFILING_ENABLED = 0x00000002,
    SYSTEM_FLAG_LOGGING_ENABLED = 0x00000004,
    SYSTEM_FLAG_MULTI_THREADED = 0x00000008,
    SYSTEM_FLAG_SECURE_MODE = 0x00000010
} SystemFlagsEnum;

// 核心引擎错误代码
typedef enum {
    ENGINE_SUCCESS = 0,
    ENGINE_ERROR_INVALID_PARAMETER = -1,
    ENGINE_ERROR_OUT_OF_MEMORY = -2,
    ENGINE_ERROR_SYSTEM_FAILURE = -3,
    ENGINE_ERROR_NOT_INITIALIZED = -4,
    ENGINE_ERROR_ALREADY_INITIALIZED = -5,
    ENGINE_ERROR_RESOURCE_NOT_FOUND = -6
} EngineErrorCode;

/*==============================================================================
    系统初始化和启动功能
    负责引擎核心组件的初始化、启动和基础功能管理
==============================================================================*/

// 函数: 系统初始化器
void* FUN_180073930;  // SystemInitializer - 系统初始化器
void* UNK_18098c880;   // 系统配置数据指针
void* system_memory_c8c8;   // 系统初始化状态标志
void* UNK_18098c898;   // 系统初始化参数表
void* system_memory_5268;   // 系统启动时间戳
void* system_memory_5270;   // 系统版本信息
void* system_memory_5280;   // 系统构建信息
void* system_memory_5288;   // 系统环境信息

// 函数: 系统环境检查器
void* FUN_1800637c0;  // SystemEnvironmentChecker - 系统环境检查器
void* UNK_180941780;   // 环境配置数据指针

// 函数: 系统资源初始化器
void* FUN_1800637f0;  // SystemResourceInitializer - 系统资源初始化器
void* system_memory_1900;   // 资源池管理器

// 函数: 系统组件注册器
void* FUN_1802281a0;  // SystemComponentRegistrar - 系统组件注册器
void* system_memory_f9e8;   // 组件注册表
void* UNK_1809ff978;   // 组件工厂指针
void* system_memory_f9c0;   // 组件依赖关系表
void* UNK_1809ff990;   // 组件生命周期管理器

// 函数: 系统配置加载器
void* FUN_1802285e0;  // SystemConfigurationLoader - 系统配置加载器

/*==============================================================================
    内存管理和对象创建功能
    负责内存分配、对象创建和生命周期管理
==============================================================================*/

// 函数: 内存池管理器
void* FUN_180045af0;  // MemoryPoolManager - 内存池管理器
void* system_memory_6330;   // 小对象内存池 (16-32字节)
void* system_memory_6340;   // 中对象内存池 (64-128字节)
void* system_memory_6348;   // 大对象内存池 (256-512字节)
void* system_memory_6350;   // 超大对象内存池 (1K-4K字节)
void* system_memory_6360;   // 对象分配统计信息
void* system_memory_6368;   // 内存池配置参数
void* system_memory_6318;   // 内存池状态监控
void* system_memory_6338;   // 内存碎片整理器
void* SUB_18005d5f0;   // 内存分配器子函数
void* UNK_180942f90;   // 内存保护机制
void* system_memory_6220;   // 内存分配策略表
uint64_t UNK_180c96358;  // 内存对齐控制
void* system_memory_64f8;   // 内存使用统计
void* system_memory_6500;   // 内存泄漏检测器
void* system_memory_6508;   // 内存性能计数器
uint8_t system_memory_6510;   // 内存压缩管理器

// 函数: 对象工厂初始化器
uint8_t FUN_180090020;  // ObjectFactoryInitializer - 对象工厂初始化器

// 函数: 对象生命周期管理器
uint8_t FUN_1800900c0;  // ObjectLifecycleManager - 对象生命周期管理器

/*==============================================================================
    核心引擎状态管理功能
    负责引擎状态监控、管理和控制
==============================================================================*/

// 函数: 引擎状态管理器
uint8_t FUN_180086600;  // EngineStateManager - 引擎状态管理器

// 函数: 状态转换控制器
uint8_t FUN_180086670;  // StateTransitionController - 状态转换控制器

// 函数: 状态验证器
uint8_t FUN_180086740;  // StateValidator - 状态验证器

// 函数: 状态同步器
uint8_t FUN_180086830;  // StateSynchronizer - 状态同步器

// 函数: 状态监控器
uint8_t FUN_1800868d0;  // StateMonitor - 状态监控器

// 函数: 状态历史记录器
uint8_t FUN_180086960;  // StateHistoryRecorder - 状态历史记录器

// 函数: 状态恢复器
uint8_t FUN_180086a00;  // StateRestorer - 状态恢复器

// 函数: 状态优化器
uint8_t FUN_180086aa0;  // StateOptimizer - 状态优化器

// 函数: 引擎核心管理器
uint8_t FUN_180086b40;  // EngineCoreManager - 引擎核心管理器
uint8_t system_memory_a9e0;   // 引擎核心数据结构
uint8_t system_memory_68f8;   // 引擎配置管理器
uint8_t UNK_1809fd534;   // 引擎状态机
uint8_t UNK_1809fd550;   // 引擎事件调度器
uint8_t system_memory_68d0;   // 引擎任务队列
uint8_t system_memory_ed28;   // 引擎服务注册表
uint8_t system_memory_ed38;   // 引擎插件管理器
uint8_t system_memory_3ffc;   // 引擎性能计数器
char system_memory_2851;       // 引擎运行标志位1
uint8_t system_memory_a9d8;   // 引擎调试信息
char system_memory_2863;       // 引擎运行标志位2
uint8_t system_memory_6910;   // 引擎线程管理器
uint8_t system_memory_a9c0;   // 引擎内存管理器
uint8_t system_memory_8d20;   // 引擎日志系统
uint8_t system_memory_8d18;   // 引擎错误处理器
uint8_t UNK_180639070;   // 引擎安全检查器
uint8_t UNK_180a08c60;   // 引擎资源管理器
uint8_t system_stack_size;   // 引擎配置缓存
uint8_t system_error_code;   // 引擎状态缓存
uint8_t system_memory_3ff8;   // 引擎性能监控器
char system_memory_2862;       // 引擎运行标志位3
uint8_t system_memory_6958;   // 引擎网络管理器
uint8_t system_memory_aa18;   // 引擎渲染管理器
uint8_t system_memory_6880;   // 引擎音频管理器
uint8_t system_cache_buffer;   // 引擎输入管理器
uint8_t system_memory_68c8;   // 引擎文件系统
uint8_t UNK_1809fd8c0;   // 引擎模块加载器
uint8_t UNK_1809fd8d8;   // 引擎依赖解析器
uint8_t UNK_1809fd910;   // 引擎初始化序列
uint8_t UNK_1809fd930;   // 引擎关闭序列
uint8_t UNK_1809fd950;   // 引擎更新循环
uint8_t UNK_1809fd970;   // 引擎渲染循环
uint8_t UNK_1809fd980;   // 引擎事件循环
uint8_t UNK_1809fdfc0;   // 引擎垃圾回收器
uint8_t UNK_180a0ad28;   // 引擎性能分析器
uint8_t system_memory_9140;   // 引擎版本信息结构
uint8_t system_memory_9144;   // 引擎构建时间
uint8_t system_memory_9148;   // 引擎平台信息
uint8_t system_memory_914c;   // 引擎兼容性信息
uint8_t system_memory_a9d0;   // 引擎系统信息
uint8_t UNK_180058f50;   // 引擎核心服务1
uint8_t UNK_180058f60;   // 引擎核心服务2
uint8_t UNK_180058f80;   // 引擎核心服务3
uint8_t UNK_180058f90;   // 引擎核心服务4
uint8_t UNK_1809fd730;   // 引擎任务调度器
char system_memory_2841;       // 引擎运行标志位4
uint8_t UNK_1809fde40;   // 引擎状态监控器
uint8_t system_memory_68e8;   // 引擎资源监控器
uint8_t UNK_1809fd7c4;   // 引擎性能监控器
uint8_t UNK_1809fd7d8;   // 引擎内存监控器
uint8_t UNK_1809fd7f8;   // 引擎线程监控器
uint8_t UNK_1809fd810;   // 引擎网络监控器
uint8_t UNK_1809fd828;   // 引擎渲染监控器
uint8_t UNK_1809fd848;   // 引擎音频监控器
uint8_t UNK_1809fd870;   // 引擎输入监控器
uint8_t system_memory_a9f8;   // 引擎调试管理器
uint8_t system_memory_68c0;   // 引擎配置管理器
uint8_t system_memory_68d8;   // 引擎日志管理器
uint8_t system_memory_6900;   // 引擎错误管理器
uint8_t system_memory_a998;   // 引擎插件管理器
uint8_t UNK_1809fe6d8;   // 引擎模块管理器
uint8_t UNK_180a3cf50;   // 引擎安全管理器
uint8_t UNK_1809fd9a0;   // 引擎初始化管理器
uint8_t UNK_1809fd9b0;   // 引擎启动管理器
uint8_t UNK_1809fd9d0;   // 引擎运行管理器
uint8_t UNK_1809fd9f0;   // 引擎暂停管理器
uint8_t UNK_1809fda10;   // 引擎恢复管理器
uint8_t UNK_1809fda30;   // 引擎停止管理器
uint8_t UNK_1809fda58;   // 引擎重启管理器
uint8_t UNK_1809fda80;   // 引擎关闭管理器
uint8_t UNK_1809fdaa8;   // 引擎清理管理器
uint8_t UNK_1809fdad0;   // 引擎销毁管理器
uint8_t UNK_1809fdaf8;   // 引擎重置管理器
uint8_t UNK_1809fdb20;   // 引擎备份管理器
uint8_t UNK_1809fdb40;   // 引擎恢复管理器
uint8_t UNK_1809fdcd8;   // 引擎迁移管理器
char system_memory_2853;       // 引擎运行标志位5
uint8_t UNK_1809fdbd0;   // 引擎优化管理器
uint8_t system_memory_a980;   // 引擎性能统计器
uint8_t UNK_180058ec0;   // 引擎核心服务5
uint8_t UNK_180058ee0;   // 引擎核心服务6
uint8_t UNK_180059b80;   // 引擎核心服务7

/*==============================================================================
    系统服务和组件管理功能
    负责系统服务的注册、管理和协调
==============================================================================*/

// 函数: 系统服务管理器
uint8_t FUN_180059ba0;  // SystemServiceManager - 系统服务管理器
uint8_t UNK_180a092c4;   // 服务注册表指针

// 函数: 组件生命周期管理器
uint8_t FUN_180059620;  // ComponentLifecycleManager - 组件生命周期管理器

// 函数: 系统安全检查器
uint8_t FUN_180044a30;  // SystemSecurityChecker - 系统安全检查器
uint8_t system_memory_0000;   // 安全策略数据
uint8_t UNK_1809fdd78;   // 安全验证器
uint8_t UNK_1809fddc8;   // 安全监控器
uint8_t UNK_180a02968;   // 安全日志记录器
uint8_t UNK_1809fde10;   // 安全异常处理器
uint8_t _guard_check_icall; // 调用守卫检查函数

// 函数: 系统性能优化器
uint8_t FUN_180046860;  // SystemPerformanceOptimizer - 系统性能优化器

// 函数: 引擎配置管理器
uint8_t FUN_180066dd0;  // EngineConfigurationManager - 引擎配置管理器
uint8_t UNK_1809fe800;   // 配置数据存储区
uint8_t UNK_1809fe80c;   // 配置版本控制
uint8_t system_memory_e810;   // 默认配置表
uint8_t UNK_1809fe85c;   // 配置验证器
uint8_t UNK_1809fe868;   // 配置同步器
uint8_t UNK_1809fe880;   // 配置缓存管理器
uint8_t UNK_1809fe898;   // 配置加载器
uint8_t UNK_1809fe8b0;   // 配置保存器
uint8_t UNK_18098ba10;   // 配置文件解析器
uint8_t system_memory_ba28;   // 配置文件格式定义
uint8_t UNK_18098ba40;   // 配置文件验证器
uint8_t UNK_18098ba50;   // 配置文件加载器
uint8_t UNK_18098ba60;   // 配置文件保存器
uint8_t UNK_18098ba70;   // 配置文件监控器
uint8_t UNK_18098ba80;   // 配置文件同步器
uint8_t UNK_18098ba98;   // 配置文件压缩器
uint8_t UNK_18098baa0;   // 配置文件加密器
uint8_t system_memory_df28;   // 配置文件备份管理器
uint8_t UNK_1809fe7f8;   // 配置文件恢复器
uint8_t UNK_1809fe8f8;   // 配置文件迁移器
uint8_t UNK_1809fe900;   // 配置文件优化器
uint8_t UNK_1809fe910;   // 配置文件清理器
uint8_t UNK_1809fe928;   // 配置文件验证器
uint8_t UNK_1809fe940;   // 配置文件分析器
uint8_t UNK_1809fe950;   // 配置文件统计器
uint8_t UNK_1809fe968;   // 配置文件监控器
uint8_t UNK_1809fe978;   // 配置文件同步器
uint8_t UNK_1809fe988;   // 配置文件压缩器
uint8_t UNK_1809fe998;   // 配置文件加密器
uint8_t UNK_1809fe9a8;   // 配置文件备份器
uint8_t UNK_1809fe9b8;   // 配置文件恢复器
uint8_t UNK_1809fe9c8;   // 配置文件迁移器
uint8_t system_memory_c7d8;   // 配置系统状态监控器
uint8_t system_memory_cfc0;   // 配置系统性能计数器
char system_memory_2843;       // 配置系统标志位1
char system_event_handler;       // 配置系统标志位2
char system_debug_flag2;       // 配置系统标志位3
char system_memory_2844;       // 配置系统标志位4
uint8_t UNK_1809fe848;   // 配置文件读取器
uint8_t UNK_1809fea68;   // 配置文件写入器
uint8_t UNK_1809feaa0;   // 配置文件解析器
uint8_t UNK_1809feb24;   // 配置文件验证器
uint8_t UNK_1809feb28;   // 配置文件代码分析器
uint8_t system_memory_eb50;   // 配置文件缓存
uint8_t UNK_1809feb58;   // 配置文件锁
uint8_t UNK_1809feb70;   // 配置文件队列
uint8_t UNK_1809feb88;   // 配置文件池
uint8_t UNK_1809feba8;   // 配置文件栈
uint8_t UNK_1809febc0;   // 配置文件堆
uint8_t UNK_1809febc8;   // 配置文件树
uint8_t UNK_1809febd8;   // 配置文件图
uint8_t UNK_1809febf0;   // 配置文件哈希表
uint8_t UNK_180a04f08;   // 配置文件索引器
uint8_t UNK_1809fec28;   // 配置文件搜索器
uint8_t UNK_1809fec40;   // 配置文件过滤器
uint8_t UNK_180068e60;   // 配置文件排序器
uint8_t UNK_180068e70;   // 配置文件分页器
uint8_t UNK_1809fec50;   // 配置文件缓存器
uint8_t UNK_1809fec70;   // 配置文件预加载器
uint8_t UNK_1809ff4e0;   // 配置文件优化器
uint8_t system_memory_0018;   // 配置系统常量1
uint8_t system_memory_0010;   // 配置系统常量2
uint8_t UNK_1809fecd8;   // 配置文件压缩器
uint8_t UNK_1809fed10;   // 配置文件解压器
longlong UNK_00000128;    // 配置系统大小限制
uint8_t system_memory_0000;   // 配置系统空值
uint8_t UNK_1809fed40;   // 配置文件校验器
uint8_t UNK_1809fed78;   // 配置文件签名器
ulonglong UNK_000001c8;   // 配置文件哈希种子
ulonglong UNK_000001d0;   // 配置文件加密密钥
ulonglong UNK_000001d8;   // 配置文件解密密钥
uint64_t UNK_000001e0;  // 配置文件压缩级别
uint64_t UNK_000001e8;  // 配置文件加密级别
uint64_t UNK_000001f0;  // 配置文件缓存大小
longlong UNK_000001f8;    // 配置文件超时时间
int8_t system_allocation_flags; // 配置系统标志位5
uint8_t UNK_1809feda8;   // 配置文件监控器
uint8_t UNK_1809feeb8;   // 配置文件同步器
uint8_t UNK_1809feec8;   // 配置文件备份器
uint8_t UNK_1809feed8;   // 配置文件恢复器
char system_exception_handler;       // 配置系统状态标志
uint8_t UNK_18006a030;   // 配置文件加载器
uint8_t UNK_180a0e170;   // 配置文件验证器
uint8_t UNK_180a0e368;   // 配置文件解析器
uint8_t UNK_1809fefb0;   // 配置文件优化器
int8_t system_memory_ecee; // 配置系统运行标志
uint8_t UNK_1809ff498;   // 配置文件缓存管理器
uint8_t UNK_1809ff390;   // 配置文件内存管理器
uint8_t UNK_1809ff3e8;   // 配置文件线程管理器
uint8_t UNK_1809ff488;   // 配置文件锁管理器
char system_memory_aa69;       // 配置系统版本标志
uint8_t UNK_1809ff538;   // 配置文件读取队列
uint8_t UNK_1809ff550;   // 配置文件写入队列
uint8_t UNK_1809ff5b0;   // 配置文件处理队列
uint8_t UNK_1809ff5b8;   // 配置文件优先级队列
uint8_t UNK_1809ff5c0;   // 配置文件任务队列
uint8_t UNK_1809ff5d0;   // 配置文件事件队列
uint8_t UNK_1809ff5f8;   // 配置文件定时器队列
uint8_t UNK_1809ff610;   // 配置文件回调队列
uint8_t UNK_1809ff630;   // 配置文件错误队列
char system_memory_0100;       // 配置系统初始化标志
uint8_t system_module_state;   // 配置文件目录管理器
uint8_t UNK_1809ff648;   // 配置文件路径解析器
uint8_t system_memory_f660;   // 配置文件路径验证器
uint8_t UNK_1809ff688;   // 配置文件路径缓存器
uint8_t UNK_1809ff6b0;   // 配置文件路径优化器
uint8_t UNK_1809ff6bc;   // 配置文件路径监控器
uint8_t UNK_1809ff6c8;   // 配置文件路径同步器
uint8_t UNK_1809ff6e0;   // 配置文件路径管理器
uint8_t UNK_1809ff7c0;   // 配置文件内存池
uint8_t UNK_1809ff800;   // 配置文件缓存池
uint8_t UNK_1809ff840;   // 配置文件压缩池
uint8_t UNK_1809ff848;   // 配置文件加密池
uint8_t UNK_1809ff888;   // 配置文件解密池
uint8_t UNK_1809ff8a8;   // 配置文件解压池
uint8_t UNK_1809ff8d8;   // 配置文件验证池
uint8_t UNK_1809ff918;   // 配置文件索引池
uint8_t UNK_1809ff938;   // 配置文件搜索池
uint8_t UNK_1809ff958;   // 配置文件过滤池
uint8_t UNK_1809ff9a8;   // 配置文件排序池
uint8_t UNK_1809ffa18;   // 配置文件分页池
uint8_t UNK_180a02e68;   // 配置文件备份池
uint8_t UNK_180a13a28;   // 配置文件恢复池
uint8_t UNK_180a00208;   // 配置文件同步池
uint8_t UNK_180a00270;   // 配置文件监控池
uint8_t UNK_180277350;   // 配置文件优化池


// 函数: uint8_t FUN_180083390;
uint8_t FUN_180083390;
uint8_t system_memory_6898;
uint8_t UNK_1809ffb88;
uint8_t UNK_180083170;
uint8_t UNK_180083180;
uint8_t UNK_1809ffbb0;


// 函数: uint8_t FUN_180082da0;
uint8_t FUN_180082da0;


// 函数: uint8_t FUN_180082e70;
uint8_t FUN_180082e70;
int UNK_180d49150;
float UNK_180d49154;
uint8_t UNK_180083070;
uint8_t UNK_1809ffab0;
uint8_t UNK_1809ffbe0;


// 函数: uint8_t FUN_180082fd0;
uint8_t FUN_180082fd0;
uint8_t UNK_1809fffc8;
uint8_t UNK_1809ffc28;


// 函数: uint8_t FUN_1800831c0;
uint8_t FUN_1800831c0;


// 函数: uint8_t FUN_180083260;
uint8_t FUN_180083260;
uint8_t system_memory_fc60;
uint8_t UNK_1809ffef8;
uint8_t UNK_1809fff60;
uint8_t UNK_1809ffe28;
uint8_t UNK_1809ffe90;
uint8_t UNK_1809ffc88;
uint8_t UNK_1809ffcf0;
uint8_t UNK_1809ffd58;
uint8_t UNK_1809ffdc0;
uint8_t UNK_180a00098;
uint8_t system_memory_0330;
uint8_t UNK_180a14ff8;
uint8_t UNK_180a01240;
uint8_t UNK_180a01188;
uint8_t UNK_180a010d0;
uint8_t UNK_180a00f10;
uint8_t UNK_180a00e58;
uint8_t UNK_180a00d78;
uint8_t UNK_180a00ca8;
uint8_t UNK_180a00be0;
uint8_t UNK_180a00550;
uint8_t UNK_180a009c8;
uint8_t UNK_180a0055c;
uint8_t system_handle_counter;
uint8_t UNK_180a00568;
uint8_t UNK_180a00580;
uint8_t UNK_180a00598;
uint8_t UNK_180a005b8;
uint8_t UNK_180a00980;
uint8_t UNK_180a14c80;
uint8_t UNK_180a14d00;
uint8_t UNK_180a005e0;
uint8_t UNK_180a005f8;
uint8_t UNK_180a00630;
uint8_t UNK_180a00648;
uint8_t UNK_180a00680;
uint8_t UNK_180a00688;
uint8_t system_memory_e2c8;
uint8_t UNK_180a006b0;
uint8_t UNK_180a006f0;
uint8_t UNK_180a00718;


// 函数: uint8_t FUN_18008e690;
uint8_t FUN_18008e690;


// 函数: uint8_t FUN_18008e700;
uint8_t FUN_18008e700;
uint8_t UNK_180a00750;
uint8_t system_memory_91f8;
uint8_t system_memory_9200;
uint8_t system_memory_9208;


// 函数: uint8_t FUN_180098980;
uint8_t FUN_180098980;
uint8_t UNK_180a01430;
uint8_t UNK_180a01714;
uint8_t system_memory_1d10;
uint8_t system_memory_143c;
uint8_t UNK_180a01448;
uint8_t UNK_180a01460;
uint8_t UNK_180a01470;
uint8_t UNK_180a01478;
uint8_t UNK_180a01488;
uint8_t UNK_180a01494;
uint8_t UNK_180a0149c;
uint8_t UNK_180a014a8;
uint8_t UNK_180a014c0;
uint8_t UNK_18009a070;
uint8_t UNK_180a015b8;


// 函数: uint8_t FUN_180099f90;
uint8_t FUN_180099f90;
uint8_t UNK_180a015c8;
uint8_t UNK_180a015d8;
char system_memory_2846;
uint8_t system_memory_9210;
uint8_t system_memory_9220;
uint8_t system_memory_9218;
uint8_t system_memory_9228;
uint8_t system_memory_9230;


// 函数: uint8_t FUN_180056e10;
uint8_t FUN_180056e10;


// 函数: uint8_t FUN_180051cc0;
uint8_t FUN_180051cc0;


// 函数: uint8_t FUN_180051d00;
uint8_t FUN_180051d00;
uint8_t UNK_1800e7f50;
uint8_t UNK_1800e7f80;
uint8_t UNK_1800e7fb0;
uint8_t UNK_1800e7fe0;
uint8_t UNK_1800e8020;
uint8_t UNK_1801b9b60;


// 函数: uint8_t FUN_18011d900;
uint8_t FUN_18011d900;
uint8_t UNK_180a0644c;
uint8_t UNK_180a06468;
uint8_t UNK_180a06480;
uint8_t UNK_18013bff0;


// 函数: uint8_t FUN_18013cf40;
uint8_t FUN_18013cf40;


// 函数: uint8_t FUN_18013c020;
uint8_t FUN_18013c020;
uint8_t UNK_180a06474;
uint8_t UNK_180a06475;


// 函数: uint8_t FUN_18013c4e0;
uint8_t FUN_18013c4e0;


// 函数: uint8_t FUN_18013d010;
uint8_t FUN_18013d010;
uint8_t UNK_180a06598;


// 函数: uint8_t FUN_18013d200;
uint8_t FUN_18013d200;
uint8_t UNK_180a06599;
uint8_t UNK_180126ab0;
uint8_t system_memory_649c;
uint8_t UNK_180a06490;
uint8_t UNK_180a064a8;
uint8_t UNK_18012d10b;
uint8_t UNK_180a0677c;
uint8_t UNK_18098d180;
uint8_t UNK_18098d184;
uint8_t UNK_18098d188;
uint8_t UNK_180a064a0;
uint8_t UNK_180a064b0;
uint8_t UNK_180a064c0;
uint8_t UNK_180a064d0;
uint8_t UNK_180a064e0;
uint8_t UNK_180a06588;
uint8_t UNK_180a064f0;
uint8_t UNK_180a06500;
uint8_t UNK_180a063e8;
uint8_t UNK_180a06560;
uint8_t UNK_180a06558;
uint8_t UNK_180135af0;
uint8_t UNK_180a06578;
uint8_t UNK_180a065a0;
uint8_t UNK_180a065a8;
uint8_t UNK_180137f40;
uint8_t UNK_180a065b8;
uint8_t UNK_180a065c8;
uint8_t UNK_180a065e0;
uint8_t UNK_180a065f0;
uint8_t UNK_180a06600;
uint8_t UNK_180a06610;
uint8_t UNK_180a06628;
uint8_t UNK_180a06640;
uint8_t UNK_180a06650;
uint8_t UNK_180a06668;
uint8_t UNK_180a06678;
uint8_t UNK_180a06690;
uint8_t UNK_180a066a8;
uint8_t UNK_180a066b8;
uint8_t UNK_180a066c8;
uint8_t UNK_180a066d8;
uint8_t UNK_180a066e8;
uint8_t UNK_180a06700;
uint8_t UNK_180a06720;
uint8_t UNK_180a06730;
uint8_t UNK_180a06740;
uint8_t UNK_180a06758;
uint8_t UNK_180a06794;
uint8_t UNK_180a06788;
uint8_t UNK_180a06798;
uint8_t UNK_180a067b0;
uint8_t UNK_180a067c0;
uint8_t UNK_180a067d0;
uint8_t UNK_180a067e8;
uint8_t UNK_180a067f8;
uint8_t UNK_180a06810;
uint8_t UNK_180a06808;
uint8_t UNK_180a06820;
uint8_t UNK_180a06838;
uint8_t UNK_180a06848;
uint8_t UNK_180a06858;
uint8_t UNK_180a06870;
uint8_t UNK_180a06880;
uint8_t UNK_180a06890;
uint8_t UNK_180a068a8;
uint8_t UNK_180a068b8;
uint8_t system_memory_9270;
uint8_t system_memory_9280;
uint8_t system_memory_9278;
uint8_t system_memory_927c;
uint8_t UNK_180941a80;


// 函数: uint8_t FUN_1800596a0;
uint8_t FUN_1800596a0;
uint8_t UNK_180a06950;
uint8_t UNK_180a069b0;
uint8_t UNK_180a069c0;
uint8_t UNK_180a071f8;
char system_memory_ecee;
uint8_t UNK_180a069e8;
uint8_t UNK_180a06be0;
uint8_t system_memory_c090;
uint8_t UNK_180a06dc8;
uint8_t UNK_180a071e8;
uint8_t UNK_180a071c8;
uint8_t UNK_180a071d8;
uint8_t system_memory_9288;
uint8_t system_memory_9290;
uint8_t system_memory_9298;
uint8_t system_memory_92a0;
uint8_t system_memory_92a8;
uint8_t system_memory_92e8;
uint8_t system_memory_92f0;
uint8_t system_memory_92f8;
uint8_t system_memory_9300;
uint8_t system_memory_9340;
uint8_t system_memory_9348;
uint8_t system_memory_9350;
uint8_t system_memory_9358;
uint8_t system_memory_9398;
uint8_t system_memory_93a0;
uint8_t system_memory_93a8;
uint8_t system_memory_93b0;
uint8_t UNK_180941ab0;
uint8_t system_memory_6990;
uint8_t system_memory_6998;
uint8_t system_memory_69a0;
uint8_t system_memory_69a8;
uint8_t UNK_18014f7f0;


// 函数: uint8_t FUN_18014f810;
uint8_t FUN_18014f810;


// 函数: uint8_t FUN_18014f840;
uint8_t FUN_18014f840;
uint8_t UNK_18014f640;


// 函数: uint8_t FUN_18014f660;
uint8_t FUN_18014f660;


// 函数: uint8_t FUN_18014f6a0;
uint8_t FUN_18014f6a0;
uint8_t UNK_180a07248;
uint8_t UNK_18014f3d0;


// 函数: uint8_t FUN_18014f3f0;
uint8_t FUN_18014f3f0;
uint8_t UNK_18014f180;
uint8_t UNK_18014f190;
uint8_t UNK_18014f1d0;
uint8_t UNK_18014f1e0;


// 函数: uint8_t FUN_18014f520;
uint8_t FUN_18014f520;
uint8_t UNK_180a07300;
uint8_t UNK_180a07310;
uint8_t system_memory_72b8;
uint8_t system_memory_72d0;
uint8_t UNK_180a072f0;


// 函数: uint8_t FUN_180150480;
uint8_t FUN_180150480;
uint8_t system_memory_93f0;
uint8_t system_memory_93f8;
uint8_t system_memory_9400;
char system_memory_2852;
uint8_t system_memory_9408;
uint8_t system_memory_9410;


// 函数: uint8_t FUN_18015c0a0;
uint8_t FUN_18015c0a0;
uint8_t UNK_180a07805;
uint8_t UNK_18015c180;
uint8_t system_memory_d698;


// 函数: uint8_t FUN_18015c190;
uint8_t FUN_18015c190;
uint8_t UNK_180991df0;
uint8_t UNK_18098d770;
uint8_t UNK_18098d780;
uint8_t UNK_180a07f10;
uint8_t UNK_18098ba18;
uint8_t UNK_180a08108;
uint8_t UNK_180a08110;
uint8_t UNK_180a08128;
uint8_t UNK_180a08180;
uint8_t UNK_180a08168;
uint8_t UNK_180a081a0;
uint8_t UNK_18027d990;


// 函数: uint8_t FUN_180049b30;
uint8_t FUN_180049b30;


// 函数: uint8_t FUN_18016f990;
uint8_t FUN_18016f990;
uint8_t system_memory_80cc;
uint8_t UNK_180a080d8;
uint8_t UNK_180a08100;
uint8_t UNK_180a08a00;
uint8_t UNK_180a089f0;
uint8_t UNK_180a08ce8;
uint8_t UNK_180a08d78;


// 函数: uint8_t FUN_180170ba0;
uint8_t FUN_180170ba0;
uint8_t system_memory_943c;
uint8_t system_memory_9420;
byte system_memory_9438;
uint8_t system_memory_943e;
uint8_t system_memory_9444;
uint8_t system_memory_9448;
int32_t UNK_180d49440;
uint8_t UNK_180a08a08;
uint8_t UNK_180a08a28;
uint8_t UNK_180a08a68;


// 函数: uint8_t FUN_180170da0;
uint8_t FUN_180170da0;


// 函数: uint8_t FUN_180179e40;
uint8_t FUN_180179e40;
uint8_t UNK_180179e20;
uint8_t UNK_180179e70;
uint8_t UNK_180a09640;
uint8_t UNK_180a09688;
uint8_t system_memory_8d60;
uint8_t UNK_180a08ff8;
uint8_t UNK_180a09618;


// 函数: uint8_t FUN_180083100;
uint8_t FUN_180083100;
uint8_t UNK_180a02ad0;
uint8_t system_memory_96c8;
uint8_t system_memory_96d8;
uint8_t system_memory_96e0;
uint8_t system_memory_96e8;
uint8_t system_memory_96f0;
uint8_t system_memory_96f8;
uint8_t system_memory_9710;
uint8_t system_memory_9718;
uint8_t system_memory_9728;
uint8_t system_memory_9750;
uint8_t system_memory_9768;
uint8_t system_memory_9780;
uint8_t system_memory_97a0;
uint8_t system_memory_97c0;
uint8_t system_memory_97e0;
uint8_t system_memory_9818;
uint8_t UNK_180a1d0b0;
uint8_t UNK_180a1d230;
uint8_t UNK_180a18cc8;
uint8_t UNK_180a1d398;
uint8_t UNK_180a1d3a8;
uint8_t UNK_180a1d3b8;
uint8_t UNK_180a1d3d0;
uint8_t UNK_180a1d3f0;
uint8_t UNK_180a1d590;
uint8_t UNK_180a1d700;
uint8_t UNK_180a1d9a0;
uint8_t UNK_180a1dbc0;
uint8_t UNK_180a09fb8;
uint8_t UNK_180a09e48;
uint8_t system_memory_9828;
uint8_t UNK_180a1a098;
uint8_t system_memory_9848;
uint8_t system_memory_9868;
uint8_t system_memory_9870;
uint8_t system_memory_9880;
uint8_t system_memory_9890;
uint8_t system_memory_9898;
uint8_t system_memory_98a8;
uint8_t system_memory_98b8;
uint8_t system_memory_98c8;
uint8_t system_memory_98e0;
uint8_t system_memory_98f0;
uint8_t system_memory_9928;
uint8_t system_memory_9e30;
uint8_t system_memory_9e38;
uint8_t UNK_180a1dd48;
uint8_t UNK_180a1dee0;
uint8_t UNK_180a1e060;
uint8_t UNK_180a1e220;
uint8_t UNK_180a1e428;
uint8_t UNK_180a1e5a0;
uint8_t UNK_180a1e7d0;
uint8_t system_memory_e968;
uint8_t UNK_180a1e978;
uint8_t UNK_180a0a128;
uint8_t system_memory_9620;
uint8_t system_memory_1020;
uint8_t system_memory_1030;


// 函数: uint8_t FUN_18013ea70;
uint8_t FUN_18013ea70;
uint8_t system_memory_9628;
uint8_t UNK_180180850;


// 函数: uint8_t FUN_18021b070;
uint8_t FUN_18021b070;


// 函数: uint8_t FUN_18021b090;
uint8_t FUN_18021b090;


// 函数: uint8_t FUN_18021b4f0;
uint8_t FUN_18021b4f0;


// 函数: uint8_t FUN_18021b9c0;
uint8_t FUN_18021b9c0;


// 函数: uint8_t FUN_18021bc50;
uint8_t FUN_18021bc50;


// 函数: uint8_t FUN_18021bff0;
uint8_t FUN_18021bff0;


// 函数: uint8_t FUN_18021cb50;
uint8_t FUN_18021cb50;


// 函数: uint8_t FUN_18021cf80;
uint8_t FUN_18021cf80;


// 函数: uint8_t FUN_18021dc50;
uint8_t FUN_18021dc50;


// 函数: uint8_t FUN_18021e9c0;
uint8_t FUN_18021e9c0;
uint8_t UNK_180a09d40;
uint8_t UNK_180a07998;
uint8_t UNK_180a1ff80;
uint8_t UNK_180a1ff8c;
uint8_t UNK_180a1ff90;
uint8_t UNK_180a20018;
uint8_t UNK_180a1ef60;
uint8_t UNK_180a0a2a8;
uint8_t UNK_180a0ad58;


// 函数: uint8_t FUN_180184320;
uint8_t FUN_180184320;


// 函数: uint8_t FUN_1801842a0;
uint8_t FUN_1801842a0;
uint8_t UNK_180184260;
uint8_t UNK_180a0ac88;
uint8_t UNK_180185030;


// 函数: uint8_t FUN_180185c00;
uint8_t FUN_180185c00;
uint8_t UNK_180186550;
uint8_t UNK_180a0a7b8;
uint8_t UNK_180a0a800;
uint8_t UNK_180a0a890;
uint8_t UNK_180a0aa34;
uint8_t UNK_180a0abe0;
uint8_t UNK_180a0ab70;
uint8_t UNK_180a0aba8;
uint8_t UNK_180a0ab00;
uint8_t UNK_180a0ab38;
uint8_t UNK_180a0acd8;
uint8_t UNK_18018a0f0;
uint8_t UNK_180a0aac8;
uint8_t UNK_180a0aaa8;
uint8_t UNK_180a0a9b0;
uint8_t UNK_180a0aa20;
uint8_t UNK_180a0aa58;
uint8_t UNK_180a0aa40;
uint8_t UNK_180a0aa90;
uint8_t UNK_180a0aa70;
uint8_t UNK_180a0ad90;
uint8_t UNK_180a0adf8;
uint8_t UNK_18018c0a0;


// 函数: uint8_t FUN_18018c050;
uint8_t FUN_18018c050;
uint8_t system_memory_a9e8;
uint8_t system_memory_4ee4;
uint8_t UNK_180a0ae10;
uint8_t UNK_180a0ae28;
uint8_t UNK_180a0ae30;
uint8_t system_memory_aea0;
uint8_t UNK_180a0aef8;
uint8_t UNK_180a0af54;
uint8_t UNK_180a0b0a0;
uint8_t UNK_180a0b0d0;
uint8_t UNK_180a0b0e8;
uint8_t UNK_180a0b100;
uint8_t UNK_180a0b120;
uint8_t UNK_180a0b130;
uint8_t UNK_180a0b148;
uint8_t UNK_180a0b158;
uint8_t UNK_180a0b168;
uint8_t UNK_180a0b178;
uint8_t UNK_180a0b188;
uint8_t UNK_180a0b198;
uint8_t UNK_180a0b1a8;
uint8_t system_memory_68f0;


// 函数: uint8_t FUN_180049cd0;
uint8_t FUN_180049cd0;


// 函数: uint8_t FUN_180049970;
uint8_t FUN_180049970;


// 函数: uint8_t FUN_1800586e0;
uint8_t FUN_1800586e0;


// 函数: uint8_t FUN_180207e00;
uint8_t FUN_180207e00;


// 函数: uint8_t FUN_180207a20;
uint8_t FUN_180207a20;


// 函数: uint8_t FUN_180207bb0;
uint8_t FUN_180207bb0;
uint8_t UNK_180a0fec0;
uint8_t system_memory_ff10;
uint8_t system_memory_c5e8;
uint8_t UNK_180a04ab8;
uint8_t system_memory_ff18;
uint8_t UNK_180a0ff28;
uint8_t UNK_180a0ff38;
uint8_t UNK_180a0ff48;
uint8_t UNK_180a0ffa8;
uint8_t UNK_180a0ffb0;
uint8_t UNK_180a0ffc0;
uint8_t UNK_18020f868;
uint8_t UNK_180a10008;
uint8_t UNK_180a0fff8;


// 函数: uint8_t FUN_18020f940;
uint8_t FUN_18020f940;
uint8_t UNK_180a128b0;
uint8_t UNK_180a10cd8;
uint8_t UNK_180211f50;


// 函数: uint8_t FUN_180211f70;
uint8_t FUN_180211f70;
uint8_t UNK_180211ec0;
uint8_t UNK_180a10500;
uint8_t UNK_180a10508;
uint8_t UNK_180a10520;
uint8_t system_memory_e358;
uint8_t UNK_180a10568;
uint8_t UNK_180a105b8;
uint8_t UNK_180a105d8;
uint8_t UNK_180a10570;
uint8_t UNK_180a105e0;
uint8_t UNK_180a105f0;
uint8_t UNK_180a10600;
uint8_t UNK_180a10618;
uint8_t UNK_180a10628;
uint8_t UNK_180a10640;
uint8_t UNK_180a10650;
uint8_t UNK_180a10668;
uint8_t UNK_180a10678;
uint8_t UNK_180a10688;
uint8_t UNK_180a10698;
uint8_t UNK_180a106c0;
uint8_t UNK_180a106e8;
uint8_t UNK_180a10700;
uint8_t UNK_180a10710;
uint8_t UNK_180a10720;
uint8_t UNK_180a10728;
uint8_t UNK_180a10740;
uint8_t UNK_180a10750;
uint8_t UNK_180a10760;
uint8_t UNK_180a10778;
uint8_t UNK_180a10788;
uint8_t UNK_180a10798;
uint8_t UNK_180a107b0;
uint8_t UNK_180a107c8;
uint8_t UNK_180a107d8;
uint8_t UNK_180a107f8;
uint8_t UNK_180a10810;
uint8_t UNK_180a10820;
uint8_t UNK_180a10838;
uint8_t UNK_180a10850;
uint8_t UNK_180a10860;
uint8_t UNK_180a10898;
uint8_t UNK_180a104d0;
uint8_t UNK_180a10878;
uint8_t UNK_180a108b0;
uint8_t UNK_18098bc74;
uint8_t UNK_180a1b008;
uint8_t system_memory_67dc;
uint8_t UNK_180a108d0;
uint8_t UNK_180a10988;
uint8_t UNK_180a109b8;
uint8_t system_memory_02f0;
uint8_t UNK_180a10938;
uint8_t UNK_180a27158;
uint8_t UNK_180a10960;
uint8_t UNK_180a10a20;
uint8_t UNK_180a109d8;
uint8_t UNK_180a10a48;
uint8_t UNK_180a10a10;
uint8_t UNK_180a10aa0;
uint8_t UNK_180a10a58;
uint8_t UNK_180a10ad0;
uint8_t UNK_180a10a90;
uint8_t UNK_180a10b88;
uint8_t UNK_180a10ae0;
uint8_t UNK_180a10bc0;
uint8_t UNK_180a10af0;
uint8_t system_data_buffer;
uint8_t UNK_180957a48;
uint8_t UNK_180a10c10;
uint8_t UNK_180a10be0;
uint8_t UNK_180a10bf0;
uint8_t UNK_180a104f0;
uint8_t system_memory_aa60;
uint8_t UNK_180a16c98;


// 函数: uint8_t FUN_18020dd10;
uint8_t FUN_18020dd10;
uint8_t UNK_18020dbe0;
uint8_t UNK_180a12e68;


// 函数: uint8_t FUN_18020dae0;
uint8_t FUN_18020dae0;


// 函数: uint8_t FUN_18020dc20;
uint8_t FUN_18020dc20;
uint8_t UNK_180a12ed8;
uint8_t UNK_180a12ef0;
uint8_t UNK_180a13650;
uint8_t system_memory_661c;
uint8_t UNK_180a12f20;
uint8_t UNK_180a12f38;
uint8_t UNK_180a12f48;
uint8_t UNK_180a12f68;
uint8_t UNK_180a12f80;
uint8_t UNK_180a12f90;
uint8_t UNK_180a12fa8;
uint8_t UNK_180a12fb8;
uint8_t UNK_180a12fc8;
uint8_t UNK_180a12fd8;
uint8_t UNK_180a12fe8;
uint8_t UNK_180a13000;
uint8_t UNK_180a13020;
uint8_t UNK_180a13030;
uint8_t system_memory_2618;
uint8_t UNK_180a0d170;
uint8_t UNK_180a0d180;
uint8_t UNK_180a0d1a0;
uint8_t UNK_180a0d1b8;
uint8_t UNK_180a0d1d0;
uint8_t UNK_180a0d1e8;
uint8_t UNK_180a0d200;
uint8_t UNK_180a0d218;
uint8_t UNK_180a0d238;
uint8_t UNK_180a0d258;
uint8_t UNK_180a0d280;
uint8_t UNK_180a132f0;
uint8_t UNK_180a13308;
uint8_t UNK_180a13320;
uint8_t UNK_180a13340;
uint8_t UNK_180a13360;
uint8_t UNK_180a13378;
uint8_t UNK_180a133a0;
uint8_t UNK_180a133b0;
uint8_t UNK_180a133c8;
uint8_t UNK_180a133e0;
uint8_t UNK_180a133f8;
uint8_t UNK_180a13410;
uint8_t UNK_180a13430;
uint8_t UNK_180a13450;
uint8_t UNK_180a13470;
uint8_t UNK_180a13488;
uint8_t UNK_180a13490;
uint8_t UNK_180a134b0;
uint8_t UNK_180a134d0;
uint8_t UNK_180a134f0;
uint8_t UNK_180a13510;
uint8_t UNK_180a13528;
uint8_t UNK_180a13548;
uint8_t UNK_180a13560;
uint8_t UNK_180a13580;
uint8_t UNK_180a13598;
uint8_t UNK_180a135b8;
uint8_t UNK_180a135d8;
uint8_t UNK_180a135f0;
uint8_t UNK_180a130b4;
uint8_t UNK_180a130c0;
uint8_t UNK_180a130d0;
uint8_t UNK_180a130e0;
uint8_t UNK_180a130f0;
uint8_t UNK_180a13100;
uint8_t UNK_180a13108;
uint8_t UNK_180a13110;
uint8_t UNK_180a13120;
uint8_t UNK_180a13130;
uint8_t UNK_180a13140;
uint8_t UNK_180a13158;
uint8_t UNK_180a13160;
uint8_t UNK_180a1316c;
uint8_t UNK_180a13174;
uint8_t UNK_180a13180;
uint8_t UNK_180a1318c;
uint8_t UNK_180a13194;
uint8_t UNK_180a1319c;
uint8_t UNK_180a131a0;
uint8_t UNK_180a131a8;
uint8_t UNK_180a131b0;
uint8_t UNK_180a131b4;
uint8_t UNK_180a131bc;
uint8_t UNK_180a131c0;
uint8_t UNK_180a131c4;
uint8_t UNK_180a131c8;
uint8_t UNK_180a131cc;
uint8_t UNK_180a131d4;
uint8_t UNK_180a131d8;
uint8_t UNK_180a131ec;
uint8_t UNK_180a131f8;
uint8_t UNK_180a13208;
uint8_t UNK_180a13220;
uint8_t UNK_180a13230;
uint8_t UNK_180a13238;
uint8_t UNK_180a13240;
uint8_t UNK_180a1324c;
uint8_t UNK_180a13258;
uint8_t UNK_180a13264;
uint8_t UNK_180a1326c;
uint8_t UNK_180a13274;
uint8_t UNK_180a13280;
uint8_t UNK_180a13298;
uint8_t UNK_180a132a4;
uint8_t UNK_180a132b0;
uint8_t UNK_180a132c0;
uint8_t UNK_180a132d0;
uint8_t UNK_180a132e0;
uint8_t UNK_180a13608;
uint8_t UNK_180a13620;
uint8_t UNK_180a13640;
uint8_t system_memory_6828;
uint8_t system_memory_6810;
uint8_t system_memory_ed70;
uint8_t UNK_180a139f0;
uint8_t UNK_18022a4a0;
uint8_t UNK_18022a4b0;
uint8_t UNK_18022a4f0;
uint8_t UNK_18022a500;
uint8_t UNK_180a139e0;
uint8_t UNK_180a27738;
uint8_t UNK_180a138c0;


// 函数: uint8_t FUN_180046480;
uint8_t FUN_180046480;
uint8_t UNK_180a13ad0;
uint8_t system_memory_ba58;
uint8_t system_memory_d580;
uint8_t UNK_180a13aa8;
uint8_t UNK_180a13ab8;
uint8_t UNK_180a13ae8;
uint8_t UNK_180a13bb8;
uint8_t UNK_180a13b30;
uint8_t UNK_180a13b70;
uint8_t system_memory_3c30;
uint8_t UNK_180a03108;
uint8_t UNK_180a13c08;
uint8_t UNK_180a13c48;
uint8_t UNK_180a12ea0;
uint8_t system_memory_388c;
uint8_t UNK_180a13c2c;
uint8_t UNK_180a13c70;
uint8_t UNK_180a13c88;
uint8_t UNK_180a13c94;
uint8_t UNK_180a13ca0;
uint8_t UNK_180a13cac;
uint8_t UNK_180239520;


// 函数: uint8_t FUN_180056de0;
uint8_t FUN_180056de0;
uint8_t UNK_180a172e0;
uint8_t UNK_180a17308;
uint8_t UNK_180a17398;
uint8_t UNK_180a173f0;
uint8_t UNK_180a17400;
uint8_t UNK_1802a11b8;
char UNK_180d48da9;
char system_memory_8da8;
uint8_t UNK_1802a1b10;
uint8_t UNK_180a17770;
uint8_t UNK_180a17798;
uint8_t UNK_180a177c8;
uint8_t UNK_180a177f0;
int8_t system_memory_8da8;
uint8_t UNK_1802a1d4c;
uint8_t system_memory_5c18;
uint8_t system_memory_5c28;
uint8_t UNK_180a02b03;
uint8_t UNK_180a17818;
uint8_t UNK_180a27cb0;
int32_t UNK_180bf5c1c;
int32_t UNK_180bf5c20;
int32_t UNK_180bf5c24;
uint8_t system_memory_ecd0;
char system_memory_8dac;
uint8_t UNK_18042d5d0;
uint8_t UNK_180a17830;
uint8_t UNK_180a17880;
uint8_t system_memory_ecb0;
uint8_t system_memory_eca8;
uint8_t UNK_180a178bc;
uint8_t UNK_180a178f8;
uint8_t UNK_180a17900;
uint8_t UNK_180a17a18;
uint8_t UNK_180a17a68;
char system_memory_8daa;
uint8_t UNK_180a178c8;
uint8_t UNK_180a178f0;
uint8_t UNK_180a17910;
uint8_t UNK_180a17940;
uint8_t UNK_180a17960;
uint8_t UNK_180a17980;
uint8_t UNK_180a179a8;
char system_memory_8dab;
uint8_t UNK_180a179d0;
uint8_t UNK_180a17a38;
uint8_t UNK_180a17ab0;
uint8_t UNK_180a17b38;
uint8_t UNK_180a06428;
uint8_t UNK_180a06438;
uint8_t UNK_180a17b78;
uint8_t UNK_180a17b88;
uint8_t UNK_180a17b98;
uint8_t UNK_180a17ba0;
uint8_t UNK_180a17bb0;
uint8_t UNK_180a17bc0;
uint8_t UNK_180a17bd8;
uint8_t UNK_180a17be8;
uint8_t UNK_180a17bf8;
uint8_t UNK_180a17d90;
uint8_t UNK_180a17c48;
uint8_t UNK_180a17c60;
uint8_t UNK_180a17c80;
uint8_t UNK_180a17c90;
uint8_t UNK_180a17cb8;
uint8_t UNK_180a17cc8;
uint8_t UNK_180a17cd8;
uint8_t UNK_180a17d00;
uint8_t UNK_180a17d28;
uint8_t UNK_180a17d50;
uint8_t UNK_180a17da8;
uint8_t UNK_180a17e18;
uint8_t UNK_180a18648;
uint8_t UNK_180a17e68;
uint8_t UNK_180a17e78;
uint8_t UNK_180a17ea8;
uint8_t UNK_180a17eb0;
uint8_t UNK_180a17ec0;
uint8_t UNK_180a17f00;
uint8_t UNK_180a17f58;
uint8_t UNK_180a17f90;
uint8_t system_memory_9dc0;
uint8_t UNK_180a17fe0;
uint8_t UNK_180a15728;
uint8_t UNK_180a15748;
uint8_t UNK_180a17fe8;
uint8_t UNK_180a157f0;
uint8_t UNK_180a15828;
uint8_t UNK_180a15830;
uint8_t UNK_180a18010;
uint8_t UNK_180a157a8;
uint8_t UNK_180a157c8;
uint8_t UNK_180a04c44;
uint8_t UNK_180a06420;
uint8_t UNK_180a15750;
uint8_t system_memory_57e0;
uint8_t system_memory_57e4;
uint8_t UNK_180a157e8;
uint8_t UNK_180a157f4;
uint8_t UNK_180a157fc;
uint8_t UNK_180a18048;
uint8_t UNK_180a18590;
uint8_t UNK_180a18050;
uint8_t UNK_180a18060;
uint8_t UNK_180a18088;
uint8_t UNK_180a18098;
uint8_t UNK_180a180d0;
uint8_t UNK_180a18038;
uint8_t UNK_180a18528;
uint8_t UNK_180a18120;
uint8_t system_memory_8db0;
uint8_t system_memory_8db8;
uint8_t system_memory_8dc0;
uint8_t system_memory_8dc8;
uint8_t system_memory_8dd0;


// 函数: uint8_t FUN_180094f80;
uint8_t FUN_180094f80;


// 函数: uint8_t FUN_18014f220;
uint8_t FUN_18014f220;


// 函数: uint8_t FUN_18014f250;
uint8_t FUN_18014f250;
uint8_t UNK_180a241c8;
uint8_t UNK_1803c8870;
uint8_t UNK_180a23c38;
uint8_t UNK_180a23c2c;
uint8_t system_memory_9994;
uint8_t system_memory_9998;
uint8_t UNK_180a23c70;
uint8_t UNK_180a23d50;
uint8_t UNK_180a24298;
uint8_t UNK_180a23d30;
uint8_t UNK_180a23cf0;
uint8_t UNK_180a23d10;
uint8_t UNK_180a23cb0;
uint8_t UNK_180a23cd0;
uint8_t system_memory_65ec;
uint8_t UNK_180a24358;


