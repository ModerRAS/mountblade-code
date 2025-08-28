/**
 * @file 02_core_engine_part069.c
 * @brief 核心引擎系统初始化和配置管理模块
 * @details 该模块包含10个核心函数，负责系统初始化、配置管理、
 *          状态设置和系统组件的协调工作。
 * 
 * 主要功能：
 * - 系统组件初始化和配置
 * - 系统状态管理和验证
 * - 全局数据结构和资源管理
 * - 系统参数配置和优化
 * - 错误处理和状态监控
 * 
 * 技术特点：
 * - 模块化设计，支持多级初始化
 * - 状态驱动的配置管理
 * - 高效的内存和资源管理
 * - 完整的错误处理机制
 * - 支持条件配置和动态调整
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

#include "TaleWorlds.Native.Split.h"

/*==============================================================================
 * 系统常量定义
 *==============================================================================*/

/** 系统配置常量 */
#define CORE_ENGINE_CONFIG_VERSION          0x069        /**< 核心引擎配置版本号 */
#define CORE_ENGINE_MAX_COMPONENTS         128          /**< 最大组件数量 */
#define CORE_ENGINE_MAX_STATES             64           /**< 最大状态数量 */
#define CORE_ENGINE_INIT_TIMEOUT_MS        5000         /**< 初始化超时时间(毫秒) */
#define CORE_ENGINE_CONFIG_BLOCK_SIZE      0x4b4        /**< 配置块大小 */
#define CORE_ENGINE_STATE_TABLE_SIZE       0x19         /**< 状态表大小 */

/** 内存管理常量 */
#define CORE_ENGINE_MEMORY_ALIGNMENT        16           /**< 内存对齐大小 */
#define CORE_ENGINE_POOL_SIZE             0x1000        /**< 内存池大小 */
#define CORE_ENGINE_MAX_ALLOCATIONS       256           /**< 最大分配次数 */
#define CORE_ENGINE_GUARD_SIZE            32            /**< 保护区域大小 */

/** 错误代码常量 */
#define CORE_ENGINE_SUCCESS               0x00000000    /**< 操作成功 */
#define CORE_ENGINE_ERROR_INIT_FAILED     0x80000001    /**< 初始化失败 */
#define CORE_ENGINE_ERROR_INVALID_PARAM  0x80000002    /**< 无效参数 */
#define CORE_ENGINE_ERROR_TIMEOUT        0x80000003    /**< 操作超时 */
#define CORE_ENGINE_ERROR_MEMORY         0x80000004    /**< 内存错误 */
#define CORE_ENGINE_ERROR_STATE          0x80000005    /**< 状态错误 */

/** 系统状态常量 */
#define CORE_ENGINE_STATE_UNINITIALIZED   0x00         /**< 未初始化状态 */
#define CORE_ENGINE_STATE_INITIALIZING    0x01         /**< 初始化中状态 */
#define CORE_ENGINE_STATE_READY          0x02         /**< 就绪状态 */
#define CORE_ENGINE_STATE_RUNNING        0x03         /**< 运行状态 */
#define CORE_ENGINE_STATE_PAUSED         0x04         /**< 暂停状态 */
#define CORE_ENGINE_STATE_SHUTTING_DOWN  0x05         /**< 关闭中状态 */
#define CORE_ENGINE_STATE_ERROR          0x06         /**< 错误状态 */

/** 配置模式常量 */
#define CORE_ENGINE_CONFIG_MODE_BASIC     0x00         /**< 基本配置模式 */
#define CORE_ENGINE_CONFIG_MODE_ADVANCED  0x01         /**< 高级配置模式 */
#define CORE_ENGINE_CONFIG_MODE_CUSTOM    0x02         /**< 自定义配置模式 */
#define CORE_ENGINE_CONFIG_MODE_DEBUG     0x03         /**< 调试配置模式 */
#define CORE_ENGINE_CONFIG_MODE_PERF      0x05         /**< 性能配置模式 */

/*==============================================================================
 * 类型定义
 *==============================================================================*/

/** 基础类型别名 */
typedef uint64_t core_engine_handle_t;        /**< 核心引擎句柄类型 */
typedef uint32_t core_engine_state_t;         /**< 核心引擎状态类型 */
typedef uint32_t core_engine_config_t;        /**< 核心引擎配置类型 */
typedef uint32_t core_engine_result_t;        /**< 核心引擎结果类型 */
typedef uint32_t core_engine_flags_t;         /**< 核心引擎标志类型 */
typedef void*    core_engine_context_t;       /**< 核心引擎上下文类型 */

/** 配置相关类型 */
typedef uint64_t config_block_ptr_t;          /**< 配置块指针类型 */
typedef uint32_t config_mode_t;               /**< 配置模式类型 */
typedef uint32_t config_param_t;              /**< 配置参数类型 */
typedef uint32_t config_flags_t;              /**< 配置标志类型 */

/** 内存管理类型 */
typedef uint64_t memory_pool_t;               /**< 内存池类型 */
typedef uint32_t memory_size_t;               /**< 内存大小类型 */
typedef uint32_t memory_flags_t;              /**< 内存标志类型 */
typedef void*    memory_ptr_t;                 /**< 内存指针类型 */

/** 系统控制类型 */
typedef uint32_t system_mode_t;               /**< 系统模式类型 */
typedef uint32_t system_priority_t;           /**< 系统优先级类型 */
typedef uint32_t system_timeout_t;            /**< 系统超时类型 */
typedef uint32_t system_error_t;              /**< 系统错误类型 */

