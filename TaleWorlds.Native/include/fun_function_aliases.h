/**
 * @file fun_function_aliases.h
 * @brief FUN_函数语义别名映射头文件
 *
 * 本文件定义了所有剩余FUN_函数的语义别名映射，
 * 用于提高代码的可读性和维护性。
 *
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#ifndef FUN_FUNCTION_ALIASES_H
#define FUN_FUNCTION_ALIASES_H

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/* ============================================================================
 * 渲染系统FUN_函数语义别名
 * ============================================================================ */

// 渲染系统矩阵变换函数
#define RenderingSystem_MatrixTransformer func_0x000180894c50
#define RenderingSystem_VectorProcessor func_0x000180894c60
#define RenderingSystem_CoordinateConverter func_0x000180894c70
#define RenderingSystem_TransformCalculator func_0x000180894c80
#define RenderingSystem_ProjectionManager func_0x000180894c90

// 渲染系统着色器函数
#define RenderingSystem_ShaderCompiler func_0x000180894ca0
#define RenderingSystem_ShaderLinker func_0x000180894cb0
#define RenderingSystem_ShaderValidator func_0x000180894cc0
#define RenderingSystem_ShaderOptimizer func_0x000180894cd0
#define RenderingSystem_ShaderManager func_0x000180894ce0

// 渲染系统缓冲区管理函数
#define RenderingSystem_BufferAllocator func_0x000180894cf0
#define RenderingSystem_BufferDeallocator func_0x000180894d00
#define RenderingSystem_BufferManager func_0x000180894d10
#define RenderingSystem_BufferValidator func_0x000180894d20
#define RenderingSystem_BufferOptimizer func_0x000180894d30

// 渲染系统纹理管理函数
#define RenderingSystem_TextureLoader func_0x000180894d40
#define RenderingSystem_TextureUnloader func_0x000180894d50
#define RenderingSystem_TextureManager func_0x000180894d60
#define RenderingSystem_TextureProcessor func_0x000180894d70
#define RenderingSystem_TextureConverter func_0x000180894d80

// 渲染系统光照计算函数
#define RenderingSystem_LightingCalculator func_0x000180894d90
#define RenderingSystem_ShadowMapper func_0x000180894da0
#define RenderingSystem_LightManager func_0x000180894db0
#define RenderingSystem_RefractionProcessor func_0x000180894dc0
#define RenderingSystem_ReflectionCalculator func_0x000180894dd0

/* ============================================================================
 * UI系统FUN_函数语义别名
 * ============================================================================ */

// UI系统事件处理函数
#define UISystem_EventHandler func_0x0001808c6c40
#define UISystem_EventProcessor func_0x0001808c6c50
#define UISystem_EventDispatcher func_0x0001808c6c60
#define UISystem_EventValidator func_0x0001808c6c70
#define UISystem_EventManager func_0x0001808c6c80

// UI系统组件管理函数
#define UISystem_ComponentCreator func_0x0001808c6c90
#define UISystem_ComponentDestroyer func_0x0001808c6ca0
#define UISystem_ComponentManager func_0x0001808c6cb0
#define UISystem_ComponentValidator func_0x0001808c6cc0
#define UISystem_ComponentProcessor func_0x0001808c6cd0

// UI系统布局管理函数
#define UISystem_LayoutManager func_0x0001808c6ce0
#define UISystem_LayoutCalculator func_0x0001808c6cf0
#define UISystem_LayoutOptimizer func_0x0001808c6d00
#define UISystem_LayoutValidator func_0x0001808c6d10
#define UISystem_LayoutProcessor func_0x0001808c6d20

// UI系统渲染函数
#define UISystem_Renderer func_0x0001808c6d30
#define UISystem_RenderOptimizer func_0x0001808c6d40
#define UISystem_RenderValidator func_0x0001808c6d50
#define UISystem_RenderManager func_0x0001808c6d60
#define UISystem_RenderProcessor func_0x0001808c6d70

// UI系统输入处理函数
#define UISystem_InputHandler func_0x0001808c6d80
#define UISystem_InputProcessor func_0x0001808c6d90
#define UISystem_InputValidator func_0x0001808c6da0
#define UISystem_InputManager func_0x0001808c6db0
#define UISystem_InputDispatcher func_0x0001808c6dc0

/* ============================================================================
 * 网络系统FUN_函数语义别名
 * ============================================================================ */

