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
undefined FUN_180073930;  // SystemInitializer - 系统初始化器
undefined UNK_18098c880;   // 系统配置数据指针
undefined DAT_18098c8c8;   // 系统初始化状态标志
undefined UNK_18098c898;   // 系统初始化参数表
undefined DAT_180bf5268;   // 系统启动时间戳
undefined DAT_180bf5270;   // 系统版本信息
undefined DAT_180bf5280;   // 系统构建信息
undefined DAT_180bf5288;   // 系统环境信息

// 函数: 系统环境检查器
undefined FUN_1800637c0;  // SystemEnvironmentChecker - 系统环境检查器
undefined UNK_180941780;   // 环境配置数据指针

// 函数: 系统资源初始化器
undefined FUN_1800637f0;  // SystemResourceInitializer - 系统资源初始化器
undefined DAT_180c91900;   // 资源池管理器

// 函数: 系统组件注册器
undefined FUN_1802281a0;  // SystemComponentRegistrar - 系统组件注册器
undefined DAT_1809ff9e8;   // 组件注册表
undefined UNK_1809ff978;   // 组件工厂指针
undefined DAT_1809ff9c0;   // 组件依赖关系表
undefined UNK_1809ff990;   // 组件生命周期管理器

// 函数: 系统配置加载器
undefined FUN_1802285e0;  // SystemConfigurationLoader - 系统配置加载器

/*==============================================================================
    内存管理和对象创建功能
    负责内存分配、对象创建和生命周期管理
==============================================================================*/

// 函数: 内存池管理器
undefined FUN_180045af0;  // MemoryPoolManager - 内存池管理器
undefined DAT_180c96330;   // 小对象内存池 (16-32字节)
undefined DAT_180c96340;   // 中对象内存池 (64-128字节)
undefined DAT_180c96348;   // 大对象内存池 (256-512字节)
undefined DAT_180c96350;   // 超大对象内存池 (1K-4K字节)
undefined DAT_180c96360;   // 对象分配统计信息
undefined DAT_180c96368;   // 内存池配置参数
undefined DAT_180c96318;   // 内存池状态监控
undefined DAT_180c96338;   // 内存碎片整理器
undefined SUB_18005d5f0;   // 内存分配器子函数
undefined UNK_180942f90;   // 内存保护机制
undefined DAT_180c96220;   // 内存分配策略表
uint64_t UNK_180c96358;  // 内存对齐控制
undefined DAT_180bf64f8;   // 内存使用统计
undefined DAT_180bf6500;   // 内存泄漏检测器
undefined DAT_180bf6508;   // 内存性能计数器
undefined DAT_180bf6510;   // 内存压缩管理器

// 函数: 对象工厂初始化器
undefined FUN_180090020;  // ObjectFactoryInitializer - 对象工厂初始化器

// 函数: 对象生命周期管理器
undefined FUN_1800900c0;  // ObjectLifecycleManager - 对象生命周期管理器

/*==============================================================================
    核心引擎状态管理功能
    负责引擎状态监控、管理和控制
==============================================================================*/

// 函数: 引擎状态管理器
undefined FUN_180086600;  // EngineStateManager - 引擎状态管理器

// 函数: 状态转换控制器
undefined FUN_180086670;  // StateTransitionController - 状态转换控制器

// 函数: 状态验证器
undefined FUN_180086740;  // StateValidator - 状态验证器

// 函数: 状态同步器
undefined FUN_180086830;  // StateSynchronizer - 状态同步器

// 函数: 状态监控器
undefined FUN_1800868d0;  // StateMonitor - 状态监控器

// 函数: 状态历史记录器
undefined FUN_180086960;  // StateHistoryRecorder - 状态历史记录器

// 函数: 状态恢复器
undefined FUN_180086a00;  // StateRestorer - 状态恢复器

// 函数: 状态优化器
undefined FUN_180086aa0;  // StateOptimizer - 状态优化器

