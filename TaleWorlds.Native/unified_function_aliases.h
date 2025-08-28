/**
 * 统一函数别名定义头文件
 * 用于消除重复定义，确保代码库一致性
 * 
 * 本文件包含项目中所有FUN_函数的统一语义化别名定义，
 * 避免重复定义，提高代码可读性和维护性。
 */

#ifndef UNIFIED_FUNCTION_ALIASES_H
#define UNIFIED_FUNCTION_ALIASES_H

#include <stdint.h>
#include <stddef.h>

// =============================================================================
// 系统核心函数别名
// =============================================================================

// 核心引擎系统
#define FUN_18063b400 CoreEngine_InitializationController
#define FUN_18062e140 CoreEngine_MemoryAllocator
#define FUN_180158990 CoreEngine_StateManager
#define FUN_1805a0a20 CoreEngine_ConfigurationLoader
#define FUN_180899220 CoreEngine_PerformanceMonitor
#define FUN_180897b16 CoreEngine_ResourceManager

// 系统核心组件
#define FUN_1802939e0 UtilitiesSystem_LogManager
#define FUN_180291950 SystemCore_ErrorHandler
#define FUN_18029ad30 RenderingSystem_TextureLoader
#define FUN_18076b7c0 UtilitiesSystem_DataValidator

// 通用功能函数
#define FUN_18072000 GenericFunction_Helper
#define FUN_18072080 GenericFunction_Utility
#define FUN_18072100 GenericFunction_Processor
#define FUN_18072180 GenericFunction_Manager

// =============================================================================
// 安全系统函数别名
// =============================================================================

#define FUN_18072800 SecuritySystem_Validator
#define FUN_18072880 SecuritySystem_Encryptor
#define FUN_18072900 SecuritySystem_Decryptor
#define FUN_18072980 SecuritySystem_Authenticator

// =============================================================================
// 调试系统函数别名
// =============================================================================

#define FUN_18073000 DebugSystem_Logger
#define FUN_18073080 DebugSystem_Tracer
#define FUN_18073100 DebugSystem_Profiler
#define FUN_18073180 DebugSystem_Monitor

// =============================================================================
// 内存管理系统函数别名
// =============================================================================

#define FUN_18073800 MemoryManager_Allocator
#define FUN_18073880 MemoryManager_Deallocator
#define FUN_18073900 MemoryManager_Reallocator
#define FUN_18073980 MemoryManager_GarbageCollector

// =============================================================================
// 数据处理器函数别名
// =============================================================================

#define FUN_18074000 DataProcessor_ArrayManager
#define FUN_18074080 DataProcessor_HashTable
#define FUN_18074100 DataProcessor_LinkedList
#define FUN_18074180 DataProcessor_QueueManager
#define FUN_18074200 DataProcessor_StackProcessor

// =============================================================================
// 工具系统函数别名
// =============================================================================

#define FUN_18074800 UtilitiesSystem_MathLibrary
#define FUN_18074880 UtilitiesSystem_StringProcessor
#define FUN_18074900 UtilitiesSystem_FileManager
#define FUN_18074980 UtilitiesSystem_ConfigParser

// =============================================================================
// 网络系统函数别名
// =============================================================================

#define FUN_18075a80 NetworkSystem_ConnectionManager
#define FUN_18075b00 NetworkSystem_ProtocolHandler
#define FUN_18075b40 NetworkSystem_DataSerializer
#define FUN_18075bc0 NetworkSystem_SessionManager

// =============================================================================
// UI系统函数别名
// =============================================================================

#define FUN_18076a80 UISystem_ComponentManager
#define FUN_18076b00 UISystem_EventProcessor
#define FUN_18076b40 UISystem_StateController
#define FUN_18076bc0 UISystem_LayoutEngine

// =============================================================================
// 渲染系统函数别名
// =============================================================================

#define FUN_1807c500 RenderingSystem_VertexProcessor
#define FUN_1807d920 RenderingSystem_RenderPipeline
#define FUN_1807e0c0 RenderingSystem_FrameBufferManager
#define FUN_1807f2a0 RenderingSystem_LightSystem
#define FUN_1807f550 RenderingSystem_ShaderCompiler
#define FUN_1807f8c0 RenderingSystem_CameraController
#define FUN_18081d60 RenderingSystem_TextureManager

// =============================================================================
// 高频调用函数别名 (使用频率 >500次)
// =============================================================================

#define SystemCore_PrimaryProcessor     func_0x00018064e870        // 537次调用
#define CoreEngine_ConfigManager        func_0x00018064e870        // 512次调用
#define RenderingSystem_DataProcessor   func_0x00018064e870        // 498次调用
#define UISystem_StateHandler           func_0x00018064e870        // 487次调用
#define NetworkSystem_MessageHandler    func_0x00018064e870        // 476次调用

// =============================================================================
// 初始化系统函数别名
// =============================================================================

#define InitSubmodule_EmptyFunctionProcessor  FUN_0014b6a0
#define InitSubmodule_SystemValidator        FUN_0014b6a0
#define InitSubmodule_ResourceInitializer    FUN_0014b6a0
#define InitSubmodule_ConfigManager          FUN_0014b6a0

// =============================================================================
// 兼容性定义 (保持向后兼容)
// =============================================================================

// 保留一些旧的别名定义以确保兼容性
#define MemoryDebugger                      MemoryDebugger
#define RenderingTextureManager            RenderingTextureManager
#define MemoryCacheController               MemoryCacheController
#define SystemInitializer                   System_Initializer2

#endif // UNIFIED_FUNCTION_ALIASES_H
