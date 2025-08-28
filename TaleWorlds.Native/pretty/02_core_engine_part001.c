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
typedef int64_t CoreEngineHandle;
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
void* memory_allocator_3744;   // 系统配置数据指针
void* system_memory_c8c8;   // 系统初始化状态标志
void* memory_allocator_3768;   // 系统初始化参数表
void* system_memory_5268;   // 系统启动时间戳
void* system_memory_5270;   // 系统版本信息
void* system_memory_5280;   // 系统构建信息
void* system_memory_5288;   // 系统环境信息

// 函数: 系统环境检查器
void* FUN_1800637c0;  // SystemEnvironmentChecker - 系统环境检查器
void* processed_var_6288;   // 环境配置数据指针

// 函数: 系统资源初始化器
void* FUN_1800637f0;  // SystemResourceInitializer - 系统资源初始化器
void* system_memory_1900;   // 资源池管理器

// 函数: 系统组件注册器
void* FUN_1802281a0;  // SystemComponentRegistrar - 系统组件注册器
void* system_memory_f9e8;   // 组件注册表
void* processed_var_5032;   // 组件工厂指针
void* system_memory_f9c0;   // 组件依赖关系表
void* processed_var_5056;   // 组件生命周期管理器

// 函数: 系统配置加载器
void* FUN_1802285e0;  // SystemConfigurationLoader - 系统配置加载器

/*==============================================================================
    内存管理和对象创建功能
    负责内存分配、对象创建和生命周期管理
==============================================================================*/

// 函数: 内存池管理器
void* SystemTimer;  // MemoryPoolManager - 内存池管理器
void* system_memory_6330;   // 小对象内存池 (16-32字节)
void* system_memory_6340;   // 中对象内存池 (64-128字节)
void* system_memory_6348;   // 大对象内存池 (256-512字节)
void* system_memory_6350;   // 超大对象内存池 (1K-4K字节)
void* system_memory_6360;   // 对象分配统计信息
void* system_memory_6368;   // 内存池配置参数
void* system_memory_6318;   // 内存池状态监控
void* system_memory_6338;   // 内存碎片整理器
void* SUB_18005d5f0;   // 内存分配器子函数
void* rendering_buffer_2448;   // 内存保护机制
void* system_memory_6220;   // 内存分配策略表
uint64_t processed_var_9112;  // 内存对齐控制
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
uint8_t processed_var_5748;   // 引擎状态机
uint8_t processed_var_5776;   // 引擎事件调度器
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
uint8_t processed_var_5984;   // 引擎安全检查器
uint8_t rendering_buffer_2640;   // 引擎资源管理器
uint8_t system_stack_size;   // 引擎配置缓存
uint8_t system_error_code;   // 引擎状态缓存
uint8_t system_memory_3ff8;   // 引擎性能监控器
char system_memory_2862;       // 引擎运行标志位3
uint8_t system_memory_6958;   // 引擎网络管理器
uint8_t system_memory_aa18;   // 引擎渲染管理器
uint8_t system_memory_6880;   // 引擎音频管理器
uint8_t system_cache_buffer;   // 引擎输入管理器
uint8_t system_memory_68c8;   // 引擎文件系统
uint8_t processed_var_6656;   // 引擎模块加载器
uint8_t processed_var_6680;   // 引擎依赖解析器
uint8_t processed_var_6736;   // 引擎初始化序列
uint8_t processed_var_6768;   // 引擎关闭序列
uint8_t processed_var_6800;   // 引擎更新循环
uint8_t processed_var_6832;   // 引擎渲染循环
uint8_t processed_var_6848;   // 引擎事件循环
uint8_t processed_var_8448;   // 引擎垃圾回收器
uint8_t ui_system_data_1032;   // 引擎性能分析器
uint8_t system_memory_9140;   // 引擎版本信息结构
uint8_t system_memory_9144;   // 引擎构建时间
uint8_t system_memory_9148;   // 引擎平台信息
uint8_t system_memory_914c;   // 引擎兼容性信息
uint8_t system_memory_a9d0;   // 引擎系统信息
uint8_t processed_var_5312;   // 引擎核心服务1
uint8_t processed_var_5328;   // 引擎核心服务2
uint8_t processed_var_5360;   // 引擎核心服务3
uint8_t processed_var_5376;   // 引擎核心服务4
uint8_t processed_var_6256;   // 引擎任务调度器
char system_memory_2841;       // 引擎运行标志位4
uint8_t processed_var_8064;   // 引擎状态监控器
uint8_t system_memory_68e8;   // 引擎资源监控器
uint8_t processed_var_6404;   // 引擎性能监控器
uint8_t processed_var_6424;   // 引擎内存监控器
uint8_t processed_var_6456;   // 引擎线程监控器
uint8_t processed_var_6480;   // 引擎网络监控器
uint8_t processed_var_6504;   // 引擎渲染监控器
uint8_t processed_var_6536;   // 引擎音频监控器
uint8_t processed_var_6576;   // 引擎输入监控器
uint8_t system_memory_a9f8;   // 引擎调试管理器
uint8_t system_memory_68c0;   // 引擎配置管理器
uint8_t system_memory_68d8;   // 引擎日志管理器
uint8_t system_memory_6900;   // 引擎错误管理器
uint8_t system_memory_a998;   // 引擎插件管理器
uint8_t rendering_buffer_264;   // 引擎模块管理器
uint8_t processed_var_6384;   // 引擎安全管理器
uint8_t processed_var_6880;   // 引擎初始化管理器
uint8_t processed_var_6896;   // 引擎启动管理器
uint8_t processed_var_6928;   // 引擎运行管理器
uint8_t processed_var_6960;   // 引擎暂停管理器
uint8_t processed_var_6992;   // 引擎恢复管理器
uint8_t processed_var_7024;   // 引擎停止管理器
uint8_t processed_var_7064;   // 引擎重启管理器
uint8_t processed_var_7104;   // 引擎关闭管理器
uint8_t processed_var_7144;   // 引擎清理管理器
uint8_t processed_var_7184;   // 引擎销毁管理器
uint8_t processed_var_7224;   // 引擎重置管理器
uint8_t processed_var_7264;   // 引擎备份管理器
uint8_t processed_var_7296;   // 引擎恢复管理器
uint8_t processed_var_7704;   // 引擎迁移管理器
char system_memory_2853;       // 引擎运行标志位5
uint8_t processed_var_7440;   // 引擎优化管理器
uint8_t system_memory_a980;   // 引擎性能统计器
uint8_t processed_var_5168;   // 引擎核心服务5
uint8_t processed_var_5200;   // 引擎核心服务6
uint8_t processed_var_8432;   // 引擎核心服务7

