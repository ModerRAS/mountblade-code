/*
 * FUN_函数语义化别名定义
 * 自动生成的别名定义，用于提高代码可读性
 */

#include "fun_aliases_batch.txt"

/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 03_rendering_part547_sub002_sub002.c - 渲染系统高级初始化和配置模块
// ============================================================================

/**
 * @file 03_rendering_part547_sub002_sub002.c
 * @brief 渲染系统高级初始化和配置模块
 * 
 * 本模块包含渲染系统的高级初始化、配置、回调设置和系统管理功能。
 * 主要负责3D渲染系统的函数指针注册、系统初始化、回调设置和配置管理。
 * 
 * 主要功能：
 * - 渲染系统高级初始化和配置
 * - 函数指针注册和回调设置
 * - 系统状态管理和同步
 * - 内存管理和资源分配
 * - 线程安全和错误处理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// 系统初始化函数
#define RenderingSystemAdvancedInitializer RenderingSystem_InitManagerAdvanced       // 渲染系统高级初始化器
#define RenderingSystemConfigManager RenderingSystemConfigManager             // 渲染系统配置管理器
#define RenderingSystemStateInitializer RenderingSystemStateInitializer          // 渲染系统状态初始化器
#define RenderingSystemCallbackRegistrar RenderingSystemCallbackRegistrar         // 渲染系统回调注册器
#define RenderingSystemResourceAllocator RenderingSystemResourceAllocator         // 渲染系统资源分配器

// 系统配置函数
#define RenderingSystemParameterSetter RenderingSystemParameterSetter            // 渲染系统参数设置器
#define RenderingSystemPropertyConfigurator RenderingSystem_PropertyHandler      // 渲染系统属性配置器
#define RenderingSystemOptionManager RenderingSystemOptionManager             // 渲染系统选项管理器
#define RenderingSystemSettingHandler RenderingSystemSettingHandler            // 渲染系统设置处理器
#define RenderingSystemValueInitializer RenderingSystemValueInitializer          // 渲染系统值初始化器

// 系统管理函数
#define RenderingSystemController RenderingSystemController                // 渲染系统控制器
#define RenderingSystemSupervisor RenderingSystemSupervisor                // 渲染系统监督器
#define RenderingSystemAdministrator RenderingSystemAdministrator             // 渲染系统管理员
#define RenderingSystemOperator RenderingSystemOperator                   // 渲染系统操作器
#define RenderingSystemExecutor RenderingSystemExecutor                  // 渲染系统执行器

// 系统状态函数
#define RenderingSystemStateManager RenderingSystemStateManager              // 渲染系统状态管理器
#define RenderingSystemStatusMonitor RenderingSystemStatusMonitor              // 渲染系统状态监控器
#define RenderingSystemProgressTracker RenderingSystemProgressTracker           // 渲染系统进度跟踪器
#define RenderingSystemConditionChecker RenderingSystemConditionChecker          // 渲染系统条件检查器
#define RenderingSystemValidator RenderingSystemValidator                 // 渲染系统验证器

// 系统工具函数
#define RenderingSystemUtilityHelper RenderingSystemUtilityHelper              // 渲染系统工具助手
#define RenderingSystemServiceProcessor RenderingSystemServiceProcessor          // 渲染系统服务处理器
#define RenderingSystemHandler RenderingSystemHandler                   // 渲染系统处理器
#define RenderingSystemWorker RenderingSystemWorker                    // 渲染系统工作者
#define RenderingSystemTaskRunner RenderingSystemTaskRunner                // 渲染系统任务运行器

// 系统操作函数
#define RenderingSystemActionExecutor RenderingSystemActionExecutor            // 渲染系统动作执行器
#define RenderingSystemCommandHandler RenderingSystemCommandHandler            // 渲染系统命令处理器
#define RenderingSystemRequestProcessor RenderingSystemRequestProcessor         // 渲染系统请求处理器
#define RenderingSystemEventDispatcher RenderingSystemEventDispatcher          // 渲染系统事件分发器

// 渲染系统高级处理函数
#define RenderingSystemAdvancedDataProcessor FUN_1805ff2e0                   // 渲染系统高级数据处理器
#define RenderingSystemAdvancedConfigManager FUN_180600930                  // 渲染系统高级配置管理器
#define RenderingSystemAdvancedStateProcessor FUN_180601520                 // 渲染系统高级状态处理器
#define RenderingSystemAdvancedStateHandler FUN_180601ce0                   // 渲染系统高级状态处理器
#define RenderingSystemAdvancedCleanupManager FUN_1806039e0                // 渲染系统高级清理管理器
#define RenderingSystemAdvancedResourceHandler FUN_1805ffe60               // 渲染系统高级资源处理器
#define RenderingSystemAdvancedMemoryManager FUN_180601db0                // 渲染系统高级内存管理器
#define RenderingSystemAdvancedBufferHandler FUN_180601c20                // 渲染系统高级缓冲区处理器
#define RenderingSystemAdvancedStreamProcessor FUN_180601c60               // 渲染系统高级流处理器

// 渲染系统数据流处理函数
#define RenderingSystemStreamProcessor FUN_180602950                       // 渲染系统流处理器
#define RenderingSystemStreamHandler FUN_1806007a0                        // 渲染系统流处理器
#define RenderingSystemStreamController FUN_1806027a0                     // 渲染系统流控制器
#define RenderingSystemStreamManager FUN_1805ffed0                       // 渲染系统流管理器
#define RenderingSystemStreamExecutor FUN_180602590                      // 渲染系统流执行器

// 渲染系统初始化函数
#define RenderingSystemInitProcessor FUN_180601090                        // 渲染系统初始化处理器
#define RenderingSystemInitHandler FUN_1806011d0                         // 渲染系统初始化处理器
#define RenderingSystemInitController FUN_1806005f0                      // 渲染系统初始化控制器
#define RenderingSystemInitManager FUN_180601e80                         // 渲染系统初始化管理器
#define RenderingSystemInitExecutor FUN_180600d30                        // 渲染系统初始化执行器

// 渲染系统缓冲区管理函数
#define RenderingSystemBufferOptimizer FUN_180600bc0                     // 渲染系统缓冲区优化器
#define RenderingSystemBufferCleaner FUN_180603b90                      // 渲染系统缓冲区清理器
#define RenderingSystemBufferValidator FUN_1805ff5b0                    // 渲染系统缓冲区验证器
#define RenderingSystemBufferConfigurator FUN_1805ff670                 // 渲染系统缓冲区配置器
#define RenderingSystemBufferInitializer FUN_1805ff820                  // 渲染系统缓冲区初始化器

// 渲染系统内存管理函数
#define RenderingSystemMemoryConfigurator FUN_180600b80                 // 渲染系统内存配置器
#define RenderingSystemMemoryValidator FUN_180603210                  // 渲染系统内存验证器
#define RenderingSystemMemoryCleaner FUN_180603540                     // 渲染系统内存清理器

// 渲染系统工具函数
#define RenderingSystemToolManager FUN_1806009b0                        // 渲染系统工具管理器
#define RenderingSystemToolProcessor FUN_180602ab0                      // 渲染系统工具处理器
#define RenderingSystemToolHandler FUN_1806023c0                        // 渲染系统工具处理器
#define RenderingSystemToolController FUN_180601310                     // 渲染系统工具控制器
#define RenderingSystemToolExecutor FUN_1806015d0                      // 渲染系统工具执行器

// 渲染系统状态管理函数
#define RenderingSystemStateOptimizer FUN_1805ff540                    // 渲染系统状态优化器
#define RenderingSystemStateConfigurator FUN_180600890                 // 渲染系统状态配置器
#define RenderingSystemStateCleaner FUN_1805ff8c0                      // 渲染系统状态清理器

// 渲染系统性能管理函数
#define RenderingSystemPerformanceManager FUN_180605fa0               // 渲染系统性能管理器
#define RenderingSystemPerformanceOptimizer FUN_180606c00            // 渲染系统性能优化器
#define RenderingSystemPerformanceHandler FUN_1806068f0              // 渲染系统性能处理器

// 渲染系统验证函数
#define RenderingSystemValidationProcessor FUN_180607f40             // 渲染系统验证处理器
#define RenderingSystemValidationHandler FUN_180608420                // 渲染系统验证处理器

// 渲染系统动画函数
#define RenderingSystemAnimationValidator FUN_180610900               // 渲染系统动画验证器
#define RenderingSystemAnimationController FUN_180611440             // 渲染系统动画控制器
#define RenderingSystemAnimationManager FUN_1806136e0                // 渲染系统动画管理器

// 渲染系统渲染函数
#define RenderingSystemRenderValidator FUN_1806121d0                 // 渲染系统渲染验证器
#define RenderingSystemRenderOptimizer FUN_180612d20                 // 渲染系统渲染优化器

// 函数: void RenderingSystem_InitManagerAdvanced(int64_t param_1)
void RenderingSystem_InitManagerAdvanced(int64_t param_1)

{
  (**(code **)(param_1 + 0x100))(0,&processed_var_7680_ptr);
  (**(code **)(param_1 + 0x100))(1,RenderingSystemConfigManager);
  (**(code **)(param_1 + 0x100))(2,RenderingSystemStateInitializer);
  (**(code **)(param_1 + 0x100))(3,RenderingSystemCallbackRegistrar);
  (**(code **)(param_1 + 0x100))(4,RenderingSystemResourceAllocator);
  (**(code **)(param_1 + 0x100))(5,&processed_var_7424_ptr);
  (**(code **)(param_1 + 0x100))(6,&processed_var_7520_ptr);
  (**(code **)(param_1 + 0x100))(7,&processed_var_7536_ptr);
  (**(code **)(param_1 + 0x100))(8,&processed_var_7472_ptr);
  (**(code **)(param_1 + 0x100))(9,RenderingSystemParameterSetter);
  (**(code **)(param_1 + 0x100))(10,RenderingSystem_PropertyHandler);
  (**(code **)(param_1 + 0x100))(0xb,RenderingSystemOptionManager);
  (**(code **)(param_1 + 0x100))(0xc,RenderingSystemSettingHandler);
  (**(code **)(param_1 + 0x100))(0xd,&memory_allocator_3440_ptr);
  (**(code **)(param_1 + 0x100))(0xe,RenderingSystemValueInitializer);
  (**(code **)(param_1 + 0x100))(0xf,&processed_var_9728_ptr);
  (**(code **)(param_1 + 0x100))(0x10,RenderingSystemController);
  (**(code **)(param_1 + 0x100))(0x11,RenderingSystemSupervisor);
  (**(code **)(param_1 + 0x100))(0x12,&processed_var_6896_ptr);
  (**(code **)(param_1 + 0x100))(0x13,&ui_system_data_1456_ptr);
  (**(code **)(param_1 + 0x100))(0x14,RenderingSystemAdministrator);
  (**(code **)(param_1 + 0x100))(0x15,&processed_var_7264_ptr);
  (**(code **)(param_1 + 0x100))(0x16,RenderingSystemOperator);
  (**(code **)(param_1 + 0x100))(0x17,&memory_allocator_3488_ptr);
  (**(code **)(param_1 + 0x100))(0x18,RenderingSystemExecutor);
  (**(code **)(param_1 + 0x100))(0x19,&processed_var_5968_ptr);
  (**(code **)(param_1 + 0x100))(0x1a,&processed_var_9504_ptr);
  (**(code **)(param_1 + 0x100))(0x1b,RenderingSystemStateManager);
  (**(code **)(param_1 + 0x100))(0x1c,&processed_var_9264_ptr);
  (**(code **)(param_1 + 0x100))(0x1d,RenderingSystemStatusMonitor);
  (**(code **)(param_1 + 0x100))(0x1e,&processed_var_9728_ptr);
  (**(code **)(param_1 + 0x100))(0x1f,RenderingSystemProgressTracker);
  (**(code **)(param_1 + 0x100))(0x20,&processed_var_8192_ptr);
  (**(code **)(param_1 + 0x100))(0x21,&processed_var_9568_ptr);
  (**(code **)(param_1 + 0x100))(0x22,&processed_var_6928_ptr);
  (**(code **)(param_1 + 0x100))(0x23,&processed_var_6896_ptr);
  (**(code **)(param_1 + 0x100))(0x24,&processed_var_5136_ptr);
  (**(code **)(param_1 + 0x100))(0x25,&processed_var_7104_ptr);
  (**(code **)(param_1 + 0x100))(0x26,RenderingSystemConditionChecker);
  (**(code **)(param_1 + 0x100))(0x27,&processed_var_7584_ptr);
  (**(code **)(param_1 + 0x100))(0x28,&rendering_buffer_2896_ptr);
  (**(code **)(param_1 + 0x100))(0x29,RenderingSystemUtilityHelper);
  (**(code **)(param_1 + 0x100))(0x2a,RenderingSystemValidator);
  (**(code **)(param_1 + 0x100))(0x2b,&ui_system_data_1200_ptr);
  (**(code **)(param_1 + 0x100))(0x2c,&processed_var_5104_ptr);
  (**(code **)(param_1 + 0x100))(0x2d,&memory_allocator_3904_ptr);
  (**(code **)(param_1 + 0x100))(0x2e,&processed_var_5168_ptr);
  (**(code **)(param_1 + 0x100))(0x2f,&processed_var_4992_ptr);
  (**(code **)(param_1 + 0x100))(0x30,RenderingSystemServiceProcessor);
  (**(code **)(param_1 + 0x100))(0x31,&ui_system_data_1728_ptr);
  (**(code **)(param_1 + 0x100))(0x32,&processed_var_5024_ptr);
  (**(code **)(param_1 + 0x100))(0x33,&system_pattern2_ptr);
  (**(code **)(param_1 + 0x100))(0x34,&rendering_buffer_2912_ptr);
  (**(code **)(param_1 + 0x100))(0x35,&processed_var_6096_ptr);
  (**(code **)(param_1 + 0x100))(0x36,&processed_var_6240_ptr);
  (**(code **)(param_1 + 0x100))(0x37,&processed_var_6512_ptr);
  (**(code **)(param_1 + 0x100))(0x38,&processed_var_6576_ptr);
  (**(code **)(param_1 + 0x100))(0x39,&processed_var_6176_ptr);
  (**(code **)(param_1 + 0x100))(0x3a,&processed_var_6128_ptr);
  (**(code **)(param_1 + 0x100))(0x3b,&processed_var_4992_ptr);
  (**(code **)(param_1 + 0x100))(0x3c,&processed_var_4976_ptr);
  (**(code **)(param_1 + 0x100))(0x3d,&processed_var_6016_ptr);
  (**(code **)(param_1 + 0x100))(0x3e,&memory_allocator_3600_ptr);
  (**(code **)(param_1 + 0x100))(0x3f,&processed_var_9952_ptr);
  (**(code **)(param_1 + 0x100))(0x40,&processed_var_7744_ptr);
  (**(code **)(param_1 + 0x100))(0x41,&processed_var_4976_ptr);
  (**(code **)(param_1 + 0x100))(0x42,RenderingSystemHandler);
  (**(code **)(param_1 + 0x100))(0x43,&memory_allocator_3616_ptr);
  (**(code **)(param_1 + 0x100))(0x44,&processed_var_8912_ptr);
  (**(code **)(param_1 + 0x100))(0x45,&processed_var_4960_ptr);
  (**(code **)(param_1 + 0x100))(0x46,&ui_system_data_1696_ptr);
  (**(code **)(param_1 + 0x100))(0x47,&processed_var_7632_ptr);
  (**(code **)(param_1 + 0x100))(0x48,&memory_allocator_3536_ptr);
  (**(code **)(param_1 + 0x100))(0x49,RenderingSystemWorker);
  (**(code **)(param_1 + 0x100))(0x4a,&processed_var_4928_ptr);
  (**(code **)(param_1 + 0x100))(0x4b,&SUB_180525320);
  (**(code **)(param_1 + 0x100))(0x4c,&ui_system_data_1520_ptr);
  (**(code **)(param_1 + 0x100))(0x4d,RenderingSystemTaskRunner);
  (**(code **)(param_1 + 0x100))(0x4e,&processed_var_9728_ptr);
  (**(code **)(param_1 + 0x100))(0x4f,FUN_1805ff2e0);
  (**(code **)(param_1 + 0x100))(0x50,FUN_180600930);
  (**(code **)(param_1 + 0x100))(0x51,&memory_allocator_3296_ptr);
  (**(code **)(param_1 + 0x100))(0x52,&processed_var_4944_ptr);
  (**(code **)(param_1 + 0x100))(0x53,&processed_var_7712_ptr);
  (**(code **)(param_1 + 0x100))(0x54,&processed_var_8016_ptr);
  (**(code **)(param_1 + 0x100))(0x55,&SUB_18051f9a0);
  (**(code **)(param_1 + 0x100))(0x56,RenderingSystemActionExecutor);
  (**(code **)(param_1 + 0x100))(0x57,RenderingSystemCommandHandler);
  (**(code **)(param_1 + 0x100))(0x58,RenderingSystemRequestProcessor);
  (**(code **)(param_1 + 0x100))(0x59,RenderingSystemEventDispatcher);
  (**(code **)(param_1 + 0x100))(0x5a,RenderingSystemAdvancedProcessor);
  (**(code **)(param_1 + 0x100))(0x5b,&processed_var_7920_ptr);
  (**(code **)(param_1 + 0x100))(0x5c,&processed_var_8688_ptr);
  (**(code **)(param_1 + 0x100))(0x5d,&processed_var_8720_ptr);
  (**(code **)(param_1 + 0x100))(0x5e,&ui_system_data_1184_ptr);
  (**(code **)(param_1 + 0x100))(0x5f,&processed_var_4976_ptr);
  (**(code **)(param_1 + 0x100))(0x60,FUN_180601520);
  (**(code **)(param_1 + 0x100))(0x61,FUN_180601ce0);
  (**(code **)(param_1 + 0x100))(0x62,&processed_var_4576_ptr);
  (**(code **)(param_1 + 0x100))(99,&system_state_ptr);
  (**(code **)(param_1 + 0x100))(100,&processed_var_736_ptr);
  (**(code **)(param_1 + 0x100))(0x65,RenderingSystemAdvancedController);
  (**(code **)(param_1 + 0x100))(0x66,&processed_var_7744_ptr);
  (**(code **)(param_1 + 0x100))(0x67,&processed_var_7280_ptr);
  (**(code **)(param_1 + 0x100))(0x68,RenderingSystemAdvancedManager);
  (**(code **)(param_1 + 0x100))(0x69,&processed_var_8352_ptr);
  (**(code **)(param_1 + 0x100))(0x6a,&processed_var_8320_ptr);
  (**(code **)(param_1 + 0x100))(0x6b,&processed_var_7680_ptr);
  (**(code **)(param_1 + 0x100))(0x6c,&processed_var_5936_ptr);
  (**(code **)(param_1 + 0x100))(0x6d,&processed_var_9616_ptr);
  (**(code **)(param_1 + 0x100))(0x6e,RenderingSystem_StateInitializer);
  (**(code **)(param_1 + 0x100))(0x6f,&ui_system_data_1264_ptr);
  (**(code **)(param_1 + 0x100))(0x70,&processed_var_7792_ptr);
  (**(code **)(param_1 + 0x100))(0x71,&ui_system_data_1248_ptr);
  (**(code **)(param_1 + 0x100))(0x72,&animation_config_ptr);
  (**(code **)(param_1 + 0x100))(0x73,&processed_var_7728_ptr);
  (**(code **)(param_1 + 0x100))(0x74,RenderingSystem_StateManager);
  (**(code **)(param_1 + 0x100))(0x75,&rendering_buffer_2944_ptr);
  (**(code **)(param_1 + 0x100))(0x76,FUN_1806039e0);
  (**(code **)(param_1 + 0x100))(0x77,FUN_1805ffe60);
  (**(code **)(param_1 + 0x100))(0x78,&rendering_buffer_2400_ptr);
  (**(code **)(param_1 + 0x100))(0x79,&memory_allocator_3952_ptr);
  (**(code **)(param_1 + 0x100))(0x7a,FUN_180601db0);
  (**(code **)(param_1 + 0x100))(0x7b,&processed_var_5184_ptr);
  (**(code **)(param_1 + 0x100))(0x7c,FUN_180601c20);
  (**(code **)(param_1 + 0x100))(0x7d,FUN_180601c60);
  (**(code **)(param_1 + 0x100))(0x7e,&processed_var_4528_ptr);
  (**(code **)(param_1 + 0x100))(0x7f,&processed_var_5152_ptr);
  (**(code **)(param_1 + 0x100))(0x80,&processed_var_5120_ptr);
  (**(code **)(param_1 + 0x100))(0x81,&processed_var_9536_ptr);
  (**(code **)(param_1 + 0x100))(0x82,&processed_var_592_ptr);
  (**(code **)(param_1 + 0x100))(0x83,&system_string1_ptr);
  (**(code **)(param_1 + 0x100))(0x84,FUN_180602950);
  (**(code **)(param_1 + 0x100))(0x85,&processed_var_7104_ptr);
  (**(code **)(param_1 + 0x100))(0x86,&processed_var_576_ptr);
  (**(code **)(param_1 + 0x100))(0x87,&processed_var_7136_ptr);
  (**(code **)(param_1 + 0x100))(0x88,&processed_var_7120_ptr);
  (**(code **)(param_1 + 0x100))(0x89,&memory_allocator_3568_ptr);
  (**(code **)(param_1 + 0x100))(0x8a,FUN_1806007a0);
  (**(code **)(param_1 + 0x100))(0x8b,&processed_var_6000_ptr);
  (**(code **)(param_1 + 0x100))(0x8c,&processed_var_5200_ptr);
  (**(code **)(param_1 + 0x100))(0x8d,&memory_allocator_3936_ptr);
  (**(code **)(param_1 + 0x100))(0x8e,FUN_1806027a0);
  (**(code **)(param_1 + 0x100))(0x8f,FUN_1805ffed0);
  (**(code **)(param_1 + 0x100))(0x90,FUN_180602590);
  (**(code **)(param_1 + 0x100))(0x91,&processed_var_5200_ptr);
  (**(code **)(param_1 + 0x100))(0x92,&memory_allocator_3584_ptr);
  (**(code **)(param_1 + 0x100))(0x93,FUN_180601090);
  (**(code **)(param_1 + 0x100))(0x94,FUN_1806011d0);
  (**(code **)(param_1 + 0x100))(0x95,FUN_1806005f0);
  (**(code **)(param_1 + 0x100))(0x96,FUN_180601e80);
  (**(code **)(param_1 + 0x100))(0x97,&processed_var_7600_ptr);
  (**(code **)(param_1 + 0x100))(0x98,&processed_var_4496_ptr);
  (**(code **)(param_1 + 0x100))(0x99,&processed_var_7536_ptr);
  (**(code **)(param_1 + 0x100))(0x9a,FUN_180600d30);
  (**(code **)(param_1 + 0x100))(0x9b,&processed_var_7360_ptr);
  (**(code **)(param_1 + 0x100))(0x9c,&processed_var_8752_ptr);
  (**(code **)(param_1 + 0x100))(0x9d,&processed_var_9424_ptr);
  (**(code **)(param_1 + 0x100))(0x9e,&processed_var_8944_ptr);
  (**(code **)(param_1 + 0x100))(0x9f,&processed_var_8000_ptr);
  (**(code **)(param_1 + 0x100))(0xa0,FUN_180600bc0);
  (**(code **)(param_1 + 0x100))(0xa1,&processed_var_9568_ptr);
  (**(code **)(param_1 + 0x100))(0xa2,&processed_var_9600_ptr);
  (**(code **)(param_1 + 0x100))(0xa3,&processed_var_6608_ptr);
  (**(code **)(param_1 + 0x100))(0xa4,&processed_var_6816_ptr);
  (**(code **)(param_1 + 0x100))(0xa5,&processed_var_7344_ptr);
  (**(code **)(param_1 + 0x100))(0xa6,&processed_var_8928_ptr);
  (**(code **)(param_1 + 0x100))(0xa7,FUN_180603b90);
  (**(code **)(param_1 + 0x100))(0xa8,FUN_1805ff5b0);
  (**(code **)(param_1 + 0x100))(0xa9,FUN_1805ff670);
  (**(code **)(param_1 + 0x100))(0xaa,&processed_var_480_ptr);
  (**(code **)(param_1 + 0x100))(0xab,FUN_1805ff820);
  (**(code **)(param_1 + 0x100))(0xac,&processed_var_7328_ptr);
  (**(code **)(param_1 + 0x100))(0xad,FUN_180600b80);
  (**(code **)(param_1 + 0x100))(0xae,FUN_180603210);
  (**(code **)(param_1 + 0x100))(0xaf,FUN_180603540);
  (**(code **)(param_1 + 0x100))(0xb0,&system_handler1_ptr);
  (**(code **)(param_1 + 0x100))(0xb1,RenderingSystem_StateCallbackHandler);
  (**(code **)(param_1 + 0x100))(0xb2,&processed_var_8960_ptr);
  (**(code **)(param_1 + 0x100))(0xb3,&ui_system_data_1536_ptr);
  (**(code **)(param_1 + 0x100))(0xb4,&processed_var_8992_ptr);
  (**(code **)(param_1 + 0x100))(0xb5,FUN_1806009b0);
  (**(code **)(param_1 + 0x100))(0xb6,FUN_180602ab0);
  (**(code **)(param_1 + 0x100))(0xb7,&processed_var_9472_ptr);
  (**(code **)(param_1 + 0x100))(0xb8,&processed_var_7696_ptr);
  (**(code **)(param_1 + 0x100))(0xb9,FUN_1806023c0);
  (**(code **)(param_1 + 0x100))(0xba,FUN_180601310);
  (**(code **)(param_1 + 0x100))(0xbb,FUN_1806015d0);
  (**(code **)(param_1 + 0x100))(0xbc,&processed_var_8704_ptr);
  (**(code **)(param_1 + 0x100))(0xbd,&processed_var_8736_ptr);
  (**(code **)(param_1 + 0x100))(0xbe,FUN_1805ff540);
  (**(code **)(param_1 + 0x100))(0xbf,FUN_180600890);
  (**(code **)(param_1 + 0x100))(0xc0,&rendering_buffer_2672_ptr);
  (**(code **)(param_1 + 0x100))(0xc1,&physics_control_ptr);
  (**(code **)(param_1 + 0x100))(0xc2,FUN_1805ff8c0);
  (**(code **)(param_1 + 0x100))(0xc3,&processed_var_7760_ptr);
  (**(code **)(param_1 + 0x100))(0xc4,&processed_var_8368_ptr);
  (**(code **)(param_1 + 0x100))(0xc5,&processed_var_8336_ptr);
  (**(code **)(param_1 + 0x100))(0xc6,RenderingSystemAdvancedSupervisor);
  (**(code **)(param_1 + 0x100))(199,RenderingSystemStateProcessor);
  (**(code **)(param_1 + 0x100))(200,RenderingSystemStateHandler);
  (**(code **)(param_1 + 0x100))(0xc9,RenderingSystemStateManagerAdvanced);
  (**(code **)(param_1 + 0x100))(0xca,&memory_allocator_368_ptr);
  (**(code **)(param_1 + 0x100))(0xcb,&processed_var_5952_ptr);
  (**(code **)(param_1 + 0x100))(0xcc,&processed_var_9392_ptr);
  (**(code **)(param_1 + 0x100))(0xcd,&processed_var_7808_ptr);
  (**(code **)(param_1 + 0x100))(0xce,&ui_system_data_1376_ptr);
  (**(code **)(param_1 + 0x100))(0xcf,&rendering_buffer_manager_ptr);
  (**(code **)(param_1 + 0x100))(0xd0,&processed_var_816_ptr);
  (**(code **)(param_1 + 0x100))(0xd1,RenderingSystemInitProcessor);
  (**(code **)(param_1 + 0x100))(0xd2,RenderingSystemInitHandler);
  (**(code **)(param_1 + 0x100))(0xd3,RenderingSystemInitController);
  (**(code **)(param_1 + 0x100))(0xd4,&rendering_buffer_2848_ptr);
  (**(code **)(param_1 + 0x100))(0xd5,RenderingSystemInitManager);
  (**(code **)(param_1 + 0x100))(0xd6,RenderingSystemInitExecutor);
  (**(code **)(param_1 + 0x100))(0xd7,&processed_var_624_ptr);
  (**(code **)(param_1 + 0x100))(0xd8,&rendering_buffer_2688_ptr);
  (**(code **)(param_1 + 0x100))(0xd9,RenderingSystemStateQueryProcessor);
  (**(code **)(param_1 + 0x100))(0xda,RenderingSystemStateQueryHandler);
  (**(code **)(param_1 + 0x100))(0xdb,RenderingSystemStateQueryManager);
  (**(code **)(param_1 + 0x100))(0xdc,RenderingSystem_StateRegistrar);
  (**(code **)(param_1 + 0x100))(0xdd,&processed_var_4560_ptr);
  (**(code **)(param_1 + 0x100))(0xde,&rendering_buffer_2976_ptr);
  (**(code **)(param_1 + 0x100))(0xdf,RenderingSystemOptimizer);
  (**(code **)(param_1 + 0x100))(0xe0,&rendering_buffer_2880_ptr);
  (**(code **)(param_1 + 0x100))(0xe1,RenderingSystemPerformanceOptimizer);
  (**(code **)(param_1 + 0x100))(0xe2,RenderingSystemSpeedOptimizer);
  (**(code **)(param_1 + 0x100))(0xe3,RenderingSystemEfficiencyOptimizer);
  (**(code **)(param_1 + 0x100))(0xe4,&processed_var_6928_ptr);
  (**(code **)(param_1 + 0x100))(0xe5,RenderingSystemAdvancedOptimizer);
  (**(code **)(param_1 + 0x100))(0xe6,RenderingSystem_AdvancedOptimizer);
  (**(code **)(param_1 + 0x100))(0xe7,&processed_var_6832_ptr);
  (**(code **)(param_1 + 0x100))(0xe8,RenderingSystemMemoryManager);
  (**(code **)(param_1 + 0x100))(0xe9,RenderingSystemMemoryHandler);
  (**(code **)(param_1 + 0x100))(0xea,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0xeb,RenderingSystemMemoryProcessor);
  (**(code **)(param_1 + 0x100))(0xec,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0xed,RenderingSystemMemoryController);
  (**(code **)(param_1 + 0x100))(0xee,RenderingSystemMemoryAllocator);
  (**(code **)(param_1 + 0x100))(0xef,RenderingSystemDataManager);
  (**(code **)(param_1 + 0x100))(0xf0,RenderingSystemDataProcessor);
  (**(code **)(param_1 + 0x100))(0xf1,RenderingSystemDataHandler);
  (**(code **)(param_1 + 0x100))(0xf2,RenderingSystemDataController);
  (**(code **)(param_1 + 0x100))(0xf3,&rendering_buffer_2480_ptr);
  (**(code **)(param_1 + 0x100))(0xf4,&processed_var_6816_ptr);
  (**(code **)(param_1 + 0x100))(0xf5,RenderingSystemDataManagerAdvanced);
  (**(code **)(param_1 + 0x100))(0xf6,RenderingSystemCleanupManager);
  (**(code **)(param_1 + 0x100))(0xf7,&processed_var_9728_ptr);
  (**(code **)(param_1 + 0x100))(0xf8,FUN_180605fa0);
  (**(code **)(param_1 + 0x100))(0xf9,&processed_var_912_ptr);
  (**(code **)(param_1 + 0x100))(0xfa,FUN_180606c00);
  (**(code **)(param_1 + 0x100))(0xfb,FUN_1806068f0);
  (**(code **)(param_1 + 0x100))(0xfc,RenderingSystem_CleanupManager);
  (**(code **)(param_1 + 0x100))(0xfd,RenderingSystemCleanupProcessor);
  (**(code **)(param_1 + 0x100))(0xfe,RenderingSystemCleanupHandler);
  (**(code **)(param_1 + 0x100))(0xff,&ui_system_data_1440_ptr);
  (**(code **)(param_1 + 0x100))(0x100,RenderingSystemCleanupController);
  (**(code **)(param_1 + 0x100))(0x101,&processed_var_9680_ptr);
  (**(code **)(param_1 + 0x100))(0x102,&ui_system_data_192_ptr);
  (**(code **)(param_1 + 0x100))(0x103,&processed_var_6048_ptr);
  (**(code **)(param_1 + 0x100))(0x104,RenderingSystemValidatorAdvanced);
  (**(code **)(param_1 + 0x100))(0x105,RenderingSystemValidationProcessor);
  (**(code **)(param_1 + 0x100))(0x106,RenderingSystemValidationHandler);
  (**(code **)(param_1 + 0x100))(0x107,RenderingSystemValidationController);
  (**(code **)(param_1 + 0x100))(0x108,RenderingSystemValidationManager);
  (**(code **)(param_1 + 0x100))(0x109,RenderingSystemCoreProcessor);
  (**(code **)(param_1 + 0x100))(0x10a,&processed_var_9104_ptr);
  (**(code **)(param_1 + 0x100))(0x10b,RenderingSystemCoreHandler);
  (**(code **)(param_1 + 0x100))(0x10c,RenderingSystemCoreManager);
  (**(code **)(param_1 + 0x100))(0x10d,RenderingSystemCoreController);
  (**(code **)(param_1 + 0x100))(0x10e,RenderingSystemCoreExecutor);
  (**(code **)(param_1 + 0x100))(0x10f,&rendering_buffer_2464_ptr);
  (**(code **)(param_1 + 0x100))(0x110,&processed_var_4512_ptr);
  (**(code **)(param_1 + 0x100))(0x111,RenderingSystemAdvancedProcessor);
  (**(code **)(param_1 + 0x100))(0x112,&processed_var_4880_ptr);
  (**(code **)(param_1 + 0x100))(0x113,&processed_var_5856_ptr);
  (**(code **)(param_1 + 0x100))(0x114,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x115,&processed_var_9616_ptr);
  (**(code **)(param_1 + 0x100))(0x116,&processed_var_6848_ptr);
  (**(code **)(param_1 + 0x100))(0x117,&processed_var_9536_ptr);
  (**(code **)(param_1 + 0x100))(0x118,&processed_var_8960_ptr);
  (**(code **)(param_1 + 0x100))(0x119,RenderingSystemAdvancedHandler);
  (**(code **)(param_1 + 0x100))(0x11a,&processed_var_9648_ptr);
  (**(code **)(param_1 + 0x100))(0x11b,&processed_var_8992_ptr);
  (**(code **)(param_1 + 0x100))(0x11c,RenderingSystemAdvancedManager);
  (**(code **)(param_1 + 0x100))(0x11d,RenderingSystemAdvancedController);
  (**(code **)(param_1 + 0x100))(0x11e,RenderingSystemAdvancedExecutor);
  (**(code **)(param_1 + 0x100))(0x11f,&rendering_buffer_2992_ptr);
  (**(code **)(param_1 + 0x100))(0x120,&processed_var_6752_ptr);
  (**(code **)(param_1 + 0x100))(0x121,&processed_var_8976_ptr);
  (**(code **)(param_1 + 0x100))(0x122,&processed_var_4256_ptr);
  (**(code **)(param_1 + 0x100))(0x123,&processed_var_4864_ptr);
  (**(code **)(param_1 + 0x100))(0x124,&processed_var_4736_ptr);
  (**(code **)(param_1 + 0x100))(0x125,RenderingSystemStateValidator);
  (**(code **)(param_1 + 0x100))(0x126,RenderingSystemStateValidationProcessor);
  (**(code **)(param_1 + 0x100))(0x127,RenderingSystemStateValidationHandler);
  (**(code **)(param_1 + 0x100))(0x128,RenderingSystem_AdvancedStateValidator);
  (**(code **)(param_1 + 0x100))(0x129,FUN_180607f40);
  (**(code **)(param_1 + 0x100))(0x12a,FUN_180608420);
  (**(code **)(param_1 + 0x100))(299,RenderingSystemStateValidationController);
  (**(code **)(param_1 + 0x100))(300,RenderingSystemStateValidationManager);
  (**(code **)(param_1 + 0x100))(0x12d,RenderingSystemInitValidator);
  (**(code **)(param_1 + 0x100))(0x12e,RenderingSystemInitValidationProcessor);
  (**(code **)(param_1 + 0x100))(0x12f,RenderingSystemInitValidationHandler);
  (**(code **)(param_1 + 0x100))(0x130,RenderingSystemInitValidationController);
  (**(code **)(param_1 + 0x100))(0x131,RenderingSystemInitValidationManager);
  (**(code **)(param_1 + 0x100))(0x132,RenderingSystemCoreInitializer);
  (**(code **)(param_1 + 0x100))(0x133,RenderingSystemCoreInitProcessor);
  (**(code **)(param_1 + 0x100))(0x134,RenderingSystemCoreInitHandler);
  (**(code **)(param_1 + 0x100))(0x135,&processed_var_7280_ptr);
  (**(code **)(param_1 + 0x100))(0x136,&processed_var_7328_ptr);
  (**(code **)(param_1 + 0x100))(0x137,&processed_var_7360_ptr);
  (**(code **)(param_1 + 0x100))(0x138,RenderingSystemCoreInitController);
  (**(code **)(param_1 + 0x100))(0x139,RenderingSystemCoreInitManager);
  (**(code **)(param_1 + 0x100))(0x13a,RenderingSystemInitConfigurator);
  (**(code **)(param_1 + 0x100))(0x13b,RenderingSystem_CoreInitializer);
  (**(code **)(param_1 + 0x100))(0x13c,RenderingSystemInitConfigProcessor);
  (**(code **)(param_1 + 0x100))(0x13d,&processed_var_640_ptr);
  (**(code **)(param_1 + 0x100))(0x13e,RenderingSystemInitConfigHandler);
  (**(code **)(param_1 + 0x100))(0x13f,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x140,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x141,RenderingSystemInitConfigController);
  (**(code **)(param_1 + 0x100))(0x142,RenderingSystemInitConfigManager);
  (**(code **)(param_1 + 0x100))(0x143,RenderingSystemInitOptimizer);
  (**(code **)(param_1 + 0x100))(0x144,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x145,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x146,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x147,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x148,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x149,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x14a,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x14b,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x14c,0x180069ee0);
  (**(code **)(param_1 + 0x100))(0x14d,RenderingSystemInitOptimizationProcessor);
  (**(code **)(param_1 + 0x100))(0x14e,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x14f,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x150,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x151,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x152,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x153,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x154,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x155,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x156,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x157,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x158,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x159,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x15a,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x15b,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x15c,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x15d,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x15e,&rendering_buffer_2960_ptr);
  (**(code **)(param_1 + 0x100))(0x15f,RenderingSystemCoreProcessor);
  (**(code **)(param_1 + 0x100))(0x160,RenderingSystemCoreInitializer);
  (**(code **)(param_1 + 0x100))(0x161,RenderingSystemCoreManager);
  (**(code **)(param_1 + 0x100))(0x162,RenderingSystemCoreHandler);
  (**(code **)(param_1 + 0x100))(0x163,&rendering_param48_ptr);
  (**(code **)(param_1 + 0x100))(0x164,RenderingSystemDataProcessor);
  (**(code **)(param_1 + 0x100))(0x165,RenderingSystemMemoryManager);
  (**(code **)(param_1 + 0x100))(0x166,RenderingSystemResourceHandler);
  (**(code **)(param_1 + 0x100))(0x167,RenderingSystemStateManager);
  (**(code **)(param_1 + 0x100))(0x168,RenderingSystemEventProcessor);
  (**(code **)(param_1 + 0x100))(0x169,RenderingSystemConfigHandler);
  (**(code **)(param_1 + 0x100))(0x16a,RenderingSystemNetworkProcessor);
  (**(code **)(param_1 + 0x100))(0x16b,RenderingSystemSecurityManager);
  (**(code **)(param_1 + 0x100))(0x16c,RenderingSystemBufferManager);
  (**(code **)(param_1 + 0x100))(0x16d,RenderingSystemBufferProcessor);
  (**(code **)(param_1 + 0x100))(0x16e,RenderingSystemBufferHandler);
  (**(code **)(param_1 + 0x100))(0x16f,RenderingSystemBufferController);
  (**(code **)(param_1 + 0x100))(0x170,RenderingSystemBufferAllocator);
  (**(code **)(param_1 + 0x100))(0x171,RenderingSystemDataStreamProcessor);
  (**(code **)(param_1 + 0x100))(0x172,RenderingSystemDataStreamHandler);
  (**(code **)(param_1 + 0x100))(0x173,RenderingSystemDataStreamController);
  (**(code **)(param_1 + 0x100))(0x174,RenderingSystemDataStreamManager);
  (**(code **)(param_1 + 0x100))(0x175,RenderingSystemDataStreamExecutor);
  (**(code **)(param_1 + 0x100))(0x176,RenderingSystemNetworkProcessor);
  (**(code **)(param_1 + 0x100))(0x177,RenderingSystemValidator);
  (**(code **)(param_1 + 0x100))(0x178,RenderingSystemNetworkHandler);
  (**(code **)(param_1 + 0x100))(0x179,RenderingSystemValidator);
  (**(code **)(param_1 + 0x100))(0x17a,RenderingSystemController);
  (**(code **)(param_1 + 0x100))(0x17b,RenderingSystemManager);
  (**(code **)(param_1 + 0x100))(0x17c,RenderingSystemProcessor);
  (**(code **)(param_1 + 0x100))(0x17d,RenderingSystemInitializer);
  (**(code **)(param_1 + 0x100))(0x17e,RenderingSystemCleaner);
  (**(code **)(param_1 + 0x100))(0x17f,RenderingSystemOptimizer);
  (**(code **)(param_1 + 0x100))(0x180,RenderingSystemUpdater);
  (**(code **)(param_1 + 0x100))(0x181,&processed_var_4640_ptr);
  (**(code **)(param_1 + 0x100))(0x182,RenderingSystem_StateInitializer);
  (**(code **)(param_1 + 0x100))(0x183,RenderingSystem_InitHandler);
  (**(code **)(param_1 + 0x100))(0x184,RenderingSystem_InitProcessor);
  (**(code **)(param_1 + 0x100))(0x185,RenderingSystem_InitExecutor);
  (**(code **)(param_1 + 0x100))(0x186,RenderingSystem_ResourceInitializer);
  (**(code **)(param_1 + 0x100))(0x187,&processed_var_9920_ptr);
  (**(code **)(param_1 + 0x100))(0x188,&memory_allocator_3888_ptr);
  (**(code **)(param_1 + 0x100))(0x189,RenderingSystem_ConfigInitializer);
  (**(code **)(param_1 + 0x100))(0x18a,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x18b,RenderingSystem_InitSupervisor);
  (**(code **)(param_1 + 0x100))(0x18c,RenderingSystem_InitOptimizer);
  (**(code **)(param_1 + 0x100))(0x18d,RenderingSystem_InitAdministrator);
  (**(code **)(param_1 + 0x100))(0x18e,&processed_var_8912_ptr);
  (**(code **)(param_1 + 0x100))(399,RenderingSystem_InitValidator);
  (**(code **)(param_1 + 0x100))(400,&memory_allocator_3856_ptr);
  (**(code **)(param_1 + 0x100))(0x191,&rendering_buffer_2640_ptr);
  (**(code **)(param_1 + 0x100))(0x192,RenderingSystem_InitController);
  (**(code **)(param_1 + 0x100))(0x193,&ui_config_ptr);
  (**(code **)(param_1 + 0x100))(0x194,RenderingSystem_InitManager);
  (**(code **)(param_1 + 0x100))(0x195,&processed_var_7232_ptr);
  (**(code **)(param_1 + 0x100))(0x196,RenderingSystemRenderer);
  (**(code **)(param_1 + 0x100))(0x197,RenderingSystemBuffer);
  (**(code **)(param_1 + 0x100))(0x198,RenderingSystemNetworkController);
  (**(code **)(param_1 + 0x100))(0x199,RenderingSystemNetworkManager);
  (**(code **)(param_1 + 0x100))(0x19a,RenderingSystemNetworkExecutor);
  (**(code **)(param_1 + 0x100))(0x19b,RenderingSystemRenderer);
  (**(code **)(param_1 + 0x100))(0x19c,RenderingSystemRenderProcessor);
  (**(code **)(param_1 + 0x100))(0x19d,RenderingSystemRenderHandler);
  (**(code **)(param_1 + 0x100))(0x19e,RenderingSystemRenderController);
  (**(code **)(param_1 + 0x100))(0x19f,RenderingSystemRenderManager);
  (**(code **)(param_1 + 0x100))(0x1a0,RenderingSystemShaderProcessor);
  (**(code **)(param_1 + 0x100))(0x1a1,RenderingSystemShaderHandler);
  (**(code **)(param_1 + 0x100))(0x1a2,RenderingSystemShaderController);
  (**(code **)(param_1 + 0x100))(0x1a3,&processed_var_6096_ptr);
  (**(code **)(param_1 + 0x100))(0x1a4,&processed_var_6080_ptr);
  (**(code **)(param_1 + 0x100))(0x1a5,&processed_var_7232_ptr);
  (**(code **)(param_1 + 0x100))(0x1a6,RenderingSystemShaderManager);
  (**(code **)(param_1 + 0x100))(0x1a7,RenderingSystemShaderExecutor);
  (**(code **)(param_1 + 0x100))(0x1a8,&rendering_buffer_224_ptr);
  (**(code **)(param_1 + 0x100))(0x1a9,RenderingSystemTextureProcessor);
  (**(code **)(param_1 + 0x100))(0x1aa,RenderingSystemTextureHandler);
  (**(code **)(param_1 + 0x100))(0x1ab,&processed_var_6560_ptr);
  (**(code **)(param_1 + 0x100))(0x1ac,&processed_var_5248_ptr);
  (**(code **)(param_1 + 0x100))(0x1ad,RenderingSystemTextureController);
  (**(code **)(param_1 + 0x100))(0x1ae,RenderingSystemTextureManager);
  (**(code **)(param_1 + 0x100))(0x1af,RenderingSystemTextureExecutor);
  (**(code **)(param_1 + 0x100))(0x1b0,RenderingSystemLightingProcessor);
  (**(code **)(param_1 + 0x100))(0x1b1,RenderingSystemLightingHandler);
  (**(code **)(param_1 + 0x100))(0x1b2,RenderingSystemLightingController);
  (**(code **)(param_1 + 0x100))(0x1b3,RenderingSystemLightingManager);
  (**(code **)(param_1 + 0x100))(0x1b4,&processed_var_9280_ptr);
  (**(code **)(param_1 + 0x100))(0x1b5,&rendering_buffer_2256_ptr);
  (**(code **)(param_1 + 0x100))(0x1b6,RenderingSystemLightingExecutor);
  (**(code **)(param_1 + 0x100))(0x1b7,RenderingSystemCameraProcessor);
  (**(code **)(param_1 + 0x100))(0x1b8,&processed_var_5840_ptr);
  (**(code **)(param_1 + 0x100))(0x1b9,&processed_var_4704_ptr);
  (**(code **)(param_1 + 0x100))(0x1ba,&processed_var_4864_ptr);
  (**(code **)(param_1 + 0x100))(0x1bb,RenderingSystemCameraHandler);
  (**(code **)(param_1 + 0x100))(0x1bc,RenderingSystemCameraController);
  (**(code **)(param_1 + 0x100))(0x1bd,&rendering_main_control_ptr);
  (**(code **)(param_1 + 0x100))(0x1be,&processed_var_5664_ptr);
  (**(code **)(param_1 + 0x100))(0x1bf,RenderingSystemCameraManager);
  (**(code **)(param_1 + 0x100))(0x1c0,RenderingSystemCameraExecutor);
  (**(code **)(param_1 + 0x100))(0x1c1,RenderingSystemMaterialProcessor);
  (**(code **)(param_1 + 0x100))(0x1c2,&processed_var_9216_ptr);
  (**(code **)(param_1 + 0x100))(0x1c3,&processed_var_5264_ptr);
  (**(code **)(param_1 + 0x100))(0x1c4,&ui_system_data_1792_ptr);
  (**(code **)(param_1 + 0x100))(0x1c5,RenderingSystemMaterialHandler);
  (**(code **)(param_1 + 0x100))(0x1c6,&rendering_buffer_2208_ptr);
  (**(code **)(param_1 + 0x100))(0x1c7,&ui_system_data_112_ptr);
  (**(code **)(param_1 + 0x100))(0x1c8,&rendering_buffer_2160_ptr);
  (**(code **)(param_1 + 0x100))(0x1c9,&processed_var_4640_ptr);
  (**(code **)(param_1 + 0x100))(0x1ca,RenderingSystemMaterialController);
  (**(code **)(param_1 + 0x100))(0x1cb,RenderingSystemMaterialManager);
  (**(code **)(param_1 + 0x100))(0x1cc,RenderingSystemMaterialExecutor);
  (**(code **)(param_1 + 0x100))(0x1cd,&processed_var_7504_ptr);
  (**(code **)(param_1 + 0x100))(0x1ce,&processed_var_5920_ptr);
  (**(code **)(param_1 + 0x100))(0x1cf,&ui_system_data_1808_ptr);
  (**(code **)(param_1 + 0x100))(0x1d0,&rendering_buffer_2000_ptr);
  (**(code **)(param_1 + 0x100))(0x1d1,RenderingSystemGeometryProcessor);
  (**(code **)(param_1 + 0x100))(0x1d2,RenderingSystemGeometryHandler);
  (**(code **)(param_1 + 0x100))(0x1d3,RenderingSystemGeometryController);
  (**(code **)(param_1 + 0x100))(0x1d4,&processed_var_9232_ptr);
  (**(code **)(param_1 + 0x100))(0x1d5,RenderingSystemGeometryManager);
  (**(code **)(param_1 + 0x100))(0x1d6,RenderingSystemGeometryExecutor);
  (**(code **)(param_1 + 0x100))(0x1d7,RenderingSystemTransformProcessor);
  (**(code **)(param_1 + 0x100))(0x1d8,RenderingSystemTransformHandler);
  (**(code **)(param_1 + 0x100))(0x1d9,RenderingSystemTransformController);
  (**(code **)(param_1 + 0x100))(0x1da,RenderingSystemTransformManager);
  (**(code **)(param_1 + 0x100))(0x1db,&ui_system_data_1104_ptr);
  (**(code **)(param_1 + 0x100))(0x1dc,&processed_var_5088_ptr);
  (**(code **)(param_1 + 0x100))(0x1dd,RenderingSystemTransformExecutor);
  (**(code **)(param_1 + 0x100))(0x1de,RenderingSystemAnimationProcessor);
  (**(code **)(param_1 + 0x100))(0x1df,RenderingSystemAnimationHandler);
  (**(code **)(param_1 + 0x100))(0x1e0,RenderingSystemAnimationController);
  (**(code **)(param_1 + 0x100))(0x1e1,RenderingSystemAnimationManager);
  (**(code **)(param_1 + 0x100))(0x1e2,&processed_var_5872_ptr);
  (**(code **)(param_1 + 0x100))(0x1e3,FUN_180610900);
  (**(code **)(param_1 + 0x100))(0x1e4,RenderingSystemAnimationExecutor);
  (**(code **)(param_1 + 0x100))(0x1e5,RenderingSystemEffectProcessor);
  (**(code **)(param_1 + 0x100))(0x1e6,&processed_var_5792_ptr);
  (**(code **)(param_1 + 0x100))(0x1e7,&processed_var_5808_ptr);
  (**(code **)(param_1 + 0x100))(0x1e8,RenderingSystemEffectHandler);
  (**(code **)(param_1 + 0x100))(0x1e9,RenderingSystemEffectController);
  (**(code **)(param_1 + 0x100))(0x1ea,RenderingSystemEffectManager);
  (**(code **)(param_1 + 0x100))(0x1eb,RenderingSystemEffectExecutor);
  (**(code **)(param_1 + 0x100))(0x1ec,RenderingSystemPostProcessor);
  (**(code **)(param_1 + 0x100))(0x1ed,&ui_system_data_128_ptr);
  (**(code **)(param_1 + 0x100))(0x1ee,&processed_var_5904_ptr);
  (**(code **)(param_1 + 0x100))(0x1ef,RenderingSystemPostHandler);
  (**(code **)(param_1 + 0x100))(0x1f0,&processed_var_5728_ptr);
  (**(code **)(param_1 + 0x100))(0x1f1,RenderingSystemPostController);
  (**(code **)(param_1 + 0x100))(0x1f2,&processed_var_5888_ptr);
  (**(code **)(param_1 + 0x100))(499,&processed_var_5104_ptr);
  (**(code **)(param_1 + 0x100))(500,RenderingSystemPostManager);
  (**(code **)(param_1 + 0x100))(0x1f5,&processed_var_5712_ptr);
  (**(code **)(param_1 + 0x100))(0x1f6,&processed_var_9200_ptr);
  (**(code **)(param_1 + 0x100))(0x1f7,&processed_var_5120_ptr);
  (**(code **)(param_1 + 0x100))(0x1f8,&processed_var_5296_ptr);
  (**(code **)(param_1 + 0x100))(0x1f9,&processed_var_5168_ptr);
  (**(code **)(param_1 + 0x100))(0x1fa,&processed_var_5152_ptr);
  (**(code **)(param_1 + 0x100))(0x1fb,&processed_var_5872_ptr);
  (**(code **)(param_1 + 0x100))(0x1fc,FUN_180611440);
  (**(code **)(param_1 + 0x100))(0x1fd,&processed_var_5936_ptr);
  (**(code **)(param_1 + 0x100))(0x1fe,FUN_1806136e0);
  (**(code **)(param_1 + 0x100))(0x1ff,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x200,&processed_var_5136_ptr);
  (**(code **)(param_1 + 0x100))(0x201,FUN_1806121d0);
  (**(code **)(param_1 + 0x100))(0x202,&rendering_memory_manager_ptr);
  (**(code **)(param_1 + 0x100))(0x203,FUN_180612d20);
  (**(code **)(param_1 + 0x100))(0x204,&processed_var_4320_ptr);
  (**(code **)(param_1 + 0x100))(0x205,&memory_allocator_3440_ptr);
  (**(code **)(param_1 + 0x100))(0x206,RenderingSystemMemoryOptimizer);
  (**(code **)(param_1 + 0x100))(0x207,RenderingSystemMemoryOptimizationProcessor);
  (**(code **)(param_1 + 0x100))(0x208,RenderingSystemMemoryOptimizationHandler);
  (**(code **)(param_1 + 0x100))(0x209,RenderingSystemMemoryOptimizationController);
  (**(code **)(param_1 + 0x100))(0x20a,&memory_allocator_3184_ptr);
  (**(code **)(param_1 + 0x100))(0x20b,&processed_var_4384_ptr);
  (**(code **)(param_1 + 0x100))(0x20c,RenderingSystemMemoryOptimizationManager);
  (**(code **)(param_1 + 0x100))(0x20d,RenderingSystemCacheManager);
  (**(code **)(param_1 + 0x100))(0x20e,RenderingSystemCacheProcessor);
  (**(code **)(param_1 + 0x100))(0x20f,RenderingSystemCacheHandler);
  (**(code **)(param_1 + 0x100))(0x210,RenderingSystemCacheController);
  (**(code **)(param_1 + 0x100))(0x211,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x212,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x213,RenderingSystemDataValidator);
  (**(code **)(param_1 + 0x100))(0x214,RenderingSystemDataValidationProcessor);
  (**(code **)(param_1 + 0x100))(0x215,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x216,RenderingSystemDataValidationHandler);
  (**(code **)(param_1 + 0x100))(0x217,RenderingSystemDataValidationController);
  (**(code **)(param_1 + 0x100))(0x218,&processed_var_4384_ptr);
  (**(code **)(param_1 + 0x100))(0x219,RenderingSystemStateSyncProcessor);
  (**(code **)(param_1 + 0x100))(0x21a,RenderingSystemStateSyncHandler);
  (**(code **)(param_1 + 0x100))(0x21b,RenderingSystemStateSyncController);
  (**(code **)(param_1 + 0x100))(0x21c,RenderingSystemStateSyncManager);
  (**(code **)(param_1 + 0x100))(0x21d,RenderingSystemStateSyncExecutor);
  (**(code **)(param_1 + 0x100))(0x21e,RenderingSystemEventProcessor);
  (**(code **)(param_1 + 0x100))(0x21f,RenderingSystemEventHandler);
  (**(code **)(param_1 + 0x100))(0x220,&system_data_buffer_ptr);
  (**(code **)(param_1 + 0x100))(0x221,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x222,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x223,RenderingSystemEventController);
  (**(code **)(param_1 + 0x100))(0x224,RenderingSystemEventManager);
  (**(code **)(param_1 + 0x100))(0x225,&memory_allocator_3632_ptr);
  (**(code **)(param_1 + 0x100))(0x226,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x227,&memory_allocator_3680_ptr);
  (**(code **)(param_1 + 0x100))(0x228,&memory_allocator_3168_ptr);
  (**(code **)(param_1 + 0x100))(0x229,RenderingSystemErrorHandler);
  (**(code **)(param_1 + 0x100))(0x22a,RenderingSystemErrorProcessor);
  (**(code **)(param_1 + 0x100))(0x22b,RenderingSystemErrorController);
  (**(code **)(param_1 + 0x100))(0x22c,RenderingSystemErrorManager);
  (**(code **)(param_1 + 0x100))(0x22d,RenderingSystemErrorExecutor);
  (**(code **)(param_1 + 0x100))(0x22e,RenderingSystemDebugProcessor);
  (**(code **)(param_1 + 0x100))(0x22f,RenderingSystemDebugHandler);
  (**(code **)(param_1 + 0x100))(0x230,RenderingSystemDebugController);
  (**(code **)(param_1 + 0x100))(0x231,RenderingSystemDebugManager);
  (**(code **)(param_1 + 0x100))(0x232,RenderingSystemDebugExecutor);
  (**(code **)(param_1 + 0x100))(0x233,RenderingSystemPerformanceMonitor);
  (**(code **)(param_1 + 0x100))(0x234,RenderingSystemPerformanceProcessor);
  (**(code **)(param_1 + 0x100))(0x235,RenderingSystemPerformanceHandler);
  (**(code **)(param_1 + 0x100))(0x236,RenderingSystemPerformanceController);
  (**(code **)(param_1 + 0x100))(0x237,RenderingSystemPerformanceManager);
  (**(code **)(param_1 + 0x100))(0x238,RenderingSystemResourceManager);
  (**(code **)(param_1 + 0x100))(0x239,RenderingSystemResourceProcessor);
  (**(code **)(param_1 + 0x100))(0x23a,RenderingSystemResourceHandler);
  (**(code **)(param_1 + 0x100))(0x23b,RenderingSystemResourceController);
  (**(code **)(param_1 + 0x100))(0x23c,RenderingSystemResourceManager);
  (**(code **)(param_1 + 0x100))(0x23d,RenderingSystemThreadManager);
  (**(code **)(param_1 + 0x100))(0x23e,RenderingSystemThreadProcessor);
  (**(code **)(param_1 + 0x100))(0x23f,RenderingSystemThreadHandler);
  (**(code **)(param_1 + 0x100))(0x240,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x241,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x242,&processed_var_6416_ptr);
  (**(code **)(param_1 + 0x100))(0x243,RenderingSystemConfigValidator);
  (**(code **)(param_1 + 0x100))(0x244,RenderingSystemConfigValidationProcessor);
  (**(code **)(param_1 + 0x100))(0x245,RenderingSystemConfigValidationHandler);
  (**(code **)(param_1 + 0x100))(0x246,RenderingSystemConfigValidationController);
  (**(code **)(param_1 + 0x100))(0x247,&processed_var_8816_ptr);
  (**(code **)(param_1 + 0x100))(0x248,RenderingSystemDataStreamManager);
  (**(code **)(param_1 + 0x100))(0x249,RenderingSystemDataStreamProcessor);
  (**(code **)(param_1 + 0x100))(0x24a,RenderingSystemDataStreamHandler);
  (**(code **)(param_1 + 0x100))(0x24b,&processed_var_7712_ptr);
  (**(code **)(param_1 + 0x100))(0x24c,RenderingSystemDataStreamController);
  (**(code **)(param_1 + 0x100))(0x24d,RenderingSystemDataStreamExecutor);
  (**(code **)(param_1 + 0x100))(0x24e,RenderingSystemStateManagerAdvanced);
  (**(code **)(param_1 + 0x100))(0x24f,RenderingSystemStateProcessorAdvanced);
  (**(code **)(param_1 + 0x100))(0x250,&render_data_ptr);
  (**(code **)(param_1 + 0x100))(0x251,RenderingSystemStateHandlerAdvanced);
  (**(code **)(param_1 + 0x100))(0x252,RenderingSystemStateControllerAdvanced);
  (**(code **)(param_1 + 0x100))(0x253,RenderingSystemStateManagerExecutor);
  (**(code **)(param_1 + 0x100))(0x254,RenderingSystemInitializerAdvanced);
  (**(code **)(param_1 + 0x100))(0x255,RenderingSystemInitProcessorAdvanced);
  (**(code **)(param_1 + 0x100))(0x256,RenderingSystemInitHandlerAdvanced);
  (**(code **)(param_1 + 0x100))(599,RenderingSystemInitControllerAdvanced);
  (**(code **)(param_1 + 0x100))(600,RenderingSystemInitManagerAdvanced);
  (**(code **)(param_1 + 0x100))(0x259,RenderingSystemCleanupProcessorAdvanced);
  (**(code **)(param_1 + 0x100))(0x25a,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x25b,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x25c,&processed_var_8080_ptr);
  (**(code **)(param_1 + 0x100))(0x25d,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x25e,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x25f,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x260,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x261,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x100))(0x262,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x263,RenderingSystemCleanupHandlerAdvanced);
  (**(code **)(param_1 + 0x100))(0x264,RenderingSystemCleanupControllerAdvanced);
  (**(code **)(param_1 + 0x100))(0x265,RenderingSystemCleanupManagerAdvanced);
  (**(code **)(param_1 + 0x100))(0x266,&system_data_buffer_ptr);
  (**(code **)(param_1 + 0x100))(0x267,&rendering_buffer_2080_ptr);
  (**(code **)(param_1 + 0x100))(0x268,&memory_allocator_3472_ptr);
  (**(code **)(param_1 + 0x100))(0x269,RenderingSystemValidatorAdvanced);
  (**(code **)(param_1 + 0x100))(0x26a,RenderingSystemValidationProcessorAdvanced);
  (**(code **)(param_1 + 0x100))(0x26b,RenderingSystemValidationHandlerAdvanced);
  (**(code **)(param_1 + 0x100))(0x26c,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x26d,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x26e,&memory_allocator_3968_ptr);
  (**(code **)(param_1 + 0x100))(0x26f,&memory_allocator_3488_ptr);
  (**(code **)(param_1 + 0x100))(0x270,RenderingSystemValidationControllerAdvanced);
  (**(code **)(param_1 + 0x100))(0x271,&memory_allocator_3520_ptr);
  (**(code **)(param_1 + 0x100))(0x272,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x273,&memory_allocator_3984_ptr);
  (**(code **)(param_1 + 0x100))(0x274,_guard_check_icall);
  (**(code **)(param_1 + 0x100))(0x275,_guard_check_icall);
                    // WARNING: Could not recover jumptable at 0x00018056c54a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x100))(0x276,&memory_allocator_3536_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * RenderingSystem_InitConfigurator(uint64_t *param_1,int16_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  
  RenderingSystem_InitSetupManager();
  *param_1 = &processed_var_9520_ptr;
  param_1[0xd7] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xd8] = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0xd9) = 0;
  uVar5 = atan2f(0x80000000,0x3f800000);
  *(int32_t *)(param_1 + 0xda) = uVar5;
  *(int8_t *)(param_1 + 0xdf) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x6d4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x6dc) = 0;
  *(int32_t *)((int64_t)param_1 + 0x6e4) = 0xffffffff;
  param_1[0xe1] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x71c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x724) = 0;
  puVar4 = param_1 + 0xe6;
  lVar2 = 36000;
  lVar3 = 36000;
  puVar1 = puVar4;
  do {
    func_0x00018005d390(puVar1);
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x8d86] = 0;
  param_1[0x8d87] = 0;
  param_1[0x8d88] = 0;
  *(int32_t *)(param_1 + 0x8d89) = 3;
  param_1[0x8d8a] = 0;
  param_1[0x8d8b] = 0;
  param_1[0x8d8c] = 0;
  *(int32_t *)(param_1 + 0x8d8d) = 3;
  RenderingSystem_InitSetupController(param_1 + 0x8d9a);
  RenderingSystem_AdvancedInitializer();
  param_1[0x9891] = 0;
  param_1[0x9892] = 0;
  param_1[0x9893] = 0;
  *(int32_t *)(param_1 + 0x9894) = 3;
  param_1[0x9899] = 0;
  param_1[0x989a] = 0;
  param_1[0x9895] = 0;
  param_1[0x9896] = 0;
  param_1[0x9899] = 0;
  *(int32_t *)(param_1 + 0x989b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x4c4dc) = 0xffffffffffffffff;
  _Mtx_init_in_situ(param_1 + 0x989d,2);
  *(int16_t *)(param_1 + 0xe2) = param_2;
  *(int32_t *)((int64_t)param_1 + 0x714) = param_3;
  RenderingSystem_InitSetupProcessor();
  param_1[0x8d87] = param_1[0x8d86];
  param_1[0x8d8b] = param_1[0x8d8a];
  *(uint64_t *)((int64_t)param_1 + 0x71c) = render_system_config;
  *(uint64_t *)((int64_t)param_1 + 0x724) = render_system_config;
  *(int32_t *)((int64_t)param_1 + 0x72c) = 0;
  do {
    *puVar4 = render_system_config;
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x8d90] = 0;
  param_1[0x8d95] = 0;
  param_1[0x8d91] = 0;
  param_1[0x8d96] = 0;
  param_1[0x8d92] = 0;
  param_1[0x8d97] = 0;
  param_1[0x8d93] = 0;
  param_1[0x8d98] = 0;
  param_1[0x8d94] = 0;
  param_1[0x8d99] = 0;
  param_1[0xd7] = render_system_config;
  param_1[0xe0] = 0;
  *(int32_t *)(param_1 + 0xe3) = 0xffffffff;
  param_1[0x9892] = param_1[0x9891];
  param_1[0x8d8e] = 0xbff0000000000000;
  param_1[0x8d8f] = 0;
  param_1[0xe1] = 0;
  return param_1;
}



int64_t RenderingSystem_InitParameterizer(int64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t unaff_RDI;
  int64_t lVar2;
  
  iVar1 = _Mtx_lock(param_1 + 0x4c4e8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (param_2 != '\0') {
    iVar1 = _Mtx_lock(param_1 + 0x4b828);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    lVar2 = *(int64_t *)(param_1 + 0x46cf0);
    if (*(int *)(param_1 + 0x4b820) * 8 + -0x21 <= *(int *)(lVar2 + 0x5c8) + 0x28) {
      RenderingSystemEmergencyHandler(param_1 + 290000);
      *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x46cd8) + -8) + 0x5c4) = 0;
      lVar2 = *(int64_t *)(param_1 + 0x46cf0);
    }
    *(int32_t *)(param_1 + 0x46cf8) = *(int32_t *)(lVar2 + 0x5c8);
    return lVar2;
  }
  iVar1 = _Mtx_lock(param_1 + 0x4c438);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(uint64_t *)(param_1 + 0x4be5c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x4be30),0,(int64_t)(*(int *)(param_1 + 0x4be28) >> 3),param_4,
         unaff_RDI);
}