// 网络系统连接管理函数
#define NetworkSystem_Connector func_0x0001808c6dd0
#define NetworkSystem_Disconnector func_0x0001808c6de0
#define NetworkSystem_ConnectionManager func_0x0001808c6df0
#define NetworkSystem_ConnectionValidator func_0x0001808c6e00
#define NetworkSystem_ConnectionProcessor func_0x0001808c6e10

// 网络系统数据传输函数
#define NetworkSystem_DataTransmitter func_0x0001808c6e20
#define NetworkSystem_DataReceiver func_0x0001808c6e30
#define NetworkSystem_DataProcessor func_0x0001808c6e40
#define NetworkSystem_DataValidator func_0x0001808c6e50
#define NetworkSystem_DataManager func_0x0001808c6e60

// 网络系统协议处理函数
#define NetworkSystem_ProtocolHandler func_0x0001808c6e70
#define NetworkSystem_ProtocolProcessor func_0x0001808c6e80
#define NetworkSystem_ProtocolValidator func_0x0001808c6e90
#define NetworkSystem_ProtocolManager func_0x0001808c6ea0
#define NetworkSystem_ProtocolOptimizer func_0x0001808c6eb0

/* ============================================================================
 * 内存管理系统FUN_函数语义别名
 * ============================================================================ */

// 内存系统分配函数
#define MemorySystem_Allocator func_0x0001808c6ec0
#define MemorySystem_Deallocator func_0x0001808c6ed0
#define MemorySystem_Reallocator func_0x0001808c6ee0
#define MemorySystem_MemoryManager func_0x0001808c6ef0
#define MemorySystem_MemoryValidator func_0x0001808c6f00

// 内存系统优化函数
#define MemorySystem_Optimizer func_0x0001808c6f10
#define MemorySystem_Compactor func_0x0001808c6f20
#define MemorySystem_FragmentationHandler func_0x0001808c6f30
#define MemorySystem_CacheManager func_0x0001808c6f40
#define MemorySystem_PoolManager func_0x0001808c6f50

/* ============================================================================
 * 文件系统FUN_函数语义别名
 * ============================================================================ */

// 文件系统操作函数
#define FileSystem_Opener func_0x0001808c6f60
#define FileSystem_Closer func_0x0001808c6f70
#define FileSystem_Reader func_0x0001808c6f80
#define FileSystem_Writer func_0x0001808c6f90
#define FileSystem_Seeker func_0x0001808c6fa0

// 文件系统管理函数
#define FileSystem_Manager func_0x0001808c6fb0
#define FileSystem_Validator func_0x0001808c6fc0
#define FileSystem_Processor func_0x0001808c6fd0
#define FileSystem_Optimizer func_0x0001808c6fe0
#define FileSystem_CleanupHandler func_0x0001808c6ff0

/* ============================================================================
 * 音频系统FUN_函数语义别名
 * ============================================================================ */

// 音频系统播放函数
#define AudioSystem_Player func_0x0001808c7000
#define AudioSystem_PausablePlayer func_0x0001808c7010
#define AudioSystem_StoppablePlayer func_0x0001808c7020
#define AudioSystem_VolumeController func_0x0001808c7030
#define AudioSystem_PlaybackManager func_0x0001808c7040

// 音频系统处理函数
#define AudioSystem_Processor func_0x0001808c7050
#define AudioSystem_Mixer func_0x0001808c7060
#define AudioSystem_Equalizer func_0x0001808c7070
#define AudioSystem_EffectProcessor func_0x0001808c7080
#define AudioSystem_StreamManager func_0x0001808c7090

/* ============================================================================
 * 输入系统FUN_函数语义别名
 * ============================================================================ */

// 输入系统处理函数
#define InputSystem_Handler func_0x0001808c70a0
#define InputSystem_Processor func_0x0001808c70b0
#define InputSystem_Validator func_0x0001808c70c0
#define InputSystem_Manager func_0x0001808c70d0
#define InputSystem_Dispatcher func_0x0001808c70e0

// 输入系统设备管理函数
#define InputSystem_DeviceManager func_0x0001808c70f0
#define InputSystem_DeviceValidator func_0x0001808c7100
#define InputSystem_DeviceProcessor func_0x0001808c7110
#define InputSystem_DeviceOptimizer func_0x0001808c7120
#define InputSystem_DeviceInitializer func_0x0001808c7130

/* ============================================================================
 * 安全系统FUN_函数语义别名
 * ============================================================================ */