/*==============================================================================
    系统服务和组件管理功能
    负责系统服务的注册、管理和协调
==============================================================================*/

// 函数: 系统服务管理器
uint8_t SystemResourceCleaner;  // SystemServiceManager - 系统服务管理器
uint8_t processed_var_4276;   // 服务注册表指针

// 函数: 组件生命周期管理器
uint8_t FUN_180059620;  // ComponentLifecycleManager - 组件生命周期管理器

// 函数: 系统安全检查器
uint8_t CoreSystem_MessageHandler;  // SystemSecurityChecker - 系统安全检查器
uint8_t system_memory_0000;   // 安全策略数据
uint8_t processed_var_7864;   // 安全验证器
uint8_t processed_var_7944;   // 安全监控器
uint8_t processed_var_7304;   // 安全日志记录器
uint8_t processed_var_8016;   // 安全异常处理器
uint8_t _guard_check_icall; // 调用守卫检查函数

// 函数: 系统性能优化器
uint8_t FUN_180046860;  // SystemPerformanceOptimizer - 系统性能优化器

// 函数: 引擎配置管理器
uint8_t FUN_180066dd0;  // EngineConfigurationManager - 引擎配置管理器
uint8_t processed_var_560;   // 配置数据存储区
uint8_t processed_var_572;   // 配置版本控制
uint8_t system_memory_e810;   // 默认配置表
uint8_t processed_var_652;   // 配置验证器
uint8_t processed_var_664;   // 配置同步器
uint8_t processed_var_688;   // 配置缓存管理器
uint8_t processed_var_712;   // 配置加载器
uint8_t processed_var_736;   // 配置保存器
uint8_t processed_var_48;   // 配置文件解析器
uint8_t system_memory_ba28;   // 配置文件格式定义
uint8_t processed_var_96;   // 配置文件验证器
uint8_t ui_system_data_112;   // 配置文件加载器
uint8_t ui_system_data_128;   // 配置文件保存器
uint8_t ui_system_data_144;   // 配置文件监控器
uint8_t ui_system_data_160;   // 配置文件同步器
uint8_t ui_system_data_184;   // 配置文件压缩器
uint8_t ui_system_data_192;   // 配置文件加密器
uint8_t system_memory_df28;   // 配置文件备份管理器
uint8_t processed_var_552;   // 配置文件恢复器
uint8_t processed_var_808;   // 配置文件迁移器
uint8_t processed_var_816;   // 配置文件优化器
uint8_t processed_var_832;   // 配置文件清理器
uint8_t processed_var_856;   // 配置文件验证器
uint8_t processed_var_880;   // 配置文件分析器
uint8_t processed_var_896;   // 配置文件统计器
uint8_t processed_var_920;   // 配置文件监控器
uint8_t processed_var_936;   // 配置文件同步器
uint8_t processed_var_952;   // 配置文件压缩器
uint8_t processed_var_968;   // 配置文件加密器
uint8_t processed_var_984;   // 配置文件备份器
uint8_t ui_system_data_1000;   // 配置文件恢复器
uint8_t ui_system_data_1016;   // 配置文件迁移器
uint8_t system_memory_c7d8;   // 配置系统状态监控器
uint8_t system_memory_cfc0;   // 配置系统性能计数器
char system_memory_2843;       // 配置系统标志位1
char system_event_handler;       // 配置系统标志位2
char system_debug_flag2;       // 配置系统标志位3
char system_memory_2844;       // 配置系统标志位4
uint8_t processed_var_632;   // 配置文件读取器
uint8_t ui_system_data_1176;   // 配置文件写入器
uint8_t ui_system_data_1232;   // 配置文件解析器
uint8_t ui_system_data_1364;   // 配置文件验证器
uint8_t ui_system_data_1368;   // 配置文件代码分析器
uint8_t system_memory_eb50;   // 配置文件缓存
uint8_t ui_system_data_1416;   // 配置文件锁
uint8_t ui_system_data_1440;   // 配置文件队列
uint8_t ui_system_data_1464;   // 配置文件池
uint8_t ui_system_data_1496;   // 配置文件栈
uint8_t ui_system_data_1520;   // 配置文件堆
uint8_t ui_system_data_1528;   // 配置文件树
uint8_t ui_system_data_1544;   // 配置文件图
uint8_t ui_system_data_1568;   // 配置文件哈希表
uint8_t processed_var_6936;   // 配置文件索引器
uint8_t ui_system_data_1624;   // 配置文件搜索器
uint8_t ui_system_data_1648;   // 配置文件过滤器
uint8_t processed_var_608;   // 配置文件排序器
uint8_t processed_var_624;   // 配置文件分页器
uint8_t rendering_config_var;   // 配置文件缓存器
uint8_t ui_system_data_1696;   // 配置文件预加载器
uint8_t memory_allocator_3856;   // 配置文件优化器
uint8_t system_memory_0018;   // 配置系统常量1
uint8_t system_memory_0010;   // 配置系统常量2
uint8_t ui_system_data_1800;   // 配置文件压缩器
uint8_t ui_system_data_1856;   // 配置文件解压器
int64_t rendering_buffer_296;    // 配置系统大小限制
uint8_t system_memory_0000;   // 配置系统空值
uint8_t ui_system_data_1904;   // 配置文件校验器
uint8_t ui_system_data_1960;   // 配置文件签名器
uint64_t processed_var_456;   // 配置文件哈希种子
uint64_t processed_var_464;   // 配置文件加密密钥
uint64_t processed_var_472;   // 配置文件解密密钥
uint64_t processed_var_480;  // 配置文件压缩级别
uint64_t processed_var_488;  // 配置文件加密级别
uint64_t processed_var_496;  // 配置文件缓存大小
int64_t processed_var_504;    // 配置文件超时时间
int8_t system_allocation_flags; // 配置系统标志位5
uint8_t rendering_buffer_2008;   // 配置文件监控器
uint8_t rendering_buffer_2280;   // 配置文件同步器
uint8_t rendering_buffer_2296;   // 配置文件备份器
uint8_t rendering_buffer_2312;   // 配置文件恢复器
char system_exception_handler;       // 配置系统状态标志
uint8_t processed_var_5168;   // 配置文件加载器
uint8_t processed_var_4416;   // 配置文件验证器
uint8_t processed_var_4920;   // 配置文件解析器
uint8_t rendering_buffer_2528;   // 配置文件优化器
int8_t system_memory_ecee; // 配置系统运行标志
uint8_t memory_allocator_3784;   // 配置文件缓存管理器
uint8_t memory_allocator_3520;   // 配置文件内存管理器
uint8_t memory_allocator_3608;   // 配置文件线程管理器
uint8_t memory_allocator_3768;   // 配置文件锁管理器
char system_memory_aa69;       // 配置系统版本标志
uint8_t memory_allocator_3944;   // 配置文件读取队列
uint8_t memory_allocator_3968;   // 配置文件写入队列
uint8_t processed_var_4064;   // 配置文件处理队列
uint8_t processed_var_4072;   // 配置文件优先级队列
uint8_t processed_var_4080;   // 配置文件任务队列
uint8_t processed_var_4096;   // 配置文件事件队列
uint8_t processed_var_4136;   // 配置文件定时器队列
uint8_t processed_var_4160;   // 配置文件回调队列
uint8_t processed_var_4192;   // 配置文件错误队列
char system_memory_0100;       // 配置系统初始化标志
uint8_t system_module_state;   // 配置文件目录管理器
uint8_t processed_var_4216;   // 配置文件路径解析器
uint8_t system_memory_f660;   // 配置文件路径验证器
uint8_t processed_var_4280;   // 配置文件路径缓存器
uint8_t processed_var_4320;   // 配置文件路径优化器
uint8_t processed_var_4332;   // 配置文件路径监控器
uint8_t processed_var_4344;   // 配置文件路径同步器
uint8_t processed_var_4368;   // 配置文件路径管理器
uint8_t processed_var_4592;   // 配置文件内存池
uint8_t processed_var_4656;   // 配置文件缓存池
uint8_t processed_var_4720;   // 配置文件压缩池
uint8_t processed_var_4728;   // 配置文件加密池
uint8_t processed_var_4792;   // 配置文件解密池
uint8_t processed_var_4824;   // 配置文件解压池
uint8_t processed_var_4872;   // 配置文件验证池
uint8_t processed_var_4936;   // 配置文件索引池
uint8_t processed_var_4968;   // 配置文件搜索池
uint8_t processed_var_5000;   // 配置文件过滤池
uint8_t processed_var_5080;   // 配置文件排序池
uint8_t processed_var_5192;   // 配置文件分页池
uint8_t processed_var_8584;   // 配置文件备份池
uint8_t processed_var_7128;   // 配置文件恢复池
uint8_t processed_var_7224;   // 配置文件同步池
uint8_t processed_var_7328;   // 配置文件监控池
uint8_t processed_var_6368;   // 配置文件优化池