/*==============================================================================
 * 枚举定义
 *==============================================================================*/

/** 核心引擎状态枚举 */
typedef enum {
    CORE_ENGINE_STATUS_IDLE = 0,              /**< 空闲状态 */
    CORE_ENGINE_STATUS_BUSY = 1,              /**< 忙碌状态 */
    CORE_ENGINE_STATUS_READY = 2,             /**< 就绪状态 */
    CORE_ENGINE_STATUS_ERROR = 3,             /**< 错误状态 */
    CORE_ENGINE_STATUS_INITIALIZING = 4,      /**< 初始化中 */
    CORE_ENGINE_STATUS_SHUTTING_DOWN = 5,    /**< 关闭中 */
    CORE_ENGINE_STATUS_MAINTENANCE = 6       /**< 维护中 */
} core_engine_status_t;

/** 配置模式枚举 */
typedef enum {
    CONFIG_MODE_STANDARD = 0,                /**< 标准配置模式 */
    CONFIG_MODE_ENHANCED = 1,                /**< 增强配置模式 */
    CONFIG_MODE_EXTENDED = 2,                /**< 扩展配置模式 */
    CONFIG_MODE_LEGACY = 3,                 /**< 传统配置模式 */
    CONFIG_MODE_PERFORMANCE = 5,            /**< 性能配置模式 */
    CONFIG_MODE_CUSTOM = 6                   /**< 自定义配置模式 */
} config_mode_enum_t;

/** 初始化阶段枚举 */
typedef enum {
    INIT_PHASE_PREPARE = 0,                  /**< 准备阶段 */
    INIT_PHASE_CONFIGURE = 1,                /**< 配置阶段 */
    INIT_PHASE_INITIALIZE = 2,               /**< 初始化阶段 */
    INIT_PHASE_VALIDATE = 3,                /**< 验证阶段 */
    INIT_PHASE_STARTUP = 4                   /**< 启动阶段 */
} init_phase_t;

/** 错误级别枚举 */
typedef enum {
    ERROR_LEVEL_INFO = 0,                    /**< 信息级别 */
    ERROR_LEVEL_WARNING = 1,                 /**< 警告级别 */
    ERROR_LEVEL_ERROR = 2,                   /**< 错误级别 */
    ERROR_LEVEL_CRITICAL = 3,                /**< 严重错误级别 */
    ERROR_LEVEL_FATAL = 4                    /**< 致命错误级别 */
} error_level_t;

/*==============================================================================
 * 结构体定义
 *==============================================================================*/

/** 核心引擎配置结构体 */
typedef struct {
    config_block_ptr_t config_base;          /**< 配置基地址 */
    memory_pool_t memory_pool;               /**< 内存池句柄 */
    core_engine_state_t current_state;       /**< 当前状态 */
    core_engine_flags_t flags;               /**< 引擎标志 */
    config_mode_t config_mode;               /**< 配置模式 */
    uint32_t component_count;                /**< 组件计数 */
    uint32_t reserved[8];                   /**< 保留字段 */
} core_engine_config_t;

/** 系统初始化参数结构体 */
typedef struct {
    uint64_t param_1;                        /**< 参数1：系统句柄 */
    uint64_t param_2;                        /**< 参数2：配置参数 */
    uint64_t param_3;                        /**< 参数3：状态参数 */
    uint64_t param_4;                        /**< 参数4：扩展参数 */
    system_mode_t system_mode;               /**< 系统模式 */
    system_priority_t priority;             /**< 系统优先级 */
    uint32_t timeout_ms;                     /**< 超时时间 */
    uint32_t reserved[4];                   /**< 保留字段 */
} system_init_params_t;

/** 配置处理器结构体 */
typedef struct {
    config_mode_t mode;                      /**< 配置模式 */
    uint32_t param_count;                    /**< 参数计数 */
    uint32_t active_configs;                 /**< 活动配置数 */
    void* config_data;                       /**< 配置数据 */
    uint32_t data_size;                       /**< 数据大小 */
    uint32_t reserved[12];                  /**< 保留字段 */
} config_processor_t;

/*==============================================================================
 * 函数别名定义
 *==============================================================================*/

/** 系统初始化函数别名 */
#define CoreEngine_SystemInitializer          FUN_180100b40     /**< 核心引擎系统初始化器 */
#define CoreEngine_ConfigModeSetter          FUN_180100ff0     /**< 核心引擎配置模式设置器 */
#define CoreEngine_GlobalInitializer         FUN_180101008     /**< 核心引擎全局初始化器 */
#define CoreEngine_StateInitializer          FUN_180101016     /**< 核心引擎状态初始化器 */
#define CoreEngine_ComponentInitializer      FUN_18010101b     /**< 核心引擎组件初始化器 */

/** 配置管理函数别名 */
#define CoreEngine_ConfigProcessor           FUN_180101274     /**< 核心引擎配置处理器 */
#define CoreEngine_ConfigValidator           FUN_18010166b     /**< 核心引擎配置验证器 */
#define CoreEngine_ConfigFinalizer           FUN_1801016ac     /**< 核心引擎配置完成器 */

/** 系统控制函数别名 */
#define CoreEngine_SystemFinalizer           FUN_18010179b     /**< 核心引擎系统完成器 */
#define CoreEngine_EmptyHandler              FUN_1801017ce     /**< 核心引擎空处理器 */