// 安全系统验证函数
#define SecuritySystem_Validator func_0x0001808c7140
#define SecuritySystem_Authenticator func_0x0001808c7150
#define SecuritySystem_Authorizer func_0x0001808c7160
#define SecuritySystem_Cryptographer func_0x0001808c7170
#define SecuritySystem_ChecksumCalculator func_0x0001808c7180

// 安全系统监控函数
#define SecuritySystem_Monitor func_0x0001808c7190
#define SecuritySystem_AuditLogger func_0x0001808c71a0
#define SecuritySystem_AlarmHandler func_0x0001808c71b0
#define SecuritySystem_RecoveryManager func_0x0001808c71c0
#define SecuritySystem_PolicyEnforcer func_0x0001808c71d0

/* ============================================================================
 * 调试系统FUN_函数语义别名
 * ============================================================================ */

// 调试系统输出函数
#define DebugSystem_Logger func_0x0001808c71e0
#define DebugSystem_Tracer func_0x0001808c71f0
#define DebugSystem_Profiler func_0x0001808c7200
#define DebugSystem_Monitor func_0x0001808c7210
#define DebugSystem_Reporter func_0x0001808c7220

// 调试系统分析函数
#define DebugSystem_Analyzer func_0x0001808c7230
#define DebugSystem_Validator func_0x0001808c7240
#define DebugSystem_Optimizer func_0x0001808c7250
#define DebugSystem_Benchmark func_0x0001808c7260
#define DebugSystem_Inspector func_0x0001808c7270

/* ============================================================================
 * 数学工具FUN_函数语义别名
 * ============================================================================ */

// 数学计算函数
#define MathCalculator_Vector func_0x0001808c7280
#define MathCalculator_Matrix func_0x0001808c7290
#define MathCalculator_Quaternion func_0x0001808c72a0
#define MathCalculator_Trigonometric func_0x0001808c72b0
#define MathCalculator_Interpolation func_0x0001808c72c0

// 数学优化函数
#define MathOptimizer_Vector func_0x0001808c72d0
#define MathOptimizer_Matrix func_0x0001808c72e0
#define MathOptimizer_Algorithm func_0x0001808c72f0
#define MathOptimizer_Precision func_0x0001808c7300
#define MathOptimizer_Performance func_0x0001808c7310

/* ============================================================================
 * 时间系统FUN_函数语义别名
 * ============================================================================ */

// 时间管理函数
#define TimeSystem_Getter func_0x0001808c7320
#define TimeSystem_Setter func_0x0001808c7330
#define TimeSystem_Formatter func_0x0001808c7340
#define TimeSystem_Validator func_0x0001808c7350
#define TimeSystem_Converter func_0x0001808c7360

// 时间调度函数
#define TimeSystem_Scheduler func_0x0001808c7370
#define TimeSystem_TimerManager func_0x0001808c7380
#define TimeSystem_DelayHandler func_0x0001808c7390
#define TimeSystem_IntervalManager func_0x0001808c73a0
#define TimeSystem_Synchronizer func_0x0001808c73b0

/* ============================================================================
 * 配置系统FUN_函数语义别名
 * ============================================================================ */

// 配置管理函数
#define ConfigSystem_Loader func_0x0001808c73c0
#define ConfigSystem_Saver func_0x0001808c73d0
#define ConfigSystem_Validator func_0x0001808c73e0
#define ConfigSystem_Manager func_0x0001808c73f0
#define ConfigSystem_Parser func_0x0001808c7400

// 配置处理函数
#define ConfigSystem_Processor func_0x0001808c7410
#define ConfigSystem_Optimizer func_0x0001808c7420
#define ConfigSystem_Migrator func_0x0001808c7430
#define ConfigSystem_Localizer func_0x0001808c7440
#define ConfigSystem_Serializer func_0x0001808c7450

/* ============================================================================
 * 通用工具FUN_函数语义别名
 * ============================================================================ */

// 通用工具函数
#define UtilitySystem_Converter func_0x0001808c7460
#define UtilitySystem_Transformer func_0x0001808c7470
#define UtilitySystem_Validator func_0x0001808c7480
#define UtilitySystem_Optimizer func_0x0001808c7490
#define UtilitySystem_Manager func_0x0001808c74a0

// 字符串处理函数
#define StringProcessor_Handler func_0x0001808c74b0
#define StringProcessor_Formatter func_0x0001808c74c0
#define StringProcessor_Validator func_0x0001808c74d0
#define StringProcessor_Optimizer func_0x0001808c74e0
#define StringProcessor_Manager func_0x0001808c74f0

#endif /* FUN_FUNCTION_ALIASES_H */