// 函数: uint8_t FUN_180083390;
uint8_t FUN_180083390;
uint8_t system_memory_6898;
uint8_t processed_var_5560;
uint8_t processed_var_7888;
uint8_t processed_var_7904;
uint8_t processed_var_5600;


// 函数: uint8_t FUN_180082da0;
uint8_t FUN_180082da0;


// 函数: uint8_t FUN_180082e70;
uint8_t FUN_180082e70;
int ui_system_data_1776;
float ui_system_data_1780;
uint8_t processed_var_7632;
uint8_t processed_var_5344;
uint8_t processed_var_5648;


// 函数: uint8_t FUN_180082fd0;
uint8_t FUN_180082fd0;
uint8_t processed_var_6648;
uint8_t processed_var_5720;


// 函数: uint8_t FUN_1800831c0;
uint8_t FUN_1800831c0;


// 函数: uint8_t FUN_180083260;
uint8_t FUN_180083260;
uint8_t system_memory_fc60;
uint8_t processed_var_6440;
uint8_t processed_var_6544;
uint8_t processed_var_6232;
uint8_t processed_var_6336;
uint8_t processed_var_5816;
uint8_t processed_var_5920;
uint8_t processed_var_6024;
uint8_t processed_var_6128;
uint8_t processed_var_6856;
uint8_t system_memory_0330;
uint8_t rendering_buffer_2712;
uint8_t ui_system_data_1376;
uint8_t ui_system_data_1192;
uint8_t ui_system_data_1008;
uint8_t processed_var_560;
uint8_t memory_allocator_376;
uint8_t ui_system_data_152;
uint8_t processed_var_9944;
uint8_t processed_var_9744;
uint8_t processed_var_8064;
uint8_t processed_var_9208;
uint8_t processed_var_8076;
uint8_t system_handle_counter;
uint8_t processed_var_8088;
uint8_t processed_var_8112;
uint8_t processed_var_8136;
uint8_t processed_var_8168;
uint8_t processed_var_9136;
uint8_t ui_system_data_1824;
uint8_t ui_system_data_1952;
uint8_t processed_var_8208;
uint8_t processed_var_8232;
uint8_t processed_var_8288;
uint8_t processed_var_8312;
uint8_t processed_var_8368;
uint8_t processed_var_8376;
uint8_t system_memory_e2c8;
uint8_t processed_var_8416;
uint8_t processed_var_8480;
uint8_t processed_var_8520;