// 函数: 引擎核心管理器
undefined FUN_180086b40;  // EngineCoreManager - 引擎核心管理器
undefined DAT_180c8a9e0;   // 引擎核心数据结构
undefined DAT_180c868f8;   // 引擎配置管理器
undefined UNK_1809fd534;   // 引擎状态机
undefined UNK_1809fd550;   // 引擎事件调度器
undefined DAT_180c868d0;   // 引擎任务队列
undefined DAT_180c8ed28;   // 引擎服务注册表
undefined DAT_180c8ed38;   // 引擎插件管理器
undefined DAT_180bf3ffc;   // 引擎性能计数器
char DAT_180c82851;       // 引擎运行标志位1
undefined DAT_180c8a9d8;   // 引擎调试信息
char DAT_180c82863;       // 引擎运行标志位2
undefined DAT_180c86910;   // 引擎线程管理器
undefined DAT_180c8a9c0;   // 引擎内存管理器
undefined DAT_180d48d20;   // 引擎日志系统
undefined DAT_180d48d18;   // 引擎错误处理器
undefined UNK_180639070;   // 引擎安全检查器
undefined UNK_180a08c60;   // 引擎资源管理器
undefined DAT_180c8ed20;   // 引擎配置缓存
undefined DAT_180c8ed30;   // 引擎状态缓存
undefined DAT_180bf3ff8;   // 引擎性能监控器
char DAT_180c82862;       // 引擎运行标志位3
undefined DAT_180c86958;   // 引擎网络管理器
undefined DAT_180c8aa18;   // 引擎渲染管理器
undefined DAT_180c86880;   // 引擎音频管理器
undefined DAT_180c8f008;   // 引擎输入管理器
undefined DAT_180c868c8;   // 引擎文件系统
undefined UNK_1809fd8c0;   // 引擎模块加载器
undefined UNK_1809fd8d8;   // 引擎依赖解析器
undefined UNK_1809fd910;   // 引擎初始化序列
undefined UNK_1809fd930;   // 引擎关闭序列
undefined UNK_1809fd950;   // 引擎更新循环
undefined UNK_1809fd970;   // 引擎渲染循环
undefined UNK_1809fd980;   // 引擎事件循环
undefined UNK_1809fdfc0;   // 引擎垃圾回收器
undefined UNK_180a0ad28;   // 引擎性能分析器
undefined DAT_180d49140;   // 引擎版本信息结构
undefined DAT_180d49144;   // 引擎构建时间
undefined DAT_180d49148;   // 引擎平台信息
undefined DAT_180d4914c;   // 引擎兼容性信息
undefined DAT_180c8a9d0;   // 引擎系统信息
undefined UNK_180058f50;   // 引擎核心服务1
undefined UNK_180058f60;   // 引擎核心服务2
undefined UNK_180058f80;   // 引擎核心服务3
undefined UNK_180058f90;   // 引擎核心服务4
undefined UNK_1809fd730;   // 引擎任务调度器
char DAT_180c82841;       // 引擎运行标志位4
undefined UNK_1809fde40;   // 引擎状态监控器
undefined DAT_180c868e8;   // 引擎资源监控器
undefined UNK_1809fd7c4;   // 引擎性能监控器
undefined UNK_1809fd7d8;   // 引擎内存监控器
undefined UNK_1809fd7f8;   // 引擎线程监控器
undefined UNK_1809fd810;   // 引擎网络监控器
undefined UNK_1809fd828;   // 引擎渲染监控器
undefined UNK_1809fd848;   // 引擎音频监控器
undefined UNK_1809fd870;   // 引擎输入监控器
undefined DAT_180c8a9f8;   // 引擎调试管理器
undefined DAT_180c868c0;   // 引擎配置管理器
undefined DAT_180c868d8;   // 引擎日志管理器
undefined DAT_180c86900;   // 引擎错误管理器
undefined DAT_180c8a998;   // 引擎插件管理器
undefined UNK_1809fe6d8;   // 引擎模块管理器
undefined UNK_180a3cf50;   // 引擎安全管理器
undefined UNK_1809fd9a0;   // 引擎初始化管理器
undefined UNK_1809fd9b0;   // 引擎启动管理器
undefined UNK_1809fd9d0;   // 引擎运行管理器
undefined UNK_1809fd9f0;   // 引擎暂停管理器
undefined UNK_1809fda10;   // 引擎恢复管理器
undefined UNK_1809fda30;   // 引擎停止管理器
undefined UNK_1809fda58;   // 引擎重启管理器
undefined UNK_1809fda80;   // 引擎关闭管理器
undefined UNK_1809fdaa8;   // 引擎清理管理器
undefined UNK_1809fdad0;   // 引擎销毁管理器
undefined UNK_1809fdaf8;   // 引擎重置管理器
undefined UNK_1809fdb20;   // 引擎备份管理器
undefined UNK_1809fdb40;   // 引擎恢复管理器
undefined UNK_1809fdcd8;   // 引擎迁移管理器
char DAT_180c82853;       // 引擎运行标志位5
undefined UNK_1809fdbd0;   // 引擎优化管理器
undefined DAT_180c8a980;   // 引擎性能统计器
undefined UNK_180058ec0;   // 引擎核心服务5
undefined UNK_180058ee0;   // 引擎核心服务6
undefined UNK_180059b80;   // 引擎核心服务7

/*==============================================================================
    系统服务和组件管理功能
    负责系统服务的注册、管理和协调
==============================================================================*/

// 函数: 系统服务管理器
undefined FUN_180059ba0;  // SystemServiceManager - 系统服务管理器
undefined UNK_180a092c4;   // 服务注册表指针

// 函数: 组件生命周期管理器
undefined FUN_180059620;  // ComponentLifecycleManager - 组件生命周期管理器

// 函数: 系统安全检查器
undefined FUN_180044a30;  // SystemSecurityChecker - 系统安全检查器
undefined DAT_180be0000;   // 安全策略数据
undefined UNK_1809fdd78;   // 安全验证器
undefined UNK_1809fddc8;   // 安全监控器
undefined UNK_180a02968;   // 安全日志记录器
undefined UNK_1809fde10;   // 安全异常处理器
undefined _guard_check_icall; // 调用守卫检查函数

// 函数: 系统性能优化器
undefined FUN_180046860;  // SystemPerformanceOptimizer - 系统性能优化器