/** 内部函数别名 */
#define CoreEngine_InternalInit              FUN_18005d580     /**< 核心引擎内部初始化 */
#define CoreEngine_ComponentInit             FUN_18005b7c0     /**< 核心引擎组件初始化 */
#define CoreEngine_ConfigSetup               FUN_18005d260     /**< 核心引擎配置设置 */
#define CoreEngine_ErrorHandler              FUN_18064e900     /**< 核心引擎错误处理器 */

/** 配置设置函数别名 */
#define CoreEngine_SetConfig230              FUN_18010e230     /**< 设置配置230 */
#define CoreEngine_SetConfig170              FUN_18010e170     /**< 设置配置170 */
#define CoreEngine_SetConfig0B0              FUN_18010e0b0     /**< 设置配置0B0 */
#define CoreEngine_SetConfig030              FUN_18010e030     /**< 设置配置030 */
#define CoreEngine_SetConfigFB0              FUN_18010dfb0     /**< 设置配置FB0 */
#define CoreEngine_SetConfigEF0              FUN_18010def0     /**< 设置配置EF0 */
#define CoreEngine_SetConfig330              FUN_18010e330     /**< 设置配置330 */
#define CoreEngine_SetConfig2B0              FUN_18010e2b0     /**< 设置配置2B0 */
#define CoreEngine_SetConfigE30              FUN_18010de30     /**< 设置配置E30 */
#define CoreEngine_SetConfig430              FUN_18010e430     /**< 设置配置430 */
#define CoreEngine_SetConfig3B0              FUN_18010e3b0     /**< 设置配置3B0 */
#define CoreEngine_SetConfigD70              FUN_18010dd70     /**< 设置配置D70 */
#define CoreEngine_SetConfigCF0              FUN_18010dcf0     /**< 设置配置CF0 */
#define CoreEngine_SetConfigC70              FUN_18010dc70     /**< 设置配置C70 */
#define CoreEngine_SetConfigBF0              FUN_18010dbf0     /**< 设置配置BF0 */
#define CoreEngine_SetConfigB70              FUN_18010db70     /**< 设置配置B70 */
#define CoreEngine_SetConfigAF0              FUN_18010daf0     /**< 设置配置AF0 */
#define CoreEngine_SetConfigA70              FUN_18010da70     /**< 设置配置A70 */
#define CoreEngine_SetConfig9F0              FUN_18010d9f0     /**< 设置配置9F0 */
#define CoreEngine_SetConfig970              FUN_18010d970     /**< 设置配置970 */
#define CoreEngine_SetConfig8F0              FUN_18010d8f0     /**< 设置配置8F0 */
#define CoreEngine_SetConfig870              FUN_18010d870     /**< 设置配置870 */
#define CoreEngine_SetConfig7F0              FUN_18010d7f0     /**< 设置配置7F0 */
#define CoreEngine_SetConfig770              FUN_18010d770     /**< 设置配置770 */
#define CoreEngine_SetConfig6F0              FUN_18010d6f0     /**< 设置配置6F0 */
#define CoreEngine_SetConfig670              FUN_18010d670     /**< 设置配置670 */
#define CoreEngine_SetConfig5F0              FUN_18010d5f0     /**< 设置配置5F0 */
#define CoreEngine_SetConfig570              FUN_18010d570     /**< 设置配置570 */
#define CoreEngine_SetConfig4F0              FUN_18010d4f0     /**< 设置配置4F0 */
#define CoreEngine_SetConfig470              FUN_18010d470     /**< 设置配置470 */
#define CoreEngine_SetConfig3B0_2            FUN_18010d3b0     /**< 设置配置3B0_2 */
#define CoreEngine_SetConfig2F0              FUN_18010d2f0     /**< 设置配置2F0 */
#define CoreEngine_SetConfig270              FUN_18010d270     /**< 设置配置270 */
#define CoreEngine_SetConfig1F0              FUN_18010d1f0     /**< 设置配置1F0 */
#define CoreEngine_SetConfig170_2            FUN_18010d170     /**< 设置配置170_2 */
#define CoreEngine_SetConfig0F0              FUN_18010d0f0     /**< 设置配置0F0 */
#define CoreEngine_SetConfig070              FUN_18010d070     /**< 设置配置070 */

/*==============================================================================
 * 全局变量声明
 *==============================================================================*/

/** 外部全局变量引用 */
extern uint64_t UNK_180a062e0;               /**< 全局配置数据结构 */
extern uint64_t UNK_180a02968;               /**< 全局状态数据结构 */
extern uint64_t UNK_180a3c3e0;               /**< 全局错误处理结构 */
extern uint64_t UNK_18098bcb0;               /**< 全局系统配置结构 */
extern uint64_t _DAT_180c86920;             /**< 全局数据表基地址 */
extern uint64_t _DAT_180c8a9c8;             /**< 全局状态表基地址 */

/*==============================================================================
 * 核心函数实现
 *==============================================================================*/

/**
 * @brief 核心引擎系统初始化器
 * @param param_1 系统句柄指针
 * @param param_2 配置参数
 * @param param_3 状态参数
 * @param param_4 扩展参数
 * @details 执行系统级别的初始化，包括组件初始化、配置设置和状态管理
 * 
 * 功能说明：
 * - 设置全局配置数据结构
 * - 初始化系统组件
 * - 配置系统状态
 * - 执行错误检查和验证
 * - 建立系统运行环境
 * 
 * 技术实现：
 * - 使用多阶段初始化策略
 * - 支持条件初始化和验证
 * - 提供完整的错误处理机制
 * - 实现状态驱动的配置管理
 */