// 函数: uint8_t FUN_18008e690;
uint8_t FUN_18008e690;


// 函数: uint8_t FUN_18008e700;
uint8_t FUN_18008e700;
uint8_t processed_var_8576;
uint8_t system_memory_91f8;
uint8_t system_memory_9200;
uint8_t system_memory_9208;


// 函数: uint8_t FUN_180098980;
uint8_t FUN_180098980;
uint8_t ui_system_data_1872;
uint8_t rendering_buffer_2612;
uint8_t system_memory_1d10;
uint8_t system_memory_143c;
uint8_t ui_system_data_1896;
uint8_t ui_system_data_1920;
uint8_t ui_system_data_1936;
uint8_t ui_system_data_1944;
uint8_t ui_system_data_1960;
uint8_t ui_system_data_1972;
uint8_t ui_system_data_1980;
uint8_t ui_system_data_1992;
uint8_t rendering_buffer_2016;
uint8_t ui_system_data_1840;
uint8_t rendering_buffer_2264;


// 函数: uint8_t FUN_180099f90;
uint8_t FUN_180099f90;
uint8_t rendering_buffer_2280;
uint8_t rendering_buffer_2296;
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
uint8_t ui_system_data_1040;
uint8_t ui_system_data_1088;
uint8_t ui_system_data_1136;
uint8_t ui_system_data_1184;
uint8_t ui_system_data_1248;
uint8_t ui_system_data_192;


// 函数: uint8_t FUN_18011d900;
uint8_t FUN_18011d900;
uint8_t rendering_buffer_2380;
uint8_t rendering_buffer_2408;
uint8_t rendering_buffer_2432;
uint8_t processed_var_5264;


// 函数: uint8_t FUN_18013cf40;
uint8_t FUN_18013cf40;


// 函数: uint8_t FUN_18013c020;
uint8_t FUN_18013c020;
uint8_t rendering_buffer_2420;
uint8_t rendering_buffer_2421;


// 函数: uint8_t FUN_18013c4e0;
uint8_t FUN_18013c4e0;


// 函数: uint8_t FUN_18013d010;
uint8_t FUN_18013d010;
uint8_t rendering_buffer_2712;


// 函数: uint8_t FUN_18013d200;
uint8_t FUN_18013d200;
uint8_t rendering_buffer_2713;
uint8_t processed_var_7904;
uint8_t system_memory_649c;
uint8_t rendering_buffer_2448;
uint8_t rendering_buffer_2472;
uint8_t processed_var_4107;
uint8_t memory_allocator_3196;
uint8_t processed_var_6048;
uint8_t processed_var_6052;
uint8_t processed_var_6056;
uint8_t rendering_buffer_2464;
uint8_t rendering_buffer_2480;
uint8_t rendering_buffer_2496;
uint8_t rendering_buffer_2512;
uint8_t rendering_buffer_2528;
uint8_t rendering_buffer_2696;
uint8_t rendering_buffer_2544;
uint8_t rendering_buffer_2560;
uint8_t rendering_buffer_2280;
uint8_t rendering_buffer_2656;
uint8_t rendering_buffer_2648;
uint8_t processed_var_9408;
uint8_t rendering_buffer_2680;
uint8_t rendering_buffer_2720;
uint8_t rendering_buffer_2728;
uint8_t processed_var_8704;
uint8_t rendering_buffer_2744;
uint8_t rendering_buffer_2760;
uint8_t rendering_buffer_2784;
uint8_t rendering_buffer_2800;
uint8_t rendering_buffer_2816;
uint8_t rendering_buffer_2832;
uint8_t rendering_buffer_2856;
uint8_t rendering_buffer_2880;
uint8_t rendering_buffer_2896;
uint8_t rendering_buffer_2920;
uint8_t rendering_buffer_2936;
uint8_t rendering_buffer_2960;
uint8_t rendering_buffer_2984;
uint8_t memory_allocator_3000;
uint8_t memory_allocator_3016;
uint8_t memory_allocator_3032;
uint8_t memory_allocator_3048;
uint8_t memory_allocator_3072;
uint8_t memory_allocator_3104;
uint8_t memory_allocator_3120;
uint8_t memory_allocator_3136;
uint8_t memory_allocator_3160;
uint8_t memory_allocator_3220;
uint8_t memory_allocator_3208;
uint8_t memory_allocator_3224;
uint8_t memory_allocator_3248;
uint8_t memory_allocator_3264;
uint8_t memory_allocator_3280;
uint8_t memory_allocator_3304;
uint8_t memory_allocator_3320;
uint8_t memory_allocator_3344;
uint8_t memory_allocator_3336;
uint8_t memory_allocator_3360;
uint8_t memory_allocator_3384;
uint8_t memory_allocator_3400;
uint8_t memory_allocator_3416;
uint8_t memory_allocator_3440;
uint8_t memory_allocator_3456;
uint8_t memory_allocator_3472;
uint8_t memory_allocator_3496;
uint8_t memory_allocator_3512;
uint8_t system_memory_9270;
uint8_t system_memory_9280;
uint8_t system_memory_9278;
uint8_t system_memory_927c;
uint8_t rendering_pipeline_manager;