// 函数: 引擎配置管理器
undefined FUN_180066dd0;  // EngineConfigurationManager - 引擎配置管理器
undefined UNK_1809fe800;   // 配置数据存储区
undefined UNK_1809fe80c;   // 配置版本控制
undefined DAT_1809fe810;   // 默认配置表
undefined UNK_1809fe85c;   // 配置验证器
undefined UNK_1809fe868;   // 配置同步器
undefined UNK_1809fe880;   // 配置缓存管理器
undefined UNK_1809fe898;   // 配置加载器
undefined UNK_1809fe8b0;   // 配置保存器
undefined UNK_18098ba10;   // 配置文件解析器
undefined DAT_18098ba28;   // 配置文件格式定义
undefined UNK_18098ba40;   // 配置文件验证器
undefined UNK_18098ba50;   // 配置文件加载器
undefined UNK_18098ba60;   // 配置文件保存器
undefined UNK_18098ba70;   // 配置文件监控器
undefined UNK_18098ba80;   // 配置文件同步器
undefined UNK_18098ba98;   // 配置文件压缩器
undefined UNK_18098baa0;   // 配置文件加密器
undefined DAT_1809fdf28;   // 配置文件备份管理器
undefined UNK_1809fe7f8;   // 配置文件恢复器
undefined UNK_1809fe8f8;   // 配置文件迁移器
undefined UNK_1809fe900;   // 配置文件优化器
undefined UNK_1809fe910;   // 配置文件清理器
undefined UNK_1809fe928;   // 配置文件验证器
undefined UNK_1809fe940;   // 配置文件分析器
undefined UNK_1809fe950;   // 配置文件统计器
undefined UNK_1809fe968;   // 配置文件监控器
undefined UNK_1809fe978;   // 配置文件同步器
undefined UNK_1809fe988;   // 配置文件压缩器
undefined UNK_1809fe998;   // 配置文件加密器
undefined UNK_1809fe9a8;   // 配置文件备份器
undefined UNK_1809fe9b8;   // 配置文件恢复器
undefined UNK_1809fe9c8;   // 配置文件迁移器
undefined DAT_1809fc7d8;   // 配置系统状态监控器
undefined DAT_1809fcfc0;   // 配置系统性能计数器
char DAT_180c82843;       // 配置系统标志位1
char DAT_180c82850;       // 配置系统标志位2
char DAT_180c82842;       // 配置系统标志位3
char DAT_180c82844;       // 配置系统标志位4
undefined UNK_1809fe848;   // 配置文件读取器
undefined UNK_1809fea68;   // 配置文件写入器
undefined UNK_1809feaa0;   // 配置文件解析器
undefined UNK_1809feb24;   // 配置文件验证器
undefined UNK_1809feb28;   // 配置文件转换器
undefined DAT_1809feb50;   // 配置文件缓存
undefined UNK_1809feb58;   // 配置文件锁
undefined UNK_1809feb70;   // 配置文件队列
undefined UNK_1809feb88;   // 配置文件池
undefined UNK_1809feba8;   // 配置文件栈
undefined UNK_1809febc0;   // 配置文件堆
undefined UNK_1809febc8;   // 配置文件树
undefined UNK_1809febd8;   // 配置文件图
undefined UNK_1809febf0;   // 配置文件哈希表
undefined UNK_180a04f08;   // 配置文件索引器
undefined UNK_1809fec28;   // 配置文件搜索器
undefined UNK_1809fec40;   // 配置文件过滤器
undefined UNK_180068e60;   // 配置文件排序器
undefined UNK_180068e70;   // 配置文件分页器
undefined UNK_1809fec50;   // 配置文件缓存器
undefined UNK_1809fec70;   // 配置文件预加载器
undefined UNK_1809ff4e0;   // 配置文件优化器
undefined DAT_00000018;   // 配置系统常量1
undefined DAT_00000010;   // 配置系统常量2
undefined UNK_1809fecd8;   // 配置文件压缩器
undefined UNK_1809fed10;   // 配置文件解压器
longlong UNK_00000128;    // 配置系统大小限制
undefined DAT_00000000;   // 配置系统空值
undefined UNK_1809fed40;   // 配置文件校验器
undefined UNK_1809fed78;   // 配置文件签名器
ulonglong UNK_000001c8;   // 配置文件哈希种子
ulonglong UNK_000001d0;   // 配置文件加密密钥
ulonglong UNK_000001d8;   // 配置文件解密密钥
uint64_t UNK_000001e0;  // 配置文件压缩级别
uint64_t UNK_000001e8;  // 配置文件加密级别
uint64_t UNK_000001f0;  // 配置文件缓存大小
longlong UNK_000001f8;    // 配置文件超时时间
int8_t DAT_180bf65bc; // 配置系统标志位5
undefined UNK_1809feda8;   // 配置文件监控器
undefined UNK_1809feeb8;   // 配置文件同步器
undefined UNK_1809feec8;   // 配置文件备份器
undefined UNK_1809feed8;   // 配置文件恢复器
char DAT_180c82840;       // 配置系统状态标志
undefined UNK_18006a030;   // 配置文件加载器
undefined UNK_180a0e170;   // 配置文件验证器
undefined UNK_180a0e368;   // 配置文件解析器
undefined UNK_1809fefb0;   // 配置文件优化器
int8_t DAT_180c8ecee; // 配置系统运行标志
undefined UNK_1809ff498;   // 配置文件缓存管理器
undefined UNK_1809ff390;   // 配置文件内存管理器
undefined UNK_1809ff3e8;   // 配置文件线程管理器
undefined UNK_1809ff488;   // 配置文件锁管理器
char DAT_180c8aa69;       // 配置系统版本标志
undefined UNK_1809ff538;   // 配置文件读取队列
undefined UNK_1809ff550;   // 配置文件写入队列
undefined UNK_1809ff5b0;   // 配置文件处理队列
undefined UNK_1809ff5b8;   // 配置文件优先级队列
undefined UNK_1809ff5c0;   // 配置文件任务队列
undefined UNK_1809ff5d0;   // 配置文件事件队列
undefined UNK_1809ff5f8;   // 配置文件定时器队列
undefined UNK_1809ff610;   // 配置文件回调队列
undefined UNK_1809ff630;   // 配置文件错误队列
char DAT_180bf0100;       // 配置系统初始化标志
undefined DAT_180c86908;   // 配置文件目录管理器
undefined UNK_1809ff648;   // 配置文件路径解析器
undefined DAT_1809ff660;   // 配置文件路径验证器
undefined UNK_1809ff688;   // 配置文件路径缓存器
undefined UNK_1809ff6b0;   // 配置文件路径优化器
undefined UNK_1809ff6bc;   // 配置文件路径监控器
undefined UNK_1809ff6c8;   // 配置文件路径同步器
undefined UNK_1809ff6e0;   // 配置文件路径管理器
undefined UNK_1809ff7c0;   // 配置文件内存池
undefined UNK_1809ff800;   // 配置文件缓存池
undefined UNK_1809ff840;   // 配置文件压缩池
undefined UNK_1809ff848;   // 配置文件加密池
undefined UNK_1809ff888;   // 配置文件解密池
undefined UNK_1809ff8a8;   // 配置文件解压池
undefined UNK_1809ff8d8;   // 配置文件验证池
undefined UNK_1809ff918;   // 配置文件索引池
undefined UNK_1809ff938;   // 配置文件搜索池
undefined UNK_1809ff958;   // 配置文件过滤池
undefined UNK_1809ff9a8;   // 配置文件排序池
undefined UNK_1809ffa18;   // 配置文件分页池
undefined UNK_180a02e68;   // 配置文件备份池
undefined UNK_180a13a28;   // 配置文件恢复池
undefined UNK_180a00208;   // 配置文件同步池
undefined UNK_180a00270;   // 配置文件监控池
undefined UNK_180277350;   // 配置文件优化池


// 函数: undefined FUN_180083390;
undefined FUN_180083390;
undefined DAT_180c86898;
undefined UNK_1809ffb88;
undefined UNK_180083170;
undefined UNK_180083180;
undefined UNK_1809ffbb0;


// 函数: undefined FUN_180082da0;
undefined FUN_180082da0;