void CoreEngine_SystemInitializer(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 设置全局配置数据结构
    *param_1 = &UNK_180a062e0;
    
    // 执行内部初始化序列
    CoreEngine_InternalInit();
    CoreEngine_InternalInit();
    
    // 初始化系统组件配置块
    CoreEngine_ComponentInit(param_1 + 0x4b4);  // 配置块1
    CoreEngine_ComponentInit(param_1 + 0x4a6);  // 配置块2
    CoreEngine_ComponentInit(param_1 + 0x498);  // 配置块3
    CoreEngine_ComponentInit(param_1 + 0x48a);  // 配置块4
    CoreEngine_ComponentInit(param_1 + 0x47c);  // 配置块5
    CoreEngine_ComponentInit(param_1 + 0x46e);  // 配置块6
    CoreEngine_ComponentInit(param_1 + 0x460);  // 配置块7
    CoreEngine_ComponentInit(param_1 + 0x452);  // 配置块8
    CoreEngine_ComponentInit(param_1 + 0x444);  // 配置块9
    CoreEngine_ComponentInit(param_1 + 0x436);  // 配置块10
    CoreEngine_ComponentInit(param_1 + 0x428);  // 配置块11
    CoreEngine_ComponentInit(param_1 + 0x41a);  // 配置块12
    CoreEngine_ComponentInit(param_1 + 0x40c);  // 配置块13
    CoreEngine_ComponentInit(param_1 + 0x3fe);  // 配置块14
    CoreEngine_ComponentInit(param_1 + 0x3f0);  // 配置块15
    CoreEngine_ComponentInit(param_1 + 0x3e2);  // 配置块16
    CoreEngine_ComponentInit(param_1 + 0x3d4);  // 配置块17
    CoreEngine_ComponentInit(param_1 + 0x3c6);  // 配置块18
    CoreEngine_ComponentInit(param_1 + 0x3b8);  // 配置块19
    CoreEngine_ComponentInit(param_1 + 0x3aa);  // 配置块20
    CoreEngine_ComponentInit(param_1 + 0x39c);  // 配置块21
    CoreEngine_ComponentInit(param_1 + 0x38e);  // 配置块22
    CoreEngine_ComponentInit(param_1 + 0x380);  // 配置块23
    CoreEngine_ComponentInit(param_1 + 0x372);  // 配置块24
    CoreEngine_ComponentInit(param_1 + 0x364);  // 配置块25
    CoreEngine_ComponentInit(param_1 + 0x356);  // 配置块26
    CoreEngine_ComponentInit(param_1 + 0x348);  // 配置块27
    CoreEngine_ComponentInit(param_1 + 0x33a);  // 配置块28
    CoreEngine_ComponentInit(param_1 + 0x32c);  // 配置块29
    CoreEngine_ComponentInit(param_1 + 0x31e);  // 配置块30
    CoreEngine_ComponentInit(param_1 + 0x310);  // 配置块31
    CoreEngine_ComponentInit(param_1 + 0x302);  // 配置块32
    CoreEngine_ComponentInit(param_1 + 0x2f4);  // 配置块33
    CoreEngine_ComponentInit(param_1 + 0x2e6);  // 配置块34
    CoreEngine_ComponentInit(param_1 + 0x2d8);  // 配置块35
    CoreEngine_ComponentInit(param_1 + 0x2ca);  // 配置块36
    CoreEngine_ComponentInit(param_1 + 700);     // 配置块37
    CoreEngine_ComponentInit(param_1 + 0x2ae);  // 配置块38
    CoreEngine_ComponentInit(param_1 + 0x2a0);  // 配置块39
    CoreEngine_ComponentInit(param_1 + 0x292);  // 配置块40
    CoreEngine_ComponentInit(param_1 + 0x284);  // 配置块41
    CoreEngine_ComponentInit(param_1 + 0x276);  // 配置块42
    CoreEngine_ComponentInit(param_1 + 0x268);  // 配置块43
    CoreEngine_ComponentInit(param_1 + 0x25a);  // 配置块44
    CoreEngine_ComponentInit(param_1 + 0x24c);  // 配置块45
    CoreEngine_ComponentInit(param_1 + 0x23e);  // 配置块46
    CoreEngine_ComponentInit(param_1 + 0x230);  // 配置块47
    CoreEngine_ComponentInit(param_1 + 0x222);  // 配置块48
    CoreEngine_ComponentInit(param_1 + 0x214);  // 配置块49
    CoreEngine_ComponentInit(param_1 + 0x206);  // 配置块50
    CoreEngine_ComponentInit(param_1 + 0x1f8);  // 配置块51
    CoreEngine_ComponentInit(param_1 + 0x1ea);  // 配置块52
    CoreEngine_ComponentInit(param_1 + 0x1dc);  // 配置块53
    CoreEngine_ComponentInit(param_1 + 0x1ce);  // 配置块54
    CoreEngine_ComponentInit(param_1 + 0x1c0);  // 配置块55
    CoreEngine_ComponentInit(param_1 + 0x1b2);  // 配置块56
    CoreEngine_ComponentInit(param_1 + 0x1a4);  // 配置块57
    CoreEngine_ComponentInit(param_1 + 0x196);  // 配置块58
    CoreEngine_ComponentInit(param_1 + 0x188);  // 配置块59
    CoreEngine_ComponentInit(param_1 + 0x17a);  // 配置块60
    CoreEngine_ComponentInit(param_1 + 0x16c);  // 配置块61
    CoreEngine_ComponentInit(param_1 + 0x15e);  // 配置块62
    CoreEngine_ComponentInit(param_1 + 0x150);  // 配置块63
    CoreEngine_ComponentInit(param_1 + 0x142);  // 配置块64
    CoreEngine_ComponentInit(param_1 + 0x134);  // 配置块65
    CoreEngine_ComponentInit(param_1 + 0x126);  // 配置块66
    CoreEngine_ComponentInit(param_1 + 0x118);  // 配置块67
    CoreEngine_ComponentInit(param_1 + 0x10a);  // 配置块68
    CoreEngine_ComponentInit(param_1 + 0xfc);   // 配置块69
    CoreEngine_ComponentInit(param_1 + 0xee);   // 配置块70
    CoreEngine_ComponentInit(param_1 + 0xe0);   // 配置块71
    CoreEngine_ComponentInit(param_1 + 0xd2);   // 配置块72
    CoreEngine_ComponentInit(param_1 + 0xc4);   // 配置块73
    CoreEngine_ComponentInit(param_1 + 0xb6);   // 配置块74
    CoreEngine_ComponentInit(param_1 + 0xa8);   // 配置块75
    CoreEngine_ComponentInit(param_1 + 0x9a);   // 配置块76
    CoreEngine_ComponentInit(param_1 + 0x8c);   // 配置块77
    CoreEngine_ComponentInit(param_1 + 0x7e);   // 配置块78
    CoreEngine_ComponentInit(param_1 + 0x70);   // 配置块79
    CoreEngine_ComponentInit(param_1 + 0x62);   // 配置块80
    CoreEngine_ComponentInit(param_1 + 0x54);   // 配置块81
    CoreEngine_ComponentInit(param_1 + 0x46);   // 配置块82
    CoreEngine_ComponentInit(param_1 + 0x38);   // 配置块83
    CoreEngine_ComponentInit(param_1 + 0x2a);   // 配置块84
    CoreEngine_ComponentInit(param_1 + 0x1c);   // 配置块85
    
    // 设置状态数据结构
    *param_1 = &UNK_180a02968;
    param_1[0x18] = &UNK_180a3c3e0;
    
    // 错误状态检查和处理
    if (param_1[0x19] != 0) {
        // 错误状态触发，调用错误处理器
        CoreEngine_ErrorHandler();
    }
    param_1[0x19] = 0;
    
    // 初始化系统配置
    *(int32_t *)(param_1 + 0x1b) = 0;
    param_1[0x18] = &UNK_18098bcb0;
    
    // 执行系统配置设置
    CoreEngine_ConfigSetup(param_1 + 0x12, param_1[0x14], param_3, param_4, 0xfffffffffffffffe);
    
    // 系统状态验证
    if (param_1[0xd] != 0) {
        CoreEngine_ErrorHandler();
    }
    if (param_1[9] != 0) {
        CoreEngine_ErrorHandler();
    }
    if (param_1[5] != 0) {
        CoreEngine_ErrorHandler();
    }
    if (param_1[1] != 0) {
        CoreEngine_ErrorHandler();
    }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 核心引擎配置模式设置器
 * @param param_1 系统句柄
 * @param param_2 配置模式参数
 * @details 根据指定的配置模式参数，设置系统的各项配置
 * 
 * 功能说明：
 * - 支持多种配置模式（0-5）
 * - 根据模式参数动态配置系统
 * - 提供条件配置和优化选项
 * - 支持高级配置参数调整
 * 
 * 配置模式说明：
 * - 模式0：标准配置模式
 * - 模式1：增强配置模式
 * - 模式2：扩展配置模式
 * - 模式3：传统配置模式
 * - 模式5：性能配置模式
 * 
 * 技术实现：
 * - 使用条件分支配置策略
 * - 支持动态参数获取和设置
 * - 提供完整的配置验证机制
 * - 实现配置状态管理
 */
void CoreEngine_ConfigModeSetter(uint64_t param_1, int param_2)
{
    longlong system_handle;
    int32_t config_param;
    int32_t mode_param;
    int32_t option_param;
    int32_t setting_param;
    int32_t control_param;
    int32_t adjustment_param;
    
    system_handle = _DAT_180c86920;
    
    // 基本配置模式处理（模式0-4）
    if (param_2 < 5) {
        setting_param = 0;
        mode_param = 1;
        option_param = 4;
        control_param = 4;
        adjustment_param = 2;
        
        // 根据配置模式确定参数
        if (param_2 == 0) {
            config_param = 0;  // 标准配置
        }
        else if (param_2 == 1) {
            config_param = 1;  // 增强配置
        }
        else {
            config_param = adjustment_param;
            if (param_2 != 2) {
                if (param_2 == 3) {
                    config_param = 3;  // 传统配置
                }
                else {
                    config_param = control_param;
                    if (param_2 == 5) {
                        config_param = *(int32_t *)(_DAT_180c86920 + 0xe0);  // 动态配置
                    }
                }
            }
        }
        
        // 设置配置230
        CoreEngine_SetConfig230(_DAT_180c86920, config_param);
        
        // 重新确定配置参数用于170设置
        if (param_2 == 0) {
            config_param = 0;
        }
        else if (param_2 == 1) {
            config_param = 1;
        }
        else {
            config_param = adjustment_param;
            if (param_2 != 2) {
                if (param_2 == 3) {
                    config_param = 3;
                }
                else if (param_2 == 5) {
                    config_param = *(int32_t *)(system_handle + 0x150);
                }
                else {
                    config_param = 5;  // 默认配置
                }
            }
        }
        
        // 设置配置170
        CoreEngine_SetConfig170(system_handle, config_param);
        
        // 设置配置0B0
        if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
            config_param = 0;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            config_param = 1;
        }
        else {
            config_param = *(int32_t *)(system_handle + 0x1c0);
        }
        CoreEngine_SetConfig0B0(system_handle, config_param);
        
        // 设置配置030
        if ((param_2 == 0) || (param_2 == 1)) {
            config_param = 0;
        }
        else if ((param_2 == 2) || (param_2 == 3)) {
            config_param = 1;
        }
        else if (param_2 == 5) {
            config_param = *(int32_t *)(system_handle + 0x230);
        }
        else {
            config_param = 2;
        }
        CoreEngine_SetConfig030(system_handle, config_param);
        
        // 设置配置FB0
        if (param_2 == 0) {
            config_param = 0;
        }
        else if (param_2 == 1) {
            config_param = 1;
        }
        else if (param_2 == 2) {
            config_param = 2;
        }
        else if (param_2 == 3) {
            config_param = 3;
        }
        else {
            config_param = control_param;
            if (param_2 == 5) {
                config_param = *(int32_t *)(system_handle + 0x2a0);
            }
        }
        CoreEngine_SetConfigFB0(system_handle, config_param);
        
        // 设置配置EF0
        if (param_2 == 0) {
            config_param = 1;
        }
        else if (param_2 == 1) {
            config_param = 2;
        }
        else if (param_2 == 2) {
            config_param = 3;
        }
        else {
            config_param = control_param;
            if (param_2 != 3) {
                if (param_2 == 5) {
                    config_param = *(int32_t *)(system_handle + 0x310);
                }
                else {
                    config_param = 5;
                }
            }
        }
        CoreEngine_SetConfigEF0(system_handle, config_param);
        
        // 设置配置330
        if ((param_2 == 0) || (param_2 == 1)) {
            config_param = 0;
        }
        else if (param_2 == 2) {
            config_param = 1;
        }
        else if (param_2 == 3) {
            config_param = 2;
        }
        else if (param_2 == 5) {
            config_param = *(int32_t *)(system_handle + 0x380);
        }
        else {
            config_param = 3;
        }
        CoreEngine_SetConfig330(system_handle, config_param);
        
        // 设置配置2B0
        if (param_2 == 0) {
            config_param = 0;
        }
        else if ((param_2 == 1) || (param_2 == 2)) {
            config_param = 1;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            config_param = 2;
        }
        else {
            config_param = *(int32_t *)(system_handle + 0x3f0);
        }
        CoreEngine_SetConfig2B0(system_handle, config_param);
        
        // 设置配置E30
        if (param_2 == 0) {
            config_param = 0;
        }
        else if ((param_2 == 1) || (param_2 == 2)) {
            config_param = 1;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            config_param = 2;
        }
        else {
            config_param = *(int32_t *)(system_handle + 0x460);
        }
        CoreEngine_SetConfigE30(system_handle, config_param);
        
        // 设置配置430
        if (param_2 == 0) {
            option_param = 0;
        }
        else if (param_2 == 1) {
            option_param = 1;
        }
        else if (param_2 == 2) {
            option_param = 3;
        }
        else if ((param_2 != 3) && (option_param = 5, param_2 == 5)) {
            option_param = *(int32_t *)(system_handle + 0x4d0);
        }
        CoreEngine_SetConfig430(system_handle, option_param);
        
        // 设置配置3B0
        if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || ((param_2 == 3 || (param_2 != 5)))) {
            option_param = 0;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x540);
        }
        CoreEngine_SetConfig3B0(system_handle, option_param);
        
        // 设置配置D70
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x5b0);
        }
        CoreEngine_SetConfigD70(system_handle, option_param);
        
        // 设置配置CF0
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x620);
        }
        CoreEngine_SetConfigCF0(system_handle, option_param);
        
        // 设置配置C70
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x690);
        }
        CoreEngine_SetConfigC70(system_handle, option_param);
        
        // 设置配置BF0
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (param_2 == 2) {
            option_param = 1;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            option_param = 2;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x700);
        }
        CoreEngine_SetConfigBF0(system_handle, option_param);
        
        // 设置配置B70
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x770);
        }
        CoreEngine_SetConfigB70(system_handle, option_param);
        
        // 设置配置AF0
        if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
            option_param = 0;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x7e0);
        }
        CoreEngine_SetConfigAF0(system_handle, option_param);
        
        // 设置配置A70
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x850);
        }
        CoreEngine_SetConfigA70(system_handle, option_param);
        
        // 设置配置9F0
        if (param_2 == 0) {
            option_param = 0;
        }
        else if (((param_2 == 1) || (param_2 == 2)) || ((param_2 == 3 || (param_2 != 5)))) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x8c0);
        }
        CoreEngine_SetConfig9F0(system_handle, option_param);
        
        // 设置配置970
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x930);
        }
        CoreEngine_SetConfig970(system_handle, option_param);
        
        // 设置配置8F0
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0x9a0);
        }
        CoreEngine_SetConfig8F0(system_handle, option_param);
        
        // 设置配置870
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0xa10);
        }
        CoreEngine_SetConfig870(system_handle, option_param);
        
        // 设置配置7F0
        if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
            option_param = 0;
        }
        else if ((param_2 == 3) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0xa80);
        }
        CoreEngine_SetConfig7F0(system_handle, option_param);
        
        // 设置配置770
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if ((param_2 == 2) || (param_2 == 3)) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (param_2 == 5) {
                option_param = *(int32_t *)(system_handle + 0xaf0);
            }
        }
        CoreEngine_SetConfig770(system_handle, option_param);
        
        // 设置配置6F0
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if ((param_2 == 2) || (param_2 == 3)) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (param_2 == 5) {
                option_param = *(int32_t *)(system_handle + 0xb60);
            }
        }
        CoreEngine_SetConfig6F0(system_handle, option_param);
        
        // 设置配置670
        if (param_2 == 0) {
            option_param = 0;
        }
        else if (param_2 == 1) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (((param_2 != 2) && (param_2 != 3)) && (param_2 == 5)) {
                option_param = *(int32_t *)(system_handle + 0xbd0);
            }
        }
        CoreEngine_SetConfig670(system_handle, option_param);
        
        // 设置配置5F0
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (((param_2 != 2) && (param_2 != 3)) && (param_2 == 5)) {
                option_param = *(int32_t *)(system_handle + 0xc40);
            }
        }
        CoreEngine_SetConfig5F0(system_handle, option_param);
        
        // 设置配置570
        if ((param_2 == 0) || (param_2 == 1)) {
            option_param = 0;
        }
        else if (param_2 == 2) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (param_2 != 3) {
                if (param_2 == 5) {
                    option_param = *(int32_t *)(system_handle + 0xcb0);
                }
                else {
                    option_param = 3;
                }
            }
        }
        CoreEngine_SetConfig570(system_handle, option_param);
        
        // 设置配置4F0
        if (param_2 == 0) {
            option_param = 0;
        }
        else if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 3)) || (param_2 != 5)) {
            option_param = 1;
        }
        else {
            option_param = *(int32_t *)(system_handle + 0xd20);
        }
        CoreEngine_SetConfig4F0(system_handle, option_param);
        
        // 设置配置470
        if (param_2 == 0) {
            option_param = 0;
        }
        else if (param_2 == 1) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (param_2 != 2) {
                if (param_2 == 3) {
                    option_param = 3;
                }
                else {
                    option_param = control_param;
                    if (param_2 == 5) {
                        option_param = *(int32_t *)(system_handle + 0xd90);
                    }
                }
            }
        }
        CoreEngine_SetConfig470(system_handle, option_param);
        
        // 设置配置3B0_2
        if (param_2 == 0) {
            option_param = 0;
        }
        else if (param_2 == 1) {
            option_param = 1;
        }
        else {
            option_param = adjustment_param;
            if (param_2 != 2) {
                if (param_2 == 3) {
                    option_param = 3;
                }
                else {
                    option_param = control_param;
                    if (param_2 == 5) {
                        option_param = *(int32_t *)(system_handle + 0xe00);
                    }
                }
            }
        }
        CoreEngine_SetConfig3B0_2(system_handle, option_param);
        
        // 设置配置2F0
        if ((param_2 == 0) || (param_2 == 1)) {
            adjustment_param = 0;
        }
        else if (param_2 == 2) {
            adjustment_param = 1;
        }
        else if ((param_2 != 3) && (param_2 == 5)) {
            adjustment_param = *(int32_t *)(system_handle + 0xe70);
        }
        CoreEngine_SetConfig2F0(system_handle, adjustment_param);
        
        // 条件配置设置（基于全局状态）
        if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != 0) {
            if ((param_2 == 0) || (param_2 == 1)) {
                option_param = 0;
            }
            else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
                option_param = 1;
            }
            else {
                option_param = *(int32_t *)(system_handle + 0xee0);
            }
            CoreEngine_SetConfig270(system_handle, option_param);
        }
        
        if (*(int *)(_DAT_180c8a9c8 + 0xd20) != 0) {
            if ((param_2 == 0) || (param_2 == 1)) {
                option_param = 0;
            }
            else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
                option_param = 1;
            }
            else {
                option_param = *(int32_t *)(system_handle + 0xf50);
            }
            CoreEngine_SetConfig1F0(system_handle, option_param);
        }
        
        if (*(int *)(_DAT_180c8a9c8 + 0xd90) != 0) {
            if ((param_2 == 0) || (param_2 == 1)) {
                option_param = 0;
            }
            else if (((param_2 == 2) || (param_2 == 3)) || (param_2 != 5)) {
                option_param = 1;
            }
            else {
                option_param = *(int32_t *)(system_handle + 0xfc0);
            }
            CoreEngine_SetConfig170_2(system_handle, option_param);
        }
        
        if (*(int *)(_DAT_180c8a9c8 + 0xe00) != 0) {
            option_param = 1;
            if (((param_2 != 0) && (param_2 != 1)) &&
                ((option_param = mode_param, param_2 != 2 && ((param_2 != 3 && (param_2 == 5)))))) {
                option_param = *(int32_t *)(system_handle + 0x1030);
            }
            CoreEngine_SetConfig0F0(system_handle, option_param);
        }
        
        if (*(int *)(_DAT_180c8a9c8 + 0xe70) != 0) {
            option_param = 0;
            if ((((param_2 != 0) && (option_param = setting_param, param_2 != 1)) && (param_2 != 2)) &&
                ((param_2 != 3 && (param_2 == 5)))) {
                option_param = *(int32_t *)(system_handle + 0x10a0);
            }
            CoreEngine_SetConfig070(system_handle, option_param);
        }
    }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180101008(void)