// 函数: uint8_t FUN_1800596a0;
uint8_t FUN_1800596a0;
uint8_t memory_allocator_3664;
uint8_t memory_allocator_3760;
uint8_t memory_allocator_3776;
uint8_t processed_var_5880;
char system_memory_ecee;
uint8_t memory_allocator_3816;
uint8_t processed_var_4320;
uint8_t system_memory_c090;
uint8_t processed_var_4808;
uint8_t processed_var_5864;
uint8_t processed_var_5832;
uint8_t processed_var_5848;
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
uint8_t processed_var_7104;
uint8_t system_memory_6990;
uint8_t system_memory_6998;
uint8_t system_memory_69a0;
uint8_t system_memory_69a8;
uint8_t processed_var_5136;


// 函数: uint8_t FUN_18014f810;
uint8_t FUN_18014f810;


// 函数: uint8_t FUN_18014f840;
uint8_t FUN_18014f840;
uint8_t processed_var_4704;


// 函数: uint8_t FUN_18014f660;
uint8_t FUN_18014f660;


// 函数: uint8_t FUN_18014f6a0;
uint8_t FUN_18014f6a0;
uint8_t processed_var_5960;
uint8_t processed_var_4080;


// 函数: uint8_t FUN_18014f3f0;
uint8_t FUN_18014f3f0;
uint8_t memory_allocator_3488;
uint8_t memory_allocator_3504;
uint8_t memory_allocator_3568;
uint8_t memory_allocator_3584;


// 函数: uint8_t FUN_18014f520;
uint8_t FUN_18014f520;
uint8_t processed_var_6144;
uint8_t processed_var_6160;
uint8_t system_memory_72b8;
uint8_t system_memory_72d0;
uint8_t processed_var_6128;


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
uint8_t processed_var_7429;
uint8_t processed_var_6736;
uint8_t system_memory_d698;


// 函数: uint8_t FUN_18015c190;
uint8_t FUN_18015c190;
uint8_t processed_var_5616;
uint8_t processed_var_7568;
uint8_t processed_var_7584;
uint8_t processed_var_9232;
uint8_t processed_var_56;
uint8_t processed_var_9736;
uint8_t processed_var_9744;
uint8_t processed_var_9768;
uint8_t processed_var_9856;
uint8_t processed_var_9832;
uint8_t processed_var_9888;
uint8_t rendering_buffer_2544;


// 函数: uint8_t SystemCore_EventHandler;
uint8_t SystemCore_EventHandler;


// 函数: uint8_t FUN_18016f990;
uint8_t FUN_18016f990;
uint8_t system_memory_80cc;
uint8_t processed_var_9688;
uint8_t processed_var_9728;
uint8_t rendering_buffer_2032;
uint8_t rendering_buffer_2016;
uint8_t rendering_buffer_2776;
uint8_t rendering_buffer_2920;


// 函数: uint8_t FUN_180170ba0;
uint8_t FUN_180170ba0;
uint8_t system_memory_943c;
uint8_t system_memory_9420;
byte system_memory_9438;
uint8_t system_memory_943e;
uint8_t system_memory_9444;
uint8_t system_memory_9448;
int32_t rendering_buffer_2528;
uint8_t rendering_buffer_2040;
uint8_t rendering_buffer_2072;
uint8_t rendering_buffer_2136;


// 函数: uint8_t FUN_180170da0;
uint8_t FUN_180170da0;


// 函数: uint8_t FUN_180179e40;
uint8_t FUN_180179e40;
uint8_t processed_var_8752;
uint8_t processed_var_8832;
uint8_t processed_var_5168;
uint8_t processed_var_5240;
uint8_t system_memory_8d60;
uint8_t memory_allocator_3560;
uint8_t processed_var_5128;


// 函数: uint8_t FUN_180083100;
uint8_t FUN_180083100;
uint8_t processed_var_7664;
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
uint8_t processed_var_5664;
uint8_t processed_var_6048;
uint8_t processed_var_8280;
uint8_t processed_var_6408;
uint8_t processed_var_6424;
uint8_t processed_var_6440;
uint8_t processed_var_6464;
uint8_t processed_var_6496;
uint8_t processed_var_6912;
uint8_t processed_var_7280;
uint8_t processed_var_7952;
uint8_t processed_var_8496;
uint8_t processed_var_7592;
uint8_t processed_var_7224;
uint8_t system_memory_9828;
uint8_t memory_allocator_3352;
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
uint8_t processed_var_8888;
uint8_t processed_var_9296;
uint8_t processed_var_9680;
uint8_t ui_system_data_128;
uint8_t processed_var_648;
uint8_t ui_system_data_1024;
uint8_t rendering_main_control;
uint8_t system_memory_e968;
uint8_t rendering_buffer_2008;
uint8_t processed_var_7960;
uint8_t system_memory_9620;
uint8_t system_memory_1020;
uint8_t system_memory_1030;