// 函数: undefined FUN_180082e70;
undefined FUN_180082e70;
int UNK_180d49150;
float UNK_180d49154;
undefined UNK_180083070;
undefined UNK_1809ffab0;
undefined UNK_1809ffbe0;


// 函数: undefined FUN_180082fd0;
undefined FUN_180082fd0;
undefined UNK_1809fffc8;
undefined UNK_1809ffc28;


// 函数: undefined FUN_1800831c0;
undefined FUN_1800831c0;


// 函数: undefined FUN_180083260;
undefined FUN_180083260;
undefined DAT_1809ffc60;
undefined UNK_1809ffef8;
undefined UNK_1809fff60;
undefined UNK_1809ffe28;
undefined UNK_1809ffe90;
undefined UNK_1809ffc88;
undefined UNK_1809ffcf0;
undefined UNK_1809ffd58;
undefined UNK_1809ffdc0;
undefined UNK_180a00098;
undefined DAT_180a00330;
undefined UNK_180a14ff8;
undefined UNK_180a01240;
undefined UNK_180a01188;
undefined UNK_180a010d0;
undefined UNK_180a00f10;
undefined UNK_180a00e58;
undefined UNK_180a00d78;
undefined UNK_180a00ca8;
undefined UNK_180a00be0;
undefined UNK_180a00550;
undefined UNK_180a009c8;
undefined UNK_180a0055c;
undefined DAT_180c8ed64;
undefined UNK_180a00568;
undefined UNK_180a00580;
undefined UNK_180a00598;
undefined UNK_180a005b8;
undefined UNK_180a00980;
undefined UNK_180a14c80;
undefined UNK_180a14d00;
undefined UNK_180a005e0;
undefined UNK_180a005f8;
undefined UNK_180a00630;
undefined UNK_180a00648;
undefined UNK_180a00680;
undefined UNK_180a00688;
undefined DAT_1809fe2c8;
undefined UNK_180a006b0;
undefined UNK_180a006f0;
undefined UNK_180a00718;


// 函数: undefined FUN_18008e690;
undefined FUN_18008e690;


// 函数: undefined FUN_18008e700;
undefined FUN_18008e700;
undefined UNK_180a00750;
undefined DAT_180d491f8;
undefined DAT_180d49200;
undefined DAT_180d49208;


// 函数: undefined FUN_180098980;
undefined FUN_180098980;
undefined UNK_180a01430;
undefined UNK_180a01714;
undefined DAT_180c91d10;
undefined DAT_180a0143c;
undefined UNK_180a01448;
undefined UNK_180a01460;
undefined UNK_180a01470;
undefined UNK_180a01478;
undefined UNK_180a01488;
undefined UNK_180a01494;
undefined UNK_180a0149c;
undefined UNK_180a014a8;
undefined UNK_180a014c0;
undefined UNK_18009a070;
undefined UNK_180a015b8;


// 函数: undefined FUN_180099f90;
undefined FUN_180099f90;
undefined UNK_180a015c8;
undefined UNK_180a015d8;
char DAT_180c82846;
undefined DAT_180d49210;
undefined DAT_180d49220;
undefined DAT_180d49218;
undefined DAT_180d49228;
undefined DAT_180d49230;


// 函数: undefined FUN_180056e10;
undefined FUN_180056e10;


// 函数: undefined FUN_180051cc0;
undefined FUN_180051cc0;


// 函数: undefined FUN_180051d00;
undefined FUN_180051d00;
undefined UNK_1800e7f50;
undefined UNK_1800e7f80;
undefined UNK_1800e7fb0;
undefined UNK_1800e7fe0;
undefined UNK_1800e8020;
undefined UNK_1801b9b60;


// 函数: undefined FUN_18011d900;
undefined FUN_18011d900;
undefined UNK_180a0644c;
undefined UNK_180a06468;
undefined UNK_180a06480;
undefined UNK_18013bff0;


// 函数: undefined FUN_18013cf40;
undefined FUN_18013cf40;


// 函数: undefined FUN_18013c020;
undefined FUN_18013c020;
undefined UNK_180a06474;
undefined UNK_180a06475;


// 函数: undefined FUN_18013c4e0;
undefined FUN_18013c4e0;


// 函数: undefined FUN_18013d010;
undefined FUN_18013d010;
undefined UNK_180a06598;


// 函数: undefined FUN_18013d200;
undefined FUN_18013d200;
undefined UNK_180a06599;
undefined UNK_180126ab0;
undefined DAT_180a0649c;
undefined UNK_180a06490;
undefined UNK_180a064a8;
undefined UNK_18012d10b;
undefined UNK_180a0677c;
undefined UNK_18098d180;
undefined UNK_18098d184;
undefined UNK_18098d188;
undefined UNK_180a064a0;
undefined UNK_180a064b0;
undefined UNK_180a064c0;
undefined UNK_180a064d0;
undefined UNK_180a064e0;
undefined UNK_180a06588;
undefined UNK_180a064f0;
undefined UNK_180a06500;
undefined UNK_180a063e8;
undefined UNK_180a06560;
undefined UNK_180a06558;
undefined UNK_180135af0;
undefined UNK_180a06578;
undefined UNK_180a065a0;
undefined UNK_180a065a8;
undefined UNK_180137f40;
undefined UNK_180a065b8;
undefined UNK_180a065c8;
undefined UNK_180a065e0;
undefined UNK_180a065f0;
undefined UNK_180a06600;
undefined UNK_180a06610;
undefined UNK_180a06628;
undefined UNK_180a06640;
undefined UNK_180a06650;
undefined UNK_180a06668;
undefined UNK_180a06678;
undefined UNK_180a06690;
undefined UNK_180a066a8;
undefined UNK_180a066b8;
undefined UNK_180a066c8;
undefined UNK_180a066d8;
undefined UNK_180a066e8;
undefined UNK_180a06700;
undefined UNK_180a06720;
undefined UNK_180a06730;
undefined UNK_180a06740;
undefined UNK_180a06758;
undefined UNK_180a06794;
undefined UNK_180a06788;
undefined UNK_180a06798;
undefined UNK_180a067b0;
undefined UNK_180a067c0;
undefined UNK_180a067d0;
undefined UNK_180a067e8;
undefined UNK_180a067f8;
undefined UNK_180a06810;
undefined UNK_180a06808;
undefined UNK_180a06820;
undefined UNK_180a06838;
undefined UNK_180a06848;
undefined UNK_180a06858;
undefined UNK_180a06870;
undefined UNK_180a06880;
undefined UNK_180a06890;
undefined UNK_180a068a8;
undefined UNK_180a068b8;
undefined DAT_180d49270;
undefined DAT_180d49280;
undefined DAT_180d49278;
undefined DAT_180d4927c;
undefined UNK_180941a80;