void FUN_180101008(void)

{
  FUN_18010e230();
  FUN_18010e170();
  FUN_18010e0b0();
  FUN_18010e030();
  FUN_18010dfb0();
  FUN_18010def0();
  FUN_18010e330();
  FUN_18010e2b0();
  FUN_18010de30();
  FUN_18010e430();
  FUN_18010e3b0();
  FUN_18010dd70();
  FUN_18010dcf0();
  FUN_18010dc70();
  FUN_18010dbf0();
  FUN_18010db70();
  FUN_18010daf0();
  FUN_18010da70();
  FUN_18010d9f0();
  FUN_18010d970();
  FUN_18010d8f0();
  FUN_18010d870();
  FUN_18010d7f0();
  FUN_18010d770();
  FUN_18010d6f0();
  FUN_18010d670();
  FUN_18010d5f0();
  FUN_18010d570();
  FUN_18010d4f0();
  FUN_18010d470();
  FUN_18010d3b0();
  FUN_18010d2f0();
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != 0) {
    FUN_18010d270();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != 0) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != 0) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != 0) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != 0) {
    FUN_18010d070();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180101016(void)
void FUN_180101016(void)

{
  int unaff_EDI;
  
  FUN_18010e230();
  FUN_18010e170();
  FUN_18010e0b0();
  FUN_18010e030();
  FUN_18010dfb0();
  FUN_18010def0();
  FUN_18010e330();
  FUN_18010e2b0();
  FUN_18010de30();
  FUN_18010e430();
  FUN_18010e3b0();
  FUN_18010dd70();
  FUN_18010dcf0();
  FUN_18010dc70();
  FUN_18010dbf0();
  FUN_18010db70();
  FUN_18010daf0();
  FUN_18010da70();
  FUN_18010d9f0();
  FUN_18010d970();
  FUN_18010d8f0();
  FUN_18010d870();
  FUN_18010d7f0();
  FUN_18010d770();
  FUN_18010d6f0();
  FUN_18010d670();
  FUN_18010d5f0();
  FUN_18010d570();
  FUN_18010d4f0();
  FUN_18010d470();
  FUN_18010d3b0();
  FUN_18010d2f0();
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != unaff_EDI) {
    FUN_18010d270();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != unaff_EDI) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != unaff_EDI) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != unaff_EDI) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != unaff_EDI) {
    FUN_18010d070();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010101b(void)
void FUN_18010101b(void)

{
  int unaff_EDI;
  
  FUN_18010e230();
  FUN_18010e170();
  FUN_18010e0b0();
  FUN_18010e030();
  FUN_18010dfb0();
  FUN_18010def0();
  FUN_18010e330();
  FUN_18010e2b0();
  FUN_18010de30();
  FUN_18010e430();
  FUN_18010e3b0();
  FUN_18010dd70();
  FUN_18010dcf0();
  FUN_18010dc70();
  FUN_18010dbf0();
  FUN_18010db70();
  FUN_18010daf0();
  FUN_18010da70();
  FUN_18010d9f0();
  FUN_18010d970();
  FUN_18010d8f0();
  FUN_18010d870();
  FUN_18010d7f0();
  FUN_18010d770();
  FUN_18010d6f0();
  FUN_18010d670();
  FUN_18010d5f0();
  FUN_18010d570();
  FUN_18010d4f0();
  FUN_18010d470();
  FUN_18010d3b0();
  FUN_18010d2f0();
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != unaff_EDI) {
    FUN_18010d270();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != unaff_EDI) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != unaff_EDI) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != unaff_EDI) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != unaff_EDI) {
    FUN_18010d070();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180101274(void)
void FUN_180101274(void)

{
  int unaff_EDI;
  
  FUN_18010e3b0();
  FUN_18010dd70();
  FUN_18010dcf0();
  FUN_18010dc70();
  FUN_18010dbf0();
  FUN_18010db70();
  FUN_18010daf0();
  FUN_18010da70();
  FUN_18010d9f0();
  FUN_18010d970();
  FUN_18010d8f0();
  FUN_18010d870();
  FUN_18010d7f0();
  FUN_18010d770();
  FUN_18010d6f0();
  FUN_18010d670();
  FUN_18010d5f0();
  FUN_18010d570();
  FUN_18010d4f0();
  FUN_18010d470();
  FUN_18010d3b0();
  FUN_18010d2f0();
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != unaff_EDI) {
    FUN_18010d270();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != unaff_EDI) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != unaff_EDI) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != unaff_EDI) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != unaff_EDI) {
    FUN_18010d070();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010166b(void)
void FUN_18010166b(void)

{
  int unaff_EDI;
  
  FUN_18010d2f0();
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != unaff_EDI) {
    FUN_18010d270();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != unaff_EDI) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != unaff_EDI) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != unaff_EDI) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != unaff_EDI) {
    FUN_18010d070();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801016ac(void)
void FUN_1801016ac(void)

{
  int unaff_EDI;
  
  FUN_18010d270();
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != unaff_EDI) {
    FUN_18010d1f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != unaff_EDI) {
    FUN_18010d170();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != unaff_EDI) {
    FUN_18010d0f0();
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != unaff_EDI) {
    FUN_18010d070();
  }
  return;
}





// 函数: void FUN_18010179b(void)
void FUN_18010179b(void)

{
  FUN_18010d070();
  return;
}





// 函数: void FUN_1801017ce(void)
void FUN_1801017ce(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