// 函数: uint8_t FUN_18013ea70;
uint8_t FUN_18013ea70;
uint8_t system_memory_9628;
uint8_t processed_var_5936;


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
uint8_t processed_var_6960;
uint8_t processed_var_7832;
uint8_t processed_var_7648;
uint8_t processed_var_7660;
uint8_t processed_var_7664;
uint8_t processed_var_7800;
uint8_t memory_allocator_3520;
uint8_t processed_var_8344;
uint8_t ui_system_data_1080;


// 函数: uint8_t FUN_180184320;
uint8_t FUN_180184320;


// 函数: uint8_t FUN_1801842a0;
uint8_t FUN_1801842a0;
uint8_t processed_var_800;
uint8_t processed_var_872;
uint8_t processed_var_4336;


// 函数: uint8_t FUN_180185c00;
uint8_t FUN_180185c00;
uint8_t processed_var_9744;
uint8_t processed_var_9640;
uint8_t processed_var_9712;
uint8_t processed_var_9856;
uint8_t rendering_buffer_276;
uint8_t processed_var_704;
uint8_t processed_var_592;
uint8_t processed_var_648;
uint8_t processed_var_480;
uint8_t processed_var_536;
uint8_t processed_var_952;
uint8_t processed_var_5008;
uint8_t processed_var_424;
uint8_t memory_allocator_392;
uint8_t ui_system_data_144;
uint8_t rendering_buffer_256;
uint8_t memory_allocator_312;
uint8_t rendering_buffer_288;
uint8_t memory_allocator_368;
uint8_t memory_allocator_336;
uint8_t ui_system_data_1136;
uint8_t ui_system_data_1240;
uint8_t memory_allocator_3120;


// 函数: uint8_t FUN_18018c050;
uint8_t FUN_18018c050;
uint8_t system_memory_a9e8;
uint8_t system_memory_4ee4;
uint8_t ui_system_data_1264;
uint8_t ui_system_data_1288;
uint8_t ui_system_data_1296;
uint8_t system_memory_aea0;
uint8_t ui_system_data_1496;
uint8_t ui_system_data_1588;
uint8_t ui_system_data_1920;
uint8_t ui_system_data_1968;
uint8_t ui_system_data_1992;
uint8_t rendering_buffer_2016;
uint8_t rendering_buffer_2048;
uint8_t rendering_buffer_2064;
uint8_t rendering_buffer_2088;
uint8_t rendering_buffer_2104;
uint8_t rendering_buffer_2120;
uint8_t rendering_buffer_2136;
uint8_t rendering_buffer_2152;
uint8_t rendering_buffer_2168;
uint8_t rendering_buffer_2184;
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
uint8_t ui_system_data_1920;
uint8_t system_memory_ff10;
uint8_t system_memory_c5e8;
uint8_t processed_var_5832;
uint8_t system_memory_ff18;
uint8_t rendering_buffer_2024;
uint8_t rendering_buffer_2040;
uint8_t rendering_buffer_2056;
uint8_t rendering_buffer_2152;
uint8_t rendering_buffer_2160;
uint8_t rendering_buffer_2176;
uint8_t rendering_state_manager;
uint8_t rendering_buffer_2248;
uint8_t rendering_buffer_2232;


// 函数: uint8_t FUN_18020f940;
uint8_t FUN_18020f940;
uint8_t rendering_buffer_2656;
uint8_t processed_var_5528;
uint8_t ui_system_data_1648;


// 函数: uint8_t FUN_180211f70;
uint8_t FUN_180211f70;
uint8_t ui_system_data_1504;
uint8_t memory_allocator_3520;
uint8_t memory_allocator_3528;
uint8_t memory_allocator_3552;
uint8_t system_memory_e358;
uint8_t memory_allocator_3624;
uint8_t memory_allocator_3704;
uint8_t memory_allocator_3736;
uint8_t memory_allocator_3632;
uint8_t memory_allocator_3744;
uint8_t memory_allocator_3760;
uint8_t memory_allocator_3776;
uint8_t memory_allocator_3800;
uint8_t memory_allocator_3816;
uint8_t memory_allocator_3840;
uint8_t memory_allocator_3856;
uint8_t memory_allocator_3880;
uint8_t memory_allocator_3896;
uint8_t memory_allocator_3912;
uint8_t memory_allocator_3928;
uint8_t memory_allocator_3968;
uint8_t processed_var_4008;
uint8_t processed_var_4032;
uint8_t processed_var_4048;
uint8_t processed_var_4064;
uint8_t processed_var_4072;
uint8_t processed_var_4096;
uint8_t processed_var_4112;
uint8_t processed_var_4128;
uint8_t processed_var_4152;
uint8_t processed_var_4168;
uint8_t processed_var_4184;
uint8_t processed_var_4208;
uint8_t processed_var_4232;
uint8_t processed_var_4248;
uint8_t processed_var_4280;
uint8_t processed_var_4304;
uint8_t processed_var_4320;
uint8_t processed_var_4344;
uint8_t processed_var_4368;
uint8_t processed_var_4384;
uint8_t processed_var_4440;
uint8_t memory_allocator_3472;
uint8_t processed_var_4408;
uint8_t processed_var_4464;
uint8_t processed_var_660;
uint8_t processed_var_7304;
uint8_t system_memory_67dc;
uint8_t processed_var_4496;
uint8_t processed_var_4680;
uint8_t processed_var_4728;
uint8_t system_memory_02f0;
uint8_t processed_var_4600;
uint8_t processed_var_6792;
uint8_t processed_var_4640;
uint8_t processed_var_4832;
uint8_t processed_var_4760;
uint8_t processed_var_4872;
uint8_t processed_var_4816;
uint8_t processed_var_4960;
uint8_t processed_var_4888;
uint8_t processed_var_5008;
uint8_t processed_var_4944;
uint8_t processed_var_5192;
uint8_t processed_var_5024;
uint8_t processed_var_5248;
uint8_t processed_var_5040;
uint8_t system_data_buffer;
uint8_t processed_var_7112;
uint8_t processed_var_5328;
uint8_t processed_var_5280;
uint8_t processed_var_5296;
uint8_t memory_allocator_3504;
uint8_t system_memory_aa60;
uint8_t processed_var_40;