// 函数: undefined FUN_1800596a0;
undefined FUN_1800596a0;
undefined UNK_180a06950;
undefined UNK_180a069b0;
undefined UNK_180a069c0;
undefined UNK_180a071f8;
char DAT_180c8ecee;
undefined UNK_180a069e8;
undefined UNK_180a06be0;
undefined DAT_18098c090;
undefined UNK_180a06dc8;
undefined UNK_180a071e8;
undefined UNK_180a071c8;
undefined UNK_180a071d8;
undefined DAT_180d49288;
undefined DAT_180d49290;
undefined DAT_180d49298;
undefined DAT_180d492a0;
undefined DAT_180d492a8;
undefined DAT_180d492e8;
undefined DAT_180d492f0;
undefined DAT_180d492f8;
undefined DAT_180d49300;
undefined DAT_180d49340;
undefined DAT_180d49348;
undefined DAT_180d49350;
undefined DAT_180d49358;
undefined DAT_180d49398;
undefined DAT_180d493a0;
undefined DAT_180d493a8;
undefined DAT_180d493b0;
undefined UNK_180941ab0;
undefined DAT_180a06990;
undefined DAT_180a06998;
undefined DAT_180a069a0;
undefined DAT_180a069a8;
undefined UNK_18014f7f0;


// 函数: undefined FUN_18014f810;
undefined FUN_18014f810;


// 函数: undefined FUN_18014f840;
undefined FUN_18014f840;
undefined UNK_18014f640;


// 函数: undefined FUN_18014f660;
undefined FUN_18014f660;


// 函数: undefined FUN_18014f6a0;
undefined FUN_18014f6a0;
undefined UNK_180a07248;
undefined UNK_18014f3d0;


// 函数: undefined FUN_18014f3f0;
undefined FUN_18014f3f0;
undefined UNK_18014f180;
undefined UNK_18014f190;
undefined UNK_18014f1d0;
undefined UNK_18014f1e0;


// 函数: undefined FUN_18014f520;
undefined FUN_18014f520;
undefined UNK_180a07300;
undefined UNK_180a07310;
undefined DAT_180a072b8;
undefined DAT_180a072d0;
undefined UNK_180a072f0;


// 函数: undefined FUN_180150480;
undefined FUN_180150480;
undefined DAT_180d493f0;
undefined DAT_180d493f8;
undefined DAT_180d49400;
char DAT_180c82852;
undefined DAT_180d49408;
undefined DAT_180d49410;


// 函数: undefined FUN_18015c0a0;
undefined FUN_18015c0a0;
undefined UNK_180a07805;
undefined UNK_18015c180;
undefined DAT_18098d698;


// 函数: undefined FUN_18015c190;
undefined FUN_18015c190;
undefined UNK_180991df0;
undefined UNK_18098d770;
undefined UNK_18098d780;
undefined UNK_180a07f10;
undefined UNK_18098ba18;
undefined UNK_180a08108;
undefined UNK_180a08110;
undefined UNK_180a08128;
undefined UNK_180a08180;
undefined UNK_180a08168;
undefined UNK_180a081a0;
undefined UNK_18027d990;


// 函数: undefined FUN_180049b30;
undefined FUN_180049b30;


// 函数: undefined FUN_18016f990;
undefined FUN_18016f990;
undefined DAT_180a080cc;
undefined UNK_180a080d8;
undefined UNK_180a08100;
undefined UNK_180a08a00;
undefined UNK_180a089f0;
undefined UNK_180a08ce8;
undefined UNK_180a08d78;


// 函数: undefined FUN_180170ba0;
undefined FUN_180170ba0;
undefined DAT_180d4943c;
undefined DAT_180d49420;
byte DAT_180d49438;
undefined DAT_180d4943e;
undefined DAT_180d49444;
undefined DAT_180d49448;
int32_t UNK_180d49440;
undefined UNK_180a08a08;
undefined UNK_180a08a28;
undefined UNK_180a08a68;


// 函数: undefined FUN_180170da0;
undefined FUN_180170da0;


// 函数: undefined FUN_180179e40;
undefined FUN_180179e40;
undefined UNK_180179e20;
undefined UNK_180179e70;
undefined UNK_180a09640;
undefined UNK_180a09688;
undefined DAT_180d48d60;
undefined UNK_180a08ff8;
undefined UNK_180a09618;


// 函数: undefined FUN_180083100;
undefined FUN_180083100;
undefined UNK_180a02ad0;
undefined DAT_180a096c8;
undefined DAT_180a096d8;
undefined DAT_180a096e0;
undefined DAT_180a096e8;
undefined DAT_180a096f0;
undefined DAT_180a096f8;
undefined DAT_180a09710;
undefined DAT_180a09718;
undefined DAT_180a09728;
undefined DAT_180a09750;
undefined DAT_180a09768;
undefined DAT_180a09780;
undefined DAT_180a097a0;
undefined DAT_180a097c0;
undefined DAT_180a097e0;
undefined DAT_180a09818;
undefined UNK_180a1d0b0;
undefined UNK_180a1d230;
undefined UNK_180a18cc8;
undefined UNK_180a1d398;
undefined UNK_180a1d3a8;
undefined UNK_180a1d3b8;
undefined UNK_180a1d3d0;
undefined UNK_180a1d3f0;
undefined UNK_180a1d590;
undefined UNK_180a1d700;
undefined UNK_180a1d9a0;
undefined UNK_180a1dbc0;
undefined UNK_180a09fb8;
undefined UNK_180a09e48;
undefined DAT_180a09828;
undefined UNK_180a1a098;
undefined DAT_180a09848;
undefined DAT_180a09868;
undefined DAT_180a09870;
undefined DAT_180a09880;
undefined DAT_180a09890;
undefined DAT_180a09898;
undefined DAT_180a098a8;
undefined DAT_180a098b8;
undefined DAT_180a098c8;
undefined DAT_180a098e0;
undefined DAT_180a098f0;
undefined DAT_180a09928;
undefined DAT_180a09e30;
undefined DAT_180a09e38;
undefined UNK_180a1dd48;
undefined UNK_180a1dee0;
undefined UNK_180a1e060;
undefined UNK_180a1e220;
undefined UNK_180a1e428;
undefined UNK_180a1e5a0;
undefined UNK_180a1e7d0;
undefined DAT_180a1e968;
undefined UNK_180a1e978;
undefined UNK_180a0a128;
undefined DAT_180d49620;
undefined DAT_180c91020;
undefined DAT_180c91030;


// 函数: undefined FUN_18013ea70;
undefined FUN_18013ea70;
undefined DAT_180d49628;
undefined UNK_180180850;


// 函数: undefined FUN_18021b070;
undefined FUN_18021b070;


// 函数: undefined FUN_18021b090;
undefined FUN_18021b090;


// 函数: undefined FUN_18021b4f0;
undefined FUN_18021b4f0;


// 函数: undefined FUN_18021b9c0;
undefined FUN_18021b9c0;


// 函数: undefined FUN_18021bc50;
undefined FUN_18021bc50;


// 函数: undefined FUN_18021bff0;
undefined FUN_18021bff0;


// 函数: undefined FUN_18021cb50;
undefined FUN_18021cb50;


// 函数: undefined FUN_18021cf80;
undefined FUN_18021cf80;


// 函数: undefined FUN_18021dc50;
undefined FUN_18021dc50;


// 函数: undefined FUN_18021e9c0;
undefined FUN_18021e9c0;
undefined UNK_180a09d40;
undefined UNK_180a07998;
undefined UNK_180a1ff80;
undefined UNK_180a1ff8c;
undefined UNK_180a1ff90;
undefined UNK_180a20018;
undefined UNK_180a1ef60;
undefined UNK_180a0a2a8;
undefined UNK_180a0ad58;


// 函数: undefined FUN_180184320;
undefined FUN_180184320;


// 函数: undefined FUN_1801842a0;
undefined FUN_1801842a0;
undefined UNK_180184260;
undefined UNK_180a0ac88;
undefined UNK_180185030;


// 函数: undefined FUN_180185c00;
undefined FUN_180185c00;
undefined UNK_180186550;
undefined UNK_180a0a7b8;
undefined UNK_180a0a800;
undefined UNK_180a0a890;
undefined UNK_180a0aa34;
undefined UNK_180a0abe0;
undefined UNK_180a0ab70;
undefined UNK_180a0aba8;
undefined UNK_180a0ab00;
undefined UNK_180a0ab38;
undefined UNK_180a0acd8;
undefined UNK_18018a0f0;
undefined UNK_180a0aac8;
undefined UNK_180a0aaa8;
undefined UNK_180a0a9b0;
undefined UNK_180a0aa20;
undefined UNK_180a0aa58;
undefined UNK_180a0aa40;
undefined UNK_180a0aa90;
undefined UNK_180a0aa70;
undefined UNK_180a0ad90;
undefined UNK_180a0adf8;
undefined UNK_18018c0a0;


// 函数: undefined FUN_18018c050;
undefined FUN_18018c050;
undefined DAT_180c8a9e8;
undefined DAT_180a04ee4;
undefined UNK_180a0ae10;
undefined UNK_180a0ae28;
undefined UNK_180a0ae30;
undefined DAT_180a0aea0;
undefined UNK_180a0aef8;
undefined UNK_180a0af54;
undefined UNK_180a0b0a0;
undefined UNK_180a0b0d0;
undefined UNK_180a0b0e8;
undefined UNK_180a0b100;
undefined UNK_180a0b120;
undefined UNK_180a0b130;
undefined UNK_180a0b148;
undefined UNK_180a0b158;
undefined UNK_180a0b168;
undefined UNK_180a0b178;
undefined UNK_180a0b188;
undefined UNK_180a0b198;
undefined UNK_180a0b1a8;
undefined DAT_180c868f0;


// 函数: undefined FUN_180049cd0;
undefined FUN_180049cd0;


// 函数: undefined FUN_180049970;
undefined FUN_180049970;


// 函数: undefined FUN_1800586e0;
undefined FUN_1800586e0;


// 函数: undefined FUN_180207e00;
undefined FUN_180207e00;


// 函数: undefined FUN_180207a20;
undefined FUN_180207a20;


// 函数: undefined FUN_180207bb0;
undefined FUN_180207bb0;
undefined UNK_180a0fec0;
undefined DAT_180a0ff10;
undefined DAT_18098c5e8;
undefined UNK_180a04ab8;
undefined DAT_180a0ff18;
undefined UNK_180a0ff28;
undefined UNK_180a0ff38;
undefined UNK_180a0ff48;
undefined UNK_180a0ffa8;
undefined UNK_180a0ffb0;
undefined UNK_180a0ffc0;
undefined UNK_18020f868;
undefined UNK_180a10008;
undefined UNK_180a0fff8;


// 函数: undefined FUN_18020f940;
undefined FUN_18020f940;
undefined UNK_180a128b0;
undefined UNK_180a10cd8;
undefined UNK_180211f50;