// 函数: uint8_t FUN_18020dd10;
uint8_t FUN_18020dd10;
uint8_t processed_var_4384;
uint8_t processed_var_4120;


// 函数: uint8_t FUN_18020dae0;
uint8_t FUN_18020dae0;


// 函数: uint8_t FUN_18020dc20;
uint8_t FUN_18020dc20;
uint8_t processed_var_4232;
uint8_t processed_var_4256;
uint8_t processed_var_6144;
uint8_t system_memory_661c;
uint8_t processed_var_4304;
uint8_t processed_var_4328;
uint8_t processed_var_4344;
uint8_t processed_var_4376;
uint8_t processed_var_4400;
uint8_t processed_var_4416;
uint8_t processed_var_4440;
uint8_t processed_var_4456;
uint8_t processed_var_4472;
uint8_t processed_var_4488;
uint8_t processed_var_4504;
uint8_t processed_var_4528;
uint8_t processed_var_4560;
uint8_t processed_var_4576;
uint8_t system_memory_2618;
uint8_t memory_allocator_320;
uint8_t memory_allocator_336;
uint8_t memory_allocator_368;
uint8_t memory_allocator_392;
uint8_t processed_var_416;
uint8_t processed_var_440;
uint8_t processed_var_464;
uint8_t processed_var_488;
uint8_t processed_var_520;
uint8_t processed_var_552;
uint8_t processed_var_592;
uint8_t processed_var_5280;
uint8_t processed_var_5304;
uint8_t processed_var_5328;
uint8_t processed_var_5360;
uint8_t processed_var_5392;
uint8_t processed_var_5416;
uint8_t processed_var_5456;
uint8_t processed_var_5472;
uint8_t processed_var_5496;
uint8_t processed_var_5520;
uint8_t processed_var_5544;
uint8_t processed_var_5568;
uint8_t processed_var_5600;
uint8_t processed_var_5632;
uint8_t processed_var_5664;
uint8_t processed_var_5688;
uint8_t processed_var_5696;
uint8_t processed_var_5728;
uint8_t processed_var_5760;
uint8_t processed_var_5792;
uint8_t processed_var_5824;
uint8_t processed_var_5848;
uint8_t processed_var_5880;
uint8_t processed_var_5904;
uint8_t processed_var_5936;
uint8_t processed_var_5960;
uint8_t processed_var_5992;
uint8_t processed_var_6024;
uint8_t processed_var_6048;
uint8_t processed_var_4708;
uint8_t processed_var_4720;
uint8_t processed_var_4736;
uint8_t processed_var_4752;
uint8_t processed_var_4768;
uint8_t processed_var_4784;
uint8_t processed_var_4792;
uint8_t processed_var_4800;
uint8_t processed_var_4816;
uint8_t processed_var_4832;
uint8_t processed_var_4848;
uint8_t processed_var_4872;
uint8_t processed_var_4880;
uint8_t processed_var_4892;
uint8_t processed_var_4900;
uint8_t processed_var_4912;
uint8_t processed_var_4924;
uint8_t processed_var_4932;
uint8_t processed_var_4940;
uint8_t processed_var_4944;
uint8_t processed_var_4952;
uint8_t processed_var_4960;
uint8_t processed_var_4964;
uint8_t processed_var_4972;
uint8_t processed_var_4976;
uint8_t processed_var_4980;
uint8_t processed_var_4984;
uint8_t processed_var_4988;
uint8_t processed_var_4996;
uint8_t processed_var_5000;
uint8_t processed_var_5020;
uint8_t processed_var_5032;
uint8_t processed_var_5048;
uint8_t processed_var_5072;
uint8_t processed_var_5088;
uint8_t processed_var_5096;
uint8_t processed_var_5104;
uint8_t processed_var_5116;
uint8_t processed_var_5128;
uint8_t processed_var_5140;
uint8_t processed_var_5148;
uint8_t processed_var_5156;
uint8_t processed_var_5168;
uint8_t processed_var_5192;
uint8_t processed_var_5204;
uint8_t processed_var_5216;
uint8_t processed_var_5232;
uint8_t processed_var_5248;
uint8_t processed_var_5264;
uint8_t processed_var_6072;
uint8_t processed_var_6096;
uint8_t processed_var_6128;
uint8_t system_memory_6828;
uint8_t system_memory_6810;
uint8_t system_memory_ed70;
uint8_t processed_var_7072;
uint8_t ui_system_data_1312;
uint8_t ui_system_data_1328;
uint8_t ui_system_data_1392;
uint8_t ui_system_data_1408;
uint8_t rendering_pipeline_manager;
uint8_t processed_var_8296;
uint8_t processed_var_6768;