// 函数: undefined FUN_180211f70;
undefined FUN_180211f70;
undefined UNK_180211ec0;
undefined UNK_180a10500;
undefined UNK_180a10508;
undefined UNK_180a10520;
undefined DAT_180a0e358;
undefined UNK_180a10568;
undefined UNK_180a105b8;
undefined UNK_180a105d8;
undefined UNK_180a10570;
undefined UNK_180a105e0;
undefined UNK_180a105f0;
undefined UNK_180a10600;
undefined UNK_180a10618;
undefined UNK_180a10628;
undefined UNK_180a10640;
undefined UNK_180a10650;
undefined UNK_180a10668;
undefined UNK_180a10678;
undefined UNK_180a10688;
undefined UNK_180a10698;
undefined UNK_180a106c0;
undefined UNK_180a106e8;
undefined UNK_180a10700;
undefined UNK_180a10710;
undefined UNK_180a10720;
undefined UNK_180a10728;
undefined UNK_180a10740;
undefined UNK_180a10750;
undefined UNK_180a10760;
undefined UNK_180a10778;
undefined UNK_180a10788;
undefined UNK_180a10798;
undefined UNK_180a107b0;
undefined UNK_180a107c8;
undefined UNK_180a107d8;
undefined UNK_180a107f8;
undefined UNK_180a10810;
undefined UNK_180a10820;
undefined UNK_180a10838;
undefined UNK_180a10850;
undefined UNK_180a10860;
undefined UNK_180a10898;
undefined UNK_180a104d0;
undefined UNK_180a10878;
undefined UNK_180a108b0;
undefined UNK_18098bc74;
undefined UNK_180a1b008;
undefined DAT_180c967dc;
undefined UNK_180a108d0;
undefined UNK_180a10988;
undefined UNK_180a109b8;
undefined DAT_180a002f0;
undefined UNK_180a10938;
undefined UNK_180a27158;
undefined UNK_180a10960;
undefined UNK_180a10a20;
undefined UNK_180a109d8;
undefined UNK_180a10a48;
undefined UNK_180a10a10;
undefined UNK_180a10aa0;
undefined UNK_180a10a58;
undefined UNK_180a10ad0;
undefined UNK_180a10a90;
undefined UNK_180a10b88;
undefined UNK_180a10ae0;
undefined UNK_180a10bc0;
undefined UNK_180a10af0;
undefined DAT_180be12f0;
undefined UNK_180957a48;
undefined UNK_180a10c10;
undefined UNK_180a10be0;
undefined UNK_180a10bf0;
undefined UNK_180a104f0;
undefined DAT_180c8aa60;
undefined UNK_180a16c98;


// 函数: undefined FUN_18020dd10;
undefined FUN_18020dd10;
undefined UNK_18020dbe0;
undefined UNK_180a12e68;


// 函数: undefined FUN_18020dae0;
undefined FUN_18020dae0;


// 函数: undefined FUN_18020dc20;
undefined FUN_18020dc20;
undefined UNK_180a12ed8;
undefined UNK_180a12ef0;
undefined UNK_180a13650;
undefined DAT_180bf661c;
undefined UNK_180a12f20;
undefined UNK_180a12f38;
undefined UNK_180a12f48;
undefined UNK_180a12f68;
undefined UNK_180a12f80;
undefined UNK_180a12f90;
undefined UNK_180a12fa8;
undefined UNK_180a12fb8;
undefined UNK_180a12fc8;
undefined UNK_180a12fd8;
undefined UNK_180a12fe8;
undefined UNK_180a13000;
undefined UNK_180a13020;
undefined UNK_180a13030;
undefined DAT_180a02618;
undefined UNK_180a0d170;
undefined UNK_180a0d180;
undefined UNK_180a0d1a0;
undefined UNK_180a0d1b8;
undefined UNK_180a0d1d0;
undefined UNK_180a0d1e8;
undefined UNK_180a0d200;
undefined UNK_180a0d218;
undefined UNK_180a0d238;
undefined UNK_180a0d258;
undefined UNK_180a0d280;
undefined UNK_180a132f0;
undefined UNK_180a13308;
undefined UNK_180a13320;
undefined UNK_180a13340;
undefined UNK_180a13360;
undefined UNK_180a13378;
undefined UNK_180a133a0;
undefined UNK_180a133b0;
undefined UNK_180a133c8;
undefined UNK_180a133e0;
undefined UNK_180a133f8;
undefined UNK_180a13410;
undefined UNK_180a13430;
undefined UNK_180a13450;
undefined UNK_180a13470;
undefined UNK_180a13488;
undefined UNK_180a13490;
undefined UNK_180a134b0;
undefined UNK_180a134d0;
undefined UNK_180a134f0;
undefined UNK_180a13510;
undefined UNK_180a13528;
undefined UNK_180a13548;
undefined UNK_180a13560;
undefined UNK_180a13580;
undefined UNK_180a13598;
undefined UNK_180a135b8;
undefined UNK_180a135d8;
undefined UNK_180a135f0;
undefined UNK_180a130b4;
undefined UNK_180a130c0;
undefined UNK_180a130d0;
undefined UNK_180a130e0;
undefined UNK_180a130f0;
undefined UNK_180a13100;
undefined UNK_180a13108;
undefined UNK_180a13110;
undefined UNK_180a13120;
undefined UNK_180a13130;
undefined UNK_180a13140;
undefined UNK_180a13158;
undefined UNK_180a13160;
undefined UNK_180a1316c;
undefined UNK_180a13174;
undefined UNK_180a13180;
undefined UNK_180a1318c;
undefined UNK_180a13194;
undefined UNK_180a1319c;
undefined UNK_180a131a0;
undefined UNK_180a131a8;
undefined UNK_180a131b0;
undefined UNK_180a131b4;
undefined UNK_180a131bc;
undefined UNK_180a131c0;
undefined UNK_180a131c4;
undefined UNK_180a131c8;
undefined UNK_180a131cc;
undefined UNK_180a131d4;
undefined UNK_180a131d8;
undefined UNK_180a131ec;
undefined UNK_180a131f8;
undefined UNK_180a13208;
undefined UNK_180a13220;
undefined UNK_180a13230;
undefined UNK_180a13238;
undefined UNK_180a13240;
undefined UNK_180a1324c;
undefined UNK_180a13258;
undefined UNK_180a13264;
undefined UNK_180a1326c;
undefined UNK_180a13274;
undefined UNK_180a13280;
undefined UNK_180a13298;
undefined UNK_180a132a4;
undefined UNK_180a132b0;
undefined UNK_180a132c0;
undefined UNK_180a132d0;
undefined UNK_180a132e0;
undefined UNK_180a13608;
undefined UNK_180a13620;
undefined UNK_180a13640;
undefined DAT_180c96828;
undefined DAT_180c96810;
undefined DAT_180c8ed70;
undefined UNK_180a139f0;
undefined UNK_18022a4a0;
undefined UNK_18022a4b0;
undefined UNK_18022a4f0;
undefined UNK_18022a500;
undefined UNK_180a139e0;
undefined UNK_180a27738;
undefined UNK_180a138c0;


// 函数: undefined FUN_180046480;
undefined FUN_180046480;
undefined UNK_180a13ad0;
undefined DAT_180a0ba58;
undefined DAT_180a0d580;
undefined UNK_180a13aa8;
undefined UNK_180a13ab8;
undefined UNK_180a13ae8;
undefined UNK_180a13bb8;
undefined UNK_180a13b30;
undefined UNK_180a13b70;
undefined DAT_180a13c30;
undefined UNK_180a03108;
undefined UNK_180a13c08;
undefined UNK_180a13c48;
undefined UNK_180a12ea0;
undefined DAT_180a1388c;
undefined UNK_180a13c2c;
undefined UNK_180a13c70;
undefined UNK_180a13c88;
undefined UNK_180a13c94;
undefined UNK_180a13ca0;
undefined UNK_180a13cac;
undefined UNK_180239520;


// 函数: undefined FUN_180056de0;
undefined FUN_180056de0;
undefined UNK_180a172e0;
undefined UNK_180a17308;
undefined UNK_180a17398;
undefined UNK_180a173f0;
undefined UNK_180a17400;
undefined UNK_1802a11b8;
char UNK_180d48da9;
char DAT_180d48da8;
undefined UNK_1802a1b10;
undefined UNK_180a17770;
undefined UNK_180a17798;
undefined UNK_180a177c8;
undefined UNK_180a177f0;
int8_t DAT_180d48da8;
undefined UNK_1802a1d4c;
undefined DAT_180bf5c18;
undefined DAT_180bf5c28;
undefined UNK_180a02b03;
undefined UNK_180a17818;
undefined UNK_180a27cb0;
int32_t UNK_180bf5c1c;
int32_t UNK_180bf5c20;
int32_t UNK_180bf5c24;
undefined DAT_180c8ecd0;
char DAT_180d48dac;
undefined UNK_18042d5d0;
undefined UNK_180a17830;
undefined UNK_180a17880;
undefined DAT_180c8ecb0;
undefined DAT_180c8eca8;
undefined UNK_180a178bc;
undefined UNK_180a178f8;
undefined UNK_180a17900;
undefined UNK_180a17a18;
undefined UNK_180a17a68;
char DAT_180d48daa;
undefined UNK_180a178c8;
undefined UNK_180a178f0;
undefined UNK_180a17910;
undefined UNK_180a17940;
undefined UNK_180a17960;
undefined UNK_180a17980;
undefined UNK_180a179a8;
char DAT_180d48dab;
undefined UNK_180a179d0;
undefined UNK_180a17a38;
undefined UNK_180a17ab0;
undefined UNK_180a17b38;
undefined UNK_180a06428;
undefined UNK_180a06438;
undefined UNK_180a17b78;
undefined UNK_180a17b88;
undefined UNK_180a17b98;
undefined UNK_180a17ba0;
undefined UNK_180a17bb0;
undefined UNK_180a17bc0;
undefined UNK_180a17bd8;
undefined UNK_180a17be8;
undefined UNK_180a17bf8;
undefined UNK_180a17d90;
undefined UNK_180a17c48;
undefined UNK_180a17c60;
undefined UNK_180a17c80;
undefined UNK_180a17c90;
undefined UNK_180a17cb8;
undefined UNK_180a17cc8;
undefined UNK_180a17cd8;
undefined UNK_180a17d00;
undefined UNK_180a17d28;
undefined UNK_180a17d50;
undefined UNK_180a17da8;
undefined UNK_180a17e18;
undefined UNK_180a18648;
undefined UNK_180a17e68;
undefined UNK_180a17e78;
undefined UNK_180a17ea8;
undefined UNK_180a17eb0;
undefined UNK_180a17ec0;
undefined UNK_180a17f00;
undefined UNK_180a17f58;
undefined UNK_180a17f90;
undefined DAT_180a09dc0;
undefined UNK_180a17fe0;
undefined UNK_180a15728;
undefined UNK_180a15748;
undefined UNK_180a17fe8;
undefined UNK_180a157f0;
undefined UNK_180a15828;
undefined UNK_180a15830;
undefined UNK_180a18010;
undefined UNK_180a157a8;
undefined UNK_180a157c8;
undefined UNK_180a04c44;
undefined UNK_180a06420;
undefined UNK_180a15750;
undefined DAT_180a157e0;
undefined DAT_180a157e4;
undefined UNK_180a157e8;
undefined UNK_180a157f4;
undefined UNK_180a157fc;
undefined UNK_180a18048;
undefined UNK_180a18590;
undefined UNK_180a18050;
undefined UNK_180a18060;
undefined UNK_180a18088;
undefined UNK_180a18098;
undefined UNK_180a180d0;
undefined UNK_180a18038;
undefined UNK_180a18528;
undefined UNK_180a18120;
undefined DAT_180d48db0;
undefined DAT_180d48db8;
undefined DAT_180d48dc0;
undefined DAT_180d48dc8;
undefined DAT_180d48dd0;


// 函数: undefined FUN_180094f80;
undefined FUN_180094f80;


// 函数: undefined FUN_18014f220;
undefined FUN_18014f220;


// 函数: undefined FUN_18014f250;
undefined FUN_18014f250;
undefined UNK_180a241c8;
undefined UNK_1803c8870;
undefined UNK_180a23c38;
undefined UNK_180a23c2c;
undefined DAT_180d49994;
undefined DAT_180d49998;
undefined UNK_180a23c70;
undefined UNK_180a23d50;
undefined UNK_180a24298;
undefined UNK_180a23d30;
undefined UNK_180a23cf0;
undefined UNK_180a23d10;
undefined UNK_180a23cb0;
undefined UNK_180a23cd0;
undefined DAT_180bf65ec;
undefined UNK_180a24358;