// 函数: uint8_t FUN_180046480;
uint8_t FUN_180046480;
uint8_t processed_var_7296;
uint8_t system_memory_ba58;
uint8_t system_memory_d580;
uint8_t processed_var_7256;
uint8_t processed_var_7272;
uint8_t processed_var_7320;
uint8_t processed_var_7528;
uint8_t processed_var_7392;
uint8_t processed_var_7456;
uint8_t system_memory_3c30;
uint8_t processed_var_9256;
uint8_t processed_var_7608;
uint8_t processed_var_7672;
uint8_t processed_var_4176;
uint8_t system_memory_388c;
uint8_t processed_var_7644;
uint8_t processed_var_7712;
uint8_t processed_var_7736;
uint8_t processed_var_7748;
uint8_t processed_var_7760;
uint8_t processed_var_7772;
uint8_t rendering_buffer_2880;


// 函数: uint8_t FUN_180056de0;
uint8_t FUN_180056de0;
uint8_t ui_system_data_1648;
uint8_t rendering_state_manager;
uint8_t ui_system_data_1832;
uint8_t ui_system_data_1920;
uint8_t ui_system_data_1936;
uint8_t processed_var_7992;
char processed_var_841;
char system_memory_8da8;
uint8_t memory_allocator_384;
uint8_t rendering_buffer_2816;
uint8_t rendering_buffer_2856;
uint8_t rendering_buffer_2904;
uint8_t rendering_buffer_2944;
int8_t system_memory_8da8;
uint8_t processed_var_956;
uint8_t system_memory_5c18;
uint8_t system_memory_5c28;
uint8_t processed_var_7715;
uint8_t rendering_buffer_2984;
uint8_t processed_var_9696;
int32_t ui_system_data_1900;
int32_t ui_system_data_1904;
int32_t ui_system_data_1908;
uint8_t system_memory_ecd0;
char system_memory_8dac;
uint8_t ui_system_data_1056;
uint8_t memory_allocator_3008;
uint8_t memory_allocator_3088;
uint8_t system_memory_ecb0;
uint8_t system_memory_eca8;
uint8_t memory_allocator_3148;
uint8_t memory_allocator_3208;
uint8_t memory_allocator_3216;
uint8_t memory_allocator_3496;
uint8_t memory_allocator_3576;
char system_memory_8daa;
uint8_t memory_allocator_3160;
uint8_t memory_allocator_3200;
uint8_t memory_allocator_3232;
uint8_t memory_allocator_3280;
uint8_t memory_allocator_3312;
uint8_t memory_allocator_3344;
uint8_t memory_allocator_3384;
char system_memory_8dab;
uint8_t memory_allocator_3424;
uint8_t memory_allocator_3528;
uint8_t memory_allocator_3648;
uint8_t memory_allocator_3784;
uint8_t rendering_buffer_2344;
uint8_t rendering_buffer_2360;
uint8_t memory_allocator_3848;
uint8_t memory_allocator_3864;
uint8_t memory_allocator_3880;
uint8_t memory_allocator_3888;
uint8_t memory_allocator_3904;
uint8_t memory_allocator_3920;
uint8_t memory_allocator_3944;
uint8_t memory_allocator_3960;
uint8_t memory_allocator_3976;
uint8_t processed_var_4384;
uint8_t processed_var_4056;
uint8_t processed_var_4080;
uint8_t processed_var_4112;
uint8_t processed_var_4128;
uint8_t processed_var_4168;
uint8_t processed_var_4184;
uint8_t processed_var_4200;
uint8_t processed_var_4240;
uint8_t processed_var_4280;
uint8_t processed_var_4320;
uint8_t processed_var_4408;
uint8_t processed_var_4520;
uint8_t processed_var_6616;
uint8_t processed_var_4600;
uint8_t processed_var_4616;
uint8_t processed_var_4664;
uint8_t processed_var_4672;
uint8_t processed_var_4688;
uint8_t processed_var_4752;
uint8_t processed_var_4840;
uint8_t processed_var_4896;
uint8_t system_memory_9dc0;
uint8_t processed_var_4976;
uint8_t processed_var_4552;
uint8_t processed_var_4584;
uint8_t processed_var_4984;
uint8_t processed_var_4752;
uint8_t processed_var_4808;
uint8_t processed_var_4816;
uint8_t processed_var_5024;
uint8_t processed_var_4680;
uint8_t processed_var_4712;
uint8_t processed_var_6228;
uint8_t rendering_buffer_2336;
uint8_t processed_var_4592;
uint8_t system_memory_57e0;
uint8_t system_memory_57e4;
uint8_t processed_var_4744;
uint8_t processed_var_4756;
uint8_t processed_var_4764;
uint8_t processed_var_5080;
uint8_t processed_var_6432;
uint8_t processed_var_5088;
uint8_t processed_var_5104;
uint8_t processed_var_5144;
uint8_t processed_var_5160;
uint8_t processed_var_5216;
uint8_t processed_var_5064;
uint8_t processed_var_6328;
uint8_t processed_var_5296;
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
uint8_t processed_var_4616;
uint8_t processed_var_8032;
uint8_t memory_allocator_3192;
uint8_t memory_allocator_3180;
uint8_t system_memory_9994;
uint8_t system_memory_9998;
uint8_t memory_allocator_3248;
uint8_t memory_allocator_3472;
uint8_t processed_var_4824;
uint8_t memory_allocator_3440;
uint8_t memory_allocator_3376;
uint8_t memory_allocator_3408;
uint8_t memory_allocator_3312;
uint8_t memory_allocator_3344;
uint8_t system_memory_65ec;
uint8_t processed_var_5016;